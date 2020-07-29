---
title: Avviso del compilatore (livello 4) C4057
ms.date: 11/04/2016
f1_keywords:
- C4057
helpviewer_keywords:
- C4057
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
ms.openlocfilehash: d0bae91af3c2bfed97e252a74232e2a1bd778347
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225293"
---
# <a name="compiler-warning-level-4-c4057"></a>Avviso del compilatore (livello 4) C4057

'operator': 'identifier1' differisce da 'identifier2' nel riferimento indiretto a tipi di base leggermente diversi

Due espressioni puntatore fanno riferimento a tipi di base diversi. Le espressioni vengono usate senza conversione.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Combinazione di tipi con segno e senza segno.

1. Combinazione **`short`** di **`long`** tipi e.
