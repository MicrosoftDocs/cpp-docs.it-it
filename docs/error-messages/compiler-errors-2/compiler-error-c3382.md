---
description: 'Altre informazioni su: errore del compilatore C3382'
title: Errore del compilatore C3382
ms.date: 11/04/2016
f1_keywords:
- C3382
helpviewer_keywords:
- C3382
ms.assetid: a7603abd-ac4e-4ae6-a02b-3bdc6d1908a6
ms.openlocfilehash: 582a807ac43d6110fb0f19aef5806e4118516db2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285656"
---
# <a name="compiler-error-c3382"></a>Errore del compilatore C3382

'sizeof' non supportato con /clr:safe

Il file di output di una compilazione **/clr:safe** è un file indipendente dai tipi verificabile e sizeof non è supportato perché il valore restituito dell'operatore sizeof è size_t, la cui dimensione varia a seconda del sistema operativo.

Per ulteriori informazioni, vedere,

- [Operatore sizeof](../../cpp/sizeof-operator.md)

- [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Problemi comuni relativi alla migrazione di Visual C++ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3382.

```cpp
// C3382.cpp
// compile with: /clr:safe
int main() {
   sizeof( char );   // C3382
}
```
