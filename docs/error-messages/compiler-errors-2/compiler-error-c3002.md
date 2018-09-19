---
title: Errore del compilatore C3002 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3002
dev_langs:
- C++
helpviewer_keywords:
- C3002
ms.assetid: 2d4241a7-c8eb-4d43-a128-dca255d137bc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cc346c349ba57906e1645b7e3535ae6b11bd36d7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086304"
---
# <a name="compiler-error-c3002"></a>Errore del compilatore C3002

'name1 name2': più nomi di direttiva OpenMP

Non sono consentiti più nomi di direttiva.

L'esempio seguente genera l'errore C3002:

```
// C3002.c
// compile with: /openmp
int main()
{
   #pragma omp parallel single   // C3002
}
```