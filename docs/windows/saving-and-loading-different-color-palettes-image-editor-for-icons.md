---
title: Salvataggio e caricamento di tavolozze dei colori diverse (Editor di immagini per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.image.color
- vc.editors.loadcolorpalette
helpviewer_keywords:
- color palettes [C++]
- palettes
- palettes, Image editor
- colors [C++], Image editor
- Image editor [C++], palettes
- color palettes
- Load Palette Colors dialog box [C++]
ms.assetid: 694b6346-e606-4f19-aa01-9b4ceb47f423
ms.openlocfilehash: fd2664407d33d8e3ed594921501b7f80e6c8850b
ms.sourcegitcommit: efcc8c97570ddf7631570226c700e8f6ebb6c7be
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2019
ms.locfileid: "55560270"
---
# <a name="saving-and-loading-different-color-palettes-image-editor-for-icons"></a>Salvataggio e caricamento di tavolozze dei colori diverse (Editor di immagini per le icone)

È possibile salvare e caricare un **colori** tavolozza contenente [colori personalizzati](../windows/customizing-or-changing-colors-image-editor-for-icons.md). (Per impostazione predefinita, il **colori** tavolozza usato di recente viene caricata automaticamente quando si avvia Visual Studio.)

> [!TIP]
> Poiché il **immagine** editor non è in grado di ripristinare il valore predefinito **colori** tavolozza, è consigliabile salvare il valore predefinito **colori** con un nome, ad esempio  *PAL* oppure *default. PAL* in modo che sia possibile ripristinare facilmente le impostazioni predefinite.

Usare la **colori della tavolozza caricare** finestra di dialogo per caricare le tavolozze di colori speciale da usare nel progetto C++. Sono incluse le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Cerca in**|Specifica la posizione in cui si desidera individuare un file o cartella. Selezionare la freccia per scegliere un altro percorso o selezionare l'icona della cartella sulla barra degli strumenti per spostare i livelli.|
|**Nome del file**|Fornisce uno spazio è possibile digitare il nome del file da aprire. Per trovare rapidamente un file che aperto in precedenza, selezionare il nome del file nell'elenco a discesa, se disponibile.<br/><br/>Se esegue una ricerca per un file, è possibile usare un asterisco (*) come caratteri jolly. Ad esempio, è possibile digitare \*.\* per visualizzare un elenco di tutti i file. È anche possibile digitare il percorso completo di un file, ad esempio, C:\My c:\Documenti\MiaTavolozzaColori.PAL o \\\NetworkServer\MyFolder\MyColorPalette.pal.|
|**Tipo file**|Elenca i tipi di file da visualizzare. Tavolozza (*. PAL) è il tipo di file predefinito per le tavolozze di colori.|

## <a name="to-save-a-custom-colors-palette"></a>Per salvare una tavolozza di colori personalizzati

1. Dal **immagine** menu, scegliere **Salva tavolozza**.

1. Passare alla directory in cui si intende salvare la tavolozza e digitare un nome per la tavolozza.

1. Selezionare **Salva**.

## <a name="to-load-a-custom-colors-palette"></a>Per caricare una tavolozza di colori personalizzati

1. Dal **immagine** menu, scegliere **Carica tavolozza**.

1. Nel **Carica tavolozza** dialogo casella, passare alla directory corretta e selezionare la tavolozza che si desidera caricare. **Colore** tavolozze vengono salvate con un'estensione di file PAL.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)