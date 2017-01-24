---
title: "Avviso del compilatore (livello 3) C4310 | Microsoft Docs"
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
  - "C4310"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4310"
ms.assetid: cba3eca1-f1ed-499c-9243-337446bdbdd8
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4310
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il cast tronca il valore costante  
  
 È stato effettuato il cast di un valore costante in un tipo più piccolo,  con conseguente troncamento dei dati.  Il seguente codice di esempio genera l'errore C4310:  
  
```  
// C4310.cpp  
// compile with: /W4  
int main() {  
   long int a;  
   a = (char) 128;   // C4310, use value 0-127 to resolve  
}  
```