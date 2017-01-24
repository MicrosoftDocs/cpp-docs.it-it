---
title: "__unaligned | Microsoft Docs"
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
  - "__unaligned_cpp"
  - "__unaligned"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__unaligned (parola chiave) [C++]"
ms.assetid: 0cd83aad-1840-47e3-ad33-59bfcbe6375b
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __unaligned
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si dichiara un puntatore con il modificatore `__unaligned`, il compilatore presuppone che il puntatore faccia riferimento a dati non allineati.  Di conseguenza, per un'applicazione da eseguire in un computer della famiglia di processori Itanium, il compilatore genera codice che legge i dati non allineati un byte alla volta.  
  
## Note  
 Il modificatore `__unaligned` è valido per i compilatori [!INCLUDE[vcpritanium](../cpp/includes/vcpritanium_md.md)] e [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)], ma influisce solo su applicazioni da eseguire in un computer con processori Itanium.  Questo modificatore descrive l'allineamento solo dei dati indirizzati poiché si presuppone che il puntatore sia allineato.  
  
 Il [!INCLUDE[vcpritanium](../cpp/includes/vcpritanium_md.md)] genera un errore di allineamento durante l'accesso ai dati disallineati e il tempo di elaborazione dell'errore rallenta le prestazioni.  Utilizzare il modificatore `__unaligned` per indicare al processore di leggere i dati byte alla volta ed evitare l'errore.  Tale modificatore non è necessario per le applicazioni [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] perché il processore [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] gestisce i dati disallineati senza errori.  
  
 Per ulteriori informazioni sull'allineamento, vedere:  
  
-   [align](../cpp/align-cpp.md)  
  
-   [Operatore \_\_alignof](../cpp/alignof-operator.md)  
  
-   [pack](../preprocessor/pack.md)  
  
-   [\/Zp \(Allineamento membri struct\)](../build/reference/zp-struct-member-alignment.md)  
  
-   [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md)  
  
## Esempio  
  
```  
// unaligned_keyword.cpp  
// compile with: /c  
// processor: x64 IPF  
#include <stdio.h>  
int main() {  
   char buf[100];  
  
   int __unaligned *p1 = (int*)(&buf[37]);  
   int *p2 = (int *)p1;  
  
   *p1 = 0;   // ok  
  
   __try {  
      *p2 = 0;  // throws an exception  
   }  
   __except(1) {  
      puts("exception");  
   }  
}  
```  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)