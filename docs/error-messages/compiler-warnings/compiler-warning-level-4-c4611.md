---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4611'
title: Avviso del compilatore (livello 4) C4611
ms.date: 11/04/2016
f1_keywords:
- C4611
helpviewer_keywords:
- C4611
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
ms.openlocfilehash: df53392b2d56b9afb1ab0cbcb2fc7b6267d5f00f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97168267"
---
# <a name="compiler-warning-level-4-c4611"></a>Avviso del compilatore (livello 4) C4611

l'interazione tra' Function ' e la distruzione di oggetti C++ non è portabile

In alcune piattaforme, le funzioni che includono **`catch`** potrebbero non supportare la semantica degli oggetti C++ per la distruzione quando esterno all'ambito.

Per evitare comportamenti imprevisti, evitare **`catch`** di utilizzare in funzioni che dispongono di costruttori e distruttori.

Questo avviso viene emesso solo una volta. vedere [pragma warning](../../preprocessor/warning.md).
