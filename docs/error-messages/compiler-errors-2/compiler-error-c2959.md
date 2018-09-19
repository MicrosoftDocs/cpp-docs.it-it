---
title: Errore del compilatore C2959 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2959
dev_langs:
- C++
helpviewer_keywords:
- C2959
ms.assetid: d66bb2a8-70c3-4209-a358-b0c47f111a50
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f225dccc917e34fba690064d66cf1cda36219877
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46078972"
---
# <a name="compiler-error-c2959"></a>Errore del compilatore C2959

una classe generica o una funzione non può essere un membro di un modello

Per altre informazioni, vedere [Windows Runtime e modelli gestiti](../../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md) e [Generics](../../windows/generics-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2959.

```
// C2959.cpp
// compile with: /clr /c
template <class T> ref struct S {
   generic <class U> ref struct GR1;   // C2959
};
```