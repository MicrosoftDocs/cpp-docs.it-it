---
title: Creazione di un cursore (Editor di immagini per le icone) o l'icona a 256 colori | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- 256-color palette
- cursors [C++], color
- colors [C++], icons
- colors [C++], cursors
- icons, color
ms.assetid: 2738089b-4fd3-4c45-96ae-6a15e4c6b780
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1d6e3af00bfe906a1954f7fc1d2b0af1ea52945e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415915"
---
# <a name="creating-a-256-color-icon-or-cursor-image-editor-for-icons"></a>Creazione di un cursore o di un'icona a 256 colori (Editor di immagini per le icone)

Usando il **immagine** editor, icone e cursori possono essere con dimensioni large (64 x 64) con una tavolozza da 256 colori cui scegliere. Dopo aver creato la risorsa, viene selezionato uno stile di immagine del dispositivo.

### <a name="to-create-a-256-color-icon-or-cursor"></a>Per creare un cursore o l'icona a 256 colori

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC, quindi scegliere **Inserisci risorsa** dal menu di scelta rapida. (Se hai già una risorsa immagine esistente nel file RC, ad esempio un cursore, è possibile semplicemente fare doppio clic il **cursore** cartella e selezionare **Inserisci cursore** dal menu di scelta rapida.)

   > [!NOTE] 
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare **icona** oppure **cursore** e fare clic su **New**.

3. Nel **immagine** menu, fare clic su **nuova immagine per dispositivo**.

4. Selezionare lo stile di immagine a 256 colori desiderato.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Utilizzo della tavolozza da 256 colori](../windows/using-the-256-color-palette-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Icone e cursori: risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)