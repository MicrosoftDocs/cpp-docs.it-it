---
title: Errore del compilatore C2377
ms.date: 11/04/2016
f1_keywords:
- C2377
helpviewer_keywords:
- C2377
ms.assetid: f7660965-bf4c-4cd9-8307-1bd7016678a1
ms.openlocfilehash: b4789469fe27dafb2fb13bf3db085958db8d1478
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528765"
---
# <a name="compiler-error-c2377"></a>Errore del compilatore C2377

'identifier': ridefinizione. Impossibile eseguire l'overload di typedef con altri simboli

Un identificatore `typedef` è stato ridefinito.

L'esempio seguente genera l'errore C2377:

```
// C2377.cpp
// compile with: /c
typedef int i;
int i;   // C2377
int j;   // OK
```