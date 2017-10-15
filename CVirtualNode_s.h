#ifndef _CVirtualNode_s
#define _CVirtualNode_s
#include "CNode_s.h"

/*������*/
class CVirtualNode_s
{
public:
	/*���캯��*/
	CVirtualNode_s();
	CVirtualNode_s(CNode_s * pNode);

	/*������������ָ���ʵ����*/
	void setNode_s(CNode_s * pNode);

	/*��ȡ��������ָ���ʵ����*/
	CNode_s * getNode_s();

	/*����������hashֵ*/
	void setHash(long pHash);

	/*��ȡ������hashֵ*/
	long getHash();
private:
	long hash; /*hashֵ*/
	CNode_s * node; /*��������ָ���ʵ����*/
};

#endif