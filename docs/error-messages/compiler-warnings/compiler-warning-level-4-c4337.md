---
title: "Avviso del compilatore (livello 4) C4337 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4337"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4337"
ms.assetid: 70bc72d9-aac5-45cd-abd3-ebe42a05897b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4337
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

importazione automatica della libreria dei tipi 'typelib2', a cui è stato fatto un riferimento incrociato in 'typelib2'  
  
 L'attributo auto\_search della [direttiva \#import](../../preprocessor/hash-import-directive-cpp.md) ha causato l'importazione automatica di una libreria dei tipi.  
  
 Date due librerie dei tipi su disco create dai due seguenti file, compilati con midl.exe:  
  
```  
// C4337a.idl  
[  
  uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12B)  
]  
library C4337aLib  
{  
   [uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12C)]  
   enum E_C4337a  
   {  
      one = 0,  
      two = 1,  
      three = 2  
    };  
};  
```  
  
 quindi il secondo file IDL,  
  
```  
// C4337b.idl  
[  
   uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12D)  
]  
  
library C4337bLib  
{  
   importlib("c4337a.tlb");  
  
   [uuid(F87070BA-C6D9-405C-A8E4-8CD9CA25C12E)]  
   struct S_C4337b  
   {  
      enum E_C4337a e;  
   };  
};  
```  
  
 Il seguente codice di esempio genera l'errore C4337:  
  
```  
// C4337.cpp  
// compile with: /W4 /LD  
#import "c4337b.tlb" auto_search   // C4337  
// explicitly #import all type libraries to resolve  
// #import "C4337a.tlb"  
// #import "C4337b.tlb"  
```