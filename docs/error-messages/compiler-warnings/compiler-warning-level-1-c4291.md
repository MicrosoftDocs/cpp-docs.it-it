---
title: Compilatore avviso (livello 1) C4291 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4291
dev_langs:
- C++
helpviewer_keywords:
- C4291
ms.assetid: c2b95dea-38f2-4609-9104-707c30798da4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c10351be640dc142f224cb5583a980e396f086cd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4291"></a>Avviso del compilatore (livello 1) C4291
'declaration': operatore delete corrispondente non trovato. memoria non vengono liberata se l'inizializzazione genera un'eccezione  
  
 Un posizionamento [nuova](../../cpp/new-operator-cpp.md) viene utilizzato per cui non esiste alcuna posizione [eliminare](../../cpp/delete-operator-cpp.md).  
  
 Quando di memoria allocata per un oggetto con l'operatore **nuova**, viene chiamato il costruttore dell'oggetto. Se il costruttore genera un'eccezione, è necessario deallocare la memoria allocata per l'oggetto. Questa operazione non può essere eseguita, a meno che un operatore **eliminare** funzione esiste corrispondente all'operatore **nuova**.  
  
 Se si utilizza l'operatore **nuova** senza argomenti aggiuntivi e si esegue la compilazione con [/GX](../../build/reference/gx-enable-exception-handling.md), [/EHs](../../build/reference/eh-exception-handling-model.md), o /EHa opzioni per abilitare la gestione delle eccezioni, il compilatore genera codice per chiamare l'operatore **eliminare** se il costruttore genera un'eccezione.  
  
 Se si usa il form di posizione di **nuova** (operatore) (il form con gli argomenti oltre alla dimensione dell'allocazione) e il costruttore dell'oggetto genera un'eccezione, il compilatore genererà comunque codice per chiamare l'operatore **eliminare**; ma solo se un form di posizione dell'operatore **eliminare** esiste una corrispondenza il form di posizione dell'operatore **nuovo** che allocata la memoria. Ad esempio:  
  
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
  
 Nell'esempio precedente viene generato l'avviso C4291 perché nessun form di posizione dell'operatore **eliminare** è stato definito il form di posizione dell'operatore corrispondente **nuova**. Per risolvere il problema, inserire il codice seguente sopra **principale**. Si noti che tutti dell'operatore di overload **eliminare** parametri di funzione corrispondono a quelli dell'operatore di overload **nuova**, tranne il primo parametro.  
  
```  
void operator delete(void* pMem, char* pszFilename, int nLine)  
{  
   free(pMem);  
}  
```