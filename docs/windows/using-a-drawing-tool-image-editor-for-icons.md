---
title: Utilizzando uno strumento di disegno (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.image.drawing
dev_langs:
- C++
helpviewer_keywords:
- Image editor [C++], selecting drawing tools
- Image editor [C++], toolbar
- drawing tools
ms.assetid: 1f8c6eef-7760-45a9-a5cb-9e15c6f91245
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5e7f1c678cc2f5c3595f1782f1bb3561ae90b86a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42609949"
---
# <a name="using-a-drawing-tool-image-editor-for-icons"></a>Utilizzo di uno strumento di disegno (Editor di immagini per le icone)

Il **immagine** mano di disegno e la cancellazione di tutti funzionano nello stesso modo gli strumenti dell'editor: si seleziona lo strumento e, se necessario, [selezionare i colori di primo piano e sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) e le opzioni di dimensioni e la forma. Quindi spostare il puntatore all'immagine e fare clic o trascinare per disegnare e cancellare.

Quando si seleziona il **gomma** dello strumento, **pennello** strumento, o **aerografo** strumento, il selettore di opzioni consente di visualizzare le opzioni per tale strumento.

> [!TIP]
> Invece di usare la **gomma** strumento, può risultare più comodo disegnare il colore di sfondo con uno degli strumenti di disegno.

È possibile selezionare gli strumenti di disegno dal **Editor di immagini** sulla barra degli strumenti o il **immagine** menu.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-editor-toolbar"></a>Selezionare e usare uno strumento di disegno nella barra degli strumenti Editor di immagini

1. Fare clic su un pulsante sul **Editor di immagini** sulla barra degli strumenti.

   - Il **gomma** strumento Disegna l'immagine con il colore di sfondo corrente quando si preme il pulsante sinistro del mouse.

   - Il **a forma di matita** lo strumento consente di disegnare mano libera in una larghezza costante di un pixel.

   - Il **determinate opzione selettore di forma e dimensioni dello strumento pennello**.

   - Il **aerografo** strumento distribuisce in modo casuale i pixel dal colore intorno al centro del pennello.

        > [!TIP]
        >  Descrizioni comandi vengono visualizzati quando si passa il cursore sopra i pulsanti sul [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md). Questi suggerimenti per identificare i pulsanti specifici indicati di seguito.

2. Se necessario, selezionare i colori e un pennello:

   - Nel [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md), fare clic sul pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](../windows/toolbar-image-editor-for-icons.md), fare clic su una forma che rappresenta il pennello da usare.

3. Fare clic sull'immagine in cui si desidera iniziare a progettare o il disegno. Assume una forma diversa in base allo strumento che è selezionato.

4. Premere il pulsante sinistro del mouse (per il colore di primo piano) o il pulsante destro del mouse (per il colore di sfondo) e tenerlo premuto quando si disegna.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-menu"></a>Selezionare e usare uno strumento di disegno di menu immagine

1. Fare clic sui **immagine** menu e selezionare il **Tools** comando.

2. Nel sottomenu scegliere lo strumento da usare.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)  
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)  
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)  
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)