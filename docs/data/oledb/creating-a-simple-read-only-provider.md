---
title: Creazione di un provider semplice in sola lettura
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
ms.openlocfilehash: c7c6c5bb2691a110a6368decd875f5a5a06b11b5
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919189"
---
# <a name="creating-a-simple-read-only-provider"></a>Creazione di un provider semplice in sola lettura

::: moniker range="msvc-160"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Se è stato creato un provider OLE DB tramite la **Creazione guidata progetto ATL** e la **Creazione guidata provider OLE DB ATL** , è possibile aggiungere altre funzionalità che si desidera supportare. Iniziare a progettare il provider esaminando il tipo di dati che verranno inviati al consumer e in quali condizioni. È particolarmente importante determinare se è necessario supportare comandi, transazioni e altri oggetti facoltativi. Una buona progettazione fin dall'inizio accelera l'implementazione e i test.

L'esempio è costituito da due parti:

- La prima parte mostra come [creare un provider semplice di sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) in grado di leggere una coppia di stringhe.

- La seconda parte mostra come [migliorare il provider semplice di sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) aggiungendo l'interfaccia `IRowsetLocate`.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un provider di OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
