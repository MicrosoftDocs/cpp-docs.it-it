---
title: Avviso del compilatore C4958 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4958
dev_langs:
- C++
helpviewer_keywords:
- C4958
ms.assetid: e79b9e9c-d572-4a3a-a3b6-60962b70864a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e32acc4ec45275976e7fb56f993b10ba8a2a855
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704873"
---
# <a name="compiler-warning-c4958"></a>Avviso del compilatore C4958

> '*operazione*': aritmetica dei puntatori non verificabile

## <a name="remarks"></a>Note

L'uso dell'aritmetica dei puntatori produrrà un'immagine non verificabile.

Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Il **/CLR: safe** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

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

Il compilatore implementa le operazioni di matrici con l'aritmetica dei puntatori. Le matrici native non sono quindi verificabili. Usare una matrice CLR. Per altre informazioni, vedere [matrice](../../windows/arrays-cpp-component-extensions.md).

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