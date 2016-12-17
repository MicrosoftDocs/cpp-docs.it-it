---
title: "Grouping Radio Buttons on a Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.dialog.grouping"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "member variables, adding to radio button groups"
  - "variables, dialog box control member variables"
  - "dialog box controls, grouping radio buttons"
  - "grouping controls"
  - "radio buttons, grouping on dialog boxes"
ms.assetid: 3cc43f9e-56c8-4faa-9930-ce81733c69de
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Grouping Radio Buttons on a Dialog Box
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si aggiungono pulsanti di opzione a una finestra di dialogo, è possibile gestirli come un gruppo impostando la proprietà Group nella finestra Proprietà per il primo pulsante del gruppo. Nell'[Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) viene quindi visualizzato un ID di controllo per tale pulsante di opzione, consentendo di aggiungere una variabile membro per il gruppo di pulsanti di opzione.  
  
 Una finestra di dialogo può contenere più gruppi di pulsanti di opzione. Per aggiungere ciascun gruppo seguire la procedura riportata di seguito.  
  
### Per aggiungere un gruppo di pulsanti di opzione a una finestra di dialogo  
  
1.  Selezionare il controllo pulsante di opzione nella finestra [Casella degli strumenti](../Topic/Toolbox.md) e selezionare la posizione in cui si vuole inserire il controllo nella finestra di dialogo.  
  
2.  Ripetere il passaggio 1 per aggiungere tutti i pulsanti di opzione necessari. Assicurarsi che i pulsanti di opzione del gruppo siano consecutivi nell'ordine di tabulazione. Per altre informazioni, vedere [Modifica dell'ordine di tabulazione dei controlli](../mfc/changing-the-tab-order-of-controls.md).  
  
3.  Nella finestra [Proprietà](../Topic/Properties%20Window.md) impostare la proprietà **Group** del *primo* pulsante di opzione nell'ordine di tabulazione su **True**.  
  
     Modificando la proprietà **Group** su **True** viene aggiunto lo stile WS\_GROUP alla voce del pulsante nell'oggetto finestra di dialogo dello script di risorsa e si assicura che l'utente possa selezionare un solo pulsante di opzione alla volta all'interno del gruppo di pulsanti.  
  
    > [!NOTE]
    >  La proprietà **Group** deve essere impostata su **True** solo per il primo pulsante di opzione del gruppo. Se sono disponibili controlli aggiuntivi che non fanno parte del gruppo di pulsanti, impostare su **True** anche la proprietà **Group** del primo controllo *non incluso nel gruppo*. È possibile identificare rapidamente il primo controllo esterno al gruppo premendo CTRL \+ D in modo da visualizzare l'ordine di tabulazione.  
  
### Per aggiungere una variabile membro per il gruppo di pulsanti di opzione  
  
1.  Fare clic con il pulsante destro del mouse sul primo controllo pulsante di opzione nell'ordine di tabulazione, corrispondente al controllo dominante e a quello per cui la proprietà **Group** è stata impostata su True.  
  
2.  Scegliere **Aggiungi variabile** dal menu di scelta rapida.  
  
3.  Nell'[Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) selezionare la casella di controllo **Variabile controllo**, quindi il pulsante di opzione **Valore**.  
  
4.  Nella casella **Nome variabile** digitare il nome della nuova variabile membro.  
  
5.  Nella casella di riepilogo **Tipo variabile**, selezionare **int** o digitare **int**.  
  
6.  È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Con m\_radioBox1 \= 0; viene ad esempio selezionato il primo pulsante di opzione del gruppo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Arrangement of Controls on Dialog Boxes](../mfc/arrangement-of-controls-on-dialog-boxes.md)   
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)