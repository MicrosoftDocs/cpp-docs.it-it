---
title: "CMyProviderRowset (MyProviderRS.H) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cmyproviderrowset"
  - ""myproviderrs.h""
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMyProviderRowset (classe) in MyProviderRS.H"
  - "provider OLE DB, file generati dalla procedura guidata"
ms.assetid: 7ba1a124-3842-40eb-a36b-302190a1af3a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMyProviderRowset (MyProviderRS.H)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Con la procedura guidata viene generata una voce per l'oggetto Rowset.  In questo caso,verrà chiamata `CMyProviderRowset`.  La classe `CMyProviderRowset` eredita da una classe del provider OLE DB denominata `CRowsetImpl`, che implementa tutte le interfacce necessarie per l'oggetto rowset.  Nel codice che segue è illustrata la catena di ereditarietà di `CRowsetImpl`.  
  
```  
template <class T, class Storage, class CreatorClass,   
   class ArrayType = CAtlArray<Storage> >  
class CMyRowsetImpl:  
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType,   
      CSimpleRow, IRowsetLocateImpl< T > >  
```  
  
 `CRowsetImpl` utilizza le interfacce `IAccessor` e `IColumnsInfo` per i campi di output delle tabelle.  La classe fornisce inoltre un'implementazione per **IRowsetIdentity**, che consente al consumer di determinare se due righe sono identiche.  L'interfaccia `IRowsetInfo` implementa le proprietà dell'oggetto Rowset.  L'interfaccia **IConvertType** consente al provider di risolvere le differenze tra i tipi di dati richiesti dal consumer e quelli utilizzati dal provider.  
  
 L'interfaccia `IRowset` gestisce il recupero dei dati.  Il consumer chiama in primo luogo un metodo denominato `GetNextRows` per restituire un handle a una riga, noto come **HROW**.  Quindi chiama **IRowset::GetData** con **HROW** per recuperare i dati richiesti.  
  
 `CRowsetImpl` accetta diversi parametri per il modello.  Questi parametri consentono di determinare il modo in cui la classe `CRowsetImpl` gestirà i dati.  L'argomento `ArrayType` consente di determinare il meccanismo di archiviazione utilizzato per memorizzare i dati della riga.  Il parametro **RowClass** specifica la classe che contiene un **HROW**.  
  
 Il parametro **RowsetInterface** consente di utilizzare anche l'interfaccia `IRowsetLocate` o `IRowsetScroll` che ereditano entrambe da `IRowset`.  È pertanto necessario che i modelli provider OLE DB forniscano una gestione speciale per queste interfacce.  Se si desidera utilizzare una di queste due interfacce, sarà necessario utilizzare questo parametro.  
  
## Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)