---
title: "Avviso del compilatore (livello 1) C4117 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4117"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4117"
ms.assetid: c45aa281-4cc1-4dfd-bd32-bd7a60ddd577
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4117
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il nome macro 'name' è riservato. 'Command' ignorato  
  
### Per risolvere il problema, verificare le seguenti cause possibili:  
  
1.  Tentativo di definire o annullare la definizione di una macro già definita.  
  
2.  Tentativo di definire o annullare la definizione dell'operatore del preprocessore **defined**.  
  
 L'esempio seguente genera l'errore C4117:  
  
```  
// C4117.cpp // compile with: /W1 #define __FILE__ test         // C4117. __FILE__ is a predefined macro #define ValidMacroName test   // ok int main() { }  
```