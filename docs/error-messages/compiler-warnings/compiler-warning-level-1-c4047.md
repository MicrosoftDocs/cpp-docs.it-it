---
title: "Avviso del compilatore (livello 1) C4047 | Microsoft Docs"
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
  - "C4047"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4047"
ms.assetid: b75ad6fb-5c93-4434-a85f-c4083051a5de
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4047
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': 'identificatore1' differisce da 'identificatore2' nei livelli dei riferimenti indiretti  
  
 Un puntatore può puntare a una variabile \(un livello di riferimento indiretto\), a un altro puntatore che punta a una variabile \(due livelli di riferimento indiretto\) e così via.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4047:  
  
```  
// C4047.c  
// compile with: /W1  
  
int main() {  
   char **p = 0;   // two levels of indirection  
   char *q = 0;   // one level of indirection  
  
   char *p2 = 0;   // one level of indirection  
   char *q2 = 0;   // one level of indirection  
  
   p = q;   // C4047  
   p2 = q2;  
}  
```  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4047:  
  
```  
// C4047b.c  
// compile with: /W1  
#include <stdio.h>  
  
int main() {  
   int i;  
   FILE *myFile = NULL;  
   errno_t  err = 0;  
   char file_name[256];  
   char *cs = 0;  
  
   err = fopen_s(&myFile, "C4047.txt", "r");  
   if ((err != 0) || (myFile)) {  
      printf_s("fopen_s failed!\n");  
      exit(-1);  
    }  
   i = fgets(file_name, 256, myFile);   // C4047  
   cs = fgets(file_name, 256, myFile);   // OK  
}  
```