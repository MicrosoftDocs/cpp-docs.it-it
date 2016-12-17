---
title: "Dichiarazione di una variabile basata su una nuova classe di controlli | Microsoft Docs"
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
  - "vc.codewiz.classes.control.variable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], dichiarazione di variabili basate su"
  - "classi di controlli, variabili"
  - "variabili, classi di controlli"
ms.assetid: 5722dc38-c0eb-40bd-93da-67a808140d03
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dichiarazione di una variabile basata su una nuova classe di controlli
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dopo avere creato una classe di controlli MFC, è possibile dichiarare una variabile basata su di essa.  Per fornire un contesto per la nuova variabile, aprire l'editor finestre e modificare la finestra di dialogo nella quale utilizzare il controllo riutilizzabile.  È inoltre necessario che una classe sia già associata alla finestra di dialogo.  Per informazioni sull'uso dell'editor finestre, vedere [Editor finestre](../../mfc/dialog-editor.md).  
  
### Per dichiarare una variabile basata sulla classe riutilizzabile  
  
1.  Durante la modifica della finestra di dialogo, trascinare un controllo dello stesso tipo della classe base del nuovo controllo dalla barra degli strumenti Controlli sulla finestra di dialogo.  
  
2.  Collocare il puntatore del mouse sul controllo rilasciato.  
  
3.  Fare doppio clic sul controllo tenendo premuto CTRL.  
  
     Verrà visualizzata la finestra di dialogo [Aggiunta guidata variabile membro](../../ide/add-member-variable-wizard.md).  
  
4.  Nella casella **Accesso** selezionare l'accesso corretto per il controllo.  
  
5.  Selezionare la casella di controllo **Variabile di controllo**.  
  
6.  Digitare un nome nella casella **Nome variabile**.  
  
7.  In **Categoria** fare clic su **Controllo**.  
  
8.  Dall'elenco **ID controllo** selezionare il controllo aggiunto.  Nell'elenco **Tipo variabile** verrà visualizzato il tipo di variabile corretto e nella casella **Tipo controllo** comparirà il tipo di controllo.  
  
9. Nella casella **Commento** aggiungere il commento che si desidera inserire nel codice.  
  
10. Scegliere **OK**.  
  
## Vedere anche  
 [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)