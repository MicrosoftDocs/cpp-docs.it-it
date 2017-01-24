---
title: "Modifica dell&#39;ereditariet&#224; di RMyProviderRowset | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ereditarietà [C++]"
  - "RMyProviderRowset"
ms.assetid: 33089c90-98a4-43e7-8e67-d4bb137e267e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifica dell&#39;ereditariet&#224; di RMyProviderRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per aggiungere l'interfaccia `IRowsetLocate` all'esempio del provider semplice in sola lettura, modificare l'ereditarietà di **RMyProviderRowset**.  Inizialmente **RMyProviderRowset** eredita da `CRowsetImpl`.  È necessario modificare l'ereditarietà in modo che erediti da **CRowsetBaseImpl**.  
  
 Creare una nuova classe, `CMyRowsetImpl`, in MyProviderRS.h:  
  
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
  
 Modificare quindi la mappa dell'interfaccia COM in MyProviderRS.h come segue:  
  
```  
BEGIN_COM_MAP(CMyRowsetImpl)  
   COM_INTERFACE_ENTRY(IRowsetLocate)  
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)  
END_COM_MAP()  
```  
  
 Verrà creata una mappa dell'interfaccia COM che comunica a `CMyRowsetImpl` di chiamare **QueryInterface** sia per l'interfaccia `IRowset` che per l'interfaccia `IRowsetLocate`.  Per ottenere l'intera implementazione per le altre classi del rowset, nella mappa la classe `CMyRowsetImpl` viene collegata di nuovo alla classe **CRowsetBaseImpl** definita dai Modelli OLE DB. Nella mappa viene utilizzata la macro COM\_INTERFACE\_ENTRY\_CHAIN che comunica ai modelli OLE DB di esaminare la mappa COM in **CRowsetBaseImpl** in risposta a una chiamata di `QueryInterface`.  
  
 Collegare infine `RAgentRowset` a `CMyRowsetBaseImpl` modificando `RAgentRowset` in modo che erediti da `CMyRowsetImpl`, come segue:  
  
```  
class RAgentRowset : public CMyRowsetImpl<RAgentRowset, CAgentMan, CMyProviderCommand>  
```  
  
 `RAgentRowset` potrà quindi utilizzare sia l'interfaccia `IRowsetLocate`, sia il resto dell'implementazione della classe del rowset.  
  
 Al termine di questa operazione, sarà possibile [determinare in modo dinamico le colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## Vedere anche  
 [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)