---
title: "Errore degli strumenti del linker LNK1313 | Microsoft Docs"
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
  - "LNK1313"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1313"
ms.assetid: 5df0b72e-bb3f-428c-8d84-6084238f9827
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1313
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

rilevato modulo ijw\/nativo; impossibile effettuare il collegamento con moduli pure  
  
 La versione corrente di Visual C\+\+ non supporta il collegamento di file OBJ misti gestiti\/nativi con file OBJ compilati con **\/clr:pure**.  
  
## Esempio  
  
```  
// LNK1313.cpp  
// compile with: /c /clr:pure  
// a pure module  
int main() {}  
```  
  
## Esempio  
  
```  
// LNK1313_b.cpp  
// compile with: /c /clr  
// an IJW module  
void test(){}  
```  
  
## Esempio  
 L'esempio seguente genera l'errore LNK1313.  
  
```  
// LNK1313_c.cpp  
// compile with: /link LNK1313.obj LNK1313_b.obj  
// LNK1313 warning expected  
```