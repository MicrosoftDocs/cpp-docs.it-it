---
title: "Avviso del compilatore (livello 1) C4291 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4291"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4291"
ms.assetid: c2b95dea-38f2-4609-9104-707c30798da4
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4291
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'dichiarazione': operatore delete corrispondente non trovato. Se l'inizializzazione comporta un'eccezione, la memoria non verrà liberata  
  
 Viene utilizzato un operatore [new](../../cpp/new-operator-cpp.md) di posizione per il quale non esiste un operatore [delete](../../cpp/delete-operator-cpp.md) di posizione.  
  
 Quando la memoria per un oggetto viene allocata con l'operatore **new**, viene chiamato il costruttore dell'oggetto.  Se il costruttore genera un'eccezione, è necessario deallocare la memoria allocata per l'oggetto.  Questa operazione non può essere eseguita se non esiste una funzione di operatore **delete** corrispondente all'operatore **new**.  
  
 Se si utilizza l'operatore **new** senza altri argomenti e si esegue la compilazione con le opzioni [\/GX](../../build/reference/gx-enable-exception-handling.md), [\/EHs](../../build/reference/eh-exception-handling-model.md) o \/EHa per attivare la gestione delle eccezioni, il codice per chiamare l'operatore **delete** verrà generato nel caso in cui il costruttore generi un'eccezione.  
  
 Se si utilizza la forma di posizione dell'operatore **new**, ovvero la forma con argomenti in aggiunta alla dimensione dell'allocazione, e il costruttore dell'oggetto genera un'eccezione, il codice per chiamare l'operatore **delete** verrà generato solo se esiste una forma di posizione di tale operatore corrispondente alla forma di posizione dell'operatore **new** che ha allocato la memoria.  Di seguito è riportato un esempio.  
  
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
  
 Nell'esempio precedente viene generato l'avviso C4291, poiché non è stata definita alcuna forma di posizione dell'operatore **delete** corrispondente alla forma di posizione dell'operatore **new**.  Per risolvere il problema, inserire il seguente codice al di sopra di **main**.  Si noti che tutti i parametri di funzione dell'operatore **delete** di overload corrispondono a quelli dell'operatore **new** di overload, ad eccezione del primo.  
  
```  
void operator delete(void* pMem, char* pszFilename, int nLine)  
{  
   free(pMem);  
}  
```