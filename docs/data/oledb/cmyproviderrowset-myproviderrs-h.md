---
description: 'Altre informazioni su: CCustomRowset (Customers. H)'
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
ms.openlocfilehash: 87025be2a34f8c850bde2be53ab01519968654d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170464"
---
# <a name="ccustomrowset-customrsh"></a>CCustomRowset (CustomRS.H)

La procedura guidata genera una voce per l'oggetto set di righe. In questo caso, viene chiamato `CCustomRowset` . La `CCustomRowset` classe eredita da una classe di provider OLE DB denominata `CRowsetImpl` , che implementa tutte le interfacce necessarie per l'oggetto set di righe. Il codice seguente mostra la catena di ereditarietà per `CRowsetImpl` :

```cpp
template <class T, class Storage, class CreatorClass,
   class ArrayType = CAtlArray<Storage>>
class CMyRowsetImpl:
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType,
      CSimpleRow, IRowsetLocateImpl< T >>
```

`CRowsetImpl` USA anche le `IAccessor` `IColumnsInfo` interfacce e. Usa queste interfacce per i campi di output nelle tabelle. La classe fornisce anche un'implementazione per `IRowsetIdentity` , che consente al consumer di determinare se due righe sono uguali. L' `IRowsetInfo` interfaccia implementa le proprietà per l'oggetto set di righe. L' `IConvertType` interfaccia consente al provider di risolvere le differenze tra i tipi di dati richiesti dal consumer e quelli utilizzati dal provider.

L' `IRowset` interfaccia gestisce effettivamente il recupero dei dati. Il consumer chiama innanzitutto un metodo chiamato `GetNextRows` per restituire un handle a una riga, noto come `HROW` . Il consumer chiama quindi `IRowset::GetData` con tale oggetto `HROW` per recuperare i dati richiesti.

`CRowsetImpl` accetta inoltre diversi parametri di modello. Questi parametri consentono di determinare il modo in cui la `CRowsetImpl` classe gestisce i dati. L' `ArrayType` argomento consente di determinare il meccanismo di archiviazione utilizzato per archiviare i dati delle righe. Il parametro *RowClass* specifica la classe che contiene un oggetto `HROW` .

Il parametro *RowsetInterface* consente anche di usare l' `IRowsetLocate` interfaccia o `IRowsetScroll` . Le `IRowsetLocate` `IRowsetScroll` interfacce e ereditano entrambe da `IRowset` . Pertanto, i modelli di provider OLE DB devono fornire una gestione speciale per queste interfacce. Se si desidera utilizzare una di queste interfacce, è necessario utilizzare questo parametro.

## <a name="see-also"></a>Vedi anche

[File di Wizard-Generated del provider](../../data/oledb/provider-wizard-generated-files.md)<br/>
