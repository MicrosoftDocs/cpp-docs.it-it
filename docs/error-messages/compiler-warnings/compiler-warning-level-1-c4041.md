---
title: Avviso del compilatore (livello 1) C4041
ms.date: 11/04/2016
f1_keywords:
- C4041
helpviewer_keywords:
- C4041
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
ms.openlocfilehash: 6e1f2a2396447038f6a117f66d4002bea7fd7486
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62151318"
---
# <a name="compiler-warning-level-1-c4041"></a>Avviso del compilatore (livello 1) C4041

limite del compilatore: termine output per il browser

Le informazioni di visualizzazione hanno superato il limite del compilatore.

Questo avviso può essere causato dalla compilazione con [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) (informazioni di visualizzazione con variabili locali).

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Compilare con /Fr (informazioni di visualizzazione senza variabili locali).

1. Disabilitare l'output per il browser (compilare senza /FR o /Fr).