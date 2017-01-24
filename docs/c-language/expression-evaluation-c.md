---
title: "Valutazione di espressioni (C) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "valutazione di espressioni"
  - "espressioni [C++], valutazione"
ms.assetid: 9493f8cc-64a2-4284-9aaf-26eec11c4f40
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Valutazione di espressioni (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le espressioni che comprendono assegnazioni, incrementi unari o decrementi unari, così come le chiamate di funzione, possono avere conseguenze irrilevanti ai fini della relativa valutazione \(effetti collaterali\).  Quando viene raggiunto un "punto di sequenza", si è certi che tutto ciò che precede tale punto di sequenza, inclusi tutti gli effetti collaterali, è stato valutato prima di iniziare una valutazione, o qualunque altra operazione, successiva allo stesso punto di sequenza.  
  
 Gli "effetti collaterali" sono modifiche causate dalla valutazione di un'espressione.  Gli effetti collaterali si verificano ogni volta che il valore di una variabile viene modificato dalla valutazione di un'espressione.  Tutte le operazioni di assegnazione hanno effetti collaterali.  Anche le chiamate di funzione possono avere effetti collaterali, se modificano il valore di un elemento visibile esternamente, attraverso assegnazione diretta o tramite puntatore.  
  
## Vedere anche  
 [Operandi ed espressioni](../c-language/operands-and-expressions.md)