---
title: Errore del compilatore C3076 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3076
dev_langs:
- C++
helpviewer_keywords:
- C3076
ms.assetid: 8a87b3e4-2c17-4b87-9622-ef0962d6a34e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f2d507e13c6dde451e6693774f708333a9301f8b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46064061"
---
# <a name="compiler-error-c3076"></a>Errore del compilatore C3076

'instance': è possibile incorporare un'istanza di un tipo riferimento, 'type', in un tipo nativo

Un tipo nativo non può contenere un'istanza di un tipo CLR.

Per altre informazioni, vedere [semantica dello Stack C++ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3076.

```
// C3076.cpp
// compile with: /clr /c
ref struct U {};

struct V {
   U y;   // C3076
};

ref struct W {
   U y;   // OK
};
```