---
title: CMyProviderRowset (MyProviderRS. H) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- cmyproviderrowset
- myproviderrs.h
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, wizard-generated files
- CMyProviderRowset class in MyProviderRS.H
ms.assetid: 7ba1a124-3842-40eb-a36b-302190a1af3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 936c8fe849e2eb92b8eb46170fc3e67842ad6beb
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338850"
---
# <a name="cmyproviderrowset-myproviderrsh"></a>CMyProviderRowset (MyProviderRS.H)
La procedura guidata genera una voce per l'oggetto set di righe. In questo caso,verrà chiamata `CMyProviderRowset`. Il `CMyProviderRowset` classe eredita da una classe del provider OLE DB denominata `CRowsetImpl`, che implementa le interfacce necessarie per l'oggetto set di righe. Il codice seguente mostra la catena di ereditarietà per `CRowsetImpl`:  
  
```cpp  
template <class T, class Storage, class CreatorClass,   
   class ArrayType = CAtlArray<Storage>>  
class CMyRowsetImpl:  
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType,   
      CSimpleRow, IRowsetLocateImpl< T >>  
```  
  
 `CRowsetImpl` Usa anche il `IAccessor` e `IColumnsInfo` interfacce. Usa queste interfacce per i campi di output nelle tabelle. La classe fornisce anche un'implementazione per `IRowsetIdentity`, che consente al consumer determinare se due righe coincidano. Il `IRowsetInfo` interfaccia implementa la proprietà dell'oggetto set di righe. Il `IConvertType` interfaccia consente al provider per risolvere le differenze tra tipi di dati richiesti dal consumer e quelli usati dal provider.  
  
 Il `IRowset` interfaccia gestisce il recupero dei dati. Il consumer chiama prima di tutto un metodo denominato `GetNextRows` per restituire un handle a una riga, nota come un `HROW`. Il consumer chiama quindi `IRowset::GetData` con tale `HROW` per recuperare i dati richiesti.  
  
 `CRowsetImpl` accetta inoltre diversi parametri del modello. Questi parametri consentono di determinare il modo in `CRowsetImpl` classe gestisce i dati. Il `ArrayType` argomento consente di determinare il meccanismo di archiviazione viene usato per archiviare i dati di riga. Il *RowClass* parametro specifica la classe che contiene un `HROW`.  
  
 Il *RowsetInterface* parametro consente di usare anche il `IRowsetLocate` o `IRowsetScroll` interfaccia. Il `IRowsetLocate` e `IRowsetScroll` ereditano entrambe da `IRowset`. Di conseguenza, i modelli di provider OLE DB necessario fornire una gestione speciale per tali interfacce. Se si desidera usare una di queste interfacce, è necessario usare questo parametro.  
  
## <a name="see-also"></a>Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)