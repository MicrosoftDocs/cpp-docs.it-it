---
title: Aggiunta di una variabile membro (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.classes.member.variable
dev_langs:
- C++
helpviewer_keywords:
- member variables, adding
- member variables
ms.assetid: 437783bd-8eb4-4508-8b73-7380116e9d71
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fa2a8ef8f7bcdc2d90893acdad98705c9588a5d5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="adding-a-member-variable--visual-c"></a>Aggiunta di una variabile membro (Visual C++)
È possibile aggiungere una variabile membro a una classe mediante Visualizzazione classi. Le variabili di membro possono essere di tipo [scambio di dati e la convalida dei dati](../mfc/dialog-data-exchange-and-validation.md), oppure possono essere generici. Creazione guidata variabile membro dati è progettato specificamente per acquisire le informazioni pertinenti e usarlo per inserire gli elementi nei file di origine in posizioni appropriate. È possibile aggiungere una variabile membro dal [editor finestre](../windows/dialog-editor.md) in [visualizzazione risorse](../windows/resource-view-window.md), o da [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925).  
  
> [!NOTE]
>  Quando si progetta e implementa una finestra di dialogo, potrebbe essere preferibile utilizzare la finestra di dialogo editor per aggiungere i controlli di finestra di dialogo, quindi implementare le variabili membro dei controlli.  
  
### <a name="to-add-a-member-variable-for-a-dialog-control-in-resource-view-using-the-add-member-variable-wizard"></a>Per aggiungere una variabile membro per un controllo di finestra di dialogo in visualizzazione risorse mediante l'aggiunta guidata variabile membro  
  
1.  In visualizzazione di risorse, espandere il nodo di progetto e la finestra di dialogo per visualizzare l'elenco di finestre di dialogo del progetto.  
  
2.  Fare doppio clic la finestra di dialogo in cui si desidera aggiungere la variabile membro per aprirlo nell'editor finestre.  
  
3.  Nella finestra di dialogo visualizzata nell'editor finestre, fare il controllo a cui si desidera aggiungere la variabile membro.  
  
4.  Menu di scelta rapida, fare clic su **Aggiungi variabile** per visualizzare il [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md).  
  
    > [!NOTE]
    >  Un valore predefinito è già fornito in **ID controllo**.  
  
5.  Fornire le informazioni nelle caselle appropriate della procedura guidata. Vedere [controlli finestra di dialogo e i tipi di variabile](../ide/dialog-box-controls-and-variable-types.md) per ulteriori informazioni.  
  
6.  Fare clic su **fine** per aggiungere la definizione e implementazione di codice al progetto e chiudere la procedura guidata.  
  
### <a name="to-add-a-member-variable-from-class-view-using-the-add-member-variable-wizard"></a>Per aggiungere una variabile membro da Visualizzazione classi mediante l'aggiunta guidata variabile membro  
  
1.  In [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), espandere il nodo del progetto per visualizzare le classi nel progetto.  
  
2.  Fare clic sulla classe a cui si desidera aggiungere una variabile.  
  
3.  Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi variabile** per visualizzare l'aggiunta guidata variabile membro.  
  
4.  Fornire le informazioni nelle caselle appropriate della procedura guidata. Vedere [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per informazioni dettagliate.  
  
5.  Fare clic su **fine** per aggiungere la definizione e implementazione di codice al progetto e chiudere la procedura guidata.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura di classe](../ide/navigating-the-class-structure-visual-cpp.md)