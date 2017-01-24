---
title: "Avviso del compilatore (livello 1) C4172 | Microsoft Docs"
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
  - "C4172"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4172"
ms.assetid: a8d2bf65-d8b1-4fe3-8340-a223d7e7fde6
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4172
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

restituzione indirizzo di variabile locale o temporanea  
  
 Una funzione restituisce l'indirizzo di una variabile locale o di un oggetto temporaneo.  Le variabili locali e gli oggetti temporanei vengono eliminati al termine di una funzione, pertanto l'indirizzo restituito non è valido.  
  
 Riprogettare la funzione in modo che non restituisca l'indirizzo di un oggetto locale.  
  
 Il seguente codice di esempio genera l'errore C4172:  
  
```  
// C4172.cpp  
// compile with: /W1 /LD  
float f = 10;  
  
const double& bar() {  
// try the following line instead  
// const float& bar() {  
   return f;   // C4172  
}  
```