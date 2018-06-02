---
title: Errore del compilatore C3862 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3862
dev_langs:
- C++
helpviewer_keywords:
- C3862
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5b21e457feb6d090e4abaf531293987eb3504457
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704971"
---
# <a name="compiler-error-c3862"></a>Errore del compilatore C3862

> '*funzione*': non è possibile compilare una funzione non gestita con /clr: pure o /CLR: safe

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Una compilazione con **/clr: pure** o **/CLR: safe** produrrà solo un'immagine MSIL, un'immagine senza codice nativo (non gestito).  Pertanto, è possibile utilizzare il `unmanaged` pragma in un **/clr: pure** o **/CLR: safe** compilazione.

Per ulteriori informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [managed, unmanaged](../../preprocessor/managed-unmanaged.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3862:

```cpp
// C3862.cpp
// compile with: /clr:pure /c
#pragma unmanaged
void f() {}   // C3862
```