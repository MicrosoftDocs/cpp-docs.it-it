---
title: Recupero di un BLOB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- retrieving BLOBs
- BLOB (binary large object), retrieving
- OLE DB, BLOBs (binary large objects)
ms.assetid: 2893eb0a-5c05-4016-8914-1e40ccbaf0b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dcd166e205f35133fe2c466175e07ea82970e31f
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39339275"
---
# <a name="retrieving-a-blob"></a>Recupero di un BLOB
È possibile recuperare un BLOB (BLOB) in vari modi. È possibile usare `DBTYPE_BYTES` per recuperare il BLOB come una sequenza di byte oppure usare un'interfaccia simile alla `ISequentialStream`. Per altre informazioni, vedere [BLOB e gli oggetti OLE](https://msdn.microsoft.com/library/ms711511.aspx) nel *riferimento per programmatori OLE DB*.  
  
 Il codice seguente viene illustrato come recuperare un BLOB utilizzando `ISequentialStream`. La macro [BLOB_ENTRY](../../data/oledb/blob-entry.md) consente di specificare l'interfaccia e i flag utilizzati per l'interfaccia. Dopo l'apertura della tabella, il codice chiama `Read` ripetutamente su `ISequentialStream` per leggere i byte dal BLOB. Il codice chiama `Release` per l'eliminazione del puntatore a interfaccia prima di chiamare `MoveNext` per ottenere il record successivo.  
  
```cpp  
class CCategories  
{  
public:  
   ISequentialStream*   pPicture;  
  
BEGIN_COLUMN_MAP(CCategories)  
   BLOB_ENTRY(4, IID_ISequentialStream, STGM_READ, pPicture)  
END_COLUMN_MAP()  
};  
  
CTable<CAccessor<CCategories>> categories;  
ULONG          cb;  
BYTE            myBuffer[65536];  
  
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
  
 Per altre informazioni sulle macro che gestiscono i dati BLOB, vedere "Macro della mappa di colonna" nella [macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Usare funzioni di accesso](../../data/oledb/using-accessors.md)   
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)