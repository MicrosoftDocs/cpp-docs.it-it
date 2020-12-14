---
description: 'Altre informazioni su: avviso del compilatore C4957'
title: Avviso del compilatore C4957
ms.date: 11/04/2016
f1_keywords:
- C4957
helpviewer_keywords:
- C4957
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
ms.openlocfilehash: ac9d41b6161f658eb7debf438c495fbc57c6bb2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314828"
---
# <a name="compiler-warning-c4957"></a>Avviso del compilatore C4957

> '*cast*': cast esplicito da'*cast_from*' a'*cast_to*' non verificabile

## <a name="remarks"></a>Commenti

Un cast genererà un'immagine non verificabile.

Alcuni cast sono sicuri, ad esempio un **`static_cast`** che attiva conversioni definite dall'utente e una **`const_cast`** . Un [safe_cast](../../extensions/safe-cast-cpp-component-extensions.md) genera sicuramente codice verificabile.

Per altre informazioni, vedere [codice pure e verificabile (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

L'opzione del compilatore **/CLR: safe** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/wd](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4957:

```cpp
// C4957.cpp
// compile with: /clr:safe
// #pragma warning( disable : 4957 )
using namespace System;
int main() {
   Object ^ o = "Hello, World!";
   String ^ s = static_cast<String^>(o);   // C4957
   String ^ s2 = safe_cast<String^>(o);   // OK
}
```
