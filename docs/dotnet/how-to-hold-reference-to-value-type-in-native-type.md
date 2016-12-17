---
title: "Procedura: mantenere riferimenti al tipo di valore nel tipo nativo | Microsoft Docs"
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
  - "riferimento al tipo di valore nel tipo nativo"
  - "riferimento al tipo di valore nel tipo nativo"
ms.assetid: 1eabf8be-7d4f-4339-9027-48d5c4244483
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: mantenere riferimenti al tipo di valore nel tipo nativo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare `gcroot` sul tipo boxed per mantenere un riferimento a un tipo di valore in un tipo nativo.  
  
## Esempio  
  
```  
// reference_to_value_in_native.cpp  
// compile with: /clr  
#using <mscorlib.dll>  
#include <vcclr.h>   
  
using namespace System;   
  
public value struct V {  
   String ^str;  
};  
  
class Native {  
public:  
   gcroot< V^ > v_handle;  
};  
  
int main() {  
   Native native;  
   V v;  
   native.v_handle = v;  
   native.v_handle->str = "Hello";  
   Console::WriteLine("String in V: {0}", native.v_handle->str);  
}  
```  
  
  **Stringa in V: Hello**   
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)