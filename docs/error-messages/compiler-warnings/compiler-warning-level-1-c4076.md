---
title: Avviso del compilatore (livello 1) C4076
ms.date: 11/04/2016
f1_keywords:
- C4076
helpviewer_keywords:
- C4076
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
ms.openlocfilehash: 1958aec4d6642188af1467ab4cab1ecf55c29165
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223317"
---
# <a name="compiler-warning-level-1-c4076"></a>Avviso del compilatore (livello 1) C4076

> '*Type Modifier*': non può essere usato con il tipo '*typeName*'

## <a name="remarks"></a>Osservazioni

Un modificatore di tipo, indipendentemente dal fatto che sia **`signed`** o **`unsigned`** , non può essere usato con un tipo non integer. il *modificatore di tipo* viene ignorato.

## <a name="example"></a>Esempio

L'esempio seguente genera C4076; per risolvere il problema, rimuovere il **`unsigned`** modificatore di tipo:

```cpp
// C4076.cpp
// compile with: /W1 /LD
unsigned double x;   // C4076
```
