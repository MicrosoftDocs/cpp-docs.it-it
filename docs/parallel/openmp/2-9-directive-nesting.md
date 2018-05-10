---
title: 2.9 annidamento di direttive | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 6565a43c-fd2d-4366-8322-8d75e1b06600
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 28e690ba531b4b37973bc2555d904317181ff918
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="29-directive-nesting"></a>2.9 Annidamento di direttive
Dinamica annidamento delle direttive deve essere conformi alle regole seguenti:  
  
-   A **parallela** direttiva in modo dinamico all'interno di un altro **parallela** logicamente stabilisce un nuovo team, è costituito dal solo il thread corrente, a meno che non annidati di parallelismo è abilitato.  
  
-   **per**, **sezioni**, e **singolo** direttive associati allo stesso **parallela** non possono essere annidati l'altro.  
  
-   **critico** direttive con lo stesso nome non possono essere annidati l'altro. Si noti di che questa restrizione non è sufficiente per impedire un deadlock.  
  
-   **per**, **sezioni**, e **singolo** direttive non consentite in quanto dinamica di **critici**, **ordinati**, e **master** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   **barriera** direttive non consentite in quanto dinamica di **per**, **ordinati**, **sezioni**, **singolo**, **master**, e **critici** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   **master** direttive non consentite in quanto dinamica di **per**, **sezioni**, e **singolo** direttive se il **master** direttive associati allo stesso **parallel** come direttive di condivisione del lavoro.  
  
-   **ordinati** direttive non sono consentite nella portata dinamica della **critici** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   Una direttiva è consentito quando eseguita in modo dinamico all'interno di un'area parallela è consentita anche quando eseguita all'esterno di un'area parallela. Quando viene eseguita in modo dinamico all'esterno di un'area parallela specificato dall'utente, la direttiva viene eseguita da un team composto solo il thread principale.