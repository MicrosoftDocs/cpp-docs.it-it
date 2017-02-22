---
title: "_set_com_error_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_set_com_error_handler (funzione)"
ms.assetid: 49fe4fca-5e37-4d83-abaf-15be5ce37f94
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# _set_com_error_handler
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Sostituisce la funzione predefinita utilizzata per la gestione degli errori COM.  
  
## Sintassi  
  
```  
void __stdcall _set_com_error_handler(  
   void (__stdcall *pHandler)(  
      HRESULT hr,   
      IErrorInfo* perrinfo  
   )  
);  
```  
  
#### Parametri  
 `pHandler`  
 Puntatore alla funzione di sostituzione.  
  
 `hr`  
 Informazioni `HRESULT`.  
  
 `perrinfo`  
 Oggetto `IErrorInfo`.  
  
## Note  
 Per impostazione predefinita, [\_com\_raise\_error](../cpp/com-raise-error.md) gestisce tutti gli errori COM.  È possibile modificare questo comportamento utilizzando `_set_com_error_handler` per chiamare la propria funzione di gestione degli errori.  
  
 La funzione di sostituzione deve avere una firma uguale a quella di `_com_raise_error`.  
  
## Esempio  
  
```  
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
  
  **Eccezione generata: Impossibile stabilire la connessione\!**   
## Requisiti  
 **Intestazione:** comdef.h  
  
 **Lib:** Se l'opzione del compilatore "wchar\_t è il tipo nativo" è attiva, utilizzare comsuppw.lib o comsuppwd.lib.  Se "wchar\_t è il tipo nativo" è disattiva, utilizzare comsupp.lib.  Per ulteriori informazioni, vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## Vedere anche  
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)