---
title: Conversione di bitmap in barre degli strumenti (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- bitmaps [C++], converting to toolbars
- Toolbar editor [C++], converting bitmaps
- toolbars [C++], converting bitmaps
ms.assetid: 971c181b-40f5-44be-843d-677a7c235667
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ed77f1df88bb3f3572c3ea819ffac5cb9a1f45b1
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44317228"
---
# <a name="converting-bitmaps-to-toolbars-c"></a>Conversione di bitmap in barre degli strumenti (C++)

È possibile creare una nuova barra degli strumenti in un progetto C++ mediante la conversione di una bitmap. L'immagine di bitmap converte le immagini del pulsante per una barra degli strumenti. La mappa di bit contiene in genere numerose immagini pulsante su una singola bitmap, con una sola immagine per ogni pulsante. Le immagini possono essere di qualsiasi dimensione. il valore predefinito è 16 pixel di larghezza e l'altezza dell'immagine. È possibile specificare le dimensioni delle immagini pulsante nel [finestra di dialogo Nuova risorsa barra degli strumenti](../windows/new-toolbar-resource-dialog-box.md) quando si sceglie **Editor barra degli strumenti** dal **immagine** menu mentre nell'editor di immagini.

### <a name="to-convert-bitmaps-to-a-toolbar"></a>Per convertire le bitmap in una barra degli strumenti

1. Aprire una risorsa bitmap esistente nel [editor di immagini](../windows/image-editor-for-icons.md). (Se la bitmap non è inclusa nel file RC, fare clic sul file RC, scegliere **importazione** dal menu di scelta rapida, passare alla bitmap da aggiungere al file RC, quindi fare clic su **Open**.)

2. Dal **immagine** menu, scegliere **sulla barra degli strumenti Editor**.

   Il [finestra di dialogo Nuova risorsa barra degli strumenti](../windows/new-toolbar-resource-dialog-box.md) viene visualizzata. È possibile modificare la larghezza e l'altezza delle immagini icona in modo che corrisponda il bitmap. L'immagine della barra degli strumenti viene quindi visualizzato nell'editor barra degli strumenti.

3. Per completare la conversione, modificare il comando **ID** del pulsante tramite il [finestra proprietà](/visualstudio/ide/reference/properties-window). Digitare il nuovo **ID** oppure selezionare un' **ID** nell'elenco a discesa.

   > [!TIP]
   > Il **proprietà** finestra contiene un pulsante di puntina da disegno nella barra del titolo. Facendo clic su questo pulsante Abilita o disabilita **Nascondi automaticamente** per la finestra. Per scorrere rapidamente tutte le proprietà del pulsante della barra degli strumenti senza la necessità di riaprire le finestre delle proprietà singole, attivare **Nascondi automaticamente** disattivare in modo che il **proprietà** finestra rimanga fermo.

È inoltre possibile modificare l'ID di comando dei pulsanti sulla barra degli strumenti di nuovo usando il [finestra proprietà](/visualstudio/ide/reference/properties-window). Per informazioni su come modificare la nuova barra degli strumenti, vedere [creazione, spostamento e modifica dei pulsanti della barra degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Creazione di nuove barre degli strumenti](../windows/creating-new-toolbars.md)  
[Editor barra degli strumenti](../windows/toolbar-editor.md)