---
title: "Avviso del compilatore (livello 4) C4815 | Microsoft Docs"
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
  - "C4815"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4815"
ms.assetid: 99081928-d7d5-4dce-b4af-7c6a151bfac0
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4815
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': la matrice con dimensione zero nell'oggetto stack non conterrà elementi, a meno che l'oggetto non sia un aggregato inizializzato come tale  
  
 Una matrice con un numero non identificato di elementi \(matrice di dimensioni zero\) è l'ultimo membro di un tipo e un oggetto del tipo è stato creato sullo stack.  Non verrà allocata memoria per la matrice.  Se è necessario un costruttore utile, è possibile allocare memoria per la struttura sull'heap.  
  
 Il seguente codice di esempio genera l'errore C4815:  
  
```  
// C4815.cpp  
// compile with: /W4  
#include <memory>  
#pragma warning(disable : 4200)  
struct S1  
{  
   int i;  
   char cArr[];  
};  
  
S1 s1_glb;   // C4815 stack object with zero-array (not aggregate inited)  
// try the following line instead  
// S1 s1_glb = { 0, 0, 0 };  
  
struct S2  
{  
   S2(int _i) : i(_i) {}  
   int i;  
   char cArr[];  
};  
  
S2 s2_glb1(10);   // C4815  
// try the following line instead  
// S2 s2_glb1 = { 10 };  // to work, comment the constructor  
  
int main()  
{  
   S1 s1_loc1;   // C4815  
   // try the following line instead  
   // S1 s1_loc1 = { 0 };  
  
   S1 s1_loc2 = { 1, { 'a', 'b', 'c' } };  
  
   S1 s1_loc3 = s1_loc2;   // C4815 truncation when copy ctor called  
   // truncation if call a compiler-generated copy constructor  
   // to copy a struct with a zero sized array in it  
   s1_loc1;  
   s1_loc2;  
   s1_loc3;  
  
   // allocate memory for struct on heap  
   int nEle = 10;   // allocate 10 chars for char array  
   void * pV = malloc (sizeof(S2) + nEle * sizeof(char));  
   S2 *pS1 = new (pV) S2(nEle);  
   pS1;  
}  
```