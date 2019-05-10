---
title: Classi di database ATL (modelli OLE DB)
ms.date: 05/02/2019
helpviewer_keywords:
- OLE DB templates [C++], ATL database classes
- database classes [C++], OLE DB
- database classes [C++], ATL
ms.assetid: 219766aa-e18a-405f-9e36-d7a0fdb31b2b
ms.openlocfilehash: dc016a5e1e1d9652f6a69f73b5760f42dec5e889
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65222563"
---
# <a name="atl-database-classes-ole-db-templates"></a>Classi di database ATL (modelli OLE DB)

Microsoft offre varie implementazioni di OLE DB, un set di interfacce COM che consentono un accesso uniforme ai dati in formati e origini diversi.

I modelli OLE DB sono modelli di C++ in ATL che rendono più facile da usare, fornendo le classi che implementano molte delle interfacce OLE DB maggiormente utilizzate tecnologia per database OLE DB.

Questa libreria contiene due parti:

- [Modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-cpp.md) usato per implementare un'applicazione client / consumer OLE DB.

- [Modelli provider OLE DB](../data/oledb/ole-db-provider-templates-cpp.md) usato per implementare un'applicazione server (provider) OLE DB.

Inoltre, il [attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md) forniscono un modo pratico per creare un consumer OLE DB. Gli attributi OLE DB inseriscono il codice in base ai modelli consumer OLE DB per creare i consumer OLE DB di lavoro.

Si noti che la libreria MFC contiene una classe, [COleDBRecordView](../mfc/reference/coledbrecordview-class.md), che consente di visualizzare i record del database nei controlli. La vista è una visualizzazione di form direttamente connessa a un `CRowset` dell'oggetto e visualizza i campi del `CRowset` oggetto nei controlli del modello di finestra di dialogo.

Per altre informazioni, vedere [programmazione con OLE DB](../data/oledb/ole-db-programming.md) e [Guida per programmatori OLE DB](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming).

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer OLE DB](../data/oledb/creating-an-ole-db-consumer.md)<br/>
[Creazione di un provider OLE DB](../data/oledb/creating-an-ole-db-provider.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Riferimenti ai modelli del provider OLE DB](../data/oledb/ole-db-provider-templates-reference.md)<br/>
[Esempi di modelli OLE DB](https://github.com/Microsoft/VCSamples)
