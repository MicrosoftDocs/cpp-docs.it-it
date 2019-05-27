---
title: Creazione di un provider semplice in sola lettura
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
ms.openlocfilehash: c0f31818002ce4611926d942b3bc556e31c1ae6f
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65524720"
---
# <a name="creating-a-simple-read-only-provider"></a>Creazione di un provider semplice in sola lettura

::: moniker range="vs-2019"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="vs-2017"

Se è stato creato un provider OLE DB tramite la **Creazione guidata progetto ATL** e la **Creazione guidata provider OLE DB ATL**, è possibile aggiungere altre funzionalità che si desidera supportare. Iniziare a progettare il provider esaminando il tipo di dati che verranno inviati al consumer e in quali condizioni. È particolarmente importante determinare se è necessario supportare comandi, transazioni e altri oggetti facoltativi. Una buona progettazione fin dall'inizio accelera l'implementazione e i test.

L'esempio è costituito da due parti:

- La prima parte mostra come [creare un provider semplice di sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) in grado di leggere una coppia di stringhe.

- La seconda parte mostra come [migliorare il provider semplice di sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) aggiungendo l'interfaccia `IRowsetLocate`.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
