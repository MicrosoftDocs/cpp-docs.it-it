---
title: Conversione di bitmap in barre degli strumenti (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.newtoolbarresource
helpviewer_keywords:
- bitmaps [C++], converting to toolbars
- Toolbar editor [C++], converting bitmaps
- toolbars [C++], converting bitmaps
- New Toolbar Resource dialog box [C++]
ms.assetid: 971c181b-40f5-44be-843d-677a7c235667
ms.openlocfilehash: 31b684ff72e970a6b09748b3925564b0b372d339
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702700"
---
# <a name="converting-bitmaps-to-toolbars-c"></a>Conversione di bitmap in barre degli strumenti (C++)

È possibile creare una nuova barra degli strumenti in un progetto C++ mediante la conversione di una bitmap. L'immagine di bitmap converte le immagini del pulsante per una barra degli strumenti. La mappa di bit contiene in genere numerose immagini pulsante su una singola bitmap, con una sola immagine per ogni pulsante. Le immagini possono essere di qualsiasi dimensione. il valore predefinito è 16 pixel di larghezza e l'altezza dell'immagine. È possibile specificare le dimensioni delle immagini pulsante nel **nuova risorsa barra degli strumenti** finestra di dialogo quando si sceglie **sulla barra degli strumenti Editor** dal **immagine** menu mentre nell'editor di immagini.

Il **nuova risorsa barra degli strumenti** nella finestra di dialogo consente di specificare la larghezza e altezza dei pulsanti che si aggiunge a una risorsa barra degli strumenti in un progetto C++. Il valore predefinito è 16 x 15 pixel.

Una mappa di bit viene usata per creare una barra degli strumenti ha una larghezza massima di 2048. Pertanto, se si imposta la **larghezza del pulsante** a 512, è possibile avere solo quattro pulsanti. Se si imposta la larghezza su 513, si possono avere solo tre pulsanti.

La finestra di dialogo presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Larghezza del pulsante**|Fornisce uno spazio per l'utente a immettere la larghezza dei pulsanti della barra degli strumenti che si esegue la conversione da una risorsa della bitmap a una risorsa barra degli strumenti. Le immagini vengono ritagliate alla larghezza e altezza specificata e i colori vengono regolati per usare i colori della barra degli strumenti standard (16 colori).|
|**Altezza del pulsante**|Fornisce uno spazio per poter immettere l'altezza dei pulsanti della barra degli strumenti che si esegue la conversione da una risorsa della bitmap a una risorsa barra degli strumenti. Le immagini vengono ritagliate alla larghezza e altezza specificata e i colori vengono regolati per usare i colori della barra degli strumenti standard (16 colori).|

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-convert-bitmaps-to-a-toolbar"></a>Per convertire le bitmap in una barra degli strumenti

1. Aprire una risorsa bitmap esistente nel [editor di immagini](../windows/image-editor-for-icons.md). (Se la bitmap non è già inclusa nel file RC, fare clic sul file RC, scegliere **importazione** dal menu di scelta rapida, passare alla bitmap da aggiungere al file RC e quindi selezionare **Open**.)

1. Dal **immagine** menu, scegliere **sulla barra degli strumenti Editor**.

   Il **nuova risorsa barra degli strumenti** verrà visualizzata la finestra di dialogo. È possibile modificare la larghezza e l'altezza delle immagini icona in modo che corrisponda il bitmap. L'immagine della barra degli strumenti viene quindi visualizzato nell'editor barra degli strumenti.

1. Per completare la conversione, modificare il comando **ID** del pulsante tramite il [finestra proprietà](/visualstudio/ide/reference/properties-window). Digitare il nuovo **ID** oppure selezionare un' **ID** nell'elenco a discesa.

   > [!TIP]
   > Il **proprietà** finestra contiene un pulsante di puntina da disegno nella barra del titolo. Selezionando questo pulsante Abilita o disabilita **Nascondi automaticamente** per la finestra. Per scorrere rapidamente tutte le proprietà del pulsante della barra degli strumenti senza la necessità di riaprire le finestre delle proprietà singole, attivare **Nascondi automaticamente** disattivare in modo che il **proprietà** finestra rimanga fermo.

È inoltre possibile modificare l'ID di comando dei pulsanti sulla barra degli strumenti di nuovo usando il [finestra proprietà](/visualstudio/ide/reference/properties-window). Per informazioni su come modificare la nuova barra degli strumenti, vedere [creazione, spostamento e modifica dei pulsanti della barra degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md).

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Creazione di nuove barre degli strumenti](../windows/creating-new-toolbars.md)<br/>
[Editor barra degli strumenti](../windows/toolbar-editor.md)<br/>
[Proprietà dei pulsanti della barra degli strumenti](../windows/toolbar-button-properties.md)<br/>
