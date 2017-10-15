#ifndef _CConHash
#define _CConHash
#include "CHashFun.h"
#include "CNode_s.h"
#include "CRBTree.h"
#include "CVirtualNode_s.h"
class CConHash
{
public:
	/*���캯��*/
	CConHash(CHashFun * pFunc);
	
	/*����hash����*/
	void setFunc(CHashFun * pFunc);
	
	/*����ʵ���� , 0����ɹ� , -1����ʧ��*/
	int addNode_s(CNode_s * pNode);
	
	/*ɾ��ʵ���� , 0����ɹ� , -1����ʧ��*/
	int delNode_s(CNode_s * pNode);
	
	/*����ʵ����*/
	CNode_s * lookupNode_s(const char * object);
	
	/*��ȡһ����hash�ṹ����������������*/
	int getVNodes();
private:
	/*Hash����*/
	CHashFun * func;
	/*�������ܸ���*/
	int vNodes;
	/*�洢������ĺ����*/
	util_rbtree_t * vnode_tree;
};
/*����������������ת��Ϊ��������*/
util_rbtree_node_t * vNode2RBNode(CVirtualNode_s * vnode);
#endif