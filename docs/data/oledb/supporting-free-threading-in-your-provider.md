---
description: 'Altre informazioni su: supporto del threading gratuito nel provider'
title: Supporto del modello di threading Free nel provider
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB providers, multithreaded
- threading [C++], providers
ms.assetid: a91270dc-cdf9-4855-88e7-88a54be7cbe8
ms.openlocfilehash: 4f6785dd85ae043ce0ee74c1dda4fa365c566729
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286475"
---
# <a name="supporting-free-threading-in-your-provider"></a>Supporto del modello di threading Free nel provider

Tutte le classi del provider di OLE DB sono thread-safe e le voci del registro di sistema vengono impostate di conseguenza. È consigliabile supportare il threading libero per fornire un livello elevato di prestazioni in situazioni multiutente. Per evitare che il provider sia thread-safe, è necessario verificare che il codice sia bloccato correttamente. Quando si scrivono o si archiviano dati, è necessario bloccare l'accesso con le sezioni critiche.

Ogni oggetto modello di provider OLE DB dispone di una sezione critica. Per semplificare il blocco, ogni nuova classe creata deve essere una classe modello che accetta il nome della classe padre come argomento.

Nell'esempio seguente viene illustrato come bloccare il codice:

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

Per ulteriori informazioni su come proteggere le sezioni critiche con `Lock` e `Unlock` , vedere [multithreading: come utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

Verificare che i metodi sottoposto a override, ad esempio, `Execute` siano thread-safe.

## <a name="see-also"></a>Vedi anche

[Uso dei modelli di provider di OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
