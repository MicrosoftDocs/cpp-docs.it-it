---
title: 'Icone e cursori: risorse immagine per i dispositivi di visualizzazione (Editor di immagini per le icone) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.icon
dev_langs:
- C++
helpviewer_keywords:
- cursors [C++], creating
- image resources, display devices
- icons [C++], creating
- cursors [C++], types
- icons [C++]
- Image editor [C++], icons and cursors
- cursors [C++]
- display devices, creating icons for
- cursors [C++], hot spots
- icons [C++], types
ms.assetid: 8f0809a8-0cf0-4da9-b23d-51f28bf15f5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a3e221c3546e0f9d02a9da7433ca2a353888a57a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606203"
---
# <a name="icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons"></a>Icone e cursori: risorse immagine per i dispositivi di visualizzazione (Editor di immagini per le icone)

Icone e cursori sono risorse grafiche che possono contenere più immagini di diverse dimensioni e le combinazioni di colori per diversi tipi di dispositivi di visualizzazione. Inoltre, un cursore ha un'"area sensibile", ovvero il punto che Windows usa per rilevare la posizione. Icone e cursori vengono creati e modificati utilizzando il **immagine** editor, come le bitmap e altre immagini.

Quando si crea una nuova icona o cursore, la **immagine** editor crea innanzitutto un'immagine di un tipo standard. L'immagine viene inizialmente riempita con il colore della schermata (trasparente). Se l'immagine è un cursore, l'area sensibile inizialmente corrisponde all'angolo superiore sinistro (coordinate 0,0).

Per impostazione predefinita, il **immagine** editor supporta la creazione di immagini aggiuntive per i dispositivi illustrati nella tabella seguente. È possibile creare immagini per altri dispositivi specificando i parametri di larghezza, altezza e numero di colori nella [finestra di dialogo dell'immagine personalizzata](custom-image-dialog-box-image-editor-for-icons.md).

> [!NOTE]
> Usando il **Editor di immagini**, è possibile visualizzare immagini a 32 bit, ma non modificarli.

|Colore|Larghezza (pixel)|Altezza (pixel)|
|-----------|----------------------|-----------------------|
|Monocromatico|16|16|
|Monocromatico|32|32|
|Monocromatico|48|48|
|Monocromatico|64|64|
|Monocromatico|96|96|
|16|16|16|
|16|32|32|
|16|64|64|
|16|48|48|
|16|96|96|
|256|16|16|
|256|32|32|
|256|48|48|
|256|64|64|
|256|96|96|

- [Creazione di una nuova immagine per dispositivo (icona o cursore)](../windows/creating-a-device-image-image-editor-for-icons.md)

- [Aggiunta di un'immagine per un diverso dispositivo di visualizzazione](../windows/adding-an-image-for-a-different-display-device-image-editor-for-icons.md)

- [Copia di un'immagine per dispositivo](../windows/copying-a-device-image-image-editor-for-icons.md)

- [Eliminazione di un'immagine per dispositivo](../windows/deleting-a-device-image-image-editor-for-icons.md)

- [Creazione di aree trasparenti o di inversione nelle immagini per i dispositivi](../windows/creating-transparent-or-inverse-regions-in-device-images.md)

- [Creazione di un cursore o di un'icona a 256 colori](creating-a-256-color-icon-or-cursor-image-editor-for-icons.md)

- [Impostazione dell'area sensibile di un cursore](../windows/setting-a-cursor-s-hot-spot-image-editor-for-icons.md)

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)  
[Icone](http://msdn.microsoft.com/library/windows/desktop/ms646973)  
[Cursori](http://msdn.microsoft.com/library/windows/desktop/ms646970)