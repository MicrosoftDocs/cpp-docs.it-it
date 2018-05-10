---
title: C. 1 notazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a23b2631-8096-4bf3-ac23-ba4f4bd7a52a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 39e8610524e20aa99ea316d62f36b512700e377e
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="c1-notation"></a>C.1 Notazione
Il nome di un non terminale, costituiti da regole grammaticali seguita da due punti, seguiti da alternative di sostituzione su righe separate.  
  
 Termopt l'espressione sintattica indica che il termine è facoltativo all'interno della sostituzione.  
  
 L'espressione sintattica *termine*optseq equivale a *termine-seq*opt con le regole aggiuntive seguenti:  
  
 *termine-seq* :  
  
 *Termine*  
  
 *termine-seq termine*  
  
 *termine-seq* , *termine*