---
description: 'Altre informazioni su: errore del compilatore C3862'
title: Errore del compilatore C3862
ms.date: 11/04/2016
f1_keywords:
- C3862
helpviewer_keywords:
- C3862
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
ms.openlocfilehash: b8955a69bcd04c0a40aed8fab722c6c734bfa65b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222892"
---
# <a name="compiler-error-c3862"></a>Errore del compilatore C3862

> '*Function*': Impossibile compilare una funzione non gestita con/CLR: pure o/CLR: safe

## <a name="remarks"></a>Commenti

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Una compilazione con **/CLR: pure** o **/CLR: safe** produrrà un'immagine solo MSIL, un'immagine senza codice nativo (non gestito).  Non è quindi possibile usare il `unmanaged` pragma in una compilazione **/CLR: pure** o **/CLR: safe** .

Per ulteriori informazioni, vedere [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [gestito, non gestito](../../preprocessor/managed-unmanaged.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3862:

```cpp
// C3862.cpp
// compile with: /clr:pure /c
#pragma unmanaged
void f() {}   // C3862
```
