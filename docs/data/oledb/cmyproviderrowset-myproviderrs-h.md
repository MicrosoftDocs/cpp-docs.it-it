---
title: CCustomRowset (CustomRS.H)
ms.date: 10/22/2018
f1_keywords:
- cmyproviderrowset
- ccustomrowset
helpviewer_keywords:
- OLE DB providers, wizard-generated files
- CMyProviderRowset class in MyProviderRS.H
- CCustomRowset class in CustomRS.H
ms.assetid: 7ba1a124-3842-40eb-a36b-302190a1af3a
ms.openlocfilehash: 8e90db287bc7ac8994914766045eb210446dfd48
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079787"
---
# <a name="ccustomrowset-customrsh"></a>CCustomRowset (CustomRS.H)

La procedura guidata genera una voce per l'oggetto set di righe. In questo caso, viene chiamato `CCustomRowset`. La classe `CCustomRowset` eredita da una classe di provider OLE DB denominata `CRowsetImpl`, che implementa tutte le interfacce necessarie per l'oggetto set di righe. Il codice seguente mostra la catena di ereditarietà per `CRowsetImpl`:

```cpp
template <class T, class Storage, class CreatorClass,
   class ArrayType = CAtlArray<Storage>>
class CMyRowsetImpl:
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType,
      CSimpleRow, IRowsetLocateImpl< T >>
```

`CRowsetImpl` usa anche le interfacce `IAccessor` e `IColumnsInfo`. Usa queste interfacce per i campi di output nelle tabelle. La classe fornisce anche un'implementazione per `IRowsetIdentity`, che consente al consumer di determinare se due righe sono uguali. L'interfaccia `IRowsetInfo` implementa le proprietà per l'oggetto set di righe. L'interfaccia `IConvertType` consente al provider di risolvere le differenze tra i tipi di dati richiesti dal consumer e quelli utilizzati dal provider.

L'interfaccia `IRowset` gestisce effettivamente il recupero dei dati. Il consumer chiama innanzitutto un metodo denominato `GetNextRows` per restituire un handle a una riga, noto come `HROW`. Il consumer chiama quindi `IRowset::GetData` con tale `HROW` per recuperare i dati richiesti.

`CRowsetImpl` inoltre accetta diversi parametri di modello. Questi parametri consentono di determinare il modo in cui la classe `CRowsetImpl` gestisce i dati. L'argomento `ArrayType` consente di determinare il meccanismo di archiviazione utilizzato per archiviare i dati delle righe. Il parametro *RowClass* specifica la classe che contiene un `HROW`.

Il parametro *RowsetInterface* consente inoltre di utilizzare l'interfaccia `IRowsetLocate` o `IRowsetScroll`. Le interfacce `IRowsetLocate` e `IRowsetScroll` ereditano entrambe da `IRowset`. Pertanto, i modelli di provider OLE DB devono fornire una gestione speciale per queste interfacce. Se si desidera utilizzare una di queste interfacce, è necessario utilizzare questo parametro.

## <a name="see-also"></a>Vedere anche

[File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)<br/>
