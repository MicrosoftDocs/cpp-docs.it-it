---
title: Dichiarazione di una variabile in base la nuova classe di controllo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.classes.control.variable
dev_langs:
- C++
helpviewer_keywords:
- variables, control classes
- control classes, variables
- classes [C++], declaring variables based on
ms.assetid: 5722dc38-c0eb-40bd-93da-67a808140d03
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: a5777019ca87616fbb7c6a0d27140b3fabbf7fde
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="declaring-a-variable-based-on-your-new-control-class"></a>Dichiarazione di una variabile basata su una nuova classe di controlli
Dopo aver creato una classe di controlli MFC, è possibile dichiarare una variabile basata su di esso. Per fornire un contesto per la nuova variabile, è necessario aprire l'editor finestre e modificare la finestra di dialogo in cui si desidera utilizzare il controllo riutilizzabile. Inoltre, la finestra di dialogo deve dispone già di una classe è associata. Per informazioni sull'utilizzo dell'editor finestre, vedere [Editor finestre](../../windows/dialog-editor.md).  
  
### <a name="to-declare-a-variable-based-on-your-reusable-class"></a>Per dichiarare una variabile basata sulla classe riutilizzabile  
  
1.  Quando si modifica la finestra di dialogo, trascinare un controllo dello stesso tipo come classe di base del nuovo controllo dalla barra degli strumenti controlli nella finestra di dialogo.  
  
2.  Posizionare il puntatore del mouse sul controllo rilasciato.  
  
3.  Tenere premuto il tasto CTRL e fare doppio clic sul controllo.  
  
     Il [Aggiunta guidata variabile membro](../../ide/add-member-variable-wizard.md) viene visualizzata la finestra di dialogo.  
  
4.  Nel **accesso** , selezionare l'accesso corretto per il controllo.  
  
5.  Fare clic su di **variabile di controllo** casella di controllo.  
  
6.  Nel **nome della variabile** , digitare un nome.  
  
7.  In **categoria**, fare clic su **controllo**.  
  
8.  Nel **ID controllo** elenco, selezionare il controllo aggiunto. Il **tipo di variabile** elenco dovrebbe essere visualizzato il tipo di variabile corretto e il **tipo di controllo** finestra dovrebbe essere visualizzato il tipo di controllo.  
  
9. Nel **commento** , aggiungere un commento da visualizzare nel codice.  
  
10. Fare clic su **OK**.  
  
## <a name="see-also"></a>Vedere anche  
 [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtuale](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura di classe](../../ide/navigating-the-class-structure-visual-cpp.md)

