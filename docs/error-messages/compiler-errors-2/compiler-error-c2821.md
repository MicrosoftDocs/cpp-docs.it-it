---
title: Errore del compilatore C2821
ms.date: 11/04/2016
f1_keywords:
- C2821
helpviewer_keywords:
- C2821
ms.assetid: e8d71988-a968-4484-94db-e8c3bad74a4a
ms.openlocfilehash: 5c725d9648a7800c68a2fbff20e594a400c296c8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50632547"
---
# <a name="compiler-error-c2821"></a>Errore del compilatore C2821

il primo parametro formale 'operator new' deve essere 'unsigned int'

Il primo parametro formale del [operatore new](../../standard-library/new-operators.md#op_new) deve essere un unsigned `int`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2821:

```cpp
// C2821.cpp
// compile with: /c
void * operator new( /* unsigned int,*/ void * );   // C2821
void * operator new( unsigned int, void * );
```