---
title: Disegno di linee o figure chiuse (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Image editor [C++], drawing lines
- shapes, drawing
ms.assetid: 7edd86db-77b1-451f-8001-bbfed9c6304f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c6c5652f61211ebd4d33de6f2dce07bd49b4f0a0
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313240"
---
# <a name="drawing-lines-or-closed-figures-image-editor-for-icons"></a>Disegno di linee o figure chiuse (Editor di immagini per le icone)

L'editor di immagini di strumenti per tracciare linee e utilizzano figure chiuse tutte nello stesso modo: si posiziona il punto di inserimento in un punto e trascinare in un altro. Per le righe, questi aspetti sono gli endpoint. Per figure chiuse, questi aspetti sono gli angoli opposti del rettangolo di delimitazione nella figura.

Le righe vengono disegnate in un'ampiezza determinata dalla selezione corrente di pennello e figure profilate vengono disegnate in un'ampiezza determinata dalla selezione corrente di larghezza. Le righe e tutte le cifre, il frame sia compilato, vengono disegnate nel colore primo piano corrente se si preme il pulsante sinistro del mouse o il colore di sfondo corrente se si preme il pulsante destro del mouse.

### <a name="to-draw-a-line"></a>Per disegnare una linea

1. Nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) (o dal **immagine** dal menu **strumenti** comando), fare clic sul **riga** dello strumento.

2. Se necessario, selezionare i colori e un pennello:

   - Nel [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md), fare clic sul pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](../windows/toolbar-image-editor-for-icons.md), fare clic su una forma che rappresenta il pennello da usare.

3. Posizionare il puntatore del mouse in punto iniziale della linea.

4. Trascinare all'endpoint della linea.

### <a name="to-draw-a-closed-figure"></a>Per disegnare una figura chiusa

1. Nel **Editor di immagini** sulla barra degli strumenti (o dal **immagine** dal menu **strumenti** comando), fare clic su un **disegno di Figure chiuse** dello strumento.

   Il **Figure chiuse disegno** strumenti creano figure come indicato sui rispettivi pulsanti.

2. Se necessario, selezionare i colori e una larghezza di riga.

3. Spostare il puntatore a un angolo dell'area rettangolare in cui si desidera disegnare nella figura.

4. Trascinare il puntatore del mouse nell'angolo opposto.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)  
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)  
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)  
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)