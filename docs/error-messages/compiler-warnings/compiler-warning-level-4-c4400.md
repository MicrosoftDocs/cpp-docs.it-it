---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4400'
title: Avviso del compilatore (livello 4) C4400
ms.date: 11/04/2016
f1_keywords:
- C4400
helpviewer_keywords:
- C4400
ms.assetid: f135fe98-4f92-4e07-9d71-2621b36ee755
ms.openlocfilehash: c91a77758127b5c5b5c5ab742c980f6367830812
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136240"
---
# <a name="compiler-warning-level-4-c4400"></a>Avviso del compilatore (livello 4) C4400

' type ': i qualificatori const/volatile di questo tipo non sono supportati

I qualificatori [const](../../cpp/const-cpp.md)e [volatile](../../cpp/volatile-cpp.md)non funzioneranno con variabili di tipo Common Language Runtime.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4400.

```cpp
// C4400.cpp
// compile with: /clr /W4
// C4401 expected
using namespace System;
#pragma warning (disable : 4101)
int main() {
   const String^ str;   // C4400
   volatile String^ str2;   // C4400
}
```
