---
title: Errore del compilatore C2600
ms.date: 11/04/2016
f1_keywords:
- C2600
helpviewer_keywords:
- C2600
ms.assetid: cce11943-ea01-4bee-a7b0-b67d24ec6493
ms.openlocfilehash: 4d9e94790c3f4b2fa0aaf36894f0b12c7134a9ed
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62215666"
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