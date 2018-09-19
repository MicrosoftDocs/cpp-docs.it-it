---
title: Errore del compilatore C2084 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2084
dev_langs:
- C++
helpviewer_keywords:
- C2084
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 09ce703b6908257e37c2b7ff1b2714f1426f941f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052113"
---
# <a name="compiler-error-c2084"></a>Errore del compilatore C2084

funzione '*funzione*' dispone già di un corpo

La funzione è già stata definita.

Nelle versioni di Visual C++ precedenti Visual Studio 2002,

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