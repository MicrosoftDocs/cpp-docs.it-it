---
title: Dichiarazione di una variabile in base la nuova classe di controllo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.classes.control.variable
dev_langs: C++
helpviewer_keywords:
- variables [MFC], control classes
- control classes [MFC], variables
- classes [MFC], declaring variables based on
ms.assetid: 5722dc38-c0eb-40bd-93da-67a808140d03
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5aa98f815d9f9322c11d4256c13c0c7a42b4ab66
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="declaring-a-variable-based-on-your-new-control-class"></a>Dichiarazione di una variabile basata su una nuova classe di controlli
Dopo aver creato una classe di controlli MFC, è possibile dichiarare una variabile basata su di esso. Per fornire un contesto per la nuova variabile, è necessario aprire l'editor della finestra di dialogo e modificare la finestra di dialogo in cui si desidera utilizzare il controllo riutilizzabile. Inoltre, la finestra di dialogo è necessario avere già una classe è associata. Per informazioni sull'utilizzo dell'editor finestre, vedere [finestra di dialogo Editor](../../windows/dialog-editor.md).  
  
### <a name="to-declare-a-variable-based-on-your-reusable-class"></a>Per dichiarare una variabile basata sulla classe riutilizzabile  
  
1.  Quando si modifica la finestra di dialogo, trascinare un controllo dello stesso tipo come classe di base del nuovo controllo nella barra degli strumenti dei controlli nella finestra di dialogo.  
  
2.  Posizionare il puntatore del mouse sul controllo rilasciato.  
  
3.  Tenere premuto il tasto CTRL e fare doppio clic sul controllo.  
  
     Il [Aggiunta guidata variabile membro](../../ide/add-member-variable-wizard.md) viene visualizzata la finestra di dialogo.  
  
4.  Nel **accesso** selezionare dell'accesso corretto per il controllo.  
  
5.  Fare clic su di **la variabile di controllo** casella di controllo.  
  
6.  Nel **nome di variabile** , digitare un nome.  
  
7.  In **categoria**, fare clic su **controllo**.  
  
8.  Nel **ID controllo** elenco, selezionare il controllo aggiunto. Il **tipo di variabile** elenco verrà visualizzato il tipo di variabile corretto e **tipo di controllo** casella deve essere visualizzato il tipo di controllo.  
  
9. Nel **commento** aggiungere qualsiasi commento da visualizzare nel codice.  
  
10. Fare clic su **OK**.  
  
## <a name="see-also"></a>Vedere anche  
 [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Una funzione Virtual in override](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura di classe](../../ide/navigating-the-class-structure-visual-cpp.md)
