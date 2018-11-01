---
title: Modifica in una tabella di tasti di scelta rapida (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- accelerator tables [C++], editing
- keyboard shortcuts [C++], editing in an accelerator table
ms.assetid: 545b650b-4f26-4b20-8431-d942548443bd
ms.openlocfilehash: 3955a74f9387c5f89d4217436e16e76b53bc3f6a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50463001"
---
# <a name="editing-in-an-accelerator-table-c"></a>Modifica in una tabella di tasti di scelta rapida (C++)

### <a name="to-edit-in-an-accelerator-table"></a>Per eseguire una modifica in una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Selezionare una voce nella tabella e fare clic per attivare la modifica sul posto.

3. Eseguire la selezione dalla casella combinata a discesa oppure digitare sul posto per apportare modifiche.

   - Per la [ID](id-property.md), selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la [modificatore](../windows/accelerator-modifier-property.md)selezionare dall'elenco.

   - Per la [chiave](../windows/accelerator-key-property.md), selezionarlo dall'elenco o digitarlo per apportare modifiche.

   - Per la [tipo](../windows/accelerator-type-property.md), selezionare **ASCII** oppure **VIRTKEY** dall'elenco.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)<br/>
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)