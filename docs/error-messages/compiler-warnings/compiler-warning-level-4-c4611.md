---
title: Avviso del compilatore (livello 4) C4611
ms.date: 11/04/2016
f1_keywords:
- C4611
helpviewer_keywords:
- C4611
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
ms.openlocfilehash: b799c568d73a081a4d4cf5616f376f3efc9eeffb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50542311"
---
# <a name="compiler-warning-level-4-c4611"></a>Avviso del compilatore (livello 4) C4611

interazione tra 'function' e l'eliminazione degli oggetti C++ non è portabile

In alcune piattaforme, le funzioni che includono **catch** potrebbero non supportare la semantica degli oggetti C++ di distruzione quando esterno all'ambito.

Per evitare un comportamento imprevisto, evitare di usare **catch** in funzioni che hanno costruttori e distruttori.

Questo avviso viene generato solo una volta. visualizzare [avviso pragma](../../preprocessor/warning.md).