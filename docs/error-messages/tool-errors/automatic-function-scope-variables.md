---
title: "Variabili automatiche (ambito funzione) | Microsoft Docs"
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
  - "variabili automatiche"
  - "funzioni [C++], ambito"
  - "ambito, variabili dichiarate all'interno di funzioni"
  - "variabili, automatico"
ms.assetid: 6e1a14c2-1fb0-4937-8628-8d963cc35ed4
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Variabili automatiche (ambito funzione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una variabile dichiarata all'interno di una funzione può essere utilizzata solo nell'area di validità di tale funzione.  
  
```  
// LNK2019_AV.cpp  
// compile with: /c  
void test(void);  
  
static int lnktest3 = 3;  
int lnktest4 = 4;  
  
int main() {  
   static int lnktest1 = 1;  
   int lnktest2 = 2;  
   test();  
}  
```  
  
 quindi  
  
```  
// LNK2019_AV_2.cpp  
// compile with: LNK2019_AV.cpp  
// LNK2019 expected  
extern int lnktest1;  
extern int lnktest2;  
extern int lnktest3;  
extern int lnktest4;  
  
void test(void) {  
   int i = 0;  
   i = lnktest1;  
   i = lnktest2;  
   i = lnktest3;  
   i = lnktest4;   // OK  
}  
```  
  
## Vedere anche  
 [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)