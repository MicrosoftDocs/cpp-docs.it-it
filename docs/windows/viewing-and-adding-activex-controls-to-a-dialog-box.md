---
title: Visualizzazione e aggiunta di controlli ActiveX in una finestra di dialogo (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.controls.activex
- vc.editors.dialog.insertActiveXControls
helpviewer_keywords:
- dialog boxes [C++], adding ActiveX controls
- ActiveX controls [C++], adding to dialog boxes
- Insert ActiveX Control dialog box [C++]
- controls [C++], editing properties
- ActiveX controls [C++], properties
ms.assetid: e1c2e3ae-e1b0-40d3-9766-623007073856
ms.openlocfilehash: 139407ec1d4e1bfad6bb06854dc24b86ce7014e8
ms.sourcegitcommit: b488462a6e035131121e6f32d8f3b108cc798b5e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/30/2019
ms.locfileid: "55293611"
---
# <a name="viewing-and-adding-activex-controls-to-a-dialog-box-c"></a>Visualizzazione e aggiunta di controlli ActiveX in una finestra di dialogo (C++)

Visual Studio consente di inserire controlli ActiveX nella finestra di dialogo.

Il **Inserisci controllo ActiveX** finestra di dialogo consente di inserire controlli ActiveX nella finestra di dialogo quando si usa la [editor finestre](../windows/dialog-editor.md). Questa finestra di dialogo contiene le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Controllo ActiveX**|Visualizza un elenco di controlli ActiveX. Inserimento di un controllo dalla finestra di dialogo non genera una classe wrapper. Se è necessaria una classe wrapper, utilizzare [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) per crearne uno (per altre informazioni, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)). Se un controllo ActiveX non viene visualizzato nella finestra di dialogo, provare a installare il controllo in base alle istruzioni del fornitore.|
|**Path**|Visualizza il file in cui si trova il controllo ActiveX.|

È possibile inserire controlli nel **casella degli strumenti** finestra per semplificare l'accesso. Per altre informazioni, vedere [Casella degli strumenti](/visualstudio/ide/reference/).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-see-the-activex-controls-you-have-available"></a>Per visualizzare i controlli ActiveX disponibili

1. Aprire una finestra di dialogo nell'editor finestre.

1. Pulsante destro del mouse in un punto qualsiasi all'interno della finestra di dialogo.

1. Menu di scelta rapida, selezionare **Inserisci controllo ActiveX**.

   Il **Inserisci controllo ActiveX** viene visualizzata la finestra di dialogo, che mostra tutti i controlli ActiveX nel sistema. Nella parte inferiore della finestra di dialogo è indicato il percorso del file del controllo ActiveX.

## <a name="to-add-an-activex-control-to-a-dialog-box"></a>Per aggiungere un controllo ActiveX a una finestra di dialogo

1. Nel **Inserisci controllo ActiveX** finestra di dialogo, selezionare il controllo da aggiungere alla finestra di dialogo e selezionare **OK**.

   Il controllo viene visualizzato nella finestra di dialogo, in cui è possibile modificarlo o creare i relativi gestori, come per qualsiasi altro controllo.

   > [!NOTE]
   > È possibile aggiungere controlli ActiveX alla [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox).

   > [!CAUTION]
   > Potrebbe non essere legalmente consentito distribuire tutti i controlli ActiveX nel sistema. Fare riferimento al contratto di licenza del software che ha installato i controlli o contattare il produttore del software.

   È possibile inserire controlli nel **casella degli strumenti** finestra per semplificare l'accesso. Per altre informazioni, vedere [Casella degli strumenti](/visualstudio/ide/reference/toolbox).

## <a name="to-edit-properties-for-an-activex-control"></a>Per modificare le proprietà per un controllo ActiveX

Controlli ActiveX forniti da fornitori indipendenti possono sono dotati di loro proprietà e le caratteristiche. Vengono visualizzate le proprietà di controlli ActiveX nel **proprietà** finestra. Inoltre, vengono visualizzate pagine delle proprietà create per i writer del controllo ActiveX nel **pagine delle proprietà** finestra di dialogo (per visualizzare il **pagina delle proprietà** per uno specifico controllo ActiveX, fare clic su di  **Pagina delle proprietà** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window)).

Varie schede vengono visualizzate nella pagina delle proprietà per un controllo ActiveX, a seconda delle finestre delle proprietà che fanno parte del controllo ActiveX.

> [!NOTE]
> La procedura seguente si applica a utilizzando la pagina delle proprietà per modificare i controlli ActiveX. È anche possibile esplorare e modificare le proprietà di ActiveX nella nuova **proprietà** finestra.

1. Selezionare il **ActiveX** controllo.

1. Nel **View** dal menu **pagina delle proprietà** e visualizzare le proprietà.

1. Apportare le modifiche necessarie nella pagina delle proprietà.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)<br/>
[Visualizzazione e aggiunta di controlli ActiveX in una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md)<br/>
[Scheda Editor finestre, Casella degli strumenti](../windows/dialog-editor-tab-toolbox.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
