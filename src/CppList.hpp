//Modified for multiple IR
#include "CppList.h"
CppList::CppList()
{
	_count = 0;
}
void CppList::Add(volatile irparams_t *item){
	if (!Exists(item)){
    if (_count < IR_MAXCOUNTIR) {
       _arr[_count] = item;
		   _count++;
    }
	}
}
int CppList::GetCount(){
	return _count;
}
volatile irparams_t* CppList::GetItem(int index){
	if (index < 0)
		return NULL;
	if (index >= _count)
		return NULL;
	return _arr[index];
}
bool CppList::Exists(volatile irparams_t *item){
	return GetIndex(item) != -1;
}
int CppList::GetIndex(volatile irparams_t *item){
	int found_idx = -1;
	for(int i=0;i<_count;++i){
		if (item == _arr[i]){
			found_idx = i;
			break;
		}
	}
	return found_idx;
}