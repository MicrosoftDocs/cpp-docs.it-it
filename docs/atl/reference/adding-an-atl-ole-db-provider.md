---
description: 'Ulteriori informazioni su: aggiunta di un provider di OLE DB ATL'
title: Aggiunta di un provider OLE DB ATL
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB, adding ATL OLE DB provider to projects
- ATL projects, adding ATL OLE DB providers
- ATL OLE DB providers
ms.assetid: 26fba1e3-880f-4bc6-90e5-2096a48a3a6c
ms.openlocfilehash: e60150e2d8dc57e16a55c75556d109583a95f054
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165667"
---
# <a name="adding-an-atl-ole-db-provider"></a>Aggiunta di un provider OLE DB ATL

::: moniker range="msvc-160"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Usare questa procedura guidata per aggiungere un provider OLE DB ATL a un progetto. Un provider OLE DB ATL è costituito da classi di origine dati, sessione, comando e set di righe. Il progetto deve essere stato creato come applicazione ATL COM.

## <a name="to-add-an-atl-ole-db-provider-to-your-project"></a>Per aggiungere un provider OLE DB ATL al progetto

1. In **Visualizzazione classi** fare clic con il pulsante destro del mouse sul progetto. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nella cartella **Visual C++** fare doppio clic sull'icona **Provider OLE DB ATL** o selezionare il provider e quindi fare clic su **Apri**.

   Verrà avviata la Creazione guidata provider OLE DB ATL.

1. Definire le impostazioni come descritto in [Creazione guidata provider OLE DB ATL](../../atl/reference/atl-ole-db-provider-wizard.md).

1. Fare clic su **Fine** per chiudere la procedura guidata. Verrà inserito il codice del provider OLE DB appena creato nel progetto.

::: moniker-end

## <a name="see-also"></a>Vedi anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)
