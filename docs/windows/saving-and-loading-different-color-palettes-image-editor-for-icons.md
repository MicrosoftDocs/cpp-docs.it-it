---
title: Salvataggio e caricamento diverse tavolozze (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.image.color
dev_langs:
- C++
helpviewer_keywords:
- color palettes [C++]
- palettes
- palettes, Image editor
- colors [C++], Image editor
- Image editor [C++], palettes
ms.assetid: 694b6346-e606-4f19-aa01-9b4ceb47f423
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 50e74c65e080b11583e6ff1e591ef612b17e9533
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438886"
---
# <a name="saving-and-loading-different-color-palettes-image-editor-for-icons"></a>Salvataggio e caricamento di tavolozze dei colori diverse (Editor di immagini per le icone)

È possibile salvare e caricare un **colori** tavolozza contenente [colori personalizzati](../windows/customizing-or-changing-colors-image-editor-for-icons.md). (Per impostazione predefinita, il **colori** tavolozza usato di recente viene caricata automaticamente quando si avvia Visual Studio.)

> [!TIP]
> Poiché il **immagine** editor non è in grado di ripristinare il valore predefinito **colori** tavolozza, è consigliabile salvare il valore predefinito **colori** con un nome, ad esempio  *PAL* oppure *default. PAL* in modo che sia possibile ripristinare facilmente le impostazioni predefinite.

### <a name="to-save-a-custom-colors-palette"></a>Per salvare una tavolozza di colori personalizzati

1. Dal **immagine** menu, scegliere **Salva tavolozza**.

2. Passare alla directory in cui si intende salvare la tavolozza e digitare un nome per la tavolozza.

3. Fare clic su **Salva**.

### <a name="to-load-a-custom-colors-palette"></a>Per caricare una tavolozza di colori personalizzati

1. Dal **immagine** menu, scegliere **Carica tavolozza**.

2. Nel [finestra di dialogo Carica tavolozza](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), passare alla directory corretta e selezionare la tavolozza che si desidera caricare. **Colore** tavolozze vengono salvate con un'estensione di file PAL.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)