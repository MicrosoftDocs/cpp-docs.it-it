---
title: Image Editor for Icons | Microsoft Docs
ms.custom: ''
ms.date: 10/17/2018
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
- resource editors [C++], graphics
- Image editor [C++]
- resource editors [C++], Image editor
ms.assetid: 586d2b8b-0348-4883-a85d-1ff0ddbf14dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ecd2b3b94f04a246242a33494a124171e95cae7c
ms.sourcegitcommit: db6b2ad3195e71abfb60b62f3f015f08b0a719d0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/18/2018
ms.locfileid: "49410668"
---
# <a name="image-editor-for-icons"></a>Editor di immagini per le icone

Quando fa clic su un file di immagine (ad esempio con estensione ico, bmp, PNG) in Esplora soluzioni, l'immagine viene aperto nell'Editor di immagini nello stesso modo che i file di codice aperti nell'Editor del codice. Quando è attiva una scheda dell'Editor di immagini, vengono visualizzate le barre degli strumenti con molti strumenti per la creazione e modifica di immagini. Oltre a bitmap, icone e cursori, è possibile modificare immagini in formato GIF o JPEG utilizzando i comandi del menu **Immagine** e gli strumenti disponibili sulla barra degli strumenti dell' **Editor immagini** .

L'Editor immagini consente di effettuare le seguenti operazioni:

- [Modificare le risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)

- [Utilizzare i colori](../windows/working-with-color-image-editor-for-icons.md)

- [Utilizzare icone e cursori ovvero risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)

- [Utilizzare tasti di scelta rapida per i comandi dell'Editor immagini](../windows/accelerator-keys-image-editor-for-icons.md)

Il **Editor di immagini** finestra Mostra due visualizzazioni della stessa immagine, con una barra che separa i due riquadri di divisione. che è possibile trascinare da un lato all'altro per modificare le dimensioni relative dei riquadri. Nel riquadro attivo viene visualizzato un bordo di selezione.

Il **Editor di immagini** finestra può essere adattata alle proprie esigenze e preferenze. È possibile [modificare il fattore di ingrandimento](../windows/changing-the-magnification-factor-image-editor-for-icons.md) e [abilitare o disabilitare la visualizzazione della griglia in pixel](../windows/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md).

> [!NOTE]
> Usando il **Editor di immagini**, è possibile visualizzare immagini a 32 bit, ma non modificarli.

## <a name="visual-studio-image-library"></a>Libreria di immagini di Visual Studio

È possibile scaricare gratuitamente il **Visual Studio Image Library** che contiene numerose animazioni, bitmap e icone che è possibile usare nelle applicazioni. Per ulteriori informazioni sul download della libreria, vedere [Libreria di immagini di Visual Studio](/visualstudio/designers/the-visual-studio-image-library).

## <a name="managed-resources"></a>Risorse gestite

È possibile usare la **immagine** editor e il [editor binario](binary-editor.md) per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Icone](https://msdn.microsoft.com/library/windows/desktop/ms646973.aspx)