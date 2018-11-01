---
title: Avviso del compilatore (livello 4) C4714
ms.date: 11/04/2016
f1_keywords:
- C4714
helpviewer_keywords:
- C4714
ms.assetid: 22c7fd0c-899d-4e9b-95f3-725b2c49fb46
ms.openlocfilehash: ed94e5b716a697ec96d7fecac75433823c9a67e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50553855"
---
# <a name="compiler-warning-level-4-c4714"></a>Avviso del compilatore (livello 4) C4714

funzione 'funzione' contrassegnata come forceinline non resa inline

La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.

Sebbene `__forceinline` è un'indicazione più forte al compilatore di `__inline`, l'incorporamento viene comunque eseguita a discrezione del compilatore, ma non l'euristica viene utilizzato per determinare i vantaggi derivanti dalla inlining questa funzione.

In alcuni casi, il compilatore creerà non inline una funzione specifica per motivi di meccanici. Ad esempio, il compilatore creerà non inline:

- Una funzione se il risultato sarà la combinazione di sia SEH ed EH di C++.

- Alcune funzioni con copia costruita gli oggetti passati per valore quando - GX//EHs//EHa è on.

- Funzioni che restituiscono un oggetto non rimovibili per valore quando - GX//EHs//EHa è on.

- Funzioni con assembly inline durante la compilazione senza - Og/Ox/O1/O2.

- Funzioni con un elenco di argomenti variabili.

- Una funzione con un **provare** istruzione (gestione delle eccezioni di C++).

L'esempio seguente genera l'errore C4714:

```
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