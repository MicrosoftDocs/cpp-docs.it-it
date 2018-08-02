---
title: _set_com_error_handler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- _set_com_error_handler function
ms.assetid: 49fe4fca-5e37-4d83-abaf-15be5ce37f94
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 08d5df7893aa5390a6e577e3c26424864f7c3a8f
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39465766"
---
# <a name="setcomerrorhandler"></a>_set_com_error_handler
**Sezione specifica Microsoft**  
  
 Sostituisce la funzione predefinita utilizzata per la gestione degli errori COM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __stdcall _set_com_error_handler(  
   void (__stdcall *pHandler)(  
      HRESULT hr,   
      IErrorInfo* perrinfo  
   )  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *pHandler*  
 Puntatore alla funzione di sostituzione.  
  
 *risorse umane*  
 Informazioni su HRESULT.  
  
 *perrinfo*  
 Oggetto `IErrorInfo`.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita [com_raise_error](../cpp/com-raise-error.md) gestisce tutti gli errori COM. È possibile modificare questo comportamento usando **set_com_error_handler** per chiamare una funzione di gestione degli errori.  
  
 La funzione di sostituzione deve avere una firma uguale a quella di `_com_raise_error`.  
  
## <a name="example"></a>Esempio  
  
```cpp 
// _set_com_error_handler.cpp  
// compile with /EHsc  
#include <stdio.h>  
#include <comdef.h>  
#include <comutil.h>  
  
// Importing ado dll to attempt to establish an ado connection.  
// Not related to _set_com_error_handler   
#import "C:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF", "adoEOF")  
  
void __stdcall _My_com_raise_error(HRESULT hr, IErrorInfo* perrinfo)  
{  
   throw "Unable to establish the connection!";  
}  
  
int main()  
{  
   _set_com_error_handler(_My_com_raise_error);  
   _bstr_t bstrEmpty(L"");  
   _ConnectionPtr Connection = NULL;  
   try  
   {  
      Connection.CreateInstance(__uuidof(Connection));  
      Connection->Open(bstrEmpty, bstrEmpty, bstrEmpty, 0);   
   }  
   catch(char* errorMessage)  
   {  
      printf("Exception raised: %s\n", errorMessage);  
   }  
  
   return 0;  
}  
```  
  
```Output  
Exception raised: Unable to establish the connection!  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<Comdef. h >  
  
 **Lib:** se il **wchar_t is tipo nativo** opzione del compilatore è attivato, utilizzare comsuppw. lib o comsuppwd. lib. Se **wchar_t is tipo nativo** è disattiva, utilizzare comsupp. lib. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)