---
description: 'Altre informazioni su: errore del compilatore C2574'
title: Errore del compilatore C2574
ms.date: 11/04/2016
f1_keywords:
- C2574
helpviewer_keywords:
- C2574
ms.assetid: 3e1c5c18-ee8b-4dbb-bfc0-d3b8991af71b
ms.openlocfilehash: 361cc52f2a76e5470109db07ccabbe6d78291a43
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97208892"
---
# <a name="compiler-error-c2574"></a>Errore del compilatore C2574

' distruttore ': non può essere dichiarato static

Non è possibile dichiarare né i distruttori né i costruttori **`static`** .

L'esempio seguente genera l'C2574:

```cpp
// C2574.cpp
// compile with: /c
class A {
   virtual static ~A();   // C2574
   //  try the following line instead
   // virtual ~A();
};
```
