---
title: "Avviso del compilatore (livello 4) C4336 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4336"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4336"
ms.assetid: 93f199dd-d6dd-42c0-82d8-c12d101a7235
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso del compilatore (livello 4) C4336
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

importare la libreria dei tipi 'lib\_tipi1' a cui è stato fatto un riferimento incrociato prima di importare 'lib\_tipi2'  
  
 Si è fatto riferimento a una libreria di tipi con la direttiva [\#import](../../preprocessor/hash-import-directive-cpp.md).  Tuttavia, la libreria dei tipi conteneva un riferimento a un'altra libreria dei tipi a cui non si è fatto riferimento con `#import`.  Quest'altro file tlb è stato rilevato dal compilatore.  
  
 Date due librerie dei tipi su disco create dai due seguenti file, compilati con midl.exe:  
  
```  
// c4336a.idl  
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]  
library c4336aLib  
{  
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12c")]  
   enum E_C4336  
   {  
      one, two, three  
   };  
};  
```  
  
 La seconda libreria dei tipi è la seguente:  
  
```  
// c4336b.idl  
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]  
library C4336bLib  
{  
   importlib ("c4336a.tlb");  
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]  
   struct S_C4336  
   {  
      enum E_C4336 e;  
   };  
};  
```  
  
 Il seguente codice di esempio genera l'errore C4336:  
  
```  
// C4336.cpp  
// compile with: /W4 /LD  
// #import "C4336a.tlb"  
#import "C4336b.tlb"   // C4336, uncomment previous line to resolve  
```