---
title: Avviso del compilatore (livello 1) C4291
ms.date: 11/04/2016
f1_keywords:
- C4291
helpviewer_keywords:
- C4291
ms.assetid: c2b95dea-38f2-4609-9104-707c30798da4
ms.openlocfilehash: e1b787e7149afe93fb50cc1e6ceaecba2e787876
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465559"
---
# <a name="compiler-warning-level-1-c4291"></a>Avviso del compilatore (livello 1) C4291

'declaration': operatore delete corrispondente non trovato. memoria non verranno liberata se inizializzazione genera un'eccezione

Un posizionamento [nuove](../../cpp/new-operator-cpp.md) viene usato per cui non esiste alcuna posizione [eliminare](../../cpp/delete-operator-cpp.md).

Quando la memoria viene allocata per un oggetto con l'operatore **nuovo**, viene chiamato il costruttore dell'oggetto. Se il costruttore genera un'eccezione, è necessario deallocare memoria allocata per l'oggetto. Questa operazione non può essere eseguita, a meno che un operatore **eliminare** esiste una funzione corrispondente all'operatore **nuove**.

Se si usa l'operatore **nuove** senza argomenti aggiuntivi e compilazione con [/GX](../../build/reference/gx-enable-exception-handling.md), [/EHs](../../build/reference/eh-exception-handling-model.md), o /EHa opzioni per abilitare la gestione delle eccezioni, il compilatore genera codice per chiamare l'operatore **eliminare** se il costruttore genera un'eccezione.

Se si usa il form di posizione di **nuovo** operatore (il modulo con argomenti oltre alla dimensione dell'allocazione) e il costruttore dell'oggetto genera un'eccezione, il compilatore genererà comunque codice per chiamare l'operatore **eliminare**; ma solo se un form di posizione dell'operatore **eliminare** esiste il form di posizione dell'operatore di corrispondenza **nuovo** che la memoria allocata. Ad esempio:

```
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

Nell'esempio precedente viene generato l'avviso C4291 perché nessun form di posizione dell'operatore **eliminare** è stato definito che corrisponde il form di posizione dell'operatore **nuove**. Per risolvere il problema, inserire il codice seguente sopra **principale**. Si noti che tutti dell'operatore di overload **eliminare** parametri della funzione corrispondono a quelle dell'operatore di overload **nuove**, eccetto il primo parametro.

```
void operator delete(void* pMem, char* pszFilename, int nLine)
{
   free(pMem);
}
```