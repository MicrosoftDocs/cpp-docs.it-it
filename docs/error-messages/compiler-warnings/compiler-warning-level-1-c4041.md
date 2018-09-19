---
title: Compilatore avviso (livello 1) C4041 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4041
dev_langs:
- C++
helpviewer_keywords:
- C4041
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ff2c8066557e420ecd7de561d7731b7be733315
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46085784"
---
# <a name="compiler-warning-level-1-c4041"></a>Avviso del compilatore (livello 1) C4041

limite del compilatore: termine output per il browser

Le informazioni di visualizzazione hanno superato il limite del compilatore.

Questo avviso può essere causato dalla compilazione con [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) (informazioni di visualizzazione con variabili locali).

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Compilare con /Fr (informazioni di visualizzazione senza variabili locali).

1. Disabilitare l'output per il browser (compilare senza /FR o /Fr).