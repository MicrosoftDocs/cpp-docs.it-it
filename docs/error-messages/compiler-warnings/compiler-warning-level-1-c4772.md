---
title: "Avviso del compilatore (livello 1) C4772 | Microsoft Docs"
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
  - "C4772"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4772"
ms.assetid: dafe6fd8-9faf-41f5-9d66-a55838742c14
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4772
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#import fa riferimento a un tipo di una libreria dei tipi mancante. Verrà utilizzato 'tipo\_mancante' come segnaposto  
  
 Si è fatto riferimento a una libreria di tipi con la direttiva [\#import](../../preprocessor/hash-import-directive-cpp.md).  Tuttavia, la libreria dei tipi conteneva un riferimento a un'altra libreria dei tipi a cui non si è fatto riferimento con `#import`.  Quest'altro file TLB non è stato trovato dal compilatore.  
  
 Si noti che il compilatore non sarà in grado di trovare le librerie in diverse directory se per specificare tali directory si utilizza l'opzione del compilatore [\/I \(Directory di inclusione aggiuntive\)](../../build/reference/i-additional-include-directories.md).  Se si desidera che il compilatore sia in grado di trovare le librerie in directory diverse, aggiungere tali directory alla variabile di ambiente PATH.  
  
 Per impostazione predefinita, questo avviso viene generato come errore.  Non è possibile eliminare l'avviso C4772 con \/W0.  
  
## Esempio  
 Di seguito viene riportata la prima libreria dei tipi necessaria per riprodurre l'avviso C4772.  
  
```  
// c4772a.idl  
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]  
library C4772aLib  
{  
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c100")]  
   enum E_C4772a  
   {  
      one, two, three  
   };  
};  
```  
  
## Esempio  
 Di seguito viene riportata la seconda libreria dei tipi necessaria per riprodurre l'avviso C4772.  
  
```  
// c4772b.idl  
// post-build command: del /f C4772a.tlb  
// C4772a.tlb is available when c4772b.tlb is built  
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]  
library C4772bLib  
{  
   importlib ("c4772a.tlb");  
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]  
   struct S_C4772b  
   {  
      enum E_C4772a e;  
   };  
};  
```  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4772:  
  
```  
// C4772.cpp  
// assumes that C4772a.tlb is not available to the compiler  
// #import "C4772a.tlb"  
#import "C4772b.tlb"   // C4772 uncomment previous line to resolve  
                       // and make sure c4772a.tlb is on disk  
```