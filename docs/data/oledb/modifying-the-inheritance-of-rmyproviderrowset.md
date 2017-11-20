---
title: "Modifica dell'ereditarietà di RMyProviderRowset | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- RMyProviderRowset
- inheritance [C++]
ms.assetid: 33089c90-98a4-43e7-8e67-d4bb137e267e
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e8ecfe35d61762b8beaa217eaacc4202a588debb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="modifying-the-inheritance-of-rmyproviderrowset"></a>Modifica dell'ereditarietà di RMyProviderRowset
Per aggiungere il `IRowsetLocate` l'interfaccia per l'esempio di un provider semplice in sola lettura, modificare l'ereditarietà di **RMyProviderRowset**. Inizialmente, **RMyProviderRowset** eredita da `CRowsetImpl`. È necessario modificare in modo che erediti da **CRowsetBaseImpl**.  
  
 A tale scopo, creare una nuova classe, `CMyRowsetImpl`, in MyProviderRS. H:  
  
```  
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
template <class T, class Storage, class CreatorClass, class ArrayType = CAtlArray<Storage> >  
class CMyRowsetImpl:  
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType, CSimpleRow, IRowsetLocateImpl< T, IRowsetLocate > >  
{  
...  
};  
```  
  
 A questo punto, modificare la mappa dell'interfaccia COM in MyProviderRS. H come segue:  
  
```  
BEGIN_COM_MAP(CMyRowsetImpl)  
   COM_INTERFACE_ENTRY(IRowsetLocate)  
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)  
END_COM_MAP()  
```  
  
 Crea una mappa dell'interfaccia COM che comunica `CMyRowsetImpl` chiamare **QueryInterface** sia per il `IRowset` e `IRowsetLocate` interfacce. Per ottenere l'implementazione per l'altro set di righe tutte le classi, i collegamenti della mappa di `CMyRowsetImpl` classe eseguire il backup per il **CRowsetBaseImpl** classe definiti tramite i modelli OLE DB, la mappa usa la macro COM_INTERFACE_ENTRY_CHAIN, che indica Eseguire il mapping di modelli OLE DB per analizzare il modello COM in **CRowsetBaseImpl** in risposta a un `QueryInterface` chiamare.  
  
 Collegare infine `RAgentRowset` a `CMyRowsetBaseImpl` modificando `RAgentRowset` da cui ereditare `CMyRowsetImpl`, come segue:  
  
```  
class RAgentRowset : public CMyRowsetImpl<RAgentRowset, CAgentMan, CMyProviderCommand>  
```  
  
 `RAgentRowset`ora è possibile utilizzare il `IRowsetLocate` interfaccia mentre il resto dell'implementazione della classe di rowset.  
  
 Quando questa operazione, è possibile [determinare in modo dinamico le colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)