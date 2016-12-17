---
title: "Procedura: eseguire associazioni dati DDX/DDV con Windows Form | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], inserimento di controlli Windows Form"
  - "Windows Form [C++], supporto MFC"
ms.assetid: b2957370-cf1f-4779-94ac-228cd393686c
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: eseguire associazioni dati DDX/DDV con Windows Form
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[DDX\_ManagedControl](../Topic/DDX_ManagedControl.md) chiama [CWinFormsControl::CreateManagedControl](../Topic/CWinFormsControl::CreateManagedControl.md) per creare un controllo che corrisponde all'ID del controllo della risorsa.  Se si utilizza `DDX_ManagedControl` per un controllo `CWinFormsControl` \(in un codice generato mediante procedura guidata\), `CreateManagedControl` non deve essere chiamato in modo esplicito per lo stesso controllo.  
  
 Chiamare `DDX_ManagedControl` in [CWnd::DoDataExchange](../Topic/CWnd::DoDataExchange.md) per creare dei controlli da ID risorsa.  Per lo scambio dei dati non è necessario utilizzare le funzioni DDX\/DDV con i controlli Windows Form.  Si può invece inserire codice per accedere alle proprietà del controllo gestito nel metodo `DoDataExchange` della classe delle finestre di dialogo o delle visualizzazioni, come indicato nell'esempio seguente.  
  
 Nell'esempio riportato di seguito viene illustrato come associare una stringa C\+\+ nativa a un controllo utente .NET.  
  
## Esempio  
 Di seguito viene riportato un esempio di associazione dati DDX\/DDV di una stringa MFC `m_str` con la proprietà `NameText` definita dall'utente di un controllo utente .NET.  
  
 Il controllo viene creato quando [CDialog::OnInitDialog](../Topic/CDialog::OnInitDialog.md) chiama `CMyDlg::DoDataExchange` per la prima volta. L'eventuale codice che fa riferimento a `m_UserControl` deve quindi essere scritto dopo la chiamata a `DDX_ManagedControl`.  
  
 È possibile implementare questo codice nell'applicazione MFC01 creata in [Procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).  
  
 Inserire il codice seguente nella dichiarazione di CMFC01Dlg:  
  
```  
class CMFC01Dlg : public CDialog  
{  
   CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_MyControl;  
   CString m_str;  
};  
```  
  
## Esempio  
 Inserire il codice seguente nell'implementazione di CMFC01Dlg:  
  
```  
void CMFC01Dlg::DoDataExchange(CDataExchange* pDX)  
{  
   CDialog::DoDataExchange(pDX);  
   DDX_ManagedControl(pDX, IDC_CTRL1, m_MyControl);  
  
   if (pDX->m_bSaveAndValidate) {  
      m_str = m_MyControl->textBox1->Text;  
   } else  
   {  
      m_MyControl->textBox1->Text = gcnew System::String(m_str);  
   }  
}  
```  
  
## Esempio  
 A questo punto verrà aggiunto il metodo di gestione di un clic sul pulsante OK.  Scegliere la scheda **Visualizzazione risorse**.  In Visualizzazione risorse fare doppio clic su `IDD_MFC01_DIALOG`.  La finestra di dialogo verrà visualizzata nell'editor risorse.  Fare doppio clic sul pulsante OK.  
  
 Definire il gestore nel modo riportato di seguito.  
  
```  
void CMFC01Dlg::OnBnClickedOk()  
{  
   AfxMessageBox(CString(m_MyControl.GetControl()->textBox1->Text));  
   OnOK();  
}  
```  
  
## Esempio  
 Aggiungere inoltre la seguente riga all'implementazione di BOOL CMFC01Dlg::OnInitDialog\(\).  
  
```  
m_MyControl.GetControl()->textBox1->Text = "hello";  
```  
  
 A questo punto è possibile compilare ed eseguire l'applicazione.  Si noti che il testo nella casella di testo verrà visualizzato in una finestra di messaggio popup alla chiusura dell'applicazione.  
  
## Vedere anche  
 [CWinFormsControl Class](../mfc/reference/cwinformscontrol-class.md)   
 [DDX\_ManagedControl](../Topic/DDX_ManagedControl.md)   
 [CWnd::DoDataExchange](../Topic/CWnd::DoDataExchange.md)