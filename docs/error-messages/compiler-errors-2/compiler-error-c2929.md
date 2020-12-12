---
description: 'Altre informazioni su: errore del compilatore C2929'
title: Errore del compilatore C2929
ms.date: 11/04/2016
f1_keywords:
- C2929
helpviewer_keywords:
- C2929
ms.assetid: 11134027-6adc-4733-b6bd-b94486bd1933
ms.openlocfilehash: b110615a05a416b6bba7256c7f59f734179677a2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320387"
---
# <a name="compiler-error-c2929"></a>Errore del compilatore C2929

'identifier': creazione esplicita di un'istanza. Impossibile forzare e inibire in modo esplicito la creazione di un'istanza di un membro di classe modello

Non è possibile creare un'istanza esplicita di un identificatore ed evitare che ne venga creata un'istanza.

L'esempio seguente genera l'errore C2929:

```cpp
// C2929.cpp
// compile with: /c
template<typename T>
class A {
public:
   A() {}
};

template A<int>::A();

extern template A<int>::A();   // C2929
```
