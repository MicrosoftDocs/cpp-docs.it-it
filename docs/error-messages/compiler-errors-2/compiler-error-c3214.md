---
title: Errore del compilatore C3214 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3214
dev_langs:
- C++
helpviewer_keywords:
- C3214
ms.assetid: 49ee4a9a-2549-4adb-9d3a-38e154303c2e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a4ac7e1e5f07de87d19995e661520ed44fced955
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46135828"
---
# <a name="compiler-error-c3214"></a>Errore del compilatore C3214

'type': argomento di tipo non valido per il parametro generico 'param' del 'generic_type' generico. Vincolo 'constraint' non soddisfatto

Il tipo è stato specificato per la creazione di un'istanza di una classe generica che non soddisfa il vincolo della classe generica.

L'esempio seguente genera l'errore C3214:

```
// C3214.cpp
// compile with: /clr
interface struct A {};

generic <class T>
where T : A
ref class C {};

ref class X : public A {};

int main() {
   C<int>^ c = new C<int>;   // C3214
   C<X ^> ^ c2 = new C<X^>;   // OK
}
```