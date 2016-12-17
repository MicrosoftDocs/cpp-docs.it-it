---
title: "Errore del compilatore C2563 | Microsoft Docs"
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
  - "C2563"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2563"
ms.assetid: 54abba68-6458-4ca5-894d-3babdb7b3552
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2563
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di corrispondenza nell'elenco di parametri formali  
  
 L'elenco di parametri formali di una funzione o di un puntatore a una funzione non corrisponde a quello di un'altra funzione o di un puntatore a una funzione membro.  È pertanto impossibile assegnare funzioni o puntatori.  
  
 Il seguente codice di esempio genera l'errore C2563:  
  
```  
// C2563.cpp  
void func( int );  
void func( int, int );  
int main() {  
   void *fp();  
   fp = func;   // C2563  
}  
```