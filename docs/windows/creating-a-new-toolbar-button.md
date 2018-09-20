---
title: Creazione di un nuovo pulsante della barra degli strumenti (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.toolbar
dev_langs:
- C++
helpviewer_keywords:
- Toolbar editor [C++], creating buttons
- toolbar buttons [C++], button image
- toolbar buttons [C++], creating
- toolbar buttons (in Toolbar editor)
ms.assetid: 46c120fe-4f2a-4887-a08f-bd1fea04b3f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8de12d1b421fd78fb9ed2a45cc14826541f72757
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46441694"
---
# <a name="creating-a-new-toolbar-button-c"></a>Creazione di un nuovo pulsante della barra degli strumenti (C++)

### <a name="to-create-a-new-toolbar-button"></a>Per creare un nuovo pulsante della barra degli strumenti

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md) espandere la cartella delle risorse (ad esempio Progetto1.rc).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Espandere la **sulla barra degli strumenti** cartella e selezionare una barra degli strumenti di modifica.

3. Assegnare un ID per il pulsante vuota all'estremità destra della barra degli strumenti. È possibile farlo modificando il **ID** proprietà di [finestra proprietà](/visualstudio/ide/reference/properties-window). Ad esempio, è possibile concedere lo stesso ID di un'opzione di menu di un pulsante della barra degli strumenti. In questo caso, utilizzare la casella di riepilogo a discesa per selezionare i **ID** dell'opzione di menu.

   oppure

   Selezionare il pulsante vuota all'estremità destra della barra degli strumenti (nelle **sulla barra degli strumenti visualizzazione** riquadro) e iniziare a disegnare. Viene assegnato un ID di comando del pulsante predefinito (ID_BUTTON\<n >).

È anche possibile copiare e incollare un'immagine a una barra degli strumenti come un nuovo pulsante.

### <a name="to-add-an-image-to-a-toolbar-as-a-button"></a>Per aggiungere un'immagine da una barra degli strumenti come un pulsante

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), aprire la barra degli strumenti facendovi doppio clic.

2. Successivamente, aprire l'immagine da aggiungere alla barra degli strumenti.

   > [!NOTE]
   > Se si apre l'immagine in Visual Studio, si aprirà nel **immagine** editor. È anche possibile aprire l'immagine in altri programmi di grafica.

3. Dal **Edit** menu, scegliere **copia**.

4. Passare alla barra degli strumenti facendo clic sulla scheda nella parte superiore della finestra di origine.

5. Dal **Edit** menu, scegliere **Incolla**.

   L'immagine verrà visualizzato sulla barra degli strumenti come un nuovo pulsante.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Proprietà dei pulsanti della barra degli strumenti](../windows/toolbar-button-properties.md)<br/>
[Creazione, spostamento e modifica dei pulsanti delle barre degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md)<br/>
[Editor barra degli strumenti](../windows/toolbar-editor.md)