---
description: 'Altre informazioni su: classi di database ATL (modelli di OLE DB)'
title: Classi di database ATL (modelli OLE DB)
ms.date: 05/02/2019
helpviewer_keywords:
- OLE DB templates [C++], ATL database classes
- database classes [C++], OLE DB
- database classes [C++], ATL
ms.assetid: 219766aa-e18a-405f-9e36-d7a0fdb31b2b
ms.openlocfilehash: a9cc532a0b49f591cd08c70c398f8a37c08071ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97213221"
---
# <a name="atl-database-classes-ole-db-templates"></a>Classi di database ATL (modelli OLE DB)

Microsoft offre diverse implementazioni di OLE DB, un set di interfacce COM che forniscono un accesso uniforme ai dati in formati e origini di informazioni diverse.

I modelli OLE DB sono modelli C++ in ATL che semplificano l'utilizzo della tecnologia OLE DB database fornendo classi che implementano molte delle interfacce di OLE DB comunemente utilizzate.

Questa libreria di modelli contiene due parti:

- [Modelli di consumer OLE DB](../data/oledb/ole-db-consumer-templates-cpp.md) Utilizzato per implementare un'applicazione client OLE DB (consumer).

- [Modelli di provider di OLE DB](../data/oledb/ole-db-provider-templates-cpp.md) Utilizzato per implementare un'applicazione di OLE DB Server (provider).

Inoltre, gli [attributi del consumer OLE DB](../windows/attributes/ole-db-consumer-attributes.md) rappresentano un modo pratico per creare OLE DB consumer. Gli attributi OLE DB inseriscono il codice in base ai modelli consumer OLE DB per creare i consumer OLE DB di lavoro.

Si noti che la libreria MFC contiene una classe, [COleDBRecordView](../mfc/reference/coledbrecordview-class.md), che Visualizza i record del database nei controlli. La visualizzazione è una visualizzazione form connessa direttamente a un `CRowset` oggetto e Visualizza i campi dell' `CRowset` oggetto nei controlli del modello di finestra di dialogo.

Per ulteriori informazioni, vedere [OLE DB Programming](../data/oledb/ole-db-programming.md) and [OLE DB Programmer ' s Guide](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming).

## <a name="see-also"></a>Vedi anche

[Creazione di un consumer di OLE DB](../data/oledb/creating-an-ole-db-consumer.md)<br/>
[Creazione di un provider di OLE DB](../data/oledb/creating-an-ole-db-provider.md)<br/>
[Riferimento ai modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Riferimento ai modelli di provider OLE DB](../data/oledb/ole-db-provider-templates-reference.md)<br/>
[Esempi di modelli di OLE DB](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB)
