---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4041'
title: Avviso del compilatore (livello 1) C4041
ms.date: 11/04/2016
f1_keywords:
- C4041
helpviewer_keywords:
- C4041
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
ms.openlocfilehash: d3473be35182f6c99541aa2a0fc79de79dee4a07
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160714"
---
# <a name="compiler-warning-level-1-c4041"></a>Avviso del compilatore (livello 1) C4041

limite del compilatore: termine output per il browser

Le informazioni di visualizzazione hanno superato il limite del compilatore.

Questo avviso può essere causato dalla compilazione con [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) (informazioni di visualizzazione con variabili locali).

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Compilare con /Fr (informazioni di visualizzazione senza variabili locali).

1. Disabilitare l'output per il browser (compilare senza /FR o /Fr).
