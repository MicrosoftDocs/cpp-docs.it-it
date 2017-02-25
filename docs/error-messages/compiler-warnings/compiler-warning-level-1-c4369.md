---
title: "Avviso del compilatore (livello 1) C4369 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4369"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4369"
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4369
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'enumeratore': impossibile rappresentare il valore dell'enumeratore 'valore' come 'tipo'; il valore è 'nuovo\_valore'  
  
 Un enumeratore è stato calcolato essere maggiore del valore più grande per il tipo sottostante specificato.  Questo ha causato un overflow e il compilatore ha allineato il valore dell'enumeratore al valore più basso possibile per il tipo.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4369:  
  
```  
// C4369.cpp  
// compile with: /W1  
int main() {  
   enum Color: char { red = 0x7e, green, blue };   // C4369  
   enum Color2: char { red2 = 0x7d, green2, blue2};   // OK  
}  
```