---
title: "Aggiunta di un gestore eventi (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.eventhandler.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestori eventi, aggiunta"
  - "MSBuild, proprietà"
  - "proprietà [Visual Studio], MSBuild"
ms.assetid: 050bebf0-a9e0-474b-905c-796fe5ac8fc3
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di un gestore eventi (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dall'editor di risorse è possibile aggiungere un nuovo gestore eventi per un controllo della finestra di dialogo utilizzando la [Creazione guidata gestore eventi](../ide/event-handler-wizard.md).  
  
 È possibile aggiungere un evento alla classe che implementa la finestra di dialogo utilizzando la [finestra Proprietà](../Topic/Properties%20Window.md).  Per aggiungere l'evento a una classe diversa dalla classe della finestra di dialogo, utilizzare la Creazione guidata gestore eventi.  
  
### Per aggiungere un gestore eventi a un controllo finestra di dialogo  
  
1.  Fare doppio clic sulla risorsa finestra di dialogo in [Visualizzazione risorse](../windows/resource-view-window.md) per aprire la risorsa finestra di dialogo contenente il controllo nell'[editor finestre](../mfc/dialog-editor.md).  
  
2.  Fare clic con il pulsante destro del mouse sul controllo per il quale si desidera gestire l'evento di notifica.  
  
3.  Scegliere **Aggiungi gestore eventi** dal menu di scelta rapida per visualizzare la Creazione guidata gestore eventi.  
  
4.  Selezionare l'evento nella casella **Tipo messaggio** per aggiungerlo alla classe selezionata nella casella **Elenco classi**.  
  
5.  Accettare il nome predefinito nella casella **Nome gestore funzioni** o specificare il nome scelto.  
  
6.  Fare clic su **Aggiungi e modifica** per aggiungere il gestore eventi al progetto e aprire l'editor di testo nella nuova funzione per aggiungere il codice del gestore eventi appropriato.  
  
     Se il tipo di messaggio selezionato presenta già un gestore eventi per la classe selezionata, **Aggiungi e modifica** non sarà disponibile, mentre sarà disponibile **Modifica codice**.  Fare clic su **Modifica codice** per aprire l'editor di testo nella funzione esistente.  
  
 In alternativa è possibile aggiungere gestori eventi dalla [finestra Proprietà](../Topic/Properties%20Window.md).  Per ulteriori informazioni, vedere [Aggiunta di gestori eventi per i controlli finestra di dialogo](../mfc/adding-event-handlers-for-dialog-box-controls.md).  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)