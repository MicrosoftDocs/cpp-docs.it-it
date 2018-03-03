---
title: Scheda Editor finestre, casella degli strumenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Toolbox [C++], Dialog Editor tab
- controls [C++], types
- syslink controls ino dialog boxes
- custom controls [Visual Studio], dialog boxes
- controls [C++], standard
- Dialog editor, creating controls
- controls [C++], adding to dialog boxes
ms.assetid: 253885c2-dcb9-4d8e-ac9b-805ea31cbf5e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9db31d6e152be10f2c4934b7b1f239d1e08387f5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dialog-editor-tab-toolbox"></a>Scheda Editor finestre, Casella degli strumenti
La scheda Editor finestre viene visualizzata nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox) quando si utilizza l'editor finestre. Per aggiungere controlli alla nuova finestra di dialogo, trascinare i controlli dalla casella degli strumenti nella finestra di dialogo creata (per ulteriori informazioni, vedere [aggiunta di un controllo alla finestra di dialogo](adding-a-control-to-a-dialog-box.md)). È quindi possibile spostare i controlli all'interno della finestra oppure modificarne la dimensione e la forma.  
  
 Nella Casella degli strumenti sono disponibili i controlli standard seguenti:  
  
-   [Controllo Button](../mfc/reference/cbutton-class.md)  
  
-   [Casella di controllo](../mfc/reference/styles-used-by-mfc.md#button-styles)  
  
-   [Casella combinata](../mfc/reference/ccombobox-class.md)  
  
-   [Controllo di modifica](../mfc/reference/cedit-class.md)  
  
-   Casella di gruppo  
  
-   [Casella di riepilogo](../mfc/reference/clistbox-class.md)  
  
-   [Controllo pulsante di opzione](../mfc/reference/styles-used-by-mfc.md#button-styles)  
  
-   [Controllo Static Text](../mfc/reference/cstatic-class.md)  
  
-   [Controllo immagine](../mfc/reference/cpictureholder-class.md)  
  
-   [Controllo Rich Edit 2.0](../mfc/using-cricheditctrl.md)  
  
-   [Controllo barra di scorrimento](../mfc/reference/cscrollbar-class.md)  
  
 Il [controlli comuni di Windows](../mfc/controls-mfc.md) disponibili nella casella degli strumenti incrementano le funzionalità dell'applicazione. e comprendono:  
  
-   [Controllo dispositivo di scorrimento](../mfc/slider-control-styles.md)  
  
-   [Controllo di selezione](../mfc/using-cspinbuttonctrl.md)  
  
-   [Controllo dello stato](../mfc/styles-for-the-progress-control.md)  
  
-   [Controllo hot Key](../mfc/using-a-hot-key-control.md)  
  
-   [Controllo elenco](../mfc/list-control-and-list-view.md)  
  
-   [Controllo struttura ad albero](../mfc/tree-control-styles.md)  
  
-   [Controllo struttura a schede](../mfc/tab-controls-and-property-sheets.md)  
  
-   [Controllo Animation](../mfc/using-an-animation-control.md)  
  
-   [Controllo Date Time Picker](../mfc/creating-the-date-and-time-picker-control.md)  
  
-   [Controllo calendario mensile](../mfc/month-calendar-control-examples.md)  
  
-   [Controllo indirizzo IP](../mfc/reference/cipaddressctrl-class.md)  
  
-   [Controllo casella combinata estesa](../mfc/creating-an-extended-combo-box-control.md)  
  
-   [Controllo personalizzato](custom-controls-in-the-dialog-editor.md)  
  
 È possibile aggiungere controlli personalizzati alla finestra di dialogo selezionando il **controllo personalizzato** icona nella casella degli strumenti e trascinandolo nella finestra di dialogo. Per aggiungere un controllo Syslink, aggiungere un controllo personalizzato, quindi modificare il controllo **classe** proprietà **Syslink**. Le proprietà verranno aggiornate e verranno visualizzate le proprietà del controllo Syslink. Per informazioni sulla classe wrapper MFC, vedere [CLinkCtrl](../mfc/reference/clinkctrl-class.md).  
  
 È inoltre possibile [aggiungere controlli ActiveX nella finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
 È anche possibile personalizzare la finestra Casella degli strumenti per una maggiore semplicità di utilizzo. Per altre informazioni, vedere [Uso della casella degli strumenti](/visualstudio/ide/using-the-toolbox).  

 Per ulteriori informazioni sull'utilizzo del controllo RichEdit 1.0 con MFC, vedere [utilizzo del controllo RichEdit 1.0 con MFC](../windows/using-the-richedit-1-0-control-with-mfc.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli](../mfc/controls-mfc.md)   
 [Classi di controlli](../mfc/control-classes.md)   
 [Classi di finestra di dialogo](../mfc/dialog-box-classes.md)   
 [Stili barra di scorrimento](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles)   
 [Esempi di controlli Rich Edit](../mfc/rich-edit-control-examples.md)   
 [Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md)   
 [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)

