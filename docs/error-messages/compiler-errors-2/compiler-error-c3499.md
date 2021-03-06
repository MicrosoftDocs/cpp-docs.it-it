---
description: 'Altre informazioni su: errore del compilatore C3499'
title: Errore del compilatore C3499
ms.date: 11/04/2016
f1_keywords:
- C3499
helpviewer_keywords:
- C3499
ms.assetid: 6717de5c-ae0f-4024-bdf2-b5598009e7b6
ms.openlocfilehash: e4e572be1b5e39ccec6bf1ca64eaf62a3e44ef28
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315478"
---
# <a name="compiler-error-c3499"></a>Errore del compilatore C3499

un'espressione lambda specificata in modo che il tipo restituito sia void non può restituire un valore

Il compilatore genera questo errore quando un'espressione lambda che specifica **`void`** come il tipo restituito restituisce un valore oppure quando un'espressione lambda contiene più di un'istruzione e restituisce un valore, ma non specifica il tipo restituito.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Non restituire un valore dall'espressione lambda, o

- Fornire il tipo restituito dell'espressione lambda, o

- Combinare le istruzioni che costituiscono il corpo dell'espressione lambda in una singola istruzione.

## <a name="examples"></a>Esempio

L'esempio seguente genera un errore C3499 perché il corpo di un'espressione lambda contiene più istruzioni e restituisce un valore, ma l'espressione lambda non specifica il tipo restituito:

```cpp
// C3499a.cpp

int main()
{
   [](int x) { int n = x * 2; return n; } (5); // C3499
}
```

L'esempio seguente illustra due possibili soluzioni all'errore C3499. La prima soluzione fornisce il tipo restituito dell'espressione lambda. La seconda soluzione combina le istruzioni che costituiscono il corpo dell'espressione lambda in una singola istruzione.

```cpp
// C3499b.cpp

int main()
{
   // Possible resolution 1:
   // Provide the return type of the lambda expression.
   [](int x) -> int { int n = x * 2; return n; } (5);

   // Possible resolution 2:
   // Combine the statements that make up the body of
   // the lambda expression into a single statement.
   [](int x) { return x * 2; } (5);
}
```

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
