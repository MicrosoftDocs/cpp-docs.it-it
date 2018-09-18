---
title: Compilatore avviso (livello 4) C4434 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4434
dev_langs:
- C++
helpviewer_keywords:
- C4434
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ec0d9e4cfbed2d2871e35631df918f17a342f653
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025763"
---
# <a name="compiler-warning-level-4-c4434"></a>Avviso del compilatore (livello 4) C4434

un costruttore di classe deve avere accessibilità privata; conversione in accesso privato

C4434 indica che il compilatore modifica l'accessibilità di un costruttore statico. I costruttori statici devono avere accessibilità privata, come sono concepite solo per essere chiamato da common language runtime. Per altre informazioni, vedere [costruttori statici](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Static_constructors).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4434.

```
// C4434.cpp
// compile with: /W4 /c /clr
public ref struct R {
   static R(){}   // C4434
};
```