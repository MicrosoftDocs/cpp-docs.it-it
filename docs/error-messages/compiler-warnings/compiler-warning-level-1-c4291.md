---
title: Avviso del compilatore (livello 1) C4291
ms.date: 11/04/2016
f1_keywords:
- C4291
helpviewer_keywords:
- C4291
ms.assetid: c2b95dea-38f2-4609-9104-707c30798da4
ms.openlocfilehash: c1972236e30be4e6ca738b606b00398f5c7860e0
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754863"
---
# <a name="compiler-warning-level-1-c4291"></a>Avviso del compilatore (livello 1) C4291

'dichiarazione': nessun operatore corrispondente delete trovato; la memoria non verrà liberata se l'inizializzazione genera un'eccezione

Viene utilizzato un [nuovo](../../cpp/new-operator-cpp.md) posizionamento per il quale non è presente alcuna [eliminazione](../../cpp/delete-operator-cpp.md)di posizionamento.

Quando la memoria viene allocata per un oggetto con operatore **new**, viene chiamato il costruttore dell'oggetto. Se il costruttore genera un'eccezione, qualsiasi memoria allocata per l'oggetto deve essere deallocata. Questa operazione non può avvenire a meno che non esista una funzione operator **delete** che corrisponda all'operatore **new**.

Se si utilizza l'operatore **new** senza argomenti aggiuntivi e si esegue la compilazione con le opzioni [/GX](../../build/reference/gx-enable-exception-handling.md), [/EHs](../../build/reference/eh-exception-handling-model.md)o /EHa per abilitare la gestione delle eccezioni, il compilatore genererà il codice per chiamare l'operatore **delete** se il costruttore genera un'eccezione.

Se si utilizza la forma di posizionamento dell'operatore **new** (il modulo con argomenti oltre alla dimensione dell'allocazione) e il costruttore dell'oggetto genera un'eccezione, il compilatore genererà comunque il codice per chiamare operator **delete**; ma lo farà solo se esiste una forma di posizionamento di operator **delete** corrispondente alla forma di posizionamento dell'operatore **new** che ha allocato la memoria. Ad esempio:

```cpp
// C4291.cpp
// compile with: /EHsc /W1
#include <malloc.h>

class CList
{
public:
   CList(int)
   {
      throw "Fail!";
   }
};

void* operator new(size_t size, char* pszFilename, int nLine)
{
   return malloc(size);
}

int main(void)
{
   try
   {
      // This will call ::operator new(unsigned int) to allocate heap
      // memory. Heap memory pointed to by pList1 will automatically be
      // deallocated by a call to ::operator delete(void*) when
      // CList::CList(int) throws an exception.
      CList* pList1 = new CList(10);
   }
   catch (...)
   {
   }

   try
   {
      // This will call the overloaded ::operator new(size_t, char*, int)
      // to allocate heap memory. When CList::CList(int) throws an
      // exception, ::operator delete(void*, char*, int) should be called
      // to deallocate the memory pointed to by pList2. Since
      // ::operator delete(void*, char*, int) has not been implemented,
      // memory will be leaked when the deallocation cannot occur.
      CList* pList2 = new(__FILE__, __LINE__) CList(20);   // C4291
   }
   catch (...)
   {
   }
}
```

Nell'esempio precedente viene generato l'avviso C4291 perché non è stata definita alcuna forma di posizionamento dell'operatore **delete** che corrisponda alla forma di posizionamento di operator **new**. Per risolvere il problema, inserire il codice seguente sopra **main**. Si noti che tutti i parametri della funzione **di eliminazione** dell'operatore di overload corrispondono a quelli dell'operatore di overload **new**, ad eccezione del primo parametro.

```cpp
void operator delete(void* pMem, char* pszFilename, int nLine)
{
   free(pMem);
}
```
