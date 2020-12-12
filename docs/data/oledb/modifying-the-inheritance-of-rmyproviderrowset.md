---
description: "Altre informazioni su: modifica dell'ereditarietà di RCustomRowset"
title: Modifica dell'ereditarietà di RCustomRowset
ms.date: 10/26/2018
helpviewer_keywords:
- RMyProviderRowset
- inheritance [C++]
- RCustomRowset
ms.assetid: 33089c90-98a4-43e7-8e67-d4bb137e267e
ms.openlocfilehash: c54533122083c526ad12ac6514efa3ad9ba47cf5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287008"
---
# <a name="modifying-the-inheritance-of-rcustomrowset"></a>Modifica dell'ereditarietà di RCustomRowset

Per aggiungere l' `IRowsetLocate` interfaccia all'esempio di provider semplice in sola lettura, modificare l'ereditarietà di `CCustomRowset` . Inizialmente `CCustomRowset` eredita da `CRowsetImpl` . È necessario modificarlo per ereditare da `CRowsetBaseImpl` .

A tale scopo, creare una nuova classe, `CCustomRowsetImpl` , in RS. h *personalizzata*:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.h

template <class T, class Storage, class CreatorClass, class ArrayType = CAtlArray<Storage>>
class CMyRowsetImpl:
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType, CSimpleRow, IRowsetLocateImpl< T, IRowsetLocate >>
{
...
};
```

Modificare ora la mappa dell'interfaccia COM in RS. h *personalizzata* in modo che sia la seguente:

```cpp
BEGIN_COM_MAP(CMyRowsetImpl)
   COM_INTERFACE_ENTRY(IRowsetLocate)
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)
END_COM_MAP()
```

Questo codice crea una mappa dell'interfaccia COM che indica `CMyRowsetImpl` a di chiamare `QueryInterface` per entrambe le `IRowset` `IRowsetLocate` interfacce e. Per ottenere tutte le implementazioni per le altre classi del set di righe, la mappa collega la `CMyRowsetImpl` classe alla `CRowsetBaseImpl` classe definita dai modelli di OLE DB; la mappa usa la macro COM_INTERFACE_ENTRY_CHAIN, che indica OLE DB modelli di eseguire l'analisi della mappa com in `CRowsetBaseImpl` in risposta a una `QueryInterface` chiamata.

Infine, `CCustomRowset` eseguire il collegamento a `CMyRowsetBaseImpl` modificando in modo da `CCustomRowset` ereditare da `CMyRowsetImpl` , come indicato di seguito:

```cpp
class CCustomRowset : public CMyRowsetImpl<CCustomRowset, CCustomWindowsFile, CCustomCommand>
```

`CCustomRowset` Ora è possibile usare l'interfaccia sfruttando `IRowsetLocate` il resto dell'implementazione per la classe del set di righe.

Al termine di questa operazione, è possibile [determinare in modo dinamico le colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedi anche

[Miglioramento del provider di Read-Only semplice](../../data/oledb/enhancing-the-simple-read-only-provider.md)<br/>
