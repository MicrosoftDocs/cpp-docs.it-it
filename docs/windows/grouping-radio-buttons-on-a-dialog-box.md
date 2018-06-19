---
title: Raggruppamento di pulsanti di opzione nella finestra di dialogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.dialog.grouping
dev_langs:
- C++
helpviewer_keywords:
- member variables, adding to radio button groups
- variables, dialog box control member variables
- dialog box controls, grouping radio buttons
- grouping controls
- radio buttons, grouping on dialog boxes
ms.assetid: 3cc43f9e-56c8-4faa-9930-ce81733c69de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: aee3245a65ccdccc32b40c313eecdd45cb3ea8bf
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879328"
---
# <a name="grouping-radio-buttons-on-a-dialog-box"></a>Raggruppamento di pulsanti di opzione in una finestra di dialogo
Quando si aggiungono pulsanti di opzione a una finestra di dialogo, è possibile gestirli come un gruppo impostando la proprietà Group nella finestra Proprietà per il primo pulsante del gruppo. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)viene quindi visualizzato un ID di controllo per tale pulsante di opzione, consentendo di aggiungere una variabile membro per il gruppo di pulsanti di opzione.  
  
 Una finestra di dialogo può contenere più gruppi di pulsanti di opzione. Per aggiungere ciascun gruppo seguire la procedura riportata di seguito.  
  
### <a name="to-add-a-group-of-radio-buttons-to-a-dialog-box"></a>Per aggiungere un gruppo di pulsanti di opzione a una finestra di dialogo  
  
1.  Selezionare il controllo pulsante di opzione nella finestra [Casella degli strumenti](/visualstudio/ide/reference/toolbox) e selezionare la posizione in cui si vuole inserire il controllo nella finestra di dialogo.  
  
2.  Ripetere il passaggio 1 per aggiungere tutti i pulsanti di opzione necessari. Assicurarsi che i pulsanti di opzione del gruppo siano consecutivi nell'ordine di tabulazione. Per altre informazioni, vedere [Modifica dell'ordine di tabulazione dei controlli](../windows/changing-the-tab-order-of-controls.md).  
  
3.  Nella finestra [Proprietà](/visualstudio/ide/reference/properties-window)impostare la proprietà **Group** del *primo* pulsante di opzione nell'ordine di tabulazione su **True**.  
  
     Modificando la proprietà **Group** su **True** viene aggiunto lo stile WS_GROUP alla voce del pulsante nell'oggetto finestra di dialogo dello script di risorsa e si assicura che l'utente possa selezionare un solo pulsante di opzione alla volta all'interno del gruppo di pulsanti.  
  
    > [!NOTE]
    >  La proprietà **Group** deve essere impostata su **True**solo per il primo pulsante di opzione del gruppo. Se sono disponibili controlli aggiuntivi che non fanno parte del gruppo di pulsanti, impostare su **True** anche la proprietà *Group* del primo controllo **non incluso nel gruppo** . È possibile identificare rapidamente il primo controllo esterno al gruppo premendo CTRL + D in modo da visualizzare l'ordine di tabulazione.  
  
### <a name="to-add-a-member-variable-for-the-radio-button-group"></a>Per aggiungere una variabile membro per il gruppo di pulsanti di opzione  
  
1.  Fare clic con il pulsante destro del mouse sul primo controllo pulsante di opzione nell'ordine di tabulazione, corrispondente al controllo dominante e a quello per cui la proprietà **Group** è stata impostata su True.  
  
2.  Scegliere **Aggiungi variabile** dal menu di scelta rapida.  
  
3.  Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)selezionare la casella di controllo **Variabile controllo** , quindi il pulsante di opzione **Valore** .  
  
4.  Nella casella **Nome variabile** digitare il nome della nuova variabile membro.  
  
5.  Nella casella di riepilogo **Tipo variabile** , selezionare **int** o digitare **int**.  
  
6.  È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Con m_radioBox1 = 0; viene ad esempio selezionato il primo pulsante di opzione del gruppo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)   
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

