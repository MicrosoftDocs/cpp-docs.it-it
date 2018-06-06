---
title: Errore del compilatore C3389 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3389
dev_langs:
- C++
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b540f87458c75ddf7d57626b6251248652b96213
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704305"
---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389

> declspec (*parola chiave*) non può essere utilizzato con /clr: pure o /CLR: safe

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Oggetto [declspec](../../cpp/declspec.md) modificatore utilizzato implica una per ogni stato del processo.  [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md) implica una per ogni [appdomain](../../cpp/appdomain.md) dello stato.  In tal caso, la dichiarazione di una variabile con il `keyword` **declspec** modificatore e la compilazione con **/clr: pure** non è consentito.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3389:

```cpp
// C3389.cpp
// compile with: /clr:pure /c
__declspec(dllexport) int g2 = 0;   // C3389
```