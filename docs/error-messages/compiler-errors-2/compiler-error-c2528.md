---
title: Errore del compilatore C2528 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2528
dev_langs:
- C++
helpviewer_keywords:
- C2528
ms.assetid: 2ea9d583-67a8-4b16-b35f-a50eeffc03c4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c588457743c601e31c24fd0a53de652477fbf05
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46072602"
---
# <a name="compiler-error-c2528"></a>Errore del compilatore C2528

'name': puntatore a riferimento non valido

È possibile dichiarare un puntatore a un riferimento. Dereferenziare la variabile prima di dichiarare un puntatore a esso.

L'esempio seguente genera l'errore C2528:

```
// C2528.cpp
int i;
int &ir = i;
int & (*irptr) = ir;    // C2528
```