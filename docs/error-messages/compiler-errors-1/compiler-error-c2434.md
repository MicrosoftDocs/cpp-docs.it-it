---
title: Errore del compilatore C2434
ms.date: 11/04/2016
f1_keywords:
- C2434
helpviewer_keywords:
- C2434
ms.assetid: 01329e26-7c74-4219-b74f-69e3a40c9738
ms.openlocfilehash: c73a8d4fcde945ddf2495cc2d0d7dc47216f2db3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62166334"
---
# <a name="compiler-error-c2434"></a>Errore del compilatore C2434

> '*simbolo*': un simbolo dichiarato con declspec (Process) non può essere inizializzato in modo dinamico in /clr: pure modalità

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Non è possibile inizializzare in modo dinamico una variabile per ogni processo nella casella **/clr: pure**. Per altre informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [processo](../../cpp/process.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2434. Per risolvere questo problema, utilizzare le costanti per inizializzare `process` variabili.

```cpp
// C2434.cpp
// compile with: /clr:pure /c
int f() { return 0; }
__declspec(process) int i = f();   // C2434
__declspec(process) int i2 = 0;   // OK
```