---
description: 'Altre informazioni su: errore del compilatore C2244'
title: Errore del compilatore C2244
ms.date: 11/04/2016
f1_keywords:
- C2244
helpviewer_keywords:
- C2244
ms.assetid: d9911c12-ceb5-4f93-ac47-b44a485215c2
ms.openlocfilehash: 9f541eca155b9d728f0bbf7cb1578a6e3424c49c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302243"
---
# <a name="compiler-error-c2244"></a>Errore del compilatore C2244

' Identifier ': Impossibile trovare una corrispondenza tra la definizione della funzione e una dichiarazione esistente

Un uso insolito dell'operatore unario + è stato usato davanti a una chiamata di funzione che non ha parentesi.

Questo errore si verifica solo nei progetti C++.

L'esempio seguente genera l'C2244:

```cpp
// C2244.cpp
int func(char) {
   return 0;
}

int func(int) {
   return 0;
}

int main() {
   +func;   // C2244
}
```

C2244 può verificarsi anche quando una firma di funzione non corretta viene utilizzata per una funzione membro di un modello di classe.

```cpp
// C2244b.cpp
// compile with: /c
template<class T>
class XYZ {
   void func(T t);
};

template<class T>
void XYZ<T>::func(int i) {}   // C2244 wrong function signature
// try the following line instead
// void XYZ<T>::func(T t) {}
```

C2244 può verificarsi anche quando viene utilizzata una firma di funzione non corretta per un modello di funzione membro.

```cpp
// C2244c.cpp
// compile with: /c
class ABC {
   template<class T>
   void func(int i, T t);
};

template<class T>
void ABC::func(int i) {}   // C2244 wrong signature
// try the following line instead
// void ABC::func(int i, T t) {}
```

Non è possibile specializzare parzialmente un modello di funzione.

```cpp
// C2244d.cpp
template<class T, class U>
class QRS {
   void func(T t, U u);
};

template<class T>
void QRS<T,int>::func(T t, int u) {}   // C2244
```
