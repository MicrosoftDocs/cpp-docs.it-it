---
description: 'Altre informazioni su: errore del compilatore C3550'
title: Errore del compilatore C3550
ms.date: 11/04/2016
f1_keywords:
- C3550
helpviewer_keywords:
- C3550
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
ms.openlocfilehash: 4cb459e3f8e7fdd0dbb00c1d4dfaa3c3c6b1eb71
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97112414"
---
# <a name="compiler-error-c3550"></a>Errore del compilatore C3550

in questo contesto sono consentiti solo valori 'decltype(auto)' normali

Se `decltype(auto)` viene usato come segnaposto per il tipo restituito di una funzione, deve essere usato da solo. Non può essere usato come parte di una dichiarazione di puntatore (`decltype(auto*)`), di una dichiarazione di riferimento (`decltype(auto&)`) di qualsiasi altra qualifica simile.

## <a name="see-also"></a>Vedi anche

[Automatico](../../cpp/auto-cpp.md)
