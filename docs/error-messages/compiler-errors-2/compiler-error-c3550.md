---
title: Errore del compilatore C3550
ms.date: 11/04/2016
f1_keywords:
- C3550
helpviewer_keywords:
- C3550
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
ms.openlocfilehash: dbed14b9f2fa0f2163484edd8b5dfa330af9cbf1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498881"
---
# <a name="compiler-error-c3550"></a>Errore del compilatore C3550

in questo contesto sono consentiti solo valori 'decltype(auto)' normali

Se `decltype(auto)` viene usato come segnaposto per il tipo restituito di una funzione, deve essere usato da solo. Non può essere usato come parte di una dichiarazione di puntatore (`decltype(auto*)`), di una dichiarazione di riferimento (`decltype(auto&)`) di qualsiasi altra qualifica simile.

## <a name="see-also"></a>Vedere anche

[auto](../../cpp/auto-cpp.md)