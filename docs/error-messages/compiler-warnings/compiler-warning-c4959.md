---
title: Avviso del compilatore C4959
ms.date: 11/04/2016
f1_keywords:
- C4959
helpviewer_keywords:
- C4959
ms.assetid: 3a128f3e-4d8a-4565-ba1a-5d32fdeb5982
ms.openlocfilehash: 13d2ed705bff7b42eb3c348692a5829bd54158b0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164872"
---
# <a name="compiler-warning-c4959"></a>Avviso del compilatore C4959

> non è possibile definire struct '*Type*' non gestito in/CLR: safe perché l'accesso ai membri produce codice non verificabile

## <a name="remarks"></a>Osservazioni

L'accesso a un membro di un tipo non gestito produrrà un'immagine (peverify.exe) non verificabile.

Per ulteriori informazioni, vedere [codice pure e verificabile (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

L'opzione del compilatore **/CLR: safe** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

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
