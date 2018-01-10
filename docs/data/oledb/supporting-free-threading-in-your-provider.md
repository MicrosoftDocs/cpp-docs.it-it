---
title: Modello di Threading Free nel Provider di supporto | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE DB providers, multithreaded
- threading [C++], providers
ms.assetid: a91270dc-cdf9-4855-88e7-88a54be7cbe8
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 14bd61bc4f319a50abdbf76d7f6e60e511e57312
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="supporting-free-threading-in-your-provider"></a>Supporto del modello di threading Free nel provider
Tutte le classi del provider OLE DB sono thread-safe e voci del Registro di sistema vengono impostate di conseguenza. È consigliabile per supportare modelli di threading free per fornire un livello elevato di prestazioni in situazioni multiutente. Per mantenere il provider di thread-safe, è necessario verificare che il codice è stato bloccato in modo corretto. Ogni volta che si scrivono o archiviare i dati, è necessario bloccare l'accesso con le sezioni critiche.  
  
 Ogni oggetto modello di provider OLE DB è una sezione critica. Per rendere il blocco, ogni nuova classe creata deve essere una classe di modello che accetta la classe padre nome come argomento.  
  
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
  
 È inoltre necessario verificare che tutti i metodi eseguire l'override (ad esempio `Execute`) sono thread-safe.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)