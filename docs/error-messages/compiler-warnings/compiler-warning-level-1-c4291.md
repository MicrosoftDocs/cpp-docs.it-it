---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4291'
title: Avviso del compilatore (livello 1) C4291
ms.date: 11/04/2016
f1_keywords:
- C4291
helpviewer_keywords:
- C4291
ms.assetid: c2b95dea-38f2-4609-9104-707c30798da4
ms.openlocfilehash: 190fbb1ed91c5524dcd83a0a02a0b0280e264891
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340112"
---
# <a name="compiler-warning-level-1-c4291"></a>Avviso del compilatore (livello 1) C4291

' declaration ': non è stato trovato alcun operatore delete corrispondente. la memoria non verrà liberata se l'inizializzazione genera un'eccezione

Viene utilizzato un [nuovo](../../cpp/new-operator-cpp.md) posizionamento per il quale non è presente alcuna [eliminazione](../../cpp/delete-operator-cpp.md)di posizionamento.

Quando viene allocata memoria per un oggetto con operatore **`new`** , viene chiamato il costruttore dell'oggetto. Se il costruttore genera un'eccezione, è necessario deallocare la memoria allocata per l'oggetto. Questa operazione non può essere eseguita a meno **`delete`** che non esista una funzione dell'operatore corrispondente all'operatore **`new`** .

Se si usa l'operatore **`new`** senza argomenti aggiuntivi e si compila con le opzioni [/GX](../../build/reference/gx-enable-exception-handling.md), [/EHS](../../build/reference/eh-exception-handling-model.md)o/EHA per abilitare la gestione delle eccezioni, il compilatore genererà il codice per chiamare operator **`delete`** se il costruttore genera un'eccezione.

Se si usa il formato di posizionamento dell' **`new`** operatore (il form con gli argomenti oltre alla dimensione dell'allocazione) e il costruttore dell'oggetto genera un'eccezione, il compilatore genererà comunque il codice per chiamare operator, **`delete`** ma solo se esiste una forma di posizione dell'operatore **`delete`** che corrisponde al formato di posizionamento dell'operatore che ha **`new`** allocato la memoria. Ad esempio:

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

L'esempio precedente genera l'avviso C4291 perché non è stata definita alcuna forma di posizionamento dell'operatore **`delete`** corrispondente al formato di posizionamento dell'operatore **`new`** . Per risolvere il problema, inserire il codice seguente sopra **Main**. Si noti che tutti i parametri della funzione dell'operatore **`delete`** di overload corrispondono a quelli dell'operatore di overload **`new`** , ad eccezione del primo parametro.

```cpp
void operator delete(void* pMem, char* pszFilename, int nLine)
{
   free(pMem);
}
```
