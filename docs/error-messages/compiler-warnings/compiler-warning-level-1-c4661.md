---
title: Compilatore avviso (livello 1) C4661 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4661
dev_langs:
- C++
helpviewer_keywords:
- C4661
ms.assetid: 603bb8b7-356d-4eef-924b-64d769bac5bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1823e23f3afc432982d0d68eee3fe080fe52d719
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045757"
---
# <a name="compiler-warning-level-1-c4661"></a>Avviso del compilatore (livello 1) C4661

'identifier': nessuna definizione adatta fornita per la richiesta di creazione di un'istanza di modello espliciti

Non è definito un membro della classe modello.

## <a name="example"></a>Esempio

```
// C4661.cpp
// compile with: /W1 /LD
template<class T> class MyClass {
public:
   void i();   // declaration but not definition
};
template MyClass< int >;  // C4661
```