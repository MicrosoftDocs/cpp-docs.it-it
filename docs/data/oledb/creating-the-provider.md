---
description: 'Altre informazioni su: creazione del provider'
title: Creazione di un provider
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB providers, creating
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
ms.openlocfilehash: 2b5a00f0a873575d9fe7b2b177bb34a6c74e193e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305434"
---
# <a name="creating-the-provider"></a>Creazione di un provider

::: moniker range="msvc-160"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

## <a name="to-create-an-ole-db-provider-with-the-atl-ole-db-provider-wizard"></a>Per creare un provider OLE DB con la Creazione guidata provider OLE DB ATL

1. Fare clic con il pulsante destro del mouse sul progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nella finestra di dialogo **Aggiungi classe** in **Installati** > **Visual C++** > **ATL** selezionare l'icona **Provider OLE DB ATL** e quindi fare clic su **Apri**.

1. Nella **Creazione guidata provider OLE DB ATL** immettere un nome breve per il provider nella casella **Nome breve**. Gli argomenti seguenti usano il nome breve *Custom*, ma è possibile usarne un altro. Le altre caselle del nome vengono completate in base al nome immesso.

1. Se necessario, è possibile modificare le altre caselle del nome. Oltre ai nomi di oggetto e di file, è possibile modificare quelli seguenti:

   - **Coclass**: nome usato da com per creare il provider.

   - **ProgID**: identificatore a livello di codice, ovvero una stringa di testo che può essere utilizzata al posto di un GUID.

   - **Version**: usato con ProgID e CoClass per generare un ID programmatico dipendente dalla versione.

1. Fare clic su **Fine**.

::: moniker-end

## <a name="see-also"></a>Vedi anche

[Creazione di un provider di OLE DB](../../data/oledb/creating-an-ole-db-provider.md)
