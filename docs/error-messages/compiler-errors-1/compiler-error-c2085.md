---
title: "Errore del compilatore C2085 | Microsoft Docs"
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
  - "C2085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2085"
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2085
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': non nell'elenco di parametri formali  
  
 L'identificatore è stato dichiarato in una definizione di funzione, ma non nell'elenco di parametri formali. \(Solo ANSI C\)  
  
 Il seguente codice di esempio genera l'errore C2085:  
  
```  
// C2085.c  
void func1( void )  
int main( void ) {}   // C2085  
```  
  
 Possibile soluzione:  
  
```  
// C2085b.c  
void func1( void );  
int main( void ) {}  
```  
  
 Senza il punto e virgola, `func1()` ha l'aspetto di una definizione di funzione, non di un prototipo, quindi `main` viene definito in `func1()` e viene generato l'errore C2085 per l'identificatore `main`.