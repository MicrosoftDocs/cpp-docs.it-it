---
title: "Classi di database ATL (modelli OLE DB) | Microsoft Docs"
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
  - "classi di database [C++], ATL"
  - "classi di database [C++], OLE DB"
  - "modelli OLE DB [C++], classi di database ATL"
ms.assetid: 219766aa-e18a-405f-9e36-d7a0fdb31b2b
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Classi di database ATL (modelli OLE DB)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Microsoft offre diverse implementazioni di OLE DB, un insieme di interfacce COM che consentono un accesso uniforme ai dati in formati e origini diversi.  
  
 I modelli OLE DB sono modelli C\+\+ presenti nella libreria ATL che semplificano l'utilizzo della tecnologia OLE DB ad alte prestazioni per database tramite classi che implementano molte delle interfacce OLE DB maggiormente utilizzate.  
  
 La libreria ATL è costituita da due parti:  
  
-   [Modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-cpp.md) Utilizzati per implementare un'applicazione client OLE DB \(consumer\).  
  
-   [Modelli provider OLE DB](../data/oledb/ole-db-provider-templates-cpp.md) Utilizzati per implementare un'applicazione server OLE DB \(provider\).  
  
 Inoltre, gli [attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md) offrono una comoda soluzione per creare un consumer OLE DB.  Gli attributi OLE DB inseriscono elementi di codice in base ai modelli consumer OLE DB per creare consumer OLE DB funzionali.  
  
 Si tenga presente che la libreria MFC contiene un'unica classe, [COleDBRecordView](../mfc/reference/coledbrecordview-class.md), che visualizza i record del database presenti nei controlli.  Si tratta di una visualizzazione form connessa direttamente a un oggetto `CRowset` che mostra i campi dell'oggetto `CRowset` presenti nei controlli del modello di finestra di dialogo.  
  
 Per ulteriori informazioni, vedere [Programmazione con OLE DB](../data/oledb/ole-db-programming.md) e [La guida per i programmatori OLE DB](http://go.microsoft.com/fwlink/?LinkId=121548).  
  
## Vedere anche  
 [Creazione di un consumer OLE DB](../data/oledb/creating-an-ole-db-consumer.md)   
 [Creazione di un provider OLE DB](../data/oledb/creating-an-ole-db-provider.md)   
 [Riferimenti ai modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-reference.md)   
 [Riferimenti ai modelli del provider OLE DB](../data/oledb/ole-db-provider-templates-reference.md)   
 [OLE DB Templates Samples](http://msdn.microsoft.com/it-it/08958863-0b5f-41ad-ae99-fca7440c553c)