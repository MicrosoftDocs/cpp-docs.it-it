---
title: 'Procedura: associare dati DDX DDV con Windows Form | Documenti Microsoft'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], hosting a Windows Forms Control
- Windows Forms [C++], MFC support
ms.assetid: b2957370-cf1f-4779-94ac-228cd393686c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2f6992aa0c7238d2dc89a8084c7b870dae23067a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33131660"
---
# <a name="how-to-do-ddxddv-data-binding-with-windows-forms"></a>Procedura: Eseguire data binding DDX/DDV con Windows Form
[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol) chiamate [CWinFormsControl::CreateManagedControl](../mfc/reference/cwinformscontrol-class.md#createmanagedcontrol) per creare un controllo corrispondente di ID di controllo di risorsa. Se si utilizza `DDX_ManagedControl` per un `CWinFormsControl` controllo (in generato dalla procedura guidata codice), non è necessario chiamare `CreateManagedControl` in modo esplicito per il controllo stesso.  
  
 Chiamare `DDX_ManagedControl` in [CWnd:: DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) per creare controlli da ID risorsa. Per lo scambio di dati, non è necessario utilizzare le funzioni DDX/DDV con controlli Windows Form. In alternativa, è possibile inserire codice per accedere alle proprietà del controllo gestito nel `DoDataExchange` metodo della classe di finestra di dialogo (o vista), come nell'esempio seguente.  
  
 Nell'esempio seguente viene illustrato come associare una stringa C++ nativa in un controllo utente .NET.  
  
## <a name="example"></a>Esempio  
 Di seguito è riportato un esempio di associazione di dati DDX/DDV di una stringa MFC `m_str` con definito dall'utente `NameText` proprietà di un controllo utente .NET.  
  
 Il controllo viene creato quando [CDialog](../mfc/reference/cdialog-class.md#oninitdialog) chiamate `CMyDlg::DoDataExchange` per la prima volta, pertanto, qualsiasi codice che fa riferimento `m_UserControl` deve seguire il `DDX_ManagedControl` chiamare.  
  
 È possibile implementare questo codice nell'applicazione MFC01 è stato creato in [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).  
  
 Inserire il codice seguente nella dichiarazione di CMFC01Dlg:  
  
```  
class CMFC01Dlg : public CDialog  
{  
   CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_MyControl;  
   CString m_str;  
};  
```  
  
## <a name="example"></a>Esempio  
 Nell'implementazione di CMFC01Dlg, inserire il codice seguente:  
  
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
  
## <a name="example"></a>Esempio  
 A questo punto verrà aggiunto al metodo del gestore per un clic sul pulsante OK. Fare clic su di **visualizzazione risorse** scheda. In visualizzazione di risorse, fare doppio clic su `IDD_MFC01_DIALOG`. La finestra di dialogo verrà visualizzata nell'Editor di risorse. Fare doppio clic sul pulsante OK...  
  
 Definire il gestore come indicato di seguito.  
  
```  
void CMFC01Dlg::OnBnClickedOk()  
{  
   AfxMessageBox(CString(m_MyControl.GetControl()->textBox1->Text));  
   OnOK();  
}  
```  
  
## <a name="example"></a>Esempio  
 E aggiungere la seguente riga all'implementazione di CMFC01Dlg::OnInitDialog() BOOL.  
  
```  
m_MyControl.GetControl()->textBox1->Text = "hello";  
```  
  
 È possibile compilare ed eseguire l'applicazione. Si noti che il testo nella casella di testo verrà visualizzato in una finestra di messaggio popup quando la chiusura dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md)   
 [DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol)   
 [CWnd::DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange)