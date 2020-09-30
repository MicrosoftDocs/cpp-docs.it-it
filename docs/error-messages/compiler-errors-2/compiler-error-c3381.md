---
title: Errore del compilatore C3381
description: Errore del compilatore Microsoft C++ C3381, le sue cause e come risolverli.
ms.date: 09/28/2020
f1_keywords:
- C3381
helpviewer_keywords:
- C3381
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
ms.openlocfilehash: 48a6c81f9506c532333b5353b8b194d17c91043f
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91510147"
---
# <a name="compiler-error-c3381"></a>Errore del compilatore C3381

> '*Identifier*': gli identificatori di accesso agli assembly sono disponibili solo nel codice compilato con un'opzione/CLR

Un tipo è stato dichiarato o definito usando un identificatore di accesso, che è consentito solo nel codice compilato usando **`/clr`** .

## <a name="remarks"></a>Osservazioni

Questo errore può essere causato da una parola chiave, o, o da **`public`** **`protected`** **`private`** due punti mancanti ( **`:`** ) dopo un identificatore di accesso all'interno di un oggetto **`class`** o **`struct`** .

In C++/CLI i tipi nativi possono essere visibili all'esterno di un assembly, ma è possibile specificare solo l'accesso agli assembly per i tipi nativi in una **`/clr`** compilazione. Per ulteriori informazioni, vedere [visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [ `/clr` (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3381. Per risolvere il problema, rimuovere prima l' **`public`** identificatore dalla `class A` definizione oppure compilare usando l' **`/clr`** opzione. Successivamente, aggiungere i due punti dopo **`private`** per specificare l'accesso per `class B {} b;` . Questo perché una classe annidata non può avere un identificatore di accesso assembly come parte della relativa dichiarazione.

```cpp
// C3381.cpp
// compile with: /c
public class A {   // C3381
    private class B {} b;   // C3381
};
```
