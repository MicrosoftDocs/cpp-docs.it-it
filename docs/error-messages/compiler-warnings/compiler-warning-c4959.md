---
title: Avviso del compilatore C4959 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4959
dev_langs:
- C++
helpviewer_keywords:
- C4959
ms.assetid: 3a128f3e-4d8a-4565-ba1a-5d32fdeb5982
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2819664fa94ca777339156dc9a31da17b991c6da
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34705164"
---
# <a name="compiler-warning-c4959"></a>Avviso del compilatore C4959

> non è possibile definire struct non gestito '*tipo*' in /CLR: safe perché l'accesso ai membri produce codice non verificabile

## <a name="remarks"></a>Note

L'accesso a un membro di un tipo non gestito produrrà un'immagine (peverify.exe) non verificabile.

Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Il **/CLR: safe** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/wd](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4959:

```cpp
// C4959.cpp
// compile with: /clr:safe

// Uncomment the following line to resolve.
// #pragma warning( disable : 4959 )
struct X {
   int data;
};

int main() {
   X x;
   x.data = 10;   // C4959
}
```