---
title: Compilatore avviso (livello 4) C4611 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4611
dev_langs:
- C++
helpviewer_keywords:
- C4611
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 723976dc8b7085ede9b3157445ff3026de6fc4b9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46091049"
---
# <a name="compiler-warning-level-4-c4611"></a>Avviso del compilatore (livello 4) C4611

interazione tra 'function' e l'eliminazione degli oggetti C++ non è portabile

In alcune piattaforme, le funzioni che includono **catch** potrebbero non supportare la semantica degli oggetti C++ di distruzione quando esterno all'ambito.

Per evitare un comportamento imprevisto, evitare di usare **catch** in funzioni che hanno costruttori e distruttori.

Questo avviso viene generato solo una volta. visualizzare [avviso pragma](../../preprocessor/warning.md).