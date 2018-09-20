---
title: Modifica delle parti di un'immagine (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Image editor [C++], editing images
- Clipboard [C++], pasting
- images [C++], editing
- images [C++], deleting selected parts
- images [C++], copying selected parts
- images [C++], moving selected parts
- images [C++], dragging and replicating selected parts
- images [C++], pasting into
- graphics [C++], editing
ms.assetid: ff4f5fef-71a4-4fd8-825e-049399fed391
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9340180049d85b1b5385d49c7b358c3fd791ce9d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391475"
---
# <a name="editing-parts-of-an-image-image-editor-for-icons"></a>Modifica delle parti di un'immagine (Editor di immagini per le icone)

È possibile eseguire le operazioni di modifica standard, ovvero Taglia, copia, la cancellazione e lo spostamento, su un [selezione](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md), se la selezione è l'intera immagine o solo una parte di esso. Poiché il **immagine** editor utilizza le **negli Appunti di Windows**, è possibile trasferire immagini tra il **immagine** editor e altre applicazioni per Windows.

Inoltre, è possibile ridimensionare la selezione, se include solo una parte o l'intera immagine.

### <a name="to-cut-the-current-selection-and-move-it-to-the-clipboard"></a>Taglia la selezione corrente e spostarlo negli Appunti

1. Fare clic su **tagliare** nel **modificare** menu.

### <a name="to-copy-the-selection"></a>Per copiare la selezione

1. Posizionare il puntatore all'interno del bordo di selezione oppure ovunque ti trovi su di esso, ad eccezione di quadratini di ridimensionamento.

2. Tenere premuto il **Ctrl** quando si trascina la selezione in un nuovo percorso della chiave. L'area della selezione originale rimane invariato.

3. Per copiare la selezione nell'immagine nella posizione corrente, fare clic all'esterno del cursore di selezione.

### <a name="to-paste-the-clipboard-contents-into-an-image"></a>Incollare il contenuto degli Appunti in un'immagine

1. Dal **Edit** menu, scegliere **Incolla**.

   Il contenuto degli Appunti, racchiuso tra il bordo di selezione, vengono visualizzati nell'angolo superiore sinistro del riquadro.

2. Posizionare il puntatore del mouse all'interno del bordo di selezione e trascinare l'immagine nella posizione desiderata nell'immagine.

3. Per l'immagine nella nuova posizione di ancoraggio, fare clic all'esterno del bordo di selezione.

### <a name="to-delete-the-current-selection-without-moving-it-to-the-clipboard"></a>Per eliminare la selezione corrente senza spostarlo negli Appunti

1. Dal **Edit** menu, scegliere **eliminare**.

   L'area originale della selezione viene riempita con il colore di sfondo corrente.

   > [!NOTE]
   > È possibile accedere la **tagliare**, **copia**, **Incolla**, e **Elimina** comandi facendo clic con il pulsante destro il **visualizzazione risorse** finestra.

### <a name="to-move-the-selection"></a>Per spostare la selezione

1. Posizionare il puntatore all'interno del bordo di selezione oppure ovunque ti trovi su di esso, ad eccezione di quadratini di ridimensionamento.

2. Trascinare la selezione nella nuova posizione.

3. Per ancorare la selezione dell'immagine nella nuova posizione, fare clic all'esterno del bordo di selezione.

Per altre informazioni sul disegno con una selezione, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)