---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4714'
title: Avviso del compilatore (livello 4) C4714
ms.date: 11/04/2016
f1_keywords:
- C4714
helpviewer_keywords:
- C4714
ms.assetid: 22c7fd0c-899d-4e9b-95f3-725b2c49fb46
ms.openlocfilehash: aca186ba6d81c0d769837e26023538e7e980fbc6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330571"
---
# <a name="compiler-warning-level-4-c4714"></a>Avviso del compilatore (livello 4) C4714

> funzione ' Function ' contrassegnata come __forceinline non impostata come inline

La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.

Sebbene **`__forceinline`** sia un'indicazione più avanzata al compilatore rispetto a **`__inline`** , l'incorporamento viene comunque eseguito a discrezione del compilatore, ma non viene usata alcuna euristica per determinare i vantaggi derivanti dall'incorporamento di questa funzione.

In alcuni casi, il compilatore non informerà una particolare funzione per motivi meccanici. Il compilatore, ad esempio, non inline:

- Funzione se comporterebbe la combinazione di SEH e C++ EH.

- Alcune funzioni con gli oggetti copia costruiti vengono passate per valore quando-GX/EHs/EHa è on.

- Funzioni che restituiscono un oggetto rimuovibile per valore quando-GX/EHs/EHa è on.

- Funzioni con assembly inline durante la compilazione senza-Og/Ox/O1/O2.

- Funzioni con un elenco di argomenti variabile.

- Funzione con un' **`try`** istruzione (gestione delle eccezioni C++).

L'esempio seguente genera l'C4714:

```cpp
// C4714.cpp
// compile with: /Ob1 /GX /W4
__forceinline void func1()
{
   try
   {
   }
   catch (...)
   {
   }
}

void func2()
{
   func1();   // C4714
}

int main()
{
}
```
