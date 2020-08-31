---
title: Avviso del compilatore (livello 3) C4686
description: Avviso del compilatore Microsoft C++ C4686.
ms.date: 08/29/2020
f1_keywords:
- C4686
helpviewer_keywords:
- C4686
ms.assetid: 767c83c2-9e4b-4f9e-88c8-02128ba563f4
ms.openlocfilehash: 6886ae7f413de630457b53e85b5cd75c4542ee19
ms.sourcegitcommit: 3628707bc17c99aac7aac27eb126cc2eaa4d07b4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/31/2020
ms.locfileid: "89194497"
---
# <a name="compiler-warning-level-3-c4686"></a>Avviso del compilatore (livello 3) C4686

> '*tipo definito dall'utente*': possibile modifica del comportamento. modifica nella convenzione di chiamata return UDT

## <a name="remarks"></a>Commenti

Una specializzazione del modello di classe non è stata definita prima dell'utilizzo in un tipo restituito. Qualsiasi elemento che crea un'istanza della classe risolve C4686; sono inoltre disponibili opzioni per dichiarare un'istanza o accedere a un membro (ad esempio `C<int>::some_member` ).

Per impostazione predefinita, questo avviso non è attivo. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

In alternativa, provare a eseguire le operazioni seguenti:

```cpp
// C4686.cpp
// compile with: /W3
#pragma warning (default : 4686)
template <class T>
class C;

template <class T>
C<T> f(T);

template <class T>
class C {};

int main() {
   f(1);   // C4686
}

template <class T>
C<T> f(T) {
   return C<int>();
}
```
