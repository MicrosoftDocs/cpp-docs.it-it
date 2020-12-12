---
description: 'Altre informazioni su: recupero di un BLOB'
title: Recupero di un BLOB
ms.date: 10/24/2018
helpviewer_keywords:
- retrieving BLOBs
- BLOB (binary large object), retrieving
- OLE DB, BLOBs (binary large objects)
ms.assetid: 2893eb0a-5c05-4016-8914-1e40ccbaf0b3
ms.openlocfilehash: ef870d84c286f72621e87858cea944cc70cbe0cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286605"
---
# <a name="retrieving-a-blob"></a>Recupero di un BLOB

È possibile recuperare un oggetto binario di grandi dimensioni (BLOB) in diversi modi. È possibile usare `DBTYPE_BYTES` per recuperare il BLOB come sequenza di byte o usare un'interfaccia come `ISequentialStream` . Per ulteriori informazioni, vedere [oggetti BLOB e OLE](/previous-versions/windows/desktop/ms711511(v=vs.85)) nella Guida **di riferimento per programmatori OLE DB**.

Il codice seguente illustra come recuperare un BLOB usando `ISequentialStream` . La macro [BLOB_ENTRY](./macros-and-global-functions-for-ole-db-consumer-templates.md#blob_entry) consente di specificare l'interfaccia e i flag utilizzati per l'interfaccia. Dopo l'apertura della tabella, il codice chiama `Read` ripetutamente `ISequentialStream` per leggere i byte dal BLOB. Il codice chiama `Release` per eliminare il puntatore a interfaccia prima di chiamare `MoveNext` per ottenere il record successivo.

```cpp
class CCategories
{
public:
   ISequentialStream* pPicture;

BEGIN_COLUMN_MAP(CCategories)
   BLOB_ENTRY(4, IID_ISequentialStream, STGM_READ, pPicture)
END_COLUMN_MAP()
};
```

Quindi, usato dal codice seguente:

```cpp
CTable<CAccessor<CCategories>> categories;
ULONG cb;
BYTE myBuffer[65536];

categories.Open(session, "Categories");

while (categories.MoveNext() == S_OK)
{
   do
   {
      categories.pPicture->Read(myBuffer, 65536, &cb);
      // Do something with the buffer
   } while (cb > 0);
   categories.pPicture->Release();
}
```

Per altre informazioni sulle macro che gestiscono dati BLOB, vedere **macro della mappa delle colonne** in [macro e funzioni globali per OLE DB modelli di consumer](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)<br/>
