---
title: 'Procedura: Eseguire DDX-DDV associazione dati con Windows Form'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], hosting a Windows Forms Control
- Windows Forms [C++], MFC support
ms.assetid: b2957370-cf1f-4779-94ac-228cd393686c
ms.openlocfilehash: 558c763fd18cd1569ff23435bf6156b3117f117d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62387318"
---
# <a name="how-to-do-ddxddv-data-binding-with-windows-forms"></a>Procedura: Eseguire DDX/DDV associazione dati con Windows Form

[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol) chiamate [CWinFormsControl::CreateManagedControl](../mfc/reference/cwinformscontrol-class.md#createmanagedcontrol) per creare un controllo che corrisponde l'ID di controllo risorsa. Se si usa `DDX_ManagedControl` per un `CWinFormsControl` controllo (in generato dalla procedura guidata codice), non è necessario chiamare `CreateManagedControl` in modo esplicito per il controllo stesso.

Chiamare `DDX_ManagedControl` nelle [CWnd:: DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) per creare controlli da ID risorsa. Per lo scambio di dati, è necessario non utilizzare le funzioni DDX/DDV con i controlli Windows Form. In alternativa, è possibile inserire codice per accedere alle proprietà del controllo gestito nel `DoDataExchange` metodo della classe di finestra di dialogo (o visualizzazione), come nell'esempio seguente.

Nell'esempio seguente viene illustrato come associare una stringa C++ nativa a un controllo utente .NET.

## <a name="example"></a>Esempio

Di seguito è riportato un esempio di data binding DDX/DDV di una stringa MFC `m_str` con il parametro definito dall'utente `NameText` proprietà di un controllo utente .NET.

Il controllo viene creato quando [CDialog](../mfc/reference/cdialog-class.md#oninitdialog) chiamate `CMyDlg::DoDataExchange` per la prima volta, pertanto qualsiasi codice che fa riferimento `m_UserControl` deve essere specificato dopo il `DDX_ManagedControl` chiamare.

È possibile implementare questo codice nell'applicazione MFC01 creato nel [come: Creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

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

A questo punto si aggiungerà il metodo del gestore per fare clic sul pulsante OK. Scegliere il **visualizzazione risorse** scheda. In visualizzazione di risorse, fare doppio clic su `IDD_MFC01_DIALOG`. La risorsa finestra di dialogo viene visualizzata nell'Editor di risorse. Quindi fare doppio clic sul pulsante OK...

Definire il gestore come indicato di seguito.

```
void CMFC01Dlg::OnBnClickedOk()
{
   AfxMessageBox(CString(m_MyControl.GetControl()->textBox1->Text));
   OnOK();
}
```

## <a name="example"></a>Esempio

E aggiungere la riga seguente all'implementazione di CMFC01Dlg::OnInitDialog() BOOL.

```
m_MyControl.GetControl()->textBox1->Text = "hello";
```

È ora possibile compilare ed eseguire l'applicazione. Si noti che qualsiasi testo nella casella di testo verrà visualizzato in una finestra di messaggio popup quando l'applicazione viene chiusa.

## <a name="see-also"></a>Vedere anche

[Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md)<br/>
[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol)<br/>
[CWnd::DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange)
