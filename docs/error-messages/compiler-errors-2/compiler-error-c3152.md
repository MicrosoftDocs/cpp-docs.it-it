---
description: 'Altre informazioni su: errore del compilatore C3152'
title: Errore del compilatore C3152
ms.date: 11/04/2016
f1_keywords:
- C3152
helpviewer_keywords:
- C3152
ms.assetid: 4ee6e2cd-5d19-4b73-833d-765c35797e4b
ms.openlocfilehash: b7e98535003a03ec5ac8b06d23b105d3727ff605
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322062"
---
# <a name="compiler-error-c3152"></a>Errore del compilatore C3152

'construct': 'keyword' può essere applicato solo a una classe, una struct o una funzione membro virtuale

Determinate parole chiave possono essere applicate solo a una classe C++.

L'esempio seguente genera l'errore C3152 e mostra come risolverlo:

```cpp
// C3152.cpp
// compile with: /clr /c
ref class C {
   int (*pfn)() sealed;   // C3152
   virtual int g() sealed;   // OK
};
```
