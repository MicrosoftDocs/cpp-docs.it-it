---
title: Editor di risorse | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vs.editors.resource
- vc.resvw.resource.editors
- vs.resvw.resource.editors
dev_langs:
- C++
helpviewer_keywords:
- editors [C++], resource
- editors [C++]
- resource editors
- Windows [C++], application resource editing
ms.assetid: e20a29ec-d6fb-4ead-98f3-431a0e23aaaf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d05557b6f92fa5bce8506572fd1c651950d6aa23
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594293"
---
# <a name="resource-editors"></a>editor di risorse

Oggetto **risorsa** editor è un ambiente specializzato per la creazione o modifica le risorse incluse in un progetto di Visual Studio. Gli editor di risorse di Visual Studio condividono tecniche e interfacce in modo da semplificare e velocizzare la creazione e la modifica delle risorse delle applicazioni. Gli editor di risorse consentono di [visualizzare e modificare risorse nell'editor appropriato](../windows/viewing-and-editing-resources-in-a-resource-editor.md) e di [visualizzare in anteprima le risorse](../windows/previewing-resources.md).

Quando si crea o si apre una risorsa, si apre automaticamente l'editor appropriato.

**Nota** Dal momento che i progetti gestiti non usano i file di script di risorse, è necessario aprire le risorse da **Esplora soluzioni**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

|Usare|Per modificare|
|----------------|----------------|
|[Editor tasti di scelta rapida](../windows/accelerator-editor.md)|Tabelle dei tasti di scelta rapida in progetti Visual C++.|
|[Binary Editor](binary-editor.md)|Informazioni sui dati binari e risorse personalizzate in progetti Visual C++, Visual Basic o Visual C#.|
|[Editor finestre](../windows/dialog-editor.md)|Finestre di dialogo nei progetti di Visual C++.|
|[Image Editor](../windows/image-editor-for-icons.md)|Bitmap, icone, cursori e altri file di immagine in progetti Visual C++, Visual Basic o Visual C#.|
|[Editor dei menu](../windows/menu-editor.md)|Risorse menu in progetti Visual C++.|
|[Editor barra multifunzione](../mfc/ribbon-designer-mfc.md)|Risorse della barra multifunzione in progetti MFC.|
|[Editor stringhe](../windows/string-editor.md)|Tabelle di stringhe in progetti Visual C++.|
|[Editor barra degli strumenti](../windows/toolbar-editor.md)|Risorse della barra degli strumenti in progetti Visual C++. L'editor barra degli strumenti fa parte dell'Editor immagini.|
|[Editor di informazioni sulla versione](../windows/version-information-editor.md)|Informazioni sulla versione in progetti Visual C++.|

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Uso di file di risorse](../windows/working-with-resource-files.md)  
[File di risorse](../windows/resource-files-visual-studio.md)  
[Simboli: identificatori di risorsa](../windows/symbols-resource-identifiers.md)  
[Menu e altre risorse](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)