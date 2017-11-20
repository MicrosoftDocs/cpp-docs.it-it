---
title: Definizione di variabili membro per i controlli finestra | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- member variables, defining for controls
- variables, dialog box control member variables
- controls [C++], member variables
- Dialog editor, defining member variables for controls
ms.assetid: 84347c63-c33c-4b04-91f5-6d008c45ba58
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f81b0d124db2a28b8d38c1a79d7569d8e46742b3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="defining-member-variables-for-dialog-controls"></a>Definizione di variabili membro per i controlli della finestra di dialogo
Per definire una variabile membro per qualsiasi controllo della finestra di dialogo ad eccezione dei pulsanti, è possibile usare il metodo seguente.  
  
> [!NOTE]
>  Questo articolo è valido solo per i controlli di finestra di dialogo in un progetto MFC. ATL (progetti) è necessario utilizzare il **nuovi messaggi di Windows e i gestori eventi** la finestra di dialogo.  
  
### <a name="to-define-a-member-variable-for-a-non-button-dialog-box-control"></a>Per definire una variabile membro per il controllo di una finestra di dialogo (non pulsante)  
  
1.  Nel [editor finestre](../windows/dialog-editor.md), selezionare un controllo.  
  
2.  Mentre si tiene premuto il **CTRL** chiave, fare doppio clic sul controllo finestra di dialogo.  
  
     Il [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) viene visualizzato.  
  
3.  Digitare le informazioni appropriate nella **Aggiunta guidata variabile membro** procedura guidata. Per ulteriori informazioni, vedere [Dialog Data Exchange](../mfc/dialog-data-exchange.md).  
  
4.  Fare clic su **OK** per tornare all'editor finestre.  
  
    > [!TIP]
    >  Per passare da un controllo della finestra di dialogo al gestore esistente, fare doppio clic sul controllo.  
  

  
 È inoltre possibile utilizzare il **variabili membro** scheda **Creazione guidata classe MFC** per aggiungere nuove variabili membro per una classe specificata e visualizzare quelle che sono già stati definiti.  
  
 Requisiti  
  
 MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Creazione guidata classe MFC](../mfc/reference/mfc-class-wizard.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Una funzione Virtual in override](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)

