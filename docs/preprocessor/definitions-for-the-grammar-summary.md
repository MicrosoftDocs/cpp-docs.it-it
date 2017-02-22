---
title: "Definizioni per il riepilogo della grammatica | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "preprocessore"
  - "preprocessore, definizioni"
ms.assetid: cc752dc8-6f4e-4347-a556-e0d9ef4c46bd
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Definizioni per il riepilogo della grammatica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I terminali sono endpoint in una definizione di sintassi.  Non è possibile nessun'altra soluzione.  I terminali includono il set di parole riservate e di identificatori definiti dall'utente.  
  
 I non terminali sono segnaposto nella sintassi.  La maggior parte viene definita altrove in questo riepilogo della sintassi.  Le definizioni possono essere ricorsive.  I non terminal seguenti sono definiti in [Riepilogo di grammatica](../misc/grammar-summary-cpp.md) dei *Riferimenti al linguaggio C\+\+*:  
  
 `constant`, *constant\-expression*, *identifier*, *keyword*, `operator`, `punctuator`  
  
 Un componente facoltativo viene indicato dall'opzione di indice.  Ad esempio, di seguito viene indicata un'espressione facoltativa racchiusa tra parentesi graffe:  
  
 **{** *expression*opt **}**  
  
## Vedere anche  
 [Riepilogo grammatica](../preprocessor/grammar-summary-c-cpp.md)