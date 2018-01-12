---
title: "Procedura: chiamare proprietà e metodi di Windows Form di controllo | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- method calls, Windows Forms
- calling methods, Windows Forms control
- calling properties, Windows Forms control
- Windows Forms controls [C++], methods
- calling properties
- Windows Forms controls [C++], properties
ms.assetid: 6e647d8a-fdaa-4aa1-b3fe-04f15cff8eb3
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: eebbc955a0b44b686986e5bd1e753ec8809a3a1d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-call-properties-and-methods-of-the-windows-forms-control"></a>Procedura: chiamare proprietà e metodi del controllo Windows Form
Poiché [GetControl](../mfc/reference/cwinformsview-class.md#getcontrol) restituisce un puntatore a <xref:System.Windows.Forms.Control?displayProperty=fullName>e non un puntatore a `WindowsControlLibrary1::UserControl1`, è consigliabile aggiungere un membro del tipo di controllo utente e inizializzarlo in [IView::OnInitialUpdate ](../mfc/reference/iview-interface.md#oninitialupdate). Ora è possibile chiamare metodi e proprietà utilizzando `m_ViewControl`.  
  
 In questo argomento si presuppone che in precedenza è stata completata [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) e [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).  
  
### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC  
  
1.  Aprire l'applicazione MFC è stato creato in [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).  
  
2.  Aggiungere la riga seguente alla sezione di override pubblica il `CMFC02View` in MFC02View dichiarazione di classe.  
  
     `gcroot<WindowsFormsControlLibrary1::UserControl1 ^> m_ViewControl;`  
  
3.  Aggiungere una sostituzione per OnInitialupdate.  
  
     Visualizzazione di **proprietà** finestra (F4). In **Visualizzazione classi** (CTRL + MAIUSC + C), selezionare la classe CMFC02View. Nel **proprietà** finestra, selezionare l'icona per le sostituzioni. Scoll in basso nell'elenco a OnInitialUpdate. Fare clic sull'elenco a discesa elenco e selezionare \<Aggiungi >. In MFC02View. Verificare che il corpo della funzione OnInitialUpdate è come segue:  
  
    ```  
    CWinFormsView::OnInitialUpdate();  
    m_ViewControl = safe_cast<WindowsFormsControlLibrary1::UserControl1 ^>(this->GetControl());  
    m_ViewControl->textBox1->Text = gcnew System::String("hi");  
    ```  
  
4.  Compilare ed eseguire il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.  
  
     Si noti che la casella di testo è ora abilitata.  
  
## <a name="see-also"></a>Vedere anche  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)