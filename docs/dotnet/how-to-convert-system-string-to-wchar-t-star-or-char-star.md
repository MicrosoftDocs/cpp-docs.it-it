---
title: "Procedura: convertire System::String in wchar_t* o char* | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char (tipo di dati), conversione da System::String"
  - "PtrToStringChars (metodo)"
  - "System::String"
  - "System::String, conversione in char o wchar_t"
  - "wchart (tipo), conversione di System::String"
ms.assetid: 385da01b-5649-4543-8076-e3e251243ff0
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: convertire System::String in wchar_t* o char*
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare `PtrToStringChars` in Vcclr.h per convertire <xref:System.String> in un tipo `wchar_t *` o `char *` nativo.  Viene sempre restituito un puntatore stringa di caratteri estesi Unicode poiché il formato interno delle stringhe CLR è Unicode.  È quindi possibile eseguire la conversione da caratteri estesi, come illustrato nell'esempio riportato di seguito.  
  
## Esempio  
  
```  
// convert_string_to_wchar.cpp  
// compile with: /clr  
#include < stdio.h >  
#include < stdlib.h >  
#include < vcclr.h >  
  
using namespace System;  
  
int main() {  
   String ^str = "Hello";  
  
   // Pin memory so GC can't move it while native function is called  
   pin_ptr<const wchar_t> wch = PtrToStringChars(str);  
   printf_s("%S\n", wch);  
  
   // Conversion to char* :  
   // Can just convert wchar_t* to char* using one of the   
   // conversion functions such as:   
   // WideCharToMultiByte()  
   // wcstombs_s()  
   // ... etc  
   size_t convertedChars = 0;  
   size_t  sizeInBytes = ((str->Length + 1) * 2);  
   errno_t err = 0;  
   char    *ch = (char *)malloc(sizeInBytes);  
  
   err = wcstombs_s(&convertedChars,   
                    ch, sizeInBytes,  
                    wch, sizeInBytes);  
   if (err != 0)  
      printf_s("wcstombs_s  failed!\n");  
  
    printf_s("%s\n", ch);  
}  
```  
  
  **Hello**  
**Hello**   
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)