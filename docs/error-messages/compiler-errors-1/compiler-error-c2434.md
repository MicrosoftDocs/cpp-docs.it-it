---
description: 'Altre informazioni su: errore del compilatore C2434'
title: Errore del compilatore C2434
ms.date: 11/04/2016
f1_keywords:
- C2434
helpviewer_keywords:
- C2434
ms.assetid: 01329e26-7c74-4219-b74f-69e3a40c9738
ms.openlocfilehash: e24eb3fdf2ae60dadc270bed1bdda251acfc70a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189964"
---
# <a name="compiler-error-c2434"></a>Errore del compilatore C2434

> '*Symbol*': non è possibile inizializzare dinamicamente la modalità/CLR: pure di un simbolo dichiarato con __declspec (Process)

## <a name="remarks"></a>Commenti

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Non è possibile inizializzare dinamicamente una variabile per processo in **/CLR: pure**. Per ulteriori informazioni, vedere [/CLR (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) ed [elaborazione](../../cpp/process.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2434. Per risolvere questo problema, usare le costanti per inizializzare le `process` variabili.

```cpp
// C2434.cpp
// compile with: /clr:pure /c
int f() { return 0; }
__declspec(process) int i = f();   // C2434
__declspec(process) int i2 = 0;   // OK
```
