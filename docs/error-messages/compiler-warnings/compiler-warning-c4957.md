---
title: Avviso del compilatore C4957 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4957
dev_langs:
- C++
helpviewer_keywords:
- C4957
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 60cf1c03ace94c866b77c5340e2a04a9d8190e4d
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34705218"
---
# <a name="compiler-warning-c4957"></a>Avviso del compilatore C4957

> '*cast*': cast esplicito da '*cast_from*'a'*cast_to*' non è verificabile

## <a name="remarks"></a>Note

Un cast genererà un'immagine non verificabile.

Alcuni cast sono sicuri, ad esempio un `static_cast` che attiva conversioni definite dall'utente e un `const_cast`. Un [safe_cast](../../windows/safe-cast-cpp-component-extensions.md) genera sicuramente codice verificabile.

Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Il **/CLR: safe** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

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