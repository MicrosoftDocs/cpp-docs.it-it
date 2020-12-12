---
description: 'Altre informazioni su: errore del compilatore C2753'
title: Errore del compilatore C2753
ms.date: 11/04/2016
f1_keywords:
- C2753
helpviewer_keywords:
- C2753
ms.assetid: 92bfeeac-524a-4a8e-9a4f-fb8269055826
ms.openlocfilehash: d7888086f81f26092d41be440f75ef60400229ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174403"
---
# <a name="compiler-error-c2753"></a>Errore del compilatore C2753

'*template*': la specializzazione parziale non può corrispondere all'elenco di argomenti per il modello primario

Se l'elenco di argomenti del modello corrisponde all'elenco di parametri, il compilatore lo considera come lo stesso modello. Non è consentito definire due volte lo stesso modello.

## <a name="example"></a>Esempio

L'esempio seguente genera C2753 e Mostra un modo per risolverlo:

```cpp
// C2753.cpp
// compile with: cl /c C2753.cpp
template<class T>
struct A {};

template<class T>
struct A<T> {};   // C2753
// try the following line instead
// struct A<int> {};

template<class T, class U, class V, class W, class X>
struct B {};
```
