---
title: Errore del compilatore C3550
ms.date: 11/04/2016
f1_keywords:
- C3550
helpviewer_keywords:
- C3550
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
ms.openlocfilehash: 17c90aa68b29c9490deb8d49895162e8a6bdefec
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200772"
---
# <a name="compiler-error-c3550"></a>Errore del compilatore C3550

in questo contesto sono consentiti solo valori 'decltype(auto)' normali

Se `decltype(auto)` viene usato come segnaposto per il tipo restituito di una funzione, deve essere usato da solo. Non può essere usato come parte di una dichiarazione di puntatore (`decltype(auto*)`), di una dichiarazione di riferimento (`decltype(auto&)`) di qualsiasi altra qualifica simile.

## <a name="see-also"></a>Vedere anche

[auto](../../cpp/auto-cpp.md)
