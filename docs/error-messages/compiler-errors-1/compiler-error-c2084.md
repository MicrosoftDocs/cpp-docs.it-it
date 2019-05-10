---
title: Errore del compilatore C2084
ms.date: 11/04/2016
f1_keywords:
- C2084
helpviewer_keywords:
- C2084
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
ms.openlocfilehash: 0f7e049bc3f96e0a8e2b0a8cd306afeff52f7a5f
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447331"
---
# <a name="compiler-error-c2084"></a>Errore del compilatore C2084

funzione '*funzione*' dispone già di un corpo

La funzione è già stata definita.

Before Visual Studio 2002,

- Il compilatore accetterebbero più specializzazioni del modello che risolto con lo stesso tipo effettivo, anche se le definizioni aggiuntive non sarebbero mai disponibili. Il compilatore ora rileva questi più definizioni.

- `__int32` e `int` venivano considerate come tipi distinti. Ora il compilatore tratta `__int32` come sinonimo di `int`. Ciò significa che il compilatore rileva più definizioni, se una funzione è sottoposta a overload sia `__int32` e `int` e restituisce un errore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2084:

```cpp
// C2084.cpp
void Func(int);
void Func(int) {}   // define function
void Func(int) {}   // C2084 second definition
```

Per correggere questo errore, rimuovere la definizione duplicata:

```
// C2084b.cpp
// compile with: /c
void Func(int);
void Func(int) {}
```