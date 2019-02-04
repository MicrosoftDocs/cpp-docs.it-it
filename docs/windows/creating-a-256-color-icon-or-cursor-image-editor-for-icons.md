---
title: Utilizzo della tavolozza da 256 colori (Editor di immagini per le icone)
ms.date: 11/04/2016
helpviewer_keywords:
- 256-color palette
- cursors [C++], color
- colors [C++], icons
- colors [C++], cursors
- icons, color
- colors [C++], icons and cursors
- color palettes, 256-color
- palettes, 256-color
ms.assetid: 2738089b-4fd3-4c45-96ae-6a15e4c6b780
ms.openlocfilehash: 4e2f2c9ce58799756137bb47db42e52c97a43d39
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702895"
---
# <a name="using-the-256-color-palette-image-editor-for-icons"></a>Utilizzo della tavolozza da 256 colori (Editor di immagini per le icone)

Usando il **immagine** editor, icone e cursori possono essere con dimensioni large (64 x 64) con una tavolozza da 256 colori cui scegliere. Dopo aver creato la risorsa, viene selezionato uno stile di immagine del dispositivo.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-create-a-256-color-icon-or-cursor"></a>Per creare un cursore o l'icona a 256 colori

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC, quindi scegliere **Inserisci risorsa** dal menu di scelta rapida. (Se hai già una risorsa immagine esistente nel file RC, ad esempio un cursore, è possibile fare doppio clic il **cursore** cartella e selezionare **Inserisci cursore** dal menu di scelta rapida.)

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare **icona** oppure **cursore** e scegliere **New**.

1. Nel **immagine** dal menu **nuova immagine per dispositivo**.

1. Selezionare lo stile di immagine a 256 colori desiderato.

## <a name="to-choose-a-color-from-the-256-color-palette-for-large-icons"></a>Per scegliere un colore della tavolozza da 256 colori per le icone grandi

Per disegnare una selezione dalla tavolozza da 256 colori, è necessario selezionare i colori dal **colori** tavolozza le [finestra colori](../windows/colors-window-image-editor-for-icons.md).

1. Selezionare l'icona di grandi dimensioni o cursore, o creare una nuova icona di grandi dimensioni o un cursore.

1. Scegliere un colore da 256 colori visualizzati nella **colori** tavolozza il **colori** finestra.

   Colore selezionato diventerà il colore corrente nella **colori** tavolozza il **colori** finestra.

   > [!NOTE]
   > La tavolozza iniziale usata per le immagini di 256 colori corrisponde a quella restituita dalla `CreateHalftonePalette` API Windows. Tutte le icone progettate per la shell di Windows devono usare questo riquadro per evitare lo sfarfallio durante la realizzazione della tavolozza.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Icone e cursori: Risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)
