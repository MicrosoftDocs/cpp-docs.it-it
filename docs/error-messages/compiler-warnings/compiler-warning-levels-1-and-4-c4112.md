---
title: "Avviso del compilatore (livelli 1 e 4) C4112 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4112"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4112"
ms.assetid: aff64897-bb79-4a67-9b6f-902c6d44f3dc
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso del compilatore (livelli 1 e 4) C4112
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#line richiede un valore Integer compreso tra 1 e il numero  
  
 La direttiva [\#line](../../preprocessor/hash-line-directive-c-cpp.md) specifica un parametro Integer che non rientra nell'intervallo consentito.  
  
 Se il parametro specificato è minore di 1, il contatore di righe viene reimpostato su 1. Se il parametro specificato è maggiore di *numero*, che rappresenta il limite definito dal compilatore, il contatore di righe non viene modificato. L'avviso è di livello 1 in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\) e di livello 4 con le estensioni Microsoft \([\/Ze](../../build/reference/za-ze-disable-language-extensions.md)\).  
  
 L'esempio seguente genera l'errore C4112:  
  
```  
// C4112.cpp  
// compile with: /W4  
#line 0   // C4112, value must be between 1 and number  
  
int main() {  
}  
```