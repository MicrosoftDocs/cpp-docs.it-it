---
title: "Procedura: chiamare propriet&#224; e metodi del controllo Windows Form | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "metodi di chiamata, controllo Windows Form"
  - "chiamata di proprietà"
  - "chiamata di proprietà, controllo Windows Form"
  - "metodi (chiamate), Windows Form"
  - "controlli Windows Form [C++], metodi"
  - "controlli Windows Form [C++], proprietà"
ms.assetid: 6e647d8a-fdaa-4aa1-b3fe-04f15cff8eb3
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Procedura: chiamare propriet&#224; e metodi del controllo Windows Form
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CWinFormsView::GetControl](../Topic/CWinFormsView::GetControl.md) restituisce un puntatore a <xref:System.Windows.Forms.Control?displayProperty=fullName> e non a `WindowsControlLibrary1::UserControl1`. È pertanto consigliabile aggiungere un membro del tipo di controllo utente e inizializzarlo in [IView::OnInitialUpdate](../Topic/IView::OnInitialUpdate.md).  Sarà quindi possibile chiamare metodi e proprietà utilizzando `m_ViewControl`.  
  
 In questo argomento si presuppone che in precedenza siano state completate le procedure [Procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) e [Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).  
  
### Per creare l'applicazione host MFC  
  
1.  Aprire l'applicazione MFC creata in [Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).  
  
2.  Aggiungere la seguente riga alla sezione di override pubblica della dichiarazione di classe `CMFC02View` in MFC02View.h:  
  
     `gcroot<WindowsFormsControlLibrary1::UserControl1 ^> m_ViewControl;`  
  
3.  Aggiungere un override di OnInitialupdate.  
  
     Visualizzare la finestra **Proprietà** \(F4\).  In **Visualizzazione classi** \(CTRL\+MAIUSC\+C\), selezionare la classe CMFC02View.  Nella finestra **Proprietà** selezionare l'icona per Override.  Scorrere verso il basso l'elenco fino a OnInitialUpdate.  Fare clic sull'elenco a discesa e selezionare \<aggiungi\>.  In MFC02View.cpp verificare che il corpo della funzione OnInitialUpdate sia il seguente:  
  
    ```  
    CWinFormsView::OnInitialUpdate();  
    m_ViewControl = safe_cast<WindowsFormsControlLibrary1::UserControl1 ^>(this->GetControl());  
    m_ViewControl->textBox1->Text = gcnew System::String("hi");  
    ```  
  
4.  Compilare ed eseguire il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Scegliere **Avvia senza eseguire debug** dal menu **Debug**.  
  
     La casella di testo risulta ora inizializzata.  
  
## Vedere anche  
 [Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)