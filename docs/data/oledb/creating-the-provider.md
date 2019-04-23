---
title: Creazione di un provider
ms.date: 10/15/2018
helpviewer_keywords:
- OLE DB providers, creating
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
ms.openlocfilehash: 6258b5247e4d9d027e0f03bc133dff1a059665bd
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59032350"
---
# <a name="creating-the-provider"></a>Creazione di un provider

## <a name="to-create-an-ole-db-provider-with-the-atl-ole-db-provider-wizard"></a>Per creare un provider OLE DB con la creazione guidata Provider OLE DB ATL

1. Fare clic con il pulsante destro del mouse sul progetto.

1. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi classe**.

1. Nel **Aggiungi classe** nella finestra di dialogo **installati** > **Visual C++** > **ATL**, selezionare il **Provider OLE DB ATL** icona e quindi fare clic su **Open**.

1. Nel **Creazione guidata Provider OLE DB ATL**, immettere un nome breve per il provider nel **nome breve** casella. Gli argomenti seguenti usano il nome abbreviato *Custom*, ma è possibile usare un altro nome. Le altre caselle Nome popolano in base al nome specificato.

1. Modificare le altre caselle di nome, se necessario. Oltre ai nomi oggetto e il file, è possibile modificare quanto segue:

   - **Coclasse**: Il nome utilizzato da COM per creare il provider.

   - **ProgID**: L'identificatore a livello di codice, che è una stringa di testo che può essere utilizzata invece di un GUID.

   - **Versione**: Utilizzato con il ProgID e la coclasse per generare un ID a livello di codice dipendente dalla versione

1. Scegliere **Fine**.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)
