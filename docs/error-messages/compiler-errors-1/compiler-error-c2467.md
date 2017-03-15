---
title: "Errore del compilatore C2467 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2467"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2467"
ms.assetid: f9ead270-5d0b-41cc-bdcd-586a647c67a7
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2467
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dichiarazione non valida di 'tipo definito dall'utente' anonimo  
  
 È stato dichiarato un tipo annidato definito dall'utente.  Si tratta di un errore del compilatore del codice sorgente C con l'opzione di compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\) attivata.  
  
 Il seguente codice di esempio genera l'errore C2467:  
  
```  
//C2467.c  
// compile with: /Za   
int main() {  
   struct X {  
      union { int i; };   // C2467, nested declaration  
   };  
}  
```