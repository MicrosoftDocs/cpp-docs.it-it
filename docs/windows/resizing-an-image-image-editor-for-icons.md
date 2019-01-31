---
title: Ridimensionamento di un'immagine (Editor di immagini per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.image.editing
helpviewer_keywords:
- Image editor [C++], resizing images
- graphics [C++], resizing
- images [C++], resizing
- resizing images
- size [C++], images
- images [C++], cropping
- images [C++], extending
- Image editor [C++], cropping or extending images
- Image editor [C++], shrinking and stretching images
- images [C++], stretching
- images [C++], shrinking
- bitmaps [C++], shrinking
- bitmaps [C++], stretching
ms.assetid: d83a02c4-4dfe-4586-a0df-51a50c2ba71d
ms.openlocfilehash: d88a4cccff5b9b7b6303329782b7367cb953b13d
ms.sourcegitcommit: 5270117dbecc4c49bca0cf10b927bae3c9930038
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/31/2019
ms.locfileid: "55484968"
---
# <a name="resizing-an-image-image-editor-for-icons"></a>Ridimensionamento di un'immagine (Editor di immagini per le icone)

Il comportamento dei **immagine** editor durante il ridimensionamento di un'immagine dipende dal fatto che è stata [selezionati](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) l'intera immagine o solo una parte di esso.

Quando la selezione include solo una parte dell'immagine, il **immagine** editor riduce la selezione per l'eliminazione di righe o colonne di pixel e riempire le aree vuote con il colore di sfondo corrente. Inoltre possibile estendere la selezione duplicando le righe o colonne di pixel.

Quando la selezione include l'intera immagine, il **immagine** editor sia compatta ed estende l'immagine, o Ritaglia e lo estende.

Sono disponibili due meccanismi per ridimensionare un'immagine: i quadratini di ridimensionamento e il [finestra proprietà](/visualstudio/ide/reference/properties-window). Trascinare i quadratini di ridimensionamento per modificare le dimensioni di tutti o parte di un'immagine. Quadratini di ridimensionamento che è possibile trascinare sono pieni. Non è possibile trascinare gli handle che sono vuoti. Usare la **proprietà** finestra da ridimensionare l'intera immagine, non una parte selezionata.

![Quadratini di ridimensionamento su una bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcImageEditorSizingHandles")<br/>
Quadratini di ridimensionamento

> [!NOTE]
> Se si dispone di **Affianca griglia** opzione selezionata nel [nella finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md), il ridimensionamento verrà bloccato alla riga successiva della griglia affiancata. Se solo il **griglia in Pixel** opzione è selezionata (impostazione predefinita), il ridimensionamento verrà bloccato sul pixel successivo disponibile.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-resize-an-entire-image-using-the-properties-window"></a>Per ridimensionare un'immagine intera utilizzando la finestra proprietà

1. Aprire l'immagine di cui si desidera modificare le proprietà.

1. Nel **larghezza** e **altezza** finestre nel [finestra proprietà](/visualstudio/ide/reference/properties-window), digitare le dimensioni desiderate.

   Se si sta aumentando le dimensioni dell'immagine, il **immagine** editor estende l'immagine a destra, verso il basso, o entrambi e riempie la nuova area con il colore di sfondo corrente. L'immagine non venga adattato.

   Se si riduce la dimensione dell'immagine, il **immagine** editor Ritaglia l'immagine al bordo destro o inferiore o a entrambi.

   > [!NOTE]
   > È possibile usare la **larghezza** e **altezza** le proprietà per ridimensionare l'intera immagine, non per una selezione parziale.

## <a name="to-crop-or-extend-an-entire-image"></a>Per ritagliare o estendere un'intera immagine

1. Selezionare l'intera immagine.

   Parte dell'immagine è selezionato, se si desidera selezionare l'intera immagine, selezionare un punto qualsiasi nell'immagine all'esterno del bordo di selezione corrente.

1. Trascinare un quadratino di ridimensionamento fino a quando l'immagine è quella a destra.

In genere, il **immagine** ingrandire un'immagine quando viene ridimensionata spostando un quadratino di ridimensionamento o Ritaglia editor. Se si tiene premuto il **Shift** chiave quando si sposta un quadratino di ridimensionamento, il **immagine** editor compatta o estende l'immagine.

## <a name="to-shrink-or-stretch-an-entire-image"></a>Per ridurre o ingrandire un'intera immagine

1. Selezionare l'intera immagine.

   Se una parte dell'immagine è selezionata e si vuole selezionare l'intera immagine, selezionare un punto qualsiasi nell'immagine all'esterno del bordo di selezione corrente.

1. Tenere premuto il **MAIUSC** della chiave e trascinare un quadratino di ridimensionamento fino a quando l'immagine è quella a destra.

## <a name="to-shrink-or-stretch-part-of-an-image"></a>Per ridurre o ingrandire una parte dell'immagine

1. Selezionare la parte dell'immagine che si intende ridimensionare. Per altre informazioni, vedere [selezione di un'Area dell'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md).

1. Trascinare uno dei quadratini di ridimensionamento fino a quando la selezione è la dimensione giusta.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)