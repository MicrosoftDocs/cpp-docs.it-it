---
title: "Istruzioni di iterazione (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iterazione (istruzioni)"
  - "cicli (strutture), iterazione (istruzioni)"
ms.assetid: bf6d75f7-ead2-426a-9c47-33847f59b8c7
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzioni di iterazione (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le istruzioni di iterazione determinano l'esecuzione di istruzioni \(o istruzioni composte\) nessuna o più volte, soggette ad alcuni criteri di ciclo\-chiusura.  Quando queste istruzioni sono composte, vengono eseguite in ordine, tranne quando viene rilevata l'istruzione [break](../cpp/break-statement-cpp.md) o [continue](../cpp/continue-statement-cpp.md).  
  
 C\+\+ fornisce quattro istruzioni di iterazione \- [while](../cpp/while-statement-cpp.md), [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md) e [for basata su intervallo](../cpp/range-based-for-statement-cpp.md).  Ognuna di queste viene ripetuta finché la relativa espressione di chiusura non restituisce zero \(false\) o finché la chiusura ciclo non viene forzata con un'istruzione **break**.  Nella tabella seguente vengono riepilogate le istruzioni e le relative azioni; ognuna viene illustrata in dettaglio nelle sezioni che seguono.  
  
### Istruzioni di iterazione  
  
|Istruzione|Valutato|Inizializzazione|Operatore di incremento|  
|----------------|--------------|----------------------|-----------------------------|  
|`while`|All'inizio del ciclo|No|No|  
|**do**|Alla fine del ciclo|No|No|  
|**for**|All'inizio del ciclo|Sì|Sì|  
|**for basato su intervallo**|All'inizio del ciclo|Sì|Sì|  
  
 La parte di istruzione di un'istruzione di iterazione non può essere una dichiarazione.  Tuttavia, può essere un'istruzione composta che contiene una dichiarazione.  
  
## Vedere anche  
 [Cenni preliminari sulle istruzioni C\+\+](../cpp/overview-of-cpp-statements.md)