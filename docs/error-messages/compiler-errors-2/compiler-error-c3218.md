---
title: Errore del compilatore C3218 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3218
dev_langs:
- C++
helpviewer_keywords:
- C3218
ms.assetid: 0eea19e0-503e-4e07-ae8b-2cb2e95922cd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1a21050e49a05980a4e4a644fa9f08bc42f23310
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46030820"
---
# <a name="compiler-error-c3218"></a>Errore del compilatore C3218

'type': tipo non consentito come vincolo

Per un tipo può essere un vincolo, deve essere un tipo di valore o riferimento a una classe gestita o un'interfaccia.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3218.

```
// C3218.cpp
// compile with: /clr /c
class A {};
ref class B {};

// Delete the following 3 lines to resolve.
generic <class T>
where T : A   // C3218
ref class C {};

// OK
generic <class T>
where  T : B
ref class D {};
```