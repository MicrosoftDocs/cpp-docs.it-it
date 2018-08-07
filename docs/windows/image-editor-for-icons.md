---
title: Image Editor for Icons | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.cursor.F1
- vc.editors.icon.F1
- vc.editors.cursor
- vc.editors.bitmap.F1
dev_langs:
- C++
helpviewer_keywords:
- editors, images
- resource editors, graphics
- Image editor [C++]
- resource editors, Image editor
ms.assetid: 586d2b8b-0348-4883-a85d-1ff0ddbf14dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bb5da618ce94711ce41e305c234ef5a5087c5f38
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39603572"
---
# <a name="image-editor-for-icons"></a>Editor di immagini per le icone
L'editor di immagini comprende una vasta gamma di strumenti per la creazione e la modifica di immagini, nonché funzionalità che semplificano la creazione di bitmap per le barre degli strumenti. Oltre a bitmap, icone e cursori, è possibile modificare immagini in formato GIF o JPEG utilizzando i comandi del menu **Immagine** e gli strumenti disponibili sulla barra degli strumenti dell' **Editor immagini** .  
  
 L'Editor immagini consente di effettuare le seguenti operazioni:  
  
-   [Modificare le risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)  
  
-   [Utilizzare i colori](../windows/working-with-color-image-editor-for-icons.md)  
  
-   [Utilizzare icone e cursori ovvero risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)  
  
-   [Utilizzare tasti di scelta rapida per i comandi dell'Editor immagini](../windows/accelerator-keys-image-editor-for-icons.md)  
  
 Nella finestra dell'Editor immagini vengono riportate due visualizzazioni della stessa immagine. I due riquadri sono separati da una barra di divisione, che è possibile trascinare da un lato all'altro per modificare le dimensioni relative dei riquadri. Nel riquadro attivo viene visualizzato un bordo di selezione.  
  
 La finestra dell'Editor immagini può essere modificata in base alle specifiche esigenze e preferenze. È possibile [modificare il fattore di ingrandimento](../windows/changing-the-magnification-factor-image-editor-for-icons.md) e [abilitare o disabilitare la visualizzazione della griglia in pixel](../windows/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md).  
  
> [!NOTE]
>  Utilizzando l'Editor immagini, è possibile visualizzare, ma non modificare, immagini a 32 bit.  
  
## <a name="visual-studio-image-library"></a>Libreria di immagini di Visual Studio  
 È possibile scaricare gratuitamente la Libreria di immagini di Visual Studio che contiene numerose animazioni, bitmap e icone che è possibile utilizzare nelle applicazioni. Per ulteriori informazioni sul download della libreria, vedere [Libreria di immagini di Visual Studio](/visualstudio/designers/the-visual-studio-image-library).  
  
## <a name="managed-resources"></a>Risorse gestite  
 È possibile utilizzare l'Editor immagini e l' [Editor binario](binary-editor.md) per utilizzare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Editor risorse](../windows/resource-editors.md)   
 [Icone](http://msdn.microsoft.com/library/windows/desktop/ms646973.aspx)