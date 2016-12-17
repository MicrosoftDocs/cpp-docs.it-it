---
title: "Errore del compilatore C3398 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3398"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3398"
ms.assetid: 26f8c8a4-526f-415b-8047-155c5cd4f180
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3398
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': non è possibile convertire da 'function\_signature' a 'function\_pointer'. L'espressione di origine deve essere un simbolo funzione  
  
 Quando la convenzione di chiamata [\_\_clrcall](../../cpp/clrcall.md) non viene specificata durante la compilazione **\/clr**, il compilatore genera due punti di ingresso \(indirizzo\) per ogni funzione, un punto di ingresso nativo e un punto di ingresso gestito.  
  
 Per impostazione predefinita il compilatore restituisce il punto di ingresso nativo, ma ci sono casi in cui è preferibile il punto di ingresso gestito \(ad esempio quando si assegna l'indirizzo da un puntatore a funzione `__clrcall`\). Affinché il compilatore scelga in modo affidabile il punto di ingresso gestito in un'assegnazione, il lato destro deve essere un simbolo della funzione.