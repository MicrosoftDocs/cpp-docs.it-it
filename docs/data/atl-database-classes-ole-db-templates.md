---
title: Classi di Database ATL (modelli OLE DB) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE DB templates [C++], ATL database classes
- database classes [C++], OLE DB
- database classes [C++], ATL
ms.assetid: 219766aa-e18a-405f-9e36-d7a0fdb31b2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 91cd06ea1d8ff697da6c4959fff34fdc3798dcfd
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43218988"
---
# <a name="atl-database-classes-ole-db-templates"></a>Classi di database ATL (modelli OLE DB)
Microsoft offre varie implementazioni di OLE DB, un set di interfacce COM che consentono un accesso uniforme ai dati in formati e origini diversi.  OLE DB sia ufficialmente deprecato; Questa documentazione è per gli sviluppatori che sono la gestione del codice legacy. Nuove applicazioni devono utilizzare ODBC per connettersi a origini dati SQL.
  
 I modelli OLE DB sono modelli di C++ in ATL che rendono più facile da usare, fornendo le classi che implementano molte delle interfacce OLE DB maggiormente utilizzate tecnologia per database OLE DB.  
  
 Questa libreria contiene due parti:  
  
-   [Modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-cpp.md) usato per implementare un'applicazione client / consumer OLE DB.  
  
-   [Modelli provider OLE DB](../data/oledb/ole-db-provider-templates-cpp.md) usato per implementare un'applicazione server (provider) OLE DB.  
  
 Inoltre, il [attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md) forniscono un modo pratico per creare un consumer OLE DB. Gli attributi OLE DB inseriscono il codice in base ai modelli consumer OLE DB per creare i consumer OLE DB di lavoro.  
  
 Si noti che la libreria MFC contiene una classe, [COleDBRecordView](../mfc/reference/coledbrecordview-class.md), che consente di visualizzare i record del database nei controlli. La vista è una visualizzazione di form direttamente connessa a un `CRowset` dell'oggetto e visualizza i campi del `CRowset` oggetto nei controlli del modello di finestra di dialogo.  
  
 Per altre informazioni, vedere [programmazione con OLE DB](../data/oledb/ole-db-programming.md) e [Guida per programmatori OLE DB](http://go.microsoft.com/fwlink/p/?linkid=121548).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un Consumer OLE DB](../data/oledb/creating-an-ole-db-consumer.md)   
 [Creazione di un Provider OLE DB](../data/oledb/creating-an-ole-db-provider.md)   
 [Riferimenti ai modelli Consumer OLE DB](../data/oledb/ole-db-consumer-templates-reference.md)   
 [Riferimenti ai modelli di Provider OLE DB](../data/oledb/ole-db-provider-templates-reference.md)   
 [Esempi di modelli OLE DB](https://msdn.microsoft.com/08958863-0b5f-41ad-ae99-fca7440c553c)