---
title: Modifica dell'ereditarietà di RCustomRowset | Microsoft Docs
ms.custom: ''
ms.date: 10/26/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- RMyProviderRowset
- inheritance [C++]
- RCustomRowset
ms.assetid: 33089c90-98a4-43e7-8e67-d4bb137e267e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 13e15b470be6f6a5af4f8012e3a70896f648e665
ms.sourcegitcommit: 840033ddcfab51543072604ccd5656fc6d4a5d3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50216513"
---
# <a name="modifying-the-inheritance-of-rcustomrowset"></a>Modifica dell'ereditarietà di RCustomRowset

Per aggiungere il `IRowsetLocate` l'interfaccia per l'esempio di un provider semplice in sola lettura, modifica dell'ereditarietà di `RCustomRowset`. Inizialmente `RCustomRowset` eredita da `CRowsetImpl`. È necessario modificare in modo che erediti da `CRowsetBaseImpl`.

A questo scopo, creare una nuova classe, `CCustomRowsetImpl`, in CustomRS.h:

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

A questo punto, modifica mappa dell'interfaccia COM *Custom*RS essere come segue:

```cpp
BEGIN_COM_MAP(CMyRowsetImpl)
   COM_INTERFACE_ENTRY(IRowsetLocate)
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)
END_COM_MAP()
```

Questo codice crea una mappa dell'interfaccia COM che comunica `CMyRowsetImpl` chiamare `QueryInterface` sia per il `IRowset` e `IRowsetLocate` interfacce. Per ottenere tutti l'implementazione per l'altro set di righe classi, i collegamenti della mappa la `CMyRowsetImpl` classe verso il `CRowsetBaseImpl` classe definiti tramite i modelli OLE DB; la mappa usa la macro COM_INTERFACE_ENTRY_CHAIN, richiedendo di modelli OLE DB per analizzare la mappa COM in `CRowsetBaseImpl` in risposta a un `QueryInterface` chiamare.

Infine, collegare `RAgentRowset` al `CMyRowsetBaseImpl` modificando `RAgentRowset` da cui ereditare `CMyRowsetImpl`, come indicato di seguito:

```cpp
class RAgentRowset : public CMyRowsetImpl<RAgentRowset, CAgentMan, CCustomCommand>
```

`RAgentRowset` a questo punto è possibile usare il `IRowsetLocate` interfaccia sfruttando il resto dell'implementazione per la classe di set di righe.

Quando questa operazione, è possibile [determinare in modo dinamico le colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedere anche

[Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)<br/>
