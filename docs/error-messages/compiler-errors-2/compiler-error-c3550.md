---
title: Errore del compilatore C3550 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3550
dev_langs:
- C++
helpviewer_keywords:
- C3550
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 08c22d7e371fda7a229b541f78d4385f2943ee54
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047785"
---
# <a name="compiler-error-c3550"></a>Errore del compilatore C3550

in questo contesto sono consentiti solo valori 'decltype(auto)' normali

Se `decltype(auto)` viene usato come segnaposto per il tipo restituito di una funzione, deve essere usato da solo. Non può essere usato come parte di una dichiarazione di puntatore (`decltype(auto*)`), di una dichiarazione di riferimento (`decltype(auto&)`) di qualsiasi altra qualifica simile.

## <a name="see-also"></a>Vedere anche

[auto](../../cpp/auto-cpp.md)