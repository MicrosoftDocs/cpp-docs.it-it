---
title: Ridimensionamento di un'immagine intera (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Image editor [C++], resizing images
- size [C++], images
- images [C++], resizing
- resizing images
ms.assetid: 10782937-7eb4-4340-bdec-618ee7d7904b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5465ccacf6fb051e787cf390c82108cb9344d203
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42613109"
---
# <a name="resizing-an-entire-image-image-editor-for-icons"></a>Ridimensionamento di un'immagine intera (Editor di immagini per le icone)

### <a name="to-resize-an-entire-image-using-the-properties-window"></a>Per ridimensionare un'immagine intera utilizzando la finestra proprietà

1. Aprire l'immagine di cui si desidera modificare le proprietà.

2. Nel **larghezza** e **altezza** finestre nel [finestra proprietà](/visualstudio/ide/reference/properties-window), digitare le dimensioni desiderate.

   Se si stanno aumentando le dimensioni dell'immagine, il **immagine** editor estende l'immagine a destra, verso il basso, o entrambi e riempie la nuova area con il colore di sfondo corrente. L'immagine non viene adattata.

   Se si siano riducendo le dimensioni dell'immagine, il **immagine** editor Ritaglia l'immagine al bordo destro o inferiore o a entrambi.

   > [!NOTE]
   > È possibile usare la **larghezza** e **altezza** le proprietà per ridimensionare l'intera immagine, non per una selezione parziale.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)  
[Ridimensionamento di un'immagine](../windows/resizing-an-image-image-editor-for-icons.md)