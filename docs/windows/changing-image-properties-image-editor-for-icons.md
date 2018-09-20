---
title: Modifica delle proprietà dell'immagine (Editor di immagini per le icone) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- images [C++], properties
- Image editor [C++], Properties window
- Properties window, image editor
ms.assetid: f6172bf1-08c4-4dfd-b542-dd8749e83fe6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e3b85faff95e3053ea46edcedef7443cdab445d3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46422233"
---
# <a name="changing-image-properties-image-editor-for-icons"></a>Modifica delle proprietà di immagini (Editor di immagini per le icone)

È possibile impostare o modificare le proprietà di un'immagine utilizzando il [finestra proprietà](/visualstudio/ide/reference/properties-window).

### <a name="to-change-an-images-properties"></a>Per modificare le proprietà dell'immagine

1. Aprire l'immagine nel **immagine** editor.

2. Nel **proprietà** finestra modificare qualsiasi o tutte le proprietà per l'immagine.

   |Proprietà|Descrizione|
   |--------------|-----------------|
   |**Colori**|Specifica la combinazione di colori per l'immagine. Selezionare **monocromatico**, **16**, o **256**, oppure **True colore**. Se è già stata tracciata l'immagine con una tavolozza dei colori-16, selezionando **monocromatico** fa sì che le sostituzioni di bianco e nero per i colori nell'immagine. Contrasto elevato non viene mantenuto sempre: ad esempio, le aree adiacenti del rosso e verde sono entrambi convertite in nero.|
   |**Nome file**|Specifica il nome del file di immagine. Per impostazione predefinita, Visual Studio assegna un nome file base creato rimuovendo i primi quattro caratteri IDB ("_") dall'identificatore di risorsa predefinita (IDB_BITMAP1) e aggiungendo l'estensione corretta. Il nome di file per l'immagine in questo esempio sarà `BITMAP1.bmp`. È possibile rinominarla `MYBITMAP1.bmp`.|
   |**Altezza**|Imposta l'altezza dell'immagine (in pixel). Il valore predefinito è 48. L'immagine viene ritagliata o viene aggiunto uno spazio vuoto sotto l'immagine esistente.|
   |**ID**|Imposta l'identificatore della risorsa. Per un'immagine, Microsoft Visual Studio, per impostazione predefinita, viene assegnato l'identificatore successivo disponibile in una serie: IDB_BITMAP1, IDB_BITMAP2 e così via. Per le icone e cursori vengono utilizzati nomi simili.|
   |**Tavolozza**|Le modifiche dei colori delle proprietà. Fare doppio clic per selezionare un colore e visualizzare il [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). Definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriato.|
   |**SaveCompressed**|Indica se l'immagine è in un formato compresso. Questa proprietà è di sola lettura. Visual Studio non consente di salvare le immagini in un formato compresso, in modo che per tutte le immagini create in Visual Studio, questa proprietà sarà **False**. Se si apre un'immagine compressa (creata in un altro programma) in Visual Studio, questa proprietà sarà **True**. Se si salva un'immagine compressa con Visual Studio, saranno non compresso e questa proprietà torneranno ai valori **False**.|
   |**Larghezza**|Imposta la larghezza dell'immagine (in pixel). Il valore predefinito per le bitmap è pari a 48. L'immagine viene ritagliata o uno spazio vuoto viene aggiunta a destra dell'immagine esistente.|

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)