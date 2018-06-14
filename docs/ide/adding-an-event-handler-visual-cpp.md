---
title: Aggiunta di un gestore dell'evento (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.eventhandler.overview
dev_langs:
- C++
helpviewer_keywords:
- event handlers, adding
- properties [Visual Studio], MSBuild
- MSBuild, properties
ms.assetid: 050bebf0-a9e0-474b-905c-796fe5ac8fc3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 184161b22358f77845b5f7c4b6da0bb42f3ea15f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33324915"
---
# <a name="adding-an-event-handler-visual-c"></a>Aggiunta di un gestore eventi (Visual C++)
Dall'editor di risorse è possibile aggiungere un nuovo gestore dell'evento o modificare un gestore dell'evento esistente per un controllo di finestra di dialogo usando la [Creazione guidata gestore eventi](../ide/event-handler-wizard.md).  
  
 È possibile aggiungere un evento alla classe che implementa la finestra di dialogo usando la [finestra Proprietà](/visualstudio/ide/reference/properties-window). Se si vuole aggiungere l'evento a una classe diversa dalla classe della finestra di dialogo, usare la Creazione guidata gestore eventi.  
  
### <a name="to-add-an-event-handler-to-a-dialog-box-control"></a>Per aggiungere un gestore dell'evento a un controllo di finestra di dialogo  
  
1.  Fare doppio clic sulla risorsa finestra di dialogo nella [Visualizzazione risorse](../windows/resource-view-window.md) per aprire la risorsa che contiene il controllo nell'[Editor di finestre](../windows/dialog-editor.md).  
  
2.  Fare clic con il pulsante destro del mouse sul controllo per il quale si vuole gestire l'evento di notifica.  
  
3.  Nel menu di scelta rapida fare clic su **Aggiungi gestore eventi** per visualizzare la Creazione guidata gestore eventi.  
  
4.  Selezionare l'evento nella casella **Tipo di messaggio** per aggiungerlo alla classe selezionata nella casella **Elenco classi**.  
  
5.  Accettare il nome predefinito nella casella **Nome gestore funzioni** o specificare il nome desiderato.  
  
6.  Fare clic su **Aggiungi e modifica** per aggiungere il gestore dell'evento al progetto e aprire l'editor di testo nella nuova funzione per aggiungere il codice del gestore dell'evento appropriato.  
  
     Se il tipo di messaggio selezionato ha già un gestore dell'evento per la classe selezionata, **Aggiungi e modifica** non è disponibile e **Modifica codice** è disponibile. Fare clic su **Modifica codice** per aprire l'editor di testo nella funzione esistente.  
  
 In alternativa, è possibile aggiungere i gestori di eventi dalla [finestra Proprietà](/visualstudio/ide/reference/properties-window). Per altre informazioni, vedere [Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)