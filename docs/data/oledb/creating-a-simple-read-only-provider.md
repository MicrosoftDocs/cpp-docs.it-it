---
description: 'Altre informazioni su: creazione di un provider di Read-Only semplice'
title: Creazione di un provider semplice in sola lettura
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
ms.openlocfilehash: 1904e850bc6a681e13e4799a2822963932ad9dfc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323220"
---
# <a name="creating-a-simple-read-only-provider"></a>Creazione di un provider semplice in sola lettura

::: moniker range="msvc-160"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Se è stato creato un provider OLE DB tramite la **Creazione guidata progetto ATL** e la **Creazione guidata provider OLE DB ATL**, è possibile aggiungere altre funzionalità che si desidera supportare. Iniziare a progettare il provider esaminando il tipo di dati che verranno inviati al consumer e in quali condizioni. È particolarmente importante determinare se è necessario supportare comandi, transazioni e altri oggetti facoltativi. Una buona progettazione fin dall'inizio accelera l'implementazione e i test.

L'esempio è costituito da due parti:

- La prima parte mostra come [creare un provider semplice di sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) in grado di leggere una coppia di stringhe.

- La seconda parte mostra come [migliorare il provider semplice di sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) aggiungendo l'interfaccia `IRowsetLocate`.

::: moniker-end

## <a name="see-also"></a>Vedi anche

[Creazione di un provider di OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
