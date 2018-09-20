---
title: Creazione di un pennello personalizzato (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- colors [C++], brush
- brushes, colors
- brushes, creating custom
- images [C++], creating custom brushes
- graphics [C++], custom brushes
- custom brushes
ms.assetid: 750881aa-6f47-4de9-8ca6-a7a12afc6383
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bd4a25b208232c8a0923e33156730fc5612219a5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46388199"
---
# <a name="creating-a-custom-brush-image-editor-for-icons"></a>Creazione di un pennello personalizzato (Editor di immagini per le icone)

Un pennello personalizzato è una porzione rettangolare di un'immagine che vengono prelevati e utilizzati come uno dei **immagine** pennelli pronte all'uso dell'editor. È possibile eseguire su una selezione di tutte le operazioni, è possibile eseguire su anche un pennello personalizzato.

### <a name="to-create-a-custom-brush-from-a-portion-of-an-image"></a>Per creare un pennello personalizzato da una parte di un'immagine

1. [Selezionare la parte dell'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) che si desidera utilizzare per un pennello.

2. Che contiene il **MAIUSC** chiave verso il basso, fare clic su nella selezione e trascinarla sull'immagine.

   \- oppure -

3. Dal **immagine** menu, scegliere **Usa selezione come pennello**.

   La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione tra l'immagine. Le copie della selezione vengono lasciate lungo il percorso di trascinamento. Più lenta il trascinamento, vengono eseguite le altre copie.

   > [!NOTE]
   > Scegliere il **Usa selezione come pennello** senza avere prima di tutto la selezione di una parte dell'immagine verrà utilizzata l'intera immagine come pennello. Il risultato dell'uso di un pennello personalizzato dipenderà inoltre aver selezionato un' [sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

I pixel in un pennello personalizzato che corrispondono al colore di sfondo corrente vengono in genere trasparenti: non coprire l'immagine esistente. È possibile modificare questo comportamento in modo che i pixel dal colore di sfondo disegno l'immagine esistente.

È possibile utilizzare il pennello personalizzato, ad esempio un timestamp o di uno stencil per creare una varietà di effetti speciali.

### <a name="to-draw-custom-brush-shapes-in-the-background-color"></a>Per disegnare forme pennello personalizzato nel colore di sfondo

1. [Selezionare uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

2. [Impostare il colore di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) il colore in cui si desidera disegnare.

3. Posizionare il pennello personalizzato in cui si desidera disegnare.

4. Scegliere il pulsante destro del mouse. Tutte le aree opache del pennello personalizzato vengono disegnate nel colore di sfondo.

### <a name="to-double-or-halve-the-custom-brush-size"></a>Fare doppio o dimezzare le dimensioni del pennello personalizzato

1. Premere il **segno** (**+**) chiave raddoppiare le dimensioni del pennello, o il **segno** (**-**) chiave per dimezzare il .

### <a name="to-cancel-the-custom-brush"></a>Per annullare il pennello personalizzato

1. Premere **Esc** o scegliere un altro strumento di disegno.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)