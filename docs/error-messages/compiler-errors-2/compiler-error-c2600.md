---
title: Errore del compilatore C2600 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2600
dev_langs:
- C++
helpviewer_keywords:
- C2600
ms.assetid: cce11943-ea01-4bee-a7b0-b67d24ec6493
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c1846cefa78c8df13e8ca3c1a7fbc142ba2bf6ad
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022084"
---
# <a name="compiler-error-c2600"></a>Errore del compilatore C2600

'funzione': impossibile definire una funzione membro speciale generata dal compilatore. Occorre prima dichiararla nella classe

Prima che le funzioni di membro quali costruttori o distruttori per una classe possano essere definite, è necessario che siano dichiarate nella classe. Il compilatore può generare costruttori e distruttori predefiniti (chiamati funzioni membro speciali) se non sono dichiarati nella classe. Tuttavia, se si definisce una di queste funzioni senza una dichiarazione corrispondente nella classe, il compilatore rileva un conflitto.

Per correggere questo errore, nella dichiarazione della classe, dichiarare ogni funzione membro definita all'esterno della dichiarazione di classe.

Il seguente codice di esempio genera l'errore C2600:

```
// C2600.cpp
// compile with: /c
class C {};
C::~C() {}   // C2600

class D {
   D::~D();
};

D::~D() {}
```