---
title: Errore del compilatore C3550
ms.date: 11/04/2016
f1_keywords:
- C3550
helpviewer_keywords:
- C3550
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
ms.openlocfilehash: 106ac93496eebb25ee603251d84680053e1310b7
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59032336"
---
# <a name="compiler-error-c3550"></a>Errore del compilatore C3550

in questo contesto sono consentiti solo valori 'decltype(auto)' normali

Se `decltype(auto)` viene usato come segnaposto per il tipo restituito di una funzione, deve essere usato da solo. Non può essere usato come parte di una dichiarazione di puntatore (`decltype(auto*)`), di una dichiarazione di riferimento (`decltype(auto&)`) di qualsiasi altra qualifica simile.

## <a name="see-also"></a>Vedere anche

[auto](../../cpp/auto-cpp.md)