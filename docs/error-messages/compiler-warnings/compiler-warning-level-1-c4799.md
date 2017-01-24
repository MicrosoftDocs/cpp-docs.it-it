---
title: "Avviso del compilatore (livello 1) C4799 | Microsoft Docs"
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
  - "C4799"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4799"
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4799
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nessuna istruzione EMMS alla fine della funzione 'funzione'  
  
 La funzione contiene almeno un'istruzione MMX, ma nessuna istruzione EMMS.  Quando si utilizza un'istruzione multimediale, è necessario utilizzare anche un'istruzione EMMS per cancellare il tag multimediale alla fine del codice MMX.  Per ulteriori informazioni sulle istruzioni EMMS, vedere [Indicazioni per l'utilizzo di EMMS](http://msdn.microsoft.com/it-it/a0c3b1e4-01a4-419c-a58f-ff1e97dea7d3).  
  
 L'avviso C4799 può essere generato quando si utilizza ivec.h, per indicare che nel codice non viene eseguita correttamente l'istruzione EMMS prima del termine.  L'avviso non è corretto per queste intestazioni.  È possibile disattivare le intestazioni definendo \_SILENCE\_IVEC\_C4799 in ivec.h.  Con questa operazione, tuttavia, non verranno generati neanche gli avvisi corretti di questo tipo.  
  
 Per informazioni correlate, vedere [Set di istruzioni per MMX Intel](../../assembler/inline/intel-s-mmx-instruction-set.md).