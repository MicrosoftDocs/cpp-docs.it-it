---
title: "ConvertStringToBSTR | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "ConvertStringToBSTR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ConvertStringToBSTR (funzione)"
ms.assetid: 071f9b3b-9643-4e06-a1e5-de96ed15bab2
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ConvertStringToBSTR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Converte un valore **char \*** in un elemento `BSTR`.  
  
## Sintassi  
  
```  
  
      BSTR __stdcall ConvertStringToBSTR(  
   const char* pSrc  
)  
```  
  
#### Parametri  
 `pSrc`  
 Variabile **char \***.  
  
## Esempio  
  
```  
// ConvertStringToBSTR.cpp  
#include <comutil.h>  
#include <stdio.h>  
  
#pragma comment(lib, "comsuppw.lib")  
#pragma comment(lib, "kernel32.lib")  
  
int main() {  
   char* lpszText = "Test";  
   printf_s("char * text: %s\n", lpszText);  
  
   BSTR bstrText = _com_util::ConvertStringToBSTR(lpszText);  
   wprintf_s(L"BSTR text: %s\n", bstrText);  
  
   SysFreeString(bstrText);  
}  
```  
  
  **char \* text: Test**  
**BSTR text: Test**   
## Fine sezione specifica Microsoft  
  
## Requisiti  
 **Header:** comutil.h  
  
 **Lib:** comsuppw.lib o comsuppwd.lib \(per ulteriori informazioni, vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md)\)  
  
## Vedere anche  
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)