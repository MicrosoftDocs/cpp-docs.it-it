---
title: Errore del compilatore C3753 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3753
dev_langs:
- C++
helpviewer_keywords:
- C3753
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 90462bf9487a60ddcd1add092492e390f7ea71a1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086686"
---
# <a name="compiler-error-c3753"></a>Errore del compilatore C3753

proprietà generica non è consentita

Gli elenchi di parametri generici possono apparire solo in funzioni, struct o classi gestite.

Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md) e [proprietà](../../windows/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3753.

```
// C3753.cpp
// compile with: /clr /c
ref struct A {
   generic <typename T>
   property int i;   // C3753 error
};
```