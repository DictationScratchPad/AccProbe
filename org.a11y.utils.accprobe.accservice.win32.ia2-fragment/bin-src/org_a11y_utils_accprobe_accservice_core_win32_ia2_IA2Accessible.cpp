/* DO NOT EDIT THIS FILE - it is machine generated */
#include "org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible.h"

CAccessible2* GetCppRef( JNIEnv *env, jobject jca){
    jclass cls = env->GetObjectClass(jca);
    jmethodID methID = env->GetMethodID(cls, "internalRef", "()I");
	CAccessible2* cacc2 =(CAccessible2*) env->CallIntMethod(jca, methID);
	cacc2->setJNI(env,jca);
	return cacc2;
 }

JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAddress
  (JNIEnv *env, jobject jca)
{
	return (int) GetCppRef(env, jca)->GetIAccessible2Ptr();
}


JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetIA2WindowHandle
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetIA2Hwnd();
}

JNIEXPORT void JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalDispose
  (JNIEnv *env, jobject jca)
{
    delete GetCppRef(env, jca);
	//delete jvm;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    getNativeChildID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetChildId
(JNIEnv * env, jobject jca)
{
	return GetCppRef(env,jca)->GetChildID();
}
	/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalInitFromHwnd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalInitFromHwnd
(JNIEnv *env, jclass cls, jint hwnd, jint childID){
	if (childID <= CHILDID_SELF) {
		childID = CHILDID_SELF;
	}
	return (int) new CAccessible2((HWND) hwnd, childID);
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalInitFromHtmlElement
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalInitFromHtmlElement
(JNIEnv *env, jclass cls, jint htmlRef){
	IUnknown *pUnk = (IUnknown*) htmlRef;
	IAccessible2 *pAcc2 = NULL;
	CAccessible2 *acc2 = NULL;
	if(pUnk){
		pAcc2 = CAccessible2::getIA2FromIUnk(pUnk);
		if(pAcc2)
		return (int) new CAccessible2(pAcc2);
	}
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalInitFromPoint
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalInitFromPoint
(JNIEnv *env, jclass cls, jint x, jint y){
	POINT pt;
	pt.x = x;
	pt.y = y;
	return (int) new CAccessible2(pt);
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleValue2
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleValue2
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleValue();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleAction2
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleAction2
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleAction();
}


/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleComponent
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleComponent
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleComponent();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleHyperLink
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleHyperLink
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleHyperlink();
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleHyperText
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleHyperText
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleHypertext();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleApplication
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleApplication
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleApplication();
}

JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccParent
(JNIEnv * env, jobject jca){
    return (int) GetCppRef(env, jca)->GetAccParent();
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleValueMin
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleValueMin
(JNIEnv * env, jobject jca){
	return CreateString(env,GetCppRef(env,jca)->GetAccessibleValueMin());
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleValueMax
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleValueMax
(JNIEnv * env, jobject jca){
	return CreateString(env,GetCppRef(env,jca)->GetAccessibleValueMax());
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleTable
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleTable
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleTable();
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible2
 * Method:    internalGetAccessibleTable2
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleTable2
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleTable2();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible2
 * Method:    internalGetAccessibleTableCell
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleTableCell
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleTableCell();
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleText
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleText
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleText();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleImage
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleImage
(JNIEnv * env, jobject jca){

	jintArray jiarray = NULL;
	jsize size=1;
	jint img[1];
	img[0] = (int)GetCppRef(env,jca)->GetAccessibleImage();
	if(img[0])
	{
		jiarray = (jintArray) env->NewIntArray(size);
		env->SetIntArrayRegion(jiarray,0,size, img);
	}
	
	return jiarray;	
	
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleRoleAsLong
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleRoleAsLong
(JNIEnv * env, jobject jca){
	
	return GetCppRef(env,jca)->GetIA2Role();
}


JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleRole
(JNIEnv * env, jobject jca){
	
	return CreateString(env, GetCppRef(env,jca)->GetRoleAsString());
};
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleStateAsLong
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleStateAsLong
(JNIEnv * env, jobject jca){
		return GetCppRef(env,jca)->GetAccessibleStateAsLong();
}

JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleChildCount
  (JNIEnv *env, jobject jca)
{
    return (int) GetCppRef(env, jca)->GetChildCount();
}

JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetIA2AccessibleChildren
(JNIEnv *env, jobject jca){

	long count =0;
	CAccessible2** children = GetCppRef(env, jca)->GetChildren(&count);	
	jintArray accChldrn = NULL; 
		if (count >0 && children!=NULL)
		{
			accChldrn = env->NewIntArray(count);
			jint* elements = new jint[count];
			for (int i=0; i <count; i++){
				elements[i] = (int)children[i];
			}
			env->SetIntArrayRegion(accChldrn,0,count,elements);			
		}
		return accChldrn;
}

JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetIA2AccessibleChild
(JNIEnv *env, jobject jca, jint childID){
	return (int)GetCppRef(env,jca)->GetChild(childID);
}


JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_returnIA2Accessible
(JNIEnv *env, jobject jca){
	return (int)GetCppRef(env,jca)->GetIAccessible2Ptr();
}

JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalIsIA2Accessible
(JNIEnv *env, jclass cls , jint iAcc){
		IAccessible* pAcc = NULL;
		IAccessible2 *pAcc2 = NULL;
		IServiceProvider *pProv = NULL;
		//hwnd is the window handle
	//	HRESULT hr = AccessibleObjectFromWindow(
	//		(HWND)hwnd, OBJID_SODC_CLIENT, IID_IAccessible, (void**) &pAcc);
		
	   /*
		if(SUCCEEDED(hr) && pAcc){ 
			hr = pAcc->QueryInterface(IID_IServiceProvider, (void**) &pProv);
		}
		else{
			 hr = AccessibleObjectFromWindow(
			(HWND)hwnd, OBJID_CLIENT, IID_IAccessible, (void**) &pAcc);
		}*/
		
		pAcc = (IAccessible*) iAcc;
		//pAcc = GetCppRef(env, jca)
		if(pAcc){ 
			HRESULT hr = pAcc->QueryInterface(IID_IServiceProvider, (void**) &pProv);
		
			if(SUCCEEDED(hr) && pProv){ 
				hr = pProv->QueryService(IID_IAccessible,IID_IAccessible2,(void**)&pAcc2); 
				if(SUCCEEDED(hr) && pAcc2){
				//	out << "got IA2"<< endl;
					return true;
				}
			}
		}
	
		return false;

}

JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetIA2fromIAcc
(JNIEnv *env, jclass cls , jint cRef){

		IAccessible* pAcc = NULL;
		IAccessible2 *pAcc2 = NULL;
		IServiceProvider *pProv = NULL;
		CAccessible2* cAcc2 = NULL;
		
		CAccessible* cacc = (CAccessible*) cRef;
		pAcc = cacc->GetIAccessiblePtr();
		//pAcc = GetCppRef(env, jca)
		pAcc2 = CAccessible2::getIA2FromIA(pAcc);

		if(pAcc2){ 
			cAcc2 = new CAccessible2(pAcc2, cacc->GetChildID());
		}

		return (int)cAcc2;
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAccessibleEditableText
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleEditableText
(JNIEnv * env, jobject jca){
	return (int)GetCppRef(env,jca)->GetAccessibleEditableText();
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetNRelations
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetNRelations
(JNIEnv * env, jobject jca ) { 
	
	return (int)GetCppRef(env, jca)->GetNRelations();
}

JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleRelation
(JNIEnv * env, jobject jca, jint relationIndex ) { 

return CreateString(env, GetCppRef(env, jca)->GetRelation(relationIndex));

}

JNIEXPORT jobjectArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAccessibleRelations
(JNIEnv * env, jobject jca, jint maxRelations ) { 
	IAccessibleRelation* accRel[10];
	long nRelations = 0;
	HRESULT hr = GetCppRef(env, jca)->GetRelations(maxRelations, (IAccessibleRelation **)&accRel, &nRelations);
	
	if( SUCCEEDED(hr) && nRelations > 0){
		jclass stringClass = env->FindClass("java/lang/String");
		jobjectArray jarray = env->NewObjectArray(nRelations*2, stringClass, env->NewString((jchar*)"",0));
		for (int i=0; i< nRelations; i++)
		{
			BSTR relType;
			HRESULT res = accRel[i]->get_relationType(&relType);
			if( SUCCEEDED(res))
			{
				long nTargets=0;
				accRel[i]->get_nTargets(&nTargets);
				ostringstream sout;
				char* stdInt = new char[256];
				CComBSTR strInt;
				
					for(int j=0;j<nTargets; j++)
					{
						int rel = CAccessible2::getRelationTarget(j,accRel[i]);
						if(rel!=0 ){
							itoa(rel,stdInt,10);
							strInt = CComBSTR(stdInt);
						}				
						//CString(pChar).AllocSysString();

						BSTR col = SysAllocString(L":");
						strInt.Append(col);
						
					}
				//CComBSTR strInt = SysAllocString((OLECHAR*)stdInt);
				int j = i*2;
				jstring str = CreateString(env,(CComBSTR)relType);
				jstring strIa2 = CreateString(env,strInt);
				env->SetObjectArrayElement(jarray,j,str);
				env->SetObjectArrayElement(jarray,j+1,strIa2);
			}
		}
		return jarray;
	}
	return 0;
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalScrollTo
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalScrollTo
(JNIEnv * env, jobject jca, jint x ) { 
	return GetCppRef(env,jca)->ScrollTo(x);
}

JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalScrollToPoint
(JNIEnv * env, jobject jca, jint coordinateType, jint x, jint y ) { 
	return GetCppRef(env,jca)->ScrollToPoint(coordinateType, x, y);
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetGroupPosition
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetGroupPosition
(JNIEnv * env, jobject jca ) { 
	long groupLevel = 0;
	long similarItemsInGroup = 0;
	long positionInGroup = 0;
	HRESULT hr = GetCppRef(env,jca)->GetGroupPosition(&groupLevel, &similarItemsInGroup, &positionInGroup);

	if( hr == S_OK )
	{
		jintArray jiarray = NULL;
		jsize size= 3;
		jint pos[3];
		jiarray = (jintArray) env->NewIntArray(size);
		pos[0] = groupLevel;
		pos[1] = similarItemsInGroup;
		pos[2] = positionInGroup;
		env->SetIntArrayRegion(jiarray,0,size, pos);
		return jiarray;	
	}
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetLocalizedRoleName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetLocalizedRoleName
(JNIEnv * env, jobject jca ) { 
	return 0;
//	return CreateString(env,GetCppRef(env, jca)->GetLocalizedRoleName());
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetStates
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetStates
(JNIEnv * env, jobject jca ) { 
	return (int) GetCppRef(env, jca)->GetStates();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetLocalizedStateNames
 * Signature: (I)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetLocalizedStateNames
(JNIEnv * env, jobject jca, jint maxLocalizedStateNames ) { 
	/*BSTR* strArray;
	long nStates =0;
	HRESULT hr = GetCppRef(env, jca)->GetLocalizedStateNames(maxLocalizedStateNames,
		&strArray, &nStates); 
	jclass stringClass = env->FindClass("java/lang/String");
	if( SUCCEEDED(hr) && nStates > 0){
		jobjectArray jarray = env->NewObjectArray(nStates, stringClass, env->NewString((jchar*)"",0));
		for (int i=0; i< nStates; i++)
		{
			jstring str = CreateString(env,(CComBSTR)strArray[i]);
			env->SetObjectArrayElement(jarray,i,str);
		}
		return jarray;
	}*/
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetExtendedRole
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetExtendedRole
(JNIEnv * env, jobject jca ) { 
	return CreateString(env,GetCppRef(env, jca)->GetExtendedRole());
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetLocalizedExtendedRole
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetLocalizedExtendedRole
(JNIEnv * env, jobject jca ) { 
	return CreateString( env, GetCppRef(env, jca)->GetLocalizedExtendedRole());
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetExtendedStateCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetExtendedStateCount
(JNIEnv * env, jobject jca ) { 
	return (int) GetCppRef(env, jca)->GetExtendedStateCount();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetExtendedStates
 * Signature: (I)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetExtendedStates
(JNIEnv * env, jobject jca, jint maxExtendedStates ) { 
	BSTR* strArray;
	long nStates= 0;
	HRESULT hr = GetCppRef(env, jca)->GetExtendedStates(maxExtendedStates,
				&strArray, &nStates); 
	jclass stringClass = env->FindClass("java/lang/String");
	if( SUCCEEDED(hr) && nStates > 0){
		jobjectArray jarray = env->NewObjectArray(nStates, stringClass, env->NewString((jchar*)"",0));
		for (int i=0; i< nStates; i++)
		{
			jstring str = CreateString(env,(CComBSTR)strArray[i]);
			env->SetObjectArrayElement(jarray,i,str);
		}
		return jarray;
	}
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetLocalizedExtendedStates
 * Signature: (I)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetLocalizedExtendedStates
(JNIEnv * env, jobject jca, jint maxLocalizedExtendedStates ) { 	
	BSTR* strArray;
	long nStates= 0;
	HRESULT hr = GetCppRef(env, jca)->GetLocalizedExtendedStates(maxLocalizedExtendedStates,
				&strArray, &nStates); 
	jclass stringClass = env->FindClass("java/lang/String");
	if( SUCCEEDED(hr) && nStates > 0){
		jobjectArray jarray = env->NewObjectArray(nStates, stringClass, env->NewString((jchar*)"",0));
		for (int i=0; i< nStates; i++)
		{
			jstring str = CreateString(env,(CComBSTR)strArray[i]);
			env->SetObjectArrayElement(jarray,i,str);
		}
		return jarray;
	}
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetUniqueID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetUniqueID
(JNIEnv * env, jobject jca ) { 
	return (int)  GetCppRef(env, jca)->GetUniqueID();
}


/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetIndexInParent
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetIndexInParent
(JNIEnv * env, jobject jca ) { 
	return (int)  GetCppRef(env, jca)->GetIndexInParent();
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetLocale
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetLocale
(JNIEnv * env, jobject jca ) {
	IA2Locale loc;
	HRESULT hr = GetCppRef(env, jca)->GetLocale(&loc);
	jstring strArray[3];
	if (SUCCEEDED(hr)){
		strArray[0] = CreateString(env, (CComBSTR)loc.language);
		strArray[1] = CreateString(env, (CComBSTR)loc.country);
		strArray[2] = CreateString(env, (CComBSTR)loc.variant);

		jclass stringClass = env->FindClass("java/lang/String");
		jobjectArray jarray = env->NewObjectArray(3, stringClass, env->NewString((jchar*)"",0));
		for (int i=0; i< 3; i++)
		{
			env->SetObjectArrayElement(jarray,i,strArray[i]);
		}
		return jarray;
	}
	
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible
 * Method:    internalGetAttributes
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2Accessible_internalGetAttributes
(JNIEnv * env, jobject jca ) { 
	return CreateString( env, GetCppRef(env, jca)->GetAttributes());
}

JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibilityEventService_createAccessibleObjectFromEvent
	(JNIEnv * pEnv, jclass jcls, jint hwnd, 
                             jint idObject, jint idChild ) {
	IAccessible *pAcc = NULL;
	VARIANT varChild;
	HRESULT hr = AccessibleObjectFromEvent((HWND)hwnd, 
		(DWORD)idObject, (DWORD) idChild, &pAcc, &varChild);
		
	if (hr==S_OK && pAcc!=NULL)
	{
		IAccessible2* pAcc2 = CAccessible2::getIA2FromMsaa(pAcc);
		if(pAcc2!= NULL){
				CAccessible2* cacc = new CAccessible2(pAcc2,varChild.lVal);
				return (int)cacc;	
		}
		pAcc->Release();
		pAcc = NULL;
	}
	return 0;
}

jstring CreateString (JNIEnv *env, CComBSTR str)
{
	//jlong test =0;
	if(str==NULL){
		return 0;
		//str = CComBSTR("<None>");
	}
	return env->NewString((jchar*)str.m_str, str.Length());
}


jobject getString(VARIANT val, JNIEnv* env){
	char* st = new char[50];
	int swth = val.vt;
	jclass objClass;
	jmethodID ctorId;
	jobject jObj;
	switch(swth)
	{
		case VT_EMPTY:
			jObj = NULL;
			break;
		case VT_I2:
		//int		
			objClass = env->FindClass("java/lang/Integer");
			ctorId = env->GetMethodID(objClass, "<init>", "(I)V");
			jObj  = env->NewObject(objClass,ctorId, (jint)val.iVal);
			break;

		case VT_I4:
			//Long
			objClass = env->FindClass("java/lang/Long");
			ctorId = env->GetMethodID(objClass, "<init>", "(J)V");
			jObj  = env->NewObject(objClass,ctorId, (jlong)val.lVal);
			break;

		case VT_R4:
			//float
			objClass = env->FindClass("java/lang/Float");
			ctorId = env->GetMethodID(objClass, "<init>", "(F)V");
			jObj  = env->NewObject(objClass,ctorId, (jfloat)val.fltVal);
			break;

		case VT_R8:
			//Double
			objClass = env->FindClass("java/lang/Double");
			ctorId = env->GetMethodID(objClass, "<init>", "(D)V");
			jObj  = env->NewObject(objClass,ctorId, (jdouble)val.dblVal);
			break;

		case VT_BSTR:
			jObj = CreateString(env,val.bstrVal);
			break;

		default:
			objClass = env->FindClass("java/lang/Long");
			ctorId = env->GetMethodID(objClass, "<init>", "(J)V");
			jObj  = env->NewObject(objClass,ctorId, (jlong)val.lVal);
			break;
  } 

  return jObj;
}

JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibilityService_internalCoInitialize
(JNIEnv * env, jclass cls){
	HRESULT hr = CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);
	return(SUCCEEDED(hr));
}

JNIEXPORT void JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibilityService_internalCoUnInitialize
(JNIEnv * env, jclass cls){
	CoUninitialize();
}