---
title: Il passaggio tra codice e finestre di dialogo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- events [C++], viewing for controls
- Windows messages [C++], controls
- messages [C++], viewing for dialog boxes
- Dialog editor, accessing code
- code [C++], switching from Dialog Editor
- controls [C++], jumping to code
- Dialog editor, switching between controls and code
ms.assetid: 7da73815-b853-4203-ba45-bbe570695122
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9aa603afdd6392f9dbe6082a76c1ae157bd008af
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610856"
---
# <a name="switching-between-dialog-box-controls-and-code"></a>Passaggio dai controlli della finestra di dialogo al codice e viceversa

Nelle applicazioni MFC, è possibile fare doppio clic su controlli di finestre di dialogo per passare al codice del gestore o di creare rapidamente stub di funzioni del gestore.

Con un controllo è selezionato, fare clic sul **eventi di controllo** pulsante o il **messaggi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window) per visualizzare un elenco completo dei messaggi di Windows e gli eventi è disponibile per l'elemento selezionato. Scegliere dall'elenco per creare o modificare le funzioni del gestore.

### <a name="to-jump-to-code-from-the-dialog-editor"></a>Per passare al codice dall'editor finestre

1. Fare doppio clic su un controllo nella finestra di dialogo a cui passare la dichiarazione per la funzione di gestione dei messaggi implementato più di recente. (Per le classi di finestra di dialogo basato su ATL, è sempre passare alla definizione del costruttore.)

### <a name="to-view-events-for-a-control"></a>Per visualizzare gli eventi per un controllo

1. Con un controllo è selezionato, fare clic sui **eventi di controllo** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window).

   > [!NOTE]
   > Facendo clic sui **eventi di controllo** pulsante quando il *nella finestra di dialogo* dispone di un elenco di tutti i controlli espone lo stato attivo nella finestra di dialogo, è quindi possibile espandere per modificare gli eventi per i singoli controlli.

   Quando un singolo controllo ha lo stato attivo nella finestra di dialogo, è possibile pulsante destro del mouse e selezionare **Aggiungi gestore** dal menu di scelta rapida. In questo modo è possibile specificare la classe a cui viene aggiunto il gestore. Per altre informazioni, vedere [aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).

### <a name="to-view-messages-for-a-dialog-box"></a>Per visualizzare i messaggi per una finestra di dialogo

1. Con la finestra di dialogo selezionata, fare clic sul **messaggi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor finestre](../windows/dialog-editor.md)