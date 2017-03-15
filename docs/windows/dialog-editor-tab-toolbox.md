---
title: "Scheda Editor finestre, Casella degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Casella degli strumenti [C++], scheda Editor di finestre"
  - "controlli [C++], tipi"
  - "controlli syslink nelle finestre di dialogo"
  - "controlli personalizzati [Visual Studio], finestre di dialogo"
  - "controlli [C++], standard"
  - "Editor di finestre, creazione controlli"
  - "controlli [C++], aggiunta a finestre di dialogo"
ms.assetid: 253885c2-dcb9-4d8e-ac9b-805ea31cbf5e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Scheda Editor finestre, Casella degli strumenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La scheda Editor finestre viene visualizzata nella [finestra Casella degli strumenti](../Topic/Toolbox.md) quando si usa l'editor finestre. Per aggiungere controlli alla nuova finestra di dialogo, trascinarli dalla Casella degli strumenti alla finestra di dialogo creata \(per altre informazioni, vedere [Aggiunta di un controllo a una finestra di dialogo](../mfc/adding-a-control-to-a-dialog-box.md)\). È quindi possibile spostare i controlli all'interno della finestra oppure modificarne la dimensione e la forma.  
  
 Nella Casella degli strumenti sono disponibili i controlli standard seguenti:  
  
-   [Controllo Button](../mfc/reference/cbutton-class.md)  
  
-   [Controllo Check Box](../mfc/reference/button-styles.md)  
  
-   [Controllo Combo Box](../mfc/reference/ccombobox-class.md)  
  
-   [Controllo Edit](../mfc/reference/cedit-class.md)  
  
-   Casella di gruppo  
  
-   [Controllo List Box](../mfc/reference/clistbox-class.md)  
  
-   [Controllo Radio Button](../mfc/reference/button-styles.md)  
  
-   [Controllo Static Text](../mfc/reference/cstatic-class.md)  
  
-   [Controllo Picture](../mfc/reference/cpictureholder-class.md)  
  
-   [Controllo Rich Edit 2.0](../mfc/using-cricheditctrl.md)  
  
-   [Controllo Scroll Bar](../mfc/reference/cscrollbar-class.md)  
  
 I [controlli comuni di Windows](../mfc/controls-mfc.md) disponibili nella casella degli strumenti incrementano le funzionalità dell'applicazione e comprendono:  
  
-   [Controllo Slider](../mfc/slider-control-styles.md)  
  
-   [Controllo Spin](../mfc/using-cspinbuttonctrl.md)  
  
-   [Controllo Progress](../mfc/styles-for-the-progress-control.md)  
  
-   [Controllo Hot Key](../mfc/using-a-hot-key-control.md)  
  
-   [Controllo List](../mfc/list-control-and-list-view.md)  
  
-   [Controllo Tree](../mfc/tree-control-styles.md)  
  
-   [Controllo Tab](../mfc/tab-controls-and-property-sheets.md)  
  
-   [Controllo Animation](../mfc/using-an-animation-control.md)  
  
-   [Controllo Date Time Picker](../mfc/creating-the-date-and-time-picker-control.md)  
  
-   [Controllo Month Calendar](../mfc/month-calendar-control-examples.md)  
  
-   [Controllo IP Address](../mfc/reference/cipaddressctrl-class.md)  
  
-   [Controllo Extended Combo Box](../mfc/creating-an-extended-combo-box-control.md)  
  
-   [Controllo personalizzato](../mfc/custom-controls-in-the-dialog-editor.md)  
  
 Per aggiungere controlli personalizzati alla finestra di dialogo, selezionare l'icona **Controllo personalizzato** nella Casella degli strumenti e trascinarla nella finestra di dialogo. Per aggiungere un controllo Syslink, aggiungere un controllo personalizzato, quindi impostare la proprietà **Class** del controllo su **Syslink**. Le proprietà verranno aggiornate e verranno visualizzate le proprietà del controllo Syslink. Per informazioni sulla classe wrapper MFC, vedere [CLinkCtrl](../mfc/reference/clinkctrl-class.md).  
  
 Si possono anche [aggiungere controlli ActiveX a una finestra di dialogo](../mfc/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
 È anche possibile personalizzare la finestra Casella degli strumenti per una maggiore semplicità di utilizzo. Per altre informazioni, vedere [Gestione di elementi e schede nella Casella degli strumenti](http://msdn.microsoft.com/it-it/21285050-cadd-455a-b1f5-a2289a89c4db). Ad esempio, è possibile inserire controlli nella finestra Casella degli strumenti per semplificare l'accesso. Per altre informazioni, vedere [Finestra di dialogo Personalizza Casella degli strumenti](http://msdn.microsoft.com/it-it/bd07835f-18a8-433e-bccc-7141f65263bb).  
  
 Per altre informazioni sull'uso del controllo RichEdit 1.0 con MFC, vedere [Uso del controllo RichEdit 1.0 con MFC](../mfc/using-the-richedit-1-0-control-with-mfc.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Controlli](../mfc/controls-mfc.md)   
 [Classi dei controlli](../mfc/control-classes.md)   
 [Classi di finestre di dialogo](../mfc/dialog-box-classes.md)   
 [Stili barra di scorrimento](../mfc/reference/scroll-bar-styles.md)   
 [Esempi di controlli Rich Edit](../mfc/rich-edit-control-examples.md)   
 [Adding Event Handlers for Dialog Box Controls](../mfc/adding-event-handlers-for-dialog-box-controls.md)   
 [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)