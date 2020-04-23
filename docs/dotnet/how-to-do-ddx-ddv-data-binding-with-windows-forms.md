---
title: "Procedura: eseguire l'associazione dati DDX-DDV con Windows FormHow to: Do DDX-DDV Data Binding with Windows Forms"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], hosting a Windows Forms Control
- Windows Forms [C++], MFC support
ms.assetid: b2957370-cf1f-4779-94ac-228cd393686c
ms.openlocfilehash: 31629a4db2559112ba49f5c069b08de7abdfc2db
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754356"
---
# <a name="how-to-do-ddxddv-data-binding-with-windows-forms"></a>Procedura: eseguire data binding DDX/DDV con Windows Form

[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol) chiama [CWinFormsControl::CreateManagedControl](../mfc/reference/cwinformscontrol-class.md#createmanagedcontrol) per creare un controllo corrispondente all'ID del controllo risorsa. Se si `DDX_ManagedControl` utilizza `CWinFormsControl` per un controllo (nel codice `CreateManagedControl` generato dalla procedura guidata), non è necessario chiamare in modo esplicito per lo stesso controllo.

Chiamare `DDX_ManagedControl` [CWnd::DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) per creare controlli dagli ID risorsa. Per lo scambio di dati, non è necessario utilizzare le funzioni DDX/DDV con i controlli Windows Form. È invece possibile inserire il codice per accedere `DoDataExchange` alle proprietà del controllo gestito nel metodo della classe della finestra di dialogo (o della visualizzazione), come nell'esempio seguente.

Nell'esempio riportato di seguito viene illustrato come associare una stringa nativa di C, a un controllo utente .NET.

## <a name="example"></a>Esempio

Di seguito è riportato un esempio di associazione dati `m_str` DDX/DDV di una stringa MFC con la proprietà definita dall'utente `NameText` di un controllo utente .NET.

Il controllo viene creato quando [CDialog::OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) chiama `CMyDlg::DoDataExchange` per la `m_UserControl` prima volta, pertanto qualsiasi codice che fa riferimento deve venire dopo la `DDX_ManagedControl` chiamata.

È possibile implementare questo codice nell'applicazione MFC01 creata in [Procedura: creare il controllo utente e l'host in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

Inserire il codice seguente nella dichiarazione di CMFC01Dlg:

```
class CMFC01Dlg : public CDialog
{
   CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_MyControl;
   CString m_str;
};
```

## <a name="example"></a>Esempio

Inserire il codice seguente nell'implementazione di CMFC01Dlg:

```cpp
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

Ora aggiungeremo il metodo del gestore per fare clic sul pulsante OK. Fare clic sulla scheda **Visualizzazione risorse.** In Visualizzazione risorse fare `IDD_MFC01_DIALOG`doppio clic su . La risorsa finestra di dialogo viene visualizzata nell'Editor risorse. Quindi fare doppio clic sul pulsante OK..

Definire il gestore come indicato di seguito.

```cpp
void CMFC01Dlg::OnBnClickedOk()
{
   AfxMessageBox(CString(m_MyControl.GetControl()->textBox1->Text));
   OnOK();
}
```

## <a name="example"></a>Esempio

Aggiungere la riga seguente all'implementazione di BOOL CMFC01Dlg::OnInitDialog().

```
m_MyControl.GetControl()->textBox1->Text = "hello";
```

È ora possibile compilare ed eseguire l'applicazione. Si noti che qualsiasi testo nella casella di testo verrà visualizzato in una finestra di messaggio popup alla chiusura dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md)<br/>
[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol)<br/>
[CWnd:: DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange)
