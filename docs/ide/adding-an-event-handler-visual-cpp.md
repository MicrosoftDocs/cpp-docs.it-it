---
title: Aggiunta di un gestore eventi (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.eventhandler.overview
dev_langs:
- C++
helpviewer_keywords:
- event handlers, adding
- properties [Visual Studio], MSBuild
- MSBuild, properties
ms.assetid: 050bebf0-a9e0-474b-905c-796fe5ac8fc3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f9a5380bf335a13bbf7b2f54840c9d1160187167
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-an-event-handler-visual-c"></a>Aggiunta di un gestore eventi (Visual C++)
Dall'editor di risorse, è possibile aggiungere un nuovo gestore di evento, o modificare un gestore eventi esistente, per una finestra di dialogo di controllo tramite la [Creazione guidata gestore eventi](../ide/event-handler-wizard.md).  
  
 È possibile aggiungere un evento alla classe che implementa la finestra di dialogo utilizzando il [finestra proprietà](/visualstudio/ide/reference/properties-window). Se si desidera aggiungere l'evento a una classe diversa dalla classe di finestra di dialogo, utilizzare la creazione guidata gestore eventi.  
  
### <a name="to-add-an-event-handler-to-a-dialog-box-control"></a>Per aggiungere un gestore eventi a un controllo di finestra di dialogo  
  
1.  Fare doppio clic sulla risorsa finestra di dialogo in [visualizzazione risorse](../windows/resource-view-window.md) per aprire una risorsa che contiene il controllo nella finestra di dialogo di [editor finestre](../windows/dialog-editor.md).  
  
2.  Fare clic sul controllo per il quale si desidera gestire l'evento di notifica.  
  
3.  Menu di scelta rapida, fare clic su **Aggiungi gestore** per visualizzare la creazione guidata gestore eventi.  
  
4.  Selezionare l'evento nel **tipo di messaggio** casella per aggiungere alla classe selezionata nella **elenco delle classi** casella.  
  
5.  Accettare il nome predefinito nel **nome di funzione del gestore** o di specificare il nome di propria scelta.  
  
6.  Fare clic su **Aggiungi e modifica** per aggiungere il gestore dell'evento al progetto e aprire l'editor di testo nella nuova funzione per aggiungere il codice del gestore eventi appropriato.  
  
     Se il tipo di messaggio selezionato dispone già di un gestore eventi per la classe selezionata, **Aggiungi e modifica** non è disponibile, e **modificare il codice** è disponibile. Fare clic su **modificare il codice** per aprire l'editor di testo nella funzione esistente.  
  
 In alternativa, è possibile aggiungere i gestori eventi dal [finestra proprietà](/visualstudio/ide/reference/properties-window). Vedere [aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura di classe](../ide/navigating-the-class-structure-visual-cpp.md)