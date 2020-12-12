---
description: 'Altre informazioni su: errore del compilatore C3383'
title: Errore del compilatore C3383
ms.date: 11/04/2016
f1_keywords:
- C3383
helpviewer_keywords:
- C3383
ms.assetid: ceb7f725-f417-4dc3-8496-0f413bb76687
ms.openlocfilehash: fb5baf99c6738db1296cf4fb0a509c63d570ad78
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285591"
---
# <a name="compiler-error-c3383"></a>Errore del compilatore C3383

'operator new' non supportato con /clr:safe

Il file di output di una compilazione **/clr:safe** è un file indipendente dai tipi verificabile e i puntatori non sono supportati.

Per ulteriori informazioni, vedere,

- [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3383.

```cpp
// C3383.cpp
// compile with: /clr:safe
int main() {
   char* pCharArray = new char[256];  // C3383
}
```
