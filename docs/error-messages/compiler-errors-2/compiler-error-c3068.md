---
description: 'Altre informazioni su: errore del compilatore C3068'
title: Errore del compilatore C3068
ms.date: 11/04/2016
f1_keywords:
- C3068
helpviewer_keywords:
- C3068
ms.assetid: 613e3447-b4a8-4268-a661-297bed63ccdf
ms.openlocfilehash: a73c525f017a3d571600e31d4c9ea875d0b25662
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281673"
---
# <a name="compiler-error-c3068"></a>Errore del compilatore C3068

' Function ': una funzione ' Naked ' non può contenere oggetti che richiedono la rimozione se si è verificata un'eccezione C++

Il compilatore non è riuscito a eseguire la rimozione dello stack su una funzione [naked](../../cpp/naked-cpp.md) che ha generato un'eccezione perché è stato creato un oggetto temporaneo nella funzione e la gestione delle eccezioni C++ ([/EHsc](../../build/reference/eh-exception-handling-model.md)) è stata specificata.

Per correggere l'errore, eseguire almeno una delle operazioni seguenti:

- Non compilare con/EHsc.

- Non contrassegnare la funzione come `naked` .

- Non creare un oggetto temporaneo nella funzione.

Se una funzione crea un oggetto temporaneo nello stack, se la funzione genera un'eccezione e se è abilitata la gestione delle eccezioni C++, il compilatore eliminerà lo stack se viene generata un'eccezione.

Quando viene generata un'eccezione, il codice generato dal compilatore, denominato prologo e epilogo e che non sono presenti in una funzione naked, viene eseguito per una funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3068:

```cpp
// C3068.cpp
// compile with: /EHsc
// processor: x86
class A {
public:
   A(){}
   ~A(){}
};

void b(A){}

__declspec(naked) void c() {
   b(A());   // C3068
};
```
