---
title: "Avviso del compilatore (livello 1) C4028 | Microsoft Docs"
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
  - "C4028"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4028"
ms.assetid: c3e8b70b-e870-416c-a285-bba5f71dbfc6
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4028
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

parametro formale 'numero' differente dalla dichiarazione  
  
 Il tipo del parametro formale non concorda con il parametro corrispondente nella dichiarazione.  Viene utilizzato il tipo nella dichiarazione originale.  
  
 Questo avviso è valido solo per il codice sorgente C.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4028:  
  
```  
// C4028.c  
// compile with: /W1 /Za  
void f(int , ...);  
void f(int i, int j) {}   // C4028  
  
void g(int , int);  
void g(int i, int j) {}   // OK  
  
int main() {}  
```