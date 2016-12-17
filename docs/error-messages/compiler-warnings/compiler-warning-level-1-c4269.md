---
title: "Avviso del compilatore (livello 1) C4269 | Microsoft Docs"
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
  - "C4269"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4269"
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4269
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': dati automatici di tipo 'const' inizializzati con un costruttore predefinito generato dal compilatore producono risultati inaffidabili  
  
 Un'istanza automatica di tipo **const** relativa a una classe non semplice è inizializzata con un costruttore predefinito generato dal compilatore.  
  
## Esempio  
  
```  
// C4269.cpp  
// compile with: /c /LD /W1  
class X {  
public:  
   int m_data;  
};  
  
void g() {  
   const X x1;   // C4269  
};  
```  
  
 Poiché l'istanza della classe viene generata sullo stack, `m_data` può avere un qualsiasi valore iniziale.  Inoltre, poiché si tratta di un'istanza di tipo **const**, il valore di `m_data` non può essere mai modificato.