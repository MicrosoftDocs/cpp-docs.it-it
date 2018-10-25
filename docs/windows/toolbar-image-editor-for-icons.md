---
title: Sulla barra degli strumenti (Editor di immagini di C++ per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.bitmap
- vc.editors.icon
dev_langs:
- C++
helpviewer_keywords:
- Graphics toolbar
- Image editor [C++], toolbar
- Image editor [C++], Option selector
- Properties window
- Option selector, Image editor
ms.assetid: a0af4209-6273-4106-a7c1-0edecc9b5755
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ed6639bdf86a54689834c6eda03a3b6ec4dd171d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50063848"
---
# <a name="toolbar-c-image-editor-for-icons"></a>Sulla barra degli strumenti (Editor di immagini di C++ per le icone)

Il **Editor di immagini** sulla barra degli strumenti contiene gli strumenti di disegno, disegno, immettendo il testo, la cancellazione e la modifica delle visualizzazioni. Contiene inoltre un selettore di opzioni con cui è possibile selezionare le opzioni per l'utilizzo di ogni strumento. Ad esempio, è possibile scegliere da vari larghezze di pennello, fattori di ingrandimento e gli stili di riga.

> [!NOTE]
> Tutti gli strumenti disponibili nel **Editor di immagini** sono anche disponibili dalla barra degli strumenti il **immagine** menu (sotto la **strumenti** comando).

![Barra degli strumenti Editor di immagini](../mfc/media/vcimageeditortoolbar.gif "vcImageEditorToolbar") barra degli strumenti Editor di immagini

Usare la **Editor di immagini** sulla barra degli strumenti e **opzione** selettori, fare clic sullo strumento o opzione che si desidera.

> [!TIP]
> Descrizioni comandi vengono visualizzati quando si passa il cursore su un pulsante della barra degli strumenti. Questi suggerimenti consentono di identificare la funzione di ogni pulsante.

Con il **opzione** selettori è possibile specificare la larghezza di riga, tratto di pennello, e così via. L'icona al **opzione** pulsante del selettore varia a seconda di quale strumento è stato selezionato.

![Disegno di&#45;selettore di forma nella barra degli strumenti Editor di immagini](../mfc/media/vcimageeditortoolbaroptionselector.gif "vcImageEditorToolbarOptionSelector") selettore di opzioni nella barra degli strumenti Editor di immagini

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Visualizzare o nascondere la barra degli strumenti](displaying-or-hiding-the-toolbar-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)