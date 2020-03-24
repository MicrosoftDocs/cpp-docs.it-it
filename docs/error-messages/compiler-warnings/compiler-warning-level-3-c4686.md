---
title: Avviso del compilatore (livello 3) C4686
ms.date: 08/27/2018
f1_keywords:
- C4686
helpviewer_keywords:
- C4686
ms.assetid: 767c83c2-9e4b-4f9e-88c8-02128ba563f4
ms.openlocfilehash: a8eae1ddeb875d267b82c67e989cb41e8c9b2afb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185451"
---
# <a name="compiler-warning-level-3-c4686"></a>Avviso del compilatore (livello 3) C4686

> '*tipo definito dall'utente*': possibile modifica del comportamento. modifica nella convenzione di chiamata return UDT

## <a name="remarks"></a>Osservazioni

Una specializzazione del modello di classe non è stata definita prima dell'utilizzo in un tipo restituito. Qualsiasi elemento che crea un'istanza della classe risolverà C4686; sono inoltre disponibili opzioni per dichiarare un'istanza o accedere a un membro (C\<int >:: Anything).

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

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
