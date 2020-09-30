---
title: Modelli, attributi e altre implementazioni OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- OLE DB, implementations
- OLE DB templates, about OLE DB templates
- OLE DB templates
ms.assetid: 0c780c1b-9bba-4788-8c33-8552d9f120ac
ms.openlocfilehash: 217db304c7d0b5723b7af383e07290f160cc9465
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91500913"
---
# <a name="ole-db-templates-attributes-and-other-implementations"></a>Modelli, attributi e altre implementazioni OLE DB

## <a name="atl-ole-db-templates"></a>Modelli di OLE DB ATL

I modelli OLE DB, che fanno parte di ATL (Active Template Library), rendono più semplice l'utilizzo della tecnologia di database OLE DB a prestazioni elevate fornendo classi che implementano molte delle interfacce di OLE DB comunemente utilizzate. Insieme a questa libreria di modelli viene visualizzato il supporto della procedura guidata per la creazione di applicazioni Starter OLE DB.

Questa libreria di modelli contiene due parti:

- **Modelli di consumer OLE DB** Utilizzato per implementare un'applicazione client OLE DB (consumer).

- **Modelli di provider di OLE DB** Utilizzato per implementare un'applicazione di OLE DB Server (provider).

Per usare i modelli OLE DB è necessario avere una certa familiarità con i modelli C++, COM e le interfacce OLE DB. Se non si ha familiarità con OLE DB, vedere [OLE DB riferimento per programmatori](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming).

Per ulteriori informazioni, è possibile:

- Leggere gli argomenti relativi ai modelli [consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md) o [provider di OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).

- Creare un provider [OLE DB](../../data/oledb/creating-an-ole-db-consumer.md) o un [provider di OLE DB](../../data/oledb/creating-an-ole-db-provider.md).

- Vedere l'elenco di [classi consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) o [classi del provider di OLE DB](../../data/oledb/ole-db-provider-templates-reference.md).

- Vedere l'elenco di [esempi di modelli di OLE DB](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB).

- Vedere [OLE DB Programmer ' s Reference](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming) (nella Windows SDK).

## <a name="ole-db-attributes"></a>Attributi di OLE DB

Gli [attributi del consumer OLE DB](../../windows/attributes/ole-db-consumer-attributes.md) rappresentano un modo pratico per creare OLE DB consumer. Gli attributi OLE DB inseriscono codice basato sui [modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) per creare provider e consumer OLE DB di lavoro. Se è necessario specificare la funzionalità non supportata dagli attributi, è possibile usare i modelli di OLE DB in combinazione con gli attributi nel codice.

## <a name="mfc-ole-db-classes"></a>Classi OLE DB MFC

La libreria MFC include una classe, [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), che consente di visualizzare i record del database nei controlli. La visualizzazione è una visualizzazione form connessa direttamente a un `CRowset` oggetto e Visualizza i campi dell' `CRowset` oggetto nei controlli del modello di finestra di dialogo. Fornisce inoltre un'implementazione predefinita per il passaggio al primo, successivo, precedente o ultimo record e un'interfaccia per l'aggiornamento del record attualmente visualizzato. Per altre informazioni, vedere `COleDBRecordView`.

## <a name="ole-db-sdk-interfaces"></a>Interfacce di OLE DB SDK

Nei casi in cui i modelli di OLE DB non supportano la funzionalità OLE DB, è necessario usare le interfacce di OLE DB. Per ulteriori informazioni, vedere [OLE DB riferimento per programmatori](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[Programmazione OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione OLE DB](../../data/oledb/ole-db-programming-overview.md)
