---
title: Creazione di un provider
ms.date: 10/15/2018
helpviewer_keywords:
- OLE DB providers, creating
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
ms.openlocfilehash: 05ab045e104e3035f8ccd2fa1924b6959164b8d4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50538186"
---
# <a name="creating-the-provider"></a>Creazione di un provider

## <a name="to-create-an-ole-db-provider-with-the-atl-ole-db-provider-wizard"></a>Per creare un provider OLE DB con la creazione guidata Provider OLE DB ATL

1. Fare clic sul progetto.

1. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi classe**.

1. Nel **Aggiungi classe** nella finestra di dialogo **installati** > **Visual C++** > **ATL**, selezionare il **Provider OLE DB ATL** icona e quindi fare clic su **Open**.

1. Nel **Creazione guidata Provider OLE DB ATL**, immettere un nome breve per il provider nel **nome breve** casella. Gli argomenti seguenti usano il nome abbreviato *Custom*, ma è possibile usare un altro nome. Le altre caselle Nome popolano in base al nome specificato.

1. Modificare le altre caselle di nome, se necessario. Oltre ai nomi oggetto e il file, è possibile modificare quanto segue:

   - **Coclasse**: il nome utilizzato da COM per creare il provider.

   - **ProgID**: l'identificatore a livello di codice, che è una stringa di testo che può essere utilizzata invece di un GUID.

   - **Versione**: usato con i ProgID e coclasse per generare un ID a livello di codice dipendente dalla versione

1. Scegliere **Fine**.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)
