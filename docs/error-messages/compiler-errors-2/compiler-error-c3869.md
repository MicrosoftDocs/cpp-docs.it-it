---
title: Errore del compilatore C3869
ms.date: 11/04/2016
f1_keywords:
- C3869
helpviewer_keywords:
- C3869
ms.assetid: 85b2ad72-95c1-4ed6-9761-6ef66c3802b7
ms.openlocfilehash: 3ca56ce3c02915c88f70907d024aea3930a1aa1e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87197540"
---
# <a name="compiler-error-c3869"></a>Errore del compilatore C3869

nel vincolo gcnew manca l'elenco di parametri vuoto ' ()'

Il **`gcnew`** vincolo speciale è stato specificato senza l'elenco di parametri vuoto. Per ulteriori informazioni, vedere [vincoli sui parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3869.

```cpp
// C3869.cpp
// compile with: /c /clr
using namespace System;
generic <typename T>
where T : gcnew   // C3869
// try the following line instead
// where T : gcnew()
ref class List {};
```
