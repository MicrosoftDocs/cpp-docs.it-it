---
title: Creazione di un provider semplice in sola lettura
ms.date: 10/26/2018
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
ms.openlocfilehash: a80678f6bc512c45c0df2ea5cbfc4708f1252ac0
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59035361"
---
# <a name="creating-a-simple-read-only-provider"></a>Creazione di un provider semplice in sola lettura

Dopo aver creato un provider OLE DB tramite il **Creazione guidata progetto ATL** e **Creazione guidata Provider OLE DB ATL**, è possibile aggiungere altre funzionalità che si desidera supportare. Inizia a progettare il provider esaminando il tipo di dati verranno inviati al consumatore e in quali condizioni. È particolarmente importante determinare se è necessario supportare i comandi, transazioni e altri oggetti facoltativi. Una buona progettazione fin dall'inizio offre una maggiore velocità di implementazione e di test.

Nell'esempio è presentato in due parti:

- Mostra la parte prima procedura [creare un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) che legge una coppia di stringhe.

- Il secondo Mostra parte come [migliorare provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) aggiungendo il `IRowsetLocate` interfaccia.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
