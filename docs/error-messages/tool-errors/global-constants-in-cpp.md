---
title: "Costanti globali in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "costanti, globali"
  - "costanti globali"
ms.assetid: df5a9bd4-d0a8-4c1c-956e-b481d0bded7d
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costanti globali in C++
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le costanti globali di C\+\+ dispongono di collegamento statico,  a differenza di quelle di C.  Se si tenta di utilizzare una costante globale in C\+\+ in più file, si verifica un errore esterno non risolto.  Nella compilazione, le costanti globali sono ottimizzate, senza lasciare spazio riservato per la variabile.  
  
 Un modo per correggere questo errore consiste nell'includere le inizializzazioni const in un file di intestazione e nell'inserire tale intestazione nei file cpp quando necessario, come se si trattasse di un prototipo di funzione.  Un'altra possibilità consiste nel rendere la variabile non costante e utilizzare un riferimento costante nel valutarla.  
  
 Il seguente codice di esempio genera l'errore C2019:  
  
```  
// global_constants.cpp  
// LNK2019 expected  
void test(void);  
const int lnktest1 = 0;  
  
int main() {  
   test();  
}  
```  
  
 quindi  
  
```  
// global_constants_2.cpp  
// compile with: global_constants.cpp  
extern int lnktest1;  
  
void test() {  
  int i = lnktest1;   // LNK2019  
}  
```  
  
## Vedere anche  
 [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)