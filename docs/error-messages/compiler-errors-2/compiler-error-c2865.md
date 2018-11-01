---
title: Errore del compilatore C2865
ms.date: 11/04/2016
f1_keywords:
- C2865
helpviewer_keywords:
- C2865
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
ms.openlocfilehash: e95714f7a10c1c25562e8b12025ede486e66cff8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50532737"
---
# <a name="compiler-error-c2865"></a>Errore del compilatore C2865

'function': confronto non valido per handle_o_puntatore

È possibile confrontare i riferimenti a [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md) o tipi di riferimento solo per verificarne l'uguaglianza per verificare se fanno riferimento allo stesso oggetto (= =) o per diversi oggetti gestiti (! =).

Non è possibile confrontarli per l'ordinamento poiché il runtime di .NET potrebbe spostare gli oggetti gestiti in qualsiasi momento, modificare il risultato del test.