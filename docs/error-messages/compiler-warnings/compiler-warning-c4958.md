---
description: 'Altre informazioni su: avviso del compilatore C4958'
title: Avviso del compilatore C4958
ms.date: 11/04/2016
f1_keywords:
- C4958
helpviewer_keywords:
- C4958
ms.assetid: e79b9e9c-d572-4a3a-a3b6-60962b70864a
ms.openlocfilehash: 1a6260a441b619923e8c2ddf8c7a5d891a3c3844
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314802"
---
# <a name="compiler-warning-c4958"></a>Avviso del compilatore C4958

> '*Operation*': aritmetica dei puntatori non verificabile

## <a name="remarks"></a>Commenti

L'uso dell'aritmetica dei puntatori produrrà un'immagine non verificabile.

Per altre informazioni, vedere [codice pure e verificabile (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

L'opzione del compilatore **/CLR: safe** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/wd](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'avviso C4958:

```cpp
// C4958.cpp
// compile with: /clr:safe
// #pragma warning( disable : 4958 )
using namespace System;

int main( ) {
   Int32 arr[] = new Int32[10];
   Int32* p = &arr[0];
   p++;   // C4958
}
```

Il compilatore implementa le operazioni di matrici con l'aritmetica dei puntatori. Le matrici native non sono quindi verificabili. Usare una matrice CLR. Per altre informazioni, vedere [matrice](../../extensions/arrays-cpp-component-extensions.md).

L'esempio seguente genera l'avviso C4958:

```cpp
// C4958b.cpp
// compile with: /clr:safe
// #pragma warning( disable : 4958 )

int main() {
   int array[5];
   array[4] = 0;   // C4958
}
```
