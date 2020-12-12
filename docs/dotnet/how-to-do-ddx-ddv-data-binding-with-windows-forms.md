---
description: 'Altre informazioni su: procedura: eseguire il data binding DDX/DDV con Windows Forms'
title: 'Procedura: Eseguire data binding DDX-DDV con Windows Form'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], hosting a Windows Forms Control
- Windows Forms [C++], MFC support
ms.assetid: b2957370-cf1f-4779-94ac-228cd393686c
ms.openlocfilehash: 55dfdaac595b6de0369d7db555c40b8cd38d6c01
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175651"
---
# <a name="how-to-do-ddxddv-data-binding-with-windows-forms"></a>Procedura: eseguire data binding DDX/DDV con Windows Form

[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol) chiama [CWinFormsControl:: CreateManagedControl](../mfc/reference/cwinformscontrol-class.md#createmanagedcontrol) per creare un controllo che corrisponde all'ID di controllo della risorsa. Se si usa `DDX_ManagedControl` per un `CWinFormsControl` controllo (nel codice generato dalla procedura guidata), non è necessario chiamare in `CreateManagedControl` modo esplicito per lo stesso controllo.

Chiamare `DDX_ManagedControl` in [CWnd::D odataexchange](../mfc/reference/cwnd-class.md#dodataexchange) per creare controlli dagli ID di risorsa. Per lo scambio di dati, non è necessario utilizzare le funzioni DDX/DDV con controlli Windows Forms. In alternativa, è possibile inserire il codice per accedere alle proprietà del controllo gestito nel `DoDataExchange` metodo della classe (o visualizzazione) della finestra di dialogo, come nell'esempio seguente.

Nell'esempio seguente viene illustrato come associare una stringa C++ nativa a un controllo utente .NET.

## <a name="example-ddxddv-data-binding"></a>Esempio: DDX/DDV data binding

Di seguito è riportato un esempio di data binding DDX/DDV di una stringa MFC `m_str` con la proprietà definita dall'utente `NameText` di un controllo utente .NET.

Il controllo viene creato quando [CDialog:: OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) chiama `CMyDlg::DoDataExchange` per la prima volta, quindi il codice a cui fa riferimento `m_UserControl` deve provenire dopo la `DDX_ManagedControl` chiamata.

È possibile implementare questo codice nell'applicazione MFC01 creata in [procedura: creare il controllo utente e l'host in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

Inserire il codice seguente nella dichiarazione di CMFC01Dlg:

```
class CMFC01Dlg : public CDialog
{
   CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_MyControl;
   CString m_str;
};
```

## <a name="example-implement-dodataexchange"></a>Esempio: implementare DoDataExchange ()

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

## <a name="example-add-handler-method"></a>Esempio: aggiungere il metodo del gestore

A questo punto verrà aggiunto il metodo del gestore per fare clic sul pulsante OK. Fare clic sulla scheda **visualizzazione risorse** . In Visualizzazione risorse fare doppio clic su on `IDD_MFC01_DIALOG` . La risorsa finestra di dialogo viene visualizzata nell'editor risorse. Quindi fare doppio clic sul pulsante OK.

Definire il gestore come indicato di seguito.

```cpp
void CMFC01Dlg::OnBnClickedOk()
{
   AfxMessageBox(CString(m_MyControl.GetControl()->textBox1->Text));
   OnOK();
}
```

## <a name="example-set-the-textbox-text"></a>Esempio: impostare il testo della casella di testo

E aggiungono la riga seguente all'implementazione di BOOL CMFC01Dlg:: OnInitDialog ().

```
m_MyControl.GetControl()->textBox1->Text = "hello";
```

È ora possibile compilare ed eseguire l'applicazione. Si noti che qualsiasi testo presente nella casella di testo verrà visualizzato in una finestra di messaggio popup al termine della chiusura dell'applicazione.

## <a name="see-also"></a>Vedi anche

[Classe CWinFormsControl](../mfc/reference/cwinformscontrol-class.md)<br/>
[DDX_ManagedControl](../mfc/reference/standard-dialog-data-exchange-routines.md#ddx_managedcontrol)<br/>
[CWnd:: DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange)
