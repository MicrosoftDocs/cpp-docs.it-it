---
title: CMyProviderRowset (MyProviderRS.H) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- cmyproviderrowset
- myproviderrs.h
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, wizard-generated files
- CMyProviderRowset class in MyProviderRS.H
ms.assetid: 7ba1a124-3842-40eb-a36b-302190a1af3a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8922e1643dc5a33721424f2a5d83c7f66e0f58a7
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cmyproviderrowset-myproviderrsh"></a>CMyProviderRowset (MyProviderRS.H)
La procedura guidata genera una voce per l'oggetto set di righe. In questo caso,verrà chiamata `CMyProviderRowset`. Il `CMyProviderRowset` classe eredita da una classe di provider OLE DB denominata `CRowsetImpl`, che implementa le interfacce necessarie per l'oggetto set di righe. Il codice seguente mostra la catena di ereditarietà per `CRowsetImpl`:  
  
```  
template <class T, class Storage, class CreatorClass,   
   class ArrayType = CAtlArray<Storage>>  
class CMyRowsetImpl:  
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType,   
      CSimpleRow, IRowsetLocateImpl< T >>  
```  
  
 `CRowsetImpl` utilizza inoltre il `IAccessor` e `IColumnsInfo` interfacce. Usa queste interfacce per i campi nelle tabelle di output. La classe fornisce anche un'implementazione per **IRowsetIdentity**, che consente al consumer di determinare se due righe sono identiche. Il `IRowsetInfo` interfaccia implementa le proprietà per l'oggetto set di righe. Il **IConvertType** interfaccia consente al provider di risolvere le differenze tra tipi di dati richiesti dal consumer e quelli utilizzati dal provider.  
  
 Il `IRowset` interfaccia gestisce il recupero dei dati. Il consumer chiama innanzitutto un metodo denominato `GetNextRows` per restituire un handle a una riga, nota come un **HROW**. Il consumer chiama quindi **IRowset:: GetData** con quella **HROW** per recuperare i dati richiesti.  
  
 `CRowsetImpl` accetta inoltre diversi parametri di modello. Questi parametri consentono di determinare come `CRowsetImpl` classe gestisce i dati. Il `ArrayType` argomento consente di determinare il meccanismo di archiviazione utilizzato per archiviare i dati di riga. Il **RowClass** parametro specifica la classe che contiene un **HROW**.  
  
 Il **RowsetInterface** parametro consente di usare anche il `IRowsetLocate` o `IRowsetScroll` interfaccia. Il `IRowsetLocate` e `IRowsetScroll` ereditano entrambe da `IRowset`. Di conseguenza, i modelli di provider OLE DB devono fornire una gestione speciale per queste interfacce. Se si desidera utilizzare una di queste interfacce, è necessario utilizzare questo parametro.  
  
## <a name="see-also"></a>Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)