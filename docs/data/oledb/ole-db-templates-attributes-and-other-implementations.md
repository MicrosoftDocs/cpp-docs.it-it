---
title: Modelli, attributi e altre implementazioni OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- OLE DB, implementations
- OLE DB templates, about OLE DB templates
- OLE DB templates
ms.assetid: 0c780c1b-9bba-4788-8c33-8552d9f120ac
ms.openlocfilehash: 97924110d6dd59e59eda9492713518dedf68af55
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596599"
---
# <a name="ole-db-templates-attributes-and-other-implementations"></a>Modelli, attributi e altre implementazioni OLE DB

## <a name="atl-ole-db-templates"></a>Modelli OLE DB ATL

I modelli OLE DB, che fanno parte di ATL (Active Template Library), semplificano l'utilizzo, fornendo le classi che implementano molte delle interfacce OLE DB maggiormente utilizzate la tecnologia di database OLE DB ad alte prestazioni. Insieme a questo modello di libreria viene fornito il supporto della procedura guidata per la creazione di applicazioni di base di OLE DB.

Questa libreria contiene due parti:

- **Modelli Consumer OLE DB** usato per implementare un'applicazione client / consumer OLE DB.

- **Modelli Provider OLE DB** usato per implementare un'applicazione server (provider) OLE DB.

Per usare i modelli OLE DB è necessario avere una certa familiarità con i modelli C++, COM e le interfacce OLE DB. Se non si conosce sufficientemente OLE DB, vedere [riferimento per programmatori OLE DB](/previous-versions/windows/desktop/ms713643).

Per altre informazioni, è possibile:

- Leggere gli argomenti di [modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md) oppure [modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).

- Creare un [consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md) oppure [provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md).

- Visualizzare l'elenco delle [classi consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) oppure [classi del provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md).

- Visualizzare l'elenco delle [esempi di modelli OLE DB](https://github.com/Microsoft/VCSamples).

- Visualizzare [riferimento per programmatori OLE DB](/previous-versions/windows/desktop/ms713643) (nel Windows SDK).

## <a name="ole-db-attributes"></a>Attributi OLE DB

Il [attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md) forniscono un modo pratico per creare un consumer OLE DB. Gli attributi OLE DB inseriscono codice in base il [modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) creazione funzionante un consumer OLE DB e provider. Se è necessario specificare la funzionalità non supportata dagli attributi, è possibile usare i modelli OLE DB in combinazione con gli attributi nel codice.

## <a name="mfc-ole-db-classes"></a>Classi MFC OLE DB

La libreria MFC offre un'unica classe, [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), che consente di visualizzare i record del database nei controlli. La vista è una visualizzazione di form direttamente connessa a un `CRowset` dell'oggetto e visualizza i campi del `CRowset` oggetto nei controlli del modello di finestra di dialogo. Fornisce anche un'implementazione predefinita per lo spostamento al primo, successivo, precedente o gli ultimi record e un'interfaccia per l'aggiornamento del record attualmente nella vista. Per altre informazioni, vedere `COleDBRecordView`.

## <a name="ole-db-sdk-interfaces"></a>Interfacce OLE DB SDK

Nei casi in cui i modelli OLE DB non supporta la funzionalità di OLE DB, è necessario utilizzare le interfacce OLE DB autonomamente. Per altre informazioni, vedere [riferimento per programmatori OLE DB](/previous-versions/windows/desktop/ms713643) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)