---
title: Errore del compilatore C3862
ms.date: 11/04/2016
f1_keywords:
- C3862
helpviewer_keywords:
- C3862
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
ms.openlocfilehash: 2ba130862b1debbe2991ca7cbcae50192f900cd8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62302314"
---
# <a name="compiler-error-c3862"></a>Errore del compilatore C3862

> «*funzione*': non è possibile compilare una funzione non gestita con /clr: pure o /CLR: safe

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Una compilazione con **/clr: pure** oppure **/CLR: safe** produrrà solo un'immagine MSIL, un'immagine con alcun codice nativo (non gestito).  Pertanto, è possibile utilizzare il `unmanaged` pragma in un **/clr: pure** oppure **/CLR: safe** compilazione.

Per altre informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [managed, unmanaged](../../preprocessor/managed-unmanaged.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3862:

```cpp
// C3862.cpp
// compile with: /clr:pure /c
#pragma unmanaged
void f() {}   // C3862
```