---
title: Avviso del compilatore (livello 4) C4611
ms.date: 11/04/2016
f1_keywords:
- C4611
helpviewer_keywords:
- C4611
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
ms.openlocfilehash: 7de4cdf0eacb1b9848a4350f1d223da1fd47d1fc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198302"
---
# <a name="compiler-warning-level-4-c4611"></a>Avviso del compilatore (livello 4) C4611

l'interazione tra' Function ' C++ e la distruzione di oggetti non è portabile

In alcune piattaforme, le funzioni che includono **catch** potrebbero non C++ supportare la semantica degli oggetti di distruzione quando è esterno all'ambito.

Per evitare comportamenti imprevisti, evitare di utilizzare le funzioni **catch** in che dispongono di costruttori e distruttori.

Questo avviso viene emesso solo una volta. vedere [pragma warning](../../preprocessor/warning.md).
