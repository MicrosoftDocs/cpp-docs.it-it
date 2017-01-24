---
title: "Avviso del compilatore (livellos 2 and 4) C4200 | Microsoft Docs"
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
  - "C4200"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4200"
ms.assetid: e44d6073-937f-42b7-acc1-65e802b475c6
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livellos 2 and 4) C4200
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

usata estensione non standard: matrice di dimensioni zero in struct\/union  
  
 Una struttura o un'unione contiene una matrice di dimensioni pari a zero.  
  
 La dichiarazione di una matrice con dimensione zero è un'estensione Microsoft.  L'avviso è di livello 2 quando viene compilato un file C\+\+ e di livello 4 quando viene compilato un file C.  La compilazione C\+\+ fornisce inoltre l'avviso: "Impossibile generare un operatore di costruttore di copia o di assegnazione copia se un tipo definito dall'utente contiene una matrice di dimensioni zero". Questo esempio genera l'avviso C4200:  
  
```cpp  
// C4200.cpp  
// compile by using: cl /W4 c4200.cpp  
struct A {  
    int a[0];  // C4200  
};  
int main() {  
}  
```  
  
 Questa estensione non standard viene spesso usata per interfacciare il codice con le strutture di dati esterni che hanno una lunghezza variabile.  Se questo scenario si applica al codice, è possibile disabilitare l'avviso:  
  
## Esempio  
  
```cpp  
// C4200b.cpp  
// compile by using: cl /W4 c4200a.cpp  
#pragma warning(disable : 4200)  
struct A {  
    int a[0];  
};  
int main() {  
}  
```