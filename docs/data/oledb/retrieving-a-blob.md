---
title: Recupero di un BLOB
ms.date: 10/24/2018
helpviewer_keywords:
- retrieving BLOBs
- BLOB (binary large object), retrieving
- OLE DB, BLOBs (binary large objects)
ms.assetid: 2893eb0a-5c05-4016-8914-1e40ccbaf0b3
ms.openlocfilehash: 23bc20355e1e2b17ac20cf975df2ff58d6553ef9
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023087"
---
# <a name="retrieving-a-blob"></a>Recupero di un BLOB

È possibile recuperare un BLOB (BLOB) in vari modi. È possibile usare `DBTYPE_BYTES` per recuperare il BLOB come una sequenza di byte oppure usare un'interfaccia simile alla `ISequentialStream`. Per altre informazioni, vedere [BLOB e gli oggetti OLE](/previous-versions/windows/desktop/ms711511(v=vs.85)) nel **riferimento per programmatori OLE DB**.

Il codice seguente viene illustrato come recuperare un BLOB utilizzando `ISequentialStream`. La macro [BLOB_ENTRY](../../data/oledb/blob-entry.md) consente di specificare l'interfaccia e i flag utilizzati per l'interfaccia. Dopo l'apertura della tabella, il codice chiama `Read` ripetutamente su `ISequentialStream` per leggere i byte dal BLOB. Il codice chiama `Release` per l'eliminazione del puntatore a interfaccia prima di chiamare `MoveNext` per ottenere il record successivo.

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

Quindi, usato nel codice seguente:

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

Per altre informazioni sulle macro che gestiscono i dati BLOB, vedere **macro della mappa colonna** nelle [macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

## <a name="see-also"></a>Vedere anche

[Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)<br/>
