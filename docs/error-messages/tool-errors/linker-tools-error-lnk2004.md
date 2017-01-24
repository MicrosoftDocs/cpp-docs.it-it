---
title: "Errore degli strumenti del linker LNK2004 | Microsoft Docs"
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
  - "LNK2004"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2004"
ms.assetid: 07645371-e67b-4a2c-b0e0-dde24c94ef7e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2004
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

overflow della correzione relativa a gp in 'destinazione'; la sezione breve 'sezione' è troppo grande o non inclusa nell'intervallo.  
  
 La sezione è troppo grande.  
  
 Per correggere questo errore, ridurre la dimensione della sezione breve inserendo i dati nella sezione di tipo long tramite \#pragma section\(".nomesezione", read, write, long\) e utilizzando `__declspec(allocate(".sectionname"))` nelle dichiarazioni e definizioni dei dati.  Di seguito è riportato un esempio:  
  
```  
#pragma section(".data$mylong", read, write, long)  
__declspec(allocate(".data$mylong"))  
char    rg0[1] = { 1 };  
char    rg1[2] = { 1 };  
char    rg2[4] = { 1 };  
char    rg3[8] = { 1 };  
char    rg4[16] = { 1 };  
char    rg5[32] = { 1 };  
```  
  
 È inoltre possibile spostare i dati raggruppati logicamente all'interno delle relative strutture in modo da creare una raccolta di dati più grandi di 8 byte, che verrà allocata in una sezione di dati long.  Di seguito è riportato un esempio:  
  
```  
// from this...  
int     w1  = 23;  
int     w2 = 46;  
int     w3 = 23*3;  
int     w4 = 23*4;  
  
// to this...  
struct X {  
    int     w1;  
    int     w2;  
    int     w3;  
    int     w4;  
} x  = { 23, 23*2, 23*3, 23*4 };  
  
```  
  
 Questo errore è seguito dall'errore irreversibile `LNK1165`.