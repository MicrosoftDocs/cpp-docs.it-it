---
title: "Supporto del modello di threading Free nel provider | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "provider OLE DB, multithreading"
  - "threading [C++], provider"
ms.assetid: a91270dc-cdf9-4855-88e7-88a54be7cbe8
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Supporto del modello di threading Free nel provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tutte le classi dei provider OLE DB sono thread\-safe e le voci del Registro di sistema vengono impostate di conseguenza.  Per garantire prestazioni di livello superiore in situazioni multiutente, si consiglia di supportare il modello di threading Free.  Per garantire che il provider rimanga thread\-safe, è necessario verificare che il codice sia bloccato adeguatamente.  Ogni volta che si scrivono o si memorizzano dati, è necessario bloccare l'accesso a sezioni critiche.  
  
 Ciascun modello provider OLE DB presenta una sezione critica.  Per facilitarne il blocco, ogni nuova classe creata dovrà essere una classe modello che accetta come argomento il nome della classe padre.  
  
 Nell'esempio seguente viene illustrato come bloccare il codice:  
  
```  
template <class T>  
class CMyObject<T> : public...  
  
HRESULT MyObject::MyMethod(void)  
{  
   T* pT = (T*)this;      // this gets the parent class   
  
// You don't need to do anything if you are only reading information  
  
// If you want to write information, do the following:  
   pT->Lock();         // engages critical section in the object  
   ...;                // write whatever information you wish  
   pT->Unlock();       // disengages the critical section  
}  
```  
  
 Per ulteriori informazioni su come proteggere le sezioni critiche con `Lock` e `Unlock`, vedere [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
 È inoltre necessario verificare che eventuali metodi di cui si esegue l'override, ad esempio `Execute`, siano thread\-safe.  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)