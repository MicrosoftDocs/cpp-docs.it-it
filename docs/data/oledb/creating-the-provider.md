---
title: Creazione di un provider
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB providers, creating
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
ms.openlocfilehash: 7a8b4caf85ff7d0310c97cb953739796cca21c43
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707573"
---
# <a name="creating-the-provider"></a>Creazione di un provider

::: moniker range="vs-2019"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

## <a name="to-create-an-ole-db-provider-with-the-atl-ole-db-provider-wizard"></a>Per creare un provider OLE DB con la Creazione guidata provider OLE DB ATL

1. Fare clic con il pulsante destro del mouse sul progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nella finestra di dialogo **Aggiungi classe** in **Installati** > **Visual C++** > **ATL** selezionare l'icona **Provider OLE DB ATL** e quindi fare clic su **Apri**.

1. Nella **Creazione guidata provider OLE DB ATL** immettere un nome breve per il provider nella casella **Nome breve**. Gli argomenti seguenti usano il nome breve *Custom*, ma è possibile usarne un altro. Le altre caselle del nome vengono completate in base al nome immesso.

1. Se necessario, è possibile modificare le altre caselle del nome. Oltre ai nomi di oggetto e di file, è possibile modificare quelli seguenti:

   - **CoClass**: nome usato da COM per creare il provider.

   - **ProgID**: identificatore a livello di codice, ovvero una stringa di testo che può essere usata invece di un GUID.

   - **Versione**: usato con il ProgID e la coclasse per generare un ID a livello di codice dipendente dalla versione.

1. Scegliere **Fine**.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)
