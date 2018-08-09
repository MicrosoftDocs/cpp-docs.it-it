---
title: Raggruppamento di pulsanti di opzione in una finestra di dialogo | Microsoft Docs
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
ms.openlocfilehash: c3d0e20d8b2b88a7141672117d4c0b036682953e
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641418"
---
# <a name="grouping-radio-buttons-on-a-dialog-box"></a>Raggruppamento di pulsanti di opzione in una finestra di dialogo
Quando si aggiungono pulsanti di opzione per una finestra di dialogo, è possibile gestirli come un gruppo impostando una **gruppo** proprietà nel **proprietà** finestra per il primo pulsante del gruppo. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)viene quindi visualizzato un ID di controllo per tale pulsante di opzione, consentendo di aggiungere una variabile membro per il gruppo di pulsanti di opzione.  
  
 Una finestra di dialogo può contenere più gruppi di pulsanti di opzione. Per aggiungere ciascun gruppo seguire la procedura riportata di seguito.  
  
### <a name="to-add-a-group-of-radio-buttons-to-a-dialog-box"></a>Per aggiungere un gruppo di pulsanti di opzione a una finestra di dialogo  
  
1.  Selezionare il controllo pulsante di opzione nella finestra [Casella degli strumenti](/visualstudio/ide/reference/toolbox) e selezionare la posizione in cui si vuole inserire il controllo nella finestra di dialogo.  
  
2.  Ripetere il passaggio 1 per aggiungere tutti i pulsanti di opzione necessari. Assicurarsi che i pulsanti di opzione del gruppo siano consecutivi nell'ordine di tabulazione. Per altre informazioni, vedere [Modifica dell'ordine di tabulazione dei controlli](../windows/changing-the-tab-order-of-controls.md).  
  
3.  Nella finestra [Proprietà](/visualstudio/ide/reference/properties-window)impostare la proprietà **Group** del *primo* pulsante di opzione nell'ordine di tabulazione su **True**.  
  
     Modificando la proprietà **Group** su **True** viene aggiunto lo stile WS_GROUP alla voce del pulsante nell'oggetto finestra di dialogo dello script di risorsa e si assicura che l'utente possa selezionare un solo pulsante di opzione alla volta all'interno del gruppo di pulsanti.  
  
    > [!NOTE]
    >  La proprietà **Group** deve essere impostata su **True**solo per il primo pulsante di opzione del gruppo. Se sono disponibili controlli aggiuntivi che non fanno parte del gruppo di pulsanti, impostare su **True** anche la proprietà *Group* del primo controllo **non incluso nel gruppo** . È possibile identificare rapidamente il primo controllo esterno al gruppo premendo **Ctrl**+**1!d** per visualizzare l'ordine di tabulazione.  
  
### <a name="to-add-a-member-variable-for-the-radio-button-group"></a>Per aggiungere una variabile membro per il gruppo di pulsanti di opzione  
  
1.  Fare clic con il pulsante destro del mouse sul primo controllo pulsante di opzione nell'ordine di tabulazione, corrispondente al controllo dominante e a quello per cui la proprietà **Group** è stata impostata su True.  
  
2.  Scegliere **Aggiungi variabile** dal menu di scelta rapida.  
  
3.  Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)selezionare la casella di controllo **Variabile controllo** , quindi il pulsante di opzione **Valore** .  
  
4.  Nella casella **Nome variabile** digitare il nome della nuova variabile membro.  
  
5.  Nel **tipo di variabile** casella di riepilogo, seleziona **int** o un tipo `int`.  
  
6.  È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Ad esempio, `m_radioBox1 = 0;` seleziona il primo pulsante di opzione nel gruppo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)   
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)