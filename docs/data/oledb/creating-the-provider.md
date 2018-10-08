---
title: Creazione di un Provider | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, creating
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1063b3418df0c9dd45848ea71cdd7717c2dd1427
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48859588"
---
# <a name="creating-the-provider"></a>Creazione di un provider

#### <a name="to-create-an-ole-db-provider-with-the-atl-ole-db-provider-wizard"></a>Per creare un provider OLE DB con la creazione guidata Provider OLE DB ATL

1. Fare clic sul progetto.

1. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi classe**.

1. Nel **Aggiungi classe** finestra di dialogo, seleziona la **Provider OLE DB ATL** icona e quindi fare clic su **Open**.

1. Nella creazione guidata Provider OLE DB ATL, immettere un nome breve per il provider nel **nome breve** casella. Gli argomenti seguenti usano il nome breve "MyProvider", ma è possibile usare un altro nome. Le altre caselle Nome popolano in base al nome specificato.

1. Modificare le altre caselle di nome, se necessario. Oltre ai nomi oggetto e il file, è possibile modificare quanto segue:

   - **Coclasse**: il nome utilizzato da COM per creare il provider.

   - **ProgID**: l'identificatore a livello di codice, che è una stringa di testo che può essere utilizzata invece di un GUID.

   - **Versione**: usato con i ProgID e coclasse per generare un ID a livello di codice dipendente dalla versione

1. Scegliere **Fine**.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)
