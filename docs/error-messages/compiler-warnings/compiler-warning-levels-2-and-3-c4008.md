---
title: Avviso del compilatore (livelli 2 e 3) C4008
ms.date: 11/04/2016
f1_keywords:
- C4008
helpviewer_keywords:
- C4008
ms.assetid: fb45e535-cb68-4743-80e9-a6e34cfffeca
ms.openlocfilehash: ab51b16331cc6a102c828234d2c2b8be84f2d276
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225241"
---
# <a name="compiler-warning-levels-2-and-3-c4008"></a>Avviso del compilatore (livelli 2 e 3) C4008

'identifier': attributo 'attribute' ignorato

Il compilatore ha ignorato **`__fastcall`** l' **`static`** attributo, o **`inline`** per una funzione (avviso di livello 3) o per i dati (avviso di livello 2).

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. **`__fastcall`** attributo con i dati.

1. **`static`****`inline`** attributo o con la funzione **Main** .
