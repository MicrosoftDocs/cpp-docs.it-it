---
title: Aggiunta di gestori eventi per i controlli della finestra di dialogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Dialog editor, adding event handlers to controls
- controls [C++], event handlers
- dialog box controls, events
- event handlers, for dialog box controls
ms.assetid: f9c70f24-ea6f-44df-82eb-78a2deaee769
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f05a9bc05dea6d217505e2e098dc2fde0d251894
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33863699"
---
# <a name="adding-event-handlers-for-dialog-box-controls"></a>Aggiunta di gestori eventi per i controlli della finestra di dialogo
Per finestre di dialogo di progetto che sono già associati a una classe, è possibile sfruttare alcune scelte rapide durante la creazione di gestori eventi. È possibile creare rapidamente un gestore per l'evento di notifica di controllo predefinito o per qualsiasi messaggio di Windows.  
  
#### <a name="to-create-a-handler-for-the-default-control-notification-event"></a>Per creare un gestore per l'evento di notifica di controllo predefinito  
  
1.  Fare doppio clic sul controllo. Verrà aperto l'editor di testo.  
  
2.  Aggiungere il codice del gestore notifica di controllo nell'editor di testo.  
  
#### <a name="to-create-a-handler-for-any-applicable-windows-message"></a>Per creare un gestore per qualsiasi messaggio di Windows  
  
1.  Scegliere il controllo per il quale si desidera gestire l'evento di notifica.  
  
2.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), fare clic su di **eventi di controllo** pulsante per visualizzare l'elenco di eventi comuni di Windows associato al controllo. Ad esempio, lo standard **OK** pulsante il **su** la finestra di dialogo sono elencati gli eventi di notifica seguente:  
  
 **BN_CLICKED**  
  
 **BN_DOUBLECLICKED**  
  
 **BN_KILLFOCUS**  
  
 **BN_SETFOCUS**  
  
    > [!NOTE]
    >  In alternativa, selezionare la finestra di dialogo e scegliere il **eventi di controllo** pulsante per visualizzare l'elenco di eventi comuni di Windows per tutti i controlli nella finestra di dialogo.  
  
3.  Nel **proprietà** finestra, fare clic sulla colonna destra accanto all'evento da gestire e quindi selezionare il nome di evento di notifica suggerito (ad esempio, **OnBnClickedOK** handle **BN_CLICKED** ).  
  
    > [!NOTE]
    >  In alternativa, è possibile fornire un nome del gestore eventi di propria scelta, anziché selezionare il nome del gestore eventi predefinito.  
  
     Dopo aver selezionato l'evento, Visual Studio apre l'Editor di testo e viene visualizzato il codice del gestore eventi. Ad esempio, il codice seguente viene aggiunto per il valore predefinito **OnBnClickedOK**:  
  
 ```  
    void CAboutDlg::OnBnClickedOk(void)  
 { *// TODO: Add your control notification handler code here  
 }  
 ```  
  
 Se si desidera aggiungere il gestore dell'evento a una classe diversa da quella che implementa la finestra di dialogo, utilizzare il [Creazione guidata gestore eventi](../ide/event-handler-wizard.md). Per ulteriori informazioni, vedere [aggiungendo un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
### <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Eventi di controlli predefiniti](../windows/default-control-events.md)   
 [Definizione di variabili membro per i controlli di finestra di dialogo](../windows/defining-member-variables-for-dialog-controls.md)   
 [Tipi di variabili e controlli finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Una funzione Virtual in override](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)

