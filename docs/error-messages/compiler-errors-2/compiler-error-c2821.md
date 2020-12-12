---
description: 'Altre informazioni su: errore del compilatore C2821'
title: Errore del compilatore C2821
ms.date: 11/04/2016
f1_keywords:
- C2821
helpviewer_keywords:
- C2821
ms.assetid: e8d71988-a968-4484-94db-e8c3bad74a4a
ms.openlocfilehash: c21c9dc0b1413292e1d73b6448ed008d6fc9a64d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194696"
---
# <a name="compiler-error-c2821"></a>Errore del compilatore C2821

il primo parametro formale di ' operator new ' deve essere ' unsigned int '

Il primo parametro formale dell' [operatore New](../../standard-library/new-operators.md#op_new) deve essere un oggetto senza segno **`int`** .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2821:

```cpp
// C2821.cpp
// compile with: /c
void * operator new( /* unsigned int,*/ void * );   // C2821
void * operator new( unsigned int, void * );
```
