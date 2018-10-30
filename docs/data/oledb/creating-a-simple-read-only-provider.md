---
title: Creazione di un Provider semplice in sola lettura | Microsoft Docs
ms.custom: ''
ms.date: 10/26/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c8fd4e5eb25ab1e8e6b20b576a0688da7b5aa2ef
ms.sourcegitcommit: 840033ddcfab51543072604ccd5656fc6d4a5d3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50216396"
---
# <a name="creating-a-simple-read-only-provider"></a>Creazione di un provider semplice in sola lettura

Dopo aver creato un provider OLE DB tramite il **Creazione guidata progetto ATL** e **Creazione guidata Provider OLE DB ATL**, è possibile aggiungere altre funzionalità che si desidera supportare. Inizia a progettare il provider esaminando il tipo di dati verranno inviati al consumatore e in quali condizioni. È particolarmente importante determinare se è necessario supportare i comandi, transazioni e altri oggetti facoltativi. Una buona progettazione fin dall'inizio offre una maggiore velocità di implementazione e di test.

Nell'esempio è presentato in due parti:

- Mostra la parte prima procedura [creare un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) che legge una coppia di stringhe.

- Il secondo Mostra parte come [migliorare provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) aggiungendo il `IRowsetLocate` interfaccia.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
