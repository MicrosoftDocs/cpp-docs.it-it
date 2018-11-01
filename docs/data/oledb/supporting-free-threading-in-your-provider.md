---
title: Supporto del modello di threading Free nel provider
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB providers, multithreaded
- threading [C++], providers
ms.assetid: a91270dc-cdf9-4855-88e7-88a54be7cbe8
ms.openlocfilehash: 653736b52c116f1c72856bf0c12e9deff05e0cfb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676200"
---
# <a name="supporting-free-threading-in-your-provider"></a>Supporto del modello di threading Free nel provider

Tutte le classi del provider OLE DB sono thread-safe e voci del Registro di sistema vengono impostate di conseguenza. È una buona idea per supportare modelli di threading free per fornire un elevato livello di prestazioni in situazioni multiutente. Per mantenere il provider sia thread-safe, è necessario verificare che il codice viene bloccato in modo corretto. Ogni volta che si scrivono o archiviare i dati, è necessario bloccare l'accesso con le sezioni critiche.

Ogni oggetto modello di provider OLE DB ha una sezione critica. Per rendere più semplice di blocco, ogni nuova classe creata deve essere una classe di modello che accetta la classe padre nome come argomento.

Nell'esempio seguente mostra come bloccare il codice:

```cpp
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

Per altre informazioni su come proteggere sezioni critiche con `Lock` e `Unlock`, vedere [Multithreading: come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

È inoltre necessario verificare che tutti i metodi si esegue l'override (ad esempio `Execute`) sono thread-safe.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)