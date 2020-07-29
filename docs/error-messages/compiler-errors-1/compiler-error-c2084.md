---
title: Errore del compilatore C2084
ms.date: 11/04/2016
f1_keywords:
- C2084
helpviewer_keywords:
- C2084
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
ms.openlocfilehash: f217e0b94e27c0f85879e80b3ae887cb4f76f486
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216362"
---
# <a name="compiler-error-c2084"></a>Errore del compilatore C2084

la funzione '*Function*' ha già un corpo

La funzione è già stata definita.

Prima di Visual Studio 2002,

- Il compilatore accetterebbe più specializzazioni del modello risolte nello stesso tipo effettivo, sebbene le definizioni aggiuntive non sarebbero mai disponibili. Il compilatore ora rileva queste più definizioni.

- **`__int32`** e **`int`** sono stati considerati tipi distinti. Il compilatore ora considera **`__int32`** come sinonimo di **`int`** . Ciò significa che il compilatore rileva più definizioni se una funzione viene sottoporre a overload in **`__int32`** e **`int`** e restituisce un errore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2084:

```cpp
// C2084.cpp
void Func(int);
void Func(int) {}   // define function
void Func(int) {}   // C2084 second definition
```

Per correggere l'errore, rimuovere la definizione duplicata:

```cpp
// C2084b.cpp
// compile with: /c
void Func(int);
void Func(int) {}
```
