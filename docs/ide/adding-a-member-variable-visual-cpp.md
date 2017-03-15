---
title: "Aggiunta di una variabile membro (Visual C++) | Microsoft Docs"
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
  - "vc.codewiz.classes.member.variable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "variabili membro"
  - "variabili membro, aggiunta"
ms.assetid: 437783bd-8eb4-4508-8b73-7380116e9d71
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una variabile membro (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile aggiungere una variabile membro a una classe mediante Visualizzazione classi.  Le variabili membro possono essere generiche o specifiche per lo [scambio e la convalida dei dati](../mfc/dialog-data-exchange-and-validation.md).  Utilizzando Aggiunta guidata variabile membro è possibile scegliere le informazioni rilevanti da utilizzare per inserire elementi nelle posizioni appropriate nei file di origine.  È possibile aggiungere una variabile membro dall'[Editor finestre](../mfc/dialog-editor.md) in [Visualizzazione risorse](../windows/resource-view-window.md) o da [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925).  
  
> [!NOTE]
>  Nella progettazione e nell'implementazione di una finestra di dialogo, in alcuni casi è consigliabile utilizzare l'Editor finestre per aggiungere i controlli finestra di dialogo, quindi implementare le variabili membro dei controlli.  
  
### Per aggiungere una variabile membro per un controllo finestra di dialogo in Visualizzazione risorse tramite l'Aggiunta guidata variabile membro  
  
1.  In Visualizzazione risorse espandere il nodo del progetto e quello della finestra di dialogo per visualizzare l'elenco delle finestre di dialogo del progetto.  
  
2.  Per aprire la finestra di dialogo alla quale si desidera aggiungere la variabile membro nell'Editor finestre, fare doppio clic su di essa.  
  
3.  Nella finestra di dialogo visualizzata nell'Editor finestre fare clic con il pulsante destro del mouse sul controllo al quale aggiungere la variabile membro.  
  
4.  Scegliere **Aggiungi variabile** dal menu di scelta rapida per visualizzare l'[Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md).  
  
    > [!NOTE]
    >  Un valore predefinito è già fornito in **Control ID**.  
  
5.  Immettere le informazioni nelle caselle appropriate della procedura guidata.  Per ulteriori informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).  
  
6.  Scegliere **Fine** per aggiungere al progetto il codice di definizione e di implementazione e chiudere la procedura guidata.  
  
### Per aggiungere una variabile membro da Visualizzazione classi mediante l'Aggiunta guidata variabile membro  
  
1.  In [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) espandere il nodo del progetto per visualizzarne le classi.  
  
2.  Fare clic con il pulsante destro del mouse sulla classe alla quale aggiungere una variabile.  
  
3.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi variabile** per visualizzare l'Aggiunta guidata variabile membro.  
  
4.  Immettere le informazioni nelle caselle appropriate della procedura guidata.  Per informazioni dettagliate, vedere [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md).  
  
5.  Scegliere **Fine** per aggiungere al progetto il codice di definizione e di implementazione e chiudere la procedura guidata.  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)