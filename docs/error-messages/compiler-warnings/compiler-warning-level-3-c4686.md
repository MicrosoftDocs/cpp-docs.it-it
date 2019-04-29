---
title: Avviso del compilatore (livello 3) C4686
ms.date: 08/27/2018
f1_keywords:
- C4686
helpviewer_keywords:
- C4686
ms.assetid: 767c83c2-9e4b-4f9e-88c8-02128ba563f4
ms.openlocfilehash: 5e23e6aa69fe8a59e3dfd22af7e33780c223cdd3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401605"
---
# <a name="compiler-warning-level-3-c4686"></a>Avviso del compilatore (livello 3) C4686

> «*tipo definito dall'utente*': possibile modifica del comportamento modifica nel tipo definito dall'utente restituiscono la convenzione di chiamata

## <a name="remarks"></a>Note

Non è una specializzazione di modello di classe è definita prima di essere usata in un tipo restituito. Tutto ciò che viene creata un'istanza della classe risolverà C4686; dichiarare un'istanza o l'accesso a un membro (C\<int >:: nulla) disponibili anche opzioni.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

Provare a utilizzare il seguente:

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