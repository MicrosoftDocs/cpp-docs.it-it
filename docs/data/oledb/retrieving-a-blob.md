---
title: "Recupero di un BLOB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB (Binary Large Object - oggetti binari di grandi dimensioni), recupero"
  - "OLE DB, BLOB (Binary Large Object - oggetti binari di grandi dimensioni)"
  - "recupero di BLOB"
ms.assetid: 2893eb0a-5c05-4016-8914-1e40ccbaf0b3
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Recupero di un BLOB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esistono diversi modi per recuperare un BLOB \(Binary Large Object\).  È possibile utilizzare **DBTYPE\_BYTES** per recuperare il BLOB come sequenza di byte oppure un'interfaccia quale `ISequentialStream`.  Per ulteriori informazioni, vedere [BLOBS and OLE Objects](https://msdn.microsoft.com/en-us/library/ms711511.aspx) in *OLE DB Programmer's Reference \(Platform SDK\)* \(informazioni in lingua inglese\).  
  
 Nel codice riportato di seguito viene descritto il recupero di un BLOB tramite `ISequentialStream`.  La macro [BLOB\_ENTRY](../../data/oledb/blob-entry.md) consente di specificare l'interfaccia e i flag utilizzati per l'interfaccia.  Una volta aperta la tabella, viene chiamato **Read** ripetutamente su `ISequentialStream` per leggere i byte del BLOB.  Viene inoltre chiamato **Release** per gestire il puntatore di interfaccia prima di chiamare `MoveNext` per recuperare il record successivo.  
  
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
  
 Per ulteriori informazioni sulle macro che gestiscono i dati BLOB, vedere la sezione relativa alle macro della mappa delle colonne in [Macro e funzioni globali per i modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)   
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)