---
title: "How to: Pin Pointers and Arrays | Microsoft Docs"
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
  - "pointers, pinning"
  - "arrays [C++], pinning"
ms.assetid: ee783260-e676-46b8-a38e-11a06f1d57b0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# How to: Pin Pointers and Arrays
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Bloccare un sotto\-oggetto definito in un oggetto gestito ha l'effetto di bloccare l'intero oggetto.  Ad esempio, se un qualsiasi elemento di un array è bloccato, allora l'intero array è bloccato.  Non esistono estensioni del linguaggio per dichiarare un array bloccato.  Per bloccare un array, dichiarare un puntatore di blocco al suo tipo di elemento e bloccare uno dei suoi elementi.  
  
## Esempio  
  
### Codice  
  
```  
// pin_ptr_array.cpp  
// compile with: /clr  
#include <stdio.h>  
using namespace System;  
  
int main() {  
   array<Byte>^ arr = gcnew array<Byte>(4);  
   arr[0] = 'C';  
   arr[1] = '+';  
   arr[2] = '+';  
   arr[3] = '\0';  
   pin_ptr<Byte> p = &arr[1];   // entire array is now pinned  
   unsigned char * cp = p;  
  
   printf_s("%s\n", cp); // bytes pointed at by cp  
                         // will not move during call  
}  
```  
  
### Output  
  
```  
++  
```  
  
## Vedere anche  
 [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md)