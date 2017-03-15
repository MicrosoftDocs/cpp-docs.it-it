---
title: "Errore del compilatore C3510 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3510"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3510"
ms.assetid: c48387bc-0300-4a4d-97f7-3fb90f82a451
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3510
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile individuare la libreria dei tipi dipendente 'lib\_tipi'  
  
 [no\_registry](../../preprocessor/no-registry.md) e [auto\_search](../../preprocessor/auto-search.md) sono stati passati a `#import`, ma il compilatore non è stato in grado di individuare la libreria dei tipi a cui è stato fatto riferimento.  
  
 Per correggere l'errore, assicurarsi che tutte le librerie dei tipi e le librerie dei tipi a cui è stato fatto riferimento siano disponibili per il compilatore.  
  
 Il seguente codice di esempio genera l'errore C3510:  
  
 Si supponga che siano state compilate le due librerie dei tipi riportate di seguito e che C3510a.tlb sia stata eliminata o che non sia presente nel percorso specificato.  
  
```  
// C3510a.idl  
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]  
library C3510aLib  
{  
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12c")]  
   enum E_C3510  
   {  
      one, two, three  
   };  
};  
```  
  
 Di seguito è riportato il codice sorgente per la seconda libreria dei tipi:  
  
```  
// C3510b.idl  
// post-build command: del /f C3510a.tlb  
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]  
library C3510bLib  
{  
   importlib ("C3510a.tlb");  
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]  
   struct S_C3510 {  
      enum E_C3510 e;  
   };  
};  
```  
  
 Di seguito è riportato quindi il codice client:  
  
```  
// C3510.cpp  
#import "c3510b.tlb" no_registry auto_search   // C3510  
int main() {  
   C3510aLib::S_C4336 ccc;  
}  
```