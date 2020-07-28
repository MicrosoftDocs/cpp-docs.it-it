---
title: Avviso del compilatore (livello 4) C4611
ms.date: 11/04/2016
f1_keywords:
- C4611
helpviewer_keywords:
- C4611
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
ms.openlocfilehash: 2ce261b36344126d541a9b453c88f7f8289ecba0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214334"
---
# <a name="compiler-warning-level-4-c4611"></a>Avviso del compilatore (livello 4) C4611

l'interazione tra' Function ' e la distruzione di oggetti C++ non è portabile

In alcune piattaforme, le funzioni che includono **`catch`** potrebbero non supportare la semantica degli oggetti C++ per la distruzione quando esterno all'ambito.

Per evitare comportamenti imprevisti, evitare **`catch`** di utilizzare in funzioni che dispongono di costruttori e distruttori.

Questo avviso viene emesso solo una volta. vedere [pragma warning](../../preprocessor/warning.md).
