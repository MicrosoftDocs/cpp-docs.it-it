---
title: "Avviso del compilatore (livello 1) C4551 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4551"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4551"
ms.assetid: 458b59bd-e2d7-425f-9ba6-268ff200424f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4551
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

chiamata di funzione senza elenco di argomenti  
  
 Una chiamata di funzione deve includere le parentesi di apertura e chiusura dopo il nome di funzione anche se la funzione non accetta parametri.  
  
 Il seguente codice di esempio genera l'errore C4551:  
  
```  
// C4551.cpp  
// compile with: /W1  
void function1() {  
}  
  
int main() {  
   function1;   // C4551  
   function1();   // OK  
}  
```