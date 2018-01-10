---
title: Recupero di un BLOB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- retrieving BLOBs
- BLOB (binary large object), retrieving
- OLE DB, BLOBs (binary large objects)
ms.assetid: 2893eb0a-5c05-4016-8914-1e40ccbaf0b3
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 36ffc4fca7859b49067517e1085e1d854f733e24
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="retrieving-a-blob"></a>Recupero di un BLOB
È possibile recuperare un oggetto di grandi dimensioni (BLOB) in vari modi binario. È possibile utilizzare **DBTYPE_BYTES** per recuperare il BLOB come una sequenza di byte o un'interfaccia quale `ISequentialStream`. Per ulteriori informazioni, vedere [BLOB e gli oggetti OLE](https://msdn.microsoft.com/en-us/library/ms711511.aspx) nel *riferimento per programmatori OLE DB*.  
  
 Il codice seguente viene illustrato come recuperare un BLOB utilizzando `ISequentialStream`. La macro [BLOB_ENTRY](../../data/oledb/blob-entry.md) consente di specificare l'interfaccia e i flag utilizzati per l'interfaccia. Dopo l'apertura della tabella, il codice chiama **lettura** ripetutamente su `ISequentialStream` per leggere i byte del BLOB. Il codice chiama **versione** per l'eliminazione del puntatore a interfaccia prima di chiamare `MoveNext` per recuperare il record successivo.  
  
```  
class CCategories  
{  
public:  
   ISequentialStream*   pPicture;  
  
BEGIN_COLUMN_MAP(CCategories)  
   BLOB_ENTRY(4, IID_ISequentialStream, STGM_READ, pPicture)  
END_COLUMN_MAP()  
};  
  
CTable<CAccessor<CCategories> > categories;  
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
  
 Per ulteriori informazioni sulle macro che gestiscono i dati BLOB, vedere "Macro della mappa colonne" in [macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzando funzioni di accesso](../../data/oledb/using-accessors.md)   
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)