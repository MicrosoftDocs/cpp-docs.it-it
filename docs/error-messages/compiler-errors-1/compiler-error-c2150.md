---
description: 'Altre informazioni su: errore del compilatore C2150'
title: Errore del compilatore C2150
ms.date: 11/04/2016
f1_keywords:
- C2150
helpviewer_keywords:
- C2150
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
ms.openlocfilehash: 5a609edba74e2aee8e0d2a6275fa1ca40fafe5c6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223516"
---
# <a name="compiler-error-c2150"></a>Errore del compilatore C2150

> '*Identifier*': il campo di bit deve avere il tipo ' int ',' signed int ' o ' unsigned int '

Il tipo di base per un campo di bit deve essere **`int`** , **`signed int`** o **`unsigned int`** .

## <a name="example"></a>Esempio

Questo esempio illustra come è possibile riscontrare C2150 e come risolverlo:

```cpp
// C2150.cpp
// compile with: /c
struct A {
   float a : 8;    // C2150
   int i : 8;      // OK
};
```
