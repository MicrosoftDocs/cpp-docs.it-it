---
title: Aggiunta di gestori eventi per i controlli di finestra di dialogo (C++) | Microsoft Docs
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Dialog Editor [C++], adding event handlers to controls
- controls [C++], event handlers
- dialog box controls [C++], events
- event handlers, for dialog box controls
ms.assetid: f9c70f24-ea6f-44df-82eb-78a2deaee769
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5caec6d9d77d743fa1a8455819b813364bde27d0
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44317056"
---
# <a name="adding-event-handlers-for-dialog-box-controls-c"></a>Aggiunta di gestori eventi per i controlli di finestra di dialogo (C++)

Per le finestre di dialogo progetto che sono già associate a una classe, è possibile sfruttare alcuni tasti di scelta rapida quando si crea gestori eventi. È possibile creare rapidamente un gestore per l'evento di notifica di controllo predefinito o per qualsiasi messaggio di Windows.

### <a name="to-create-a-handler-for-the-default-control-notification-event"></a>Per creare un gestore per l'evento di notifica di controllo predefinito

1. Fare doppio clic sul controllo. Il **testo** verrà aperto l'editor.

2. Aggiungere il codice del gestore di controllo notifica nel **testo** editor.

### <a name="to-create-a-handler-for-any-applicable-windows-message"></a>Per creare un gestore per qualsiasi messaggio di Windows

1. Fare clic sul controllo per il quale si desidera gestire l'evento di notifica.

2. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), fare clic sui **eventi di controllo** pulsante per visualizzare l'elenco di eventi Windows comuni associati al controllo. Ad esempio, lo standard **OK** pulsante il **sulle** nella finestra di dialogo vengono elencati gli eventi di notifica seguente:

   - BN_CLICKED

   - BN_DOUBLECLICKED

   - BN_KILLFOCUS

   - BN_SETFOCUS

   > [!NOTE]
   > In alternativa, selezionare la finestra di dialogo e scegliere il **eventi di controllo** pulsante per visualizzare l'elenco di eventi Windows comuni per tutti i controlli nella finestra di dialogo.

3. Nel **delle proprietà** finestra, selezionare la colonna destra accanto all'evento da gestire e quindi selezionare il nome di evento di notifica suggerite (ad esempio, `OnBnClickedOK` gestisce BN_CLICKED).

   > [!NOTE]
   > In alternativa, è possibile fornire un nome del gestore eventi di propria scelta, anziché selezionare il nome del gestore eventi predefinito.

   Dopo aver selezionato l'evento, Visual Studio apre il **Editor di testo** e visualizza il codice del gestore eventi. Ad esempio, il codice seguente viene aggiunto per impostazione predefinita `OnBnClickedOK`:

    ```cpp
    void CAboutDlg::OnBnClickedOk(void)
    {
        // TODO: Add your control notification handler code here
    }
    ```

Se si desidera aggiungere il gestore dell'evento a una classe diverso da quello che implementa la finestra di dialogo, usare il [Creazione guidata gestore eventi](../ide/event-handler-wizard.md). Per altre informazioni, vedere [aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Eventi di controlli predefiniti](../windows/default-control-events.md)  
[Definizione di variabili membro per i controlli della finestra di dialogo](../windows/defining-member-variables-for-dialog-controls.md)  
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)  
[Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)  
[Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)  
[Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)  
[Una funzione Virtual in override](../ide/overriding-a-virtual-function-visual-cpp.md)  
[Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)  