---
title: Avviso del compilatore (livello 1) C4076
ms.date: 11/04/2016
f1_keywords:
- C4076
helpviewer_keywords:
- C4076
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
ms.openlocfilehash: 77efeae27a67ea844759fd9980801d3daf788e89
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200257"
---
# <a name="compiler-warning-level-1-c4076"></a>Avviso del compilatore (livello 1) C4076

> '*Type Modifier*': non può essere usato con il tipo '*typeName*'

## <a name="remarks"></a>Osservazioni

Un modificatore di tipo, indipendentemente dal fatto che sia **firmato** o senza **segno**, non può essere usato con un tipo non integer. il *modificatore di tipo* viene ignorato.

## <a name="example"></a>Esempio

L'esempio seguente genera C4076; per risolvere il problema, rimuovere il modificatore di tipo **senza segno** :

```cpp
// C4076.cpp
// compile with: /W1 /LD
unsigned double x;   // C4076
```
