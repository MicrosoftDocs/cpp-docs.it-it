---
title: Classi di Database ATL (modelli OLE DB) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE DB templates [C++], ATL database classes
- database classes [C++], OLE DB
- database classes [C++], ATL
ms.assetid: 219766aa-e18a-405f-9e36-d7a0fdb31b2b
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ca7607c037cdb1f6a42a2267d64ef274d1041cb2
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="atl-database-classes-ole-db-templates"></a>Classi di database ATL (modelli OLE DB)
Microsoft offre varie implementazioni di OLE DB, un set di interfacce COM che forniscono un accesso uniforme ai dati in formati e origini diversi.  OLE DB sia ufficialmente deprecato; Questa documentazione è destinata agli sviluppatori che sono la gestione del codice legacy. Nuove applicazioni devono utilizzare ODBC per connettersi alle origini dati SQL.
  
 I modelli OLE DB sono modelli C++ in ATL che semplificano l'utilizzo fornisce classi che implementano molte delle interfacce OLE DB usate comunemente di tecnologia per database OLE DB.  
  
 Questa libreria di modelli include due parti:  
  
-   [Modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-cpp.md) utilizzato per implementare un'applicazione OLE DB (consumer).  
  
-   [Modelli provider OLE DB](../data/oledb/ole-db-provider-templates-cpp.md) utilizzato per implementare un'applicazione server (provider) OLE DB.  
  
 Inoltre, il [attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md) forniscono un modo pratico per creare un consumer OLE DB. Gli attributi OLE DB inseriscono il codice in base ai modelli consumer OLE DB per creare i consumer OLE DB di lavoro.  
  
 Si noti che la libreria MFC contiene una classe, [COleDBRecordView](../mfc/reference/coledbrecordview-class.md), che consente di visualizzare i record del database nei controlli. La vista è un modulo connessi direttamente a un `CRowset` dell'oggetto e visualizza i campi del `CRowset` oggetto nei controlli del modello di finestra di dialogo.  
  
 Per ulteriori informazioni, vedere [programmazione con OLE DB](../data/oledb/ole-db-programming.md) e [Guida per programmatori OLE DB](http://go.microsoft.com/fwlink/p/?linkid=121548).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un Consumer OLE DB](../data/oledb/creating-an-ole-db-consumer.md)   
 [Creazione di un Provider OLE DB](../data/oledb/creating-an-ole-db-provider.md)   
 [Riferimenti per i modelli Consumer OLE DB](../data/oledb/ole-db-consumer-templates-reference.md)   
 [Riferimenti ai modelli Provider OLE DB](../data/oledb/ole-db-provider-templates-reference.md)   
 [Esempi di modelli OLE DB](http://msdn.microsoft.com/en-us/08958863-0b5f-41ad-ae99-fca7440c553c)