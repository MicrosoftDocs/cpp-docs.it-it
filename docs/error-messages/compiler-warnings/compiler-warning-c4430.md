---
title: Avviso del compilatore C4430 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4430
dev_langs:
- C++
helpviewer_keywords:
- C4430
ms.assetid: 12efbfff-aa58-4a86-a7d6-2c6a12d01dd3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 79c0045b568a24ad6702e748e82a8ebd88c41044
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093922"
---
# <a name="compiler-warning-c4430"></a>Avviso del compilatore C4430

identificatore di tipo mancante, verrà utilizzato int. Nota: C++ non supporta l'impostazione predefinita-int

Questo errore può verificarsi in seguito a operazioni di conformità del compilatore eseguite per Visual C++ 2005: tutte le dichiarazioni devono specificare in modo esplicito il tipo. non è più verrà utilizzato int.

C4430 viene sempre generato come errore.  È possibile disattivare questo avviso con il `#pragma warning` oppure **/wd**; vedere [avviso](../../preprocessor/warning.md) o [/w, /W0, / W1, / W2, / w3, / W4, / W1, / W2, / w3, / W4, /Wall, /wd, / we, /wo, /Wv, /WX (livello avviso)](../../build/reference/compiler-option-warning-level.md)per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4430.

```
// C4430.cpp
// compile with: /c
struct CMyClass {
   CUndeclared m_myClass;  // C4430
   int m_myClass;  // OK
};

typedef struct {
   POINT();   // C4430
   // try the following line instead
   // int POINT();
   unsigned x;
   unsigned y;
} POINT;
```