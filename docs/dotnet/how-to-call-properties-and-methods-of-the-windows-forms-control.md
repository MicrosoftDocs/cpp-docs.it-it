---
title: 'Procedura: chiamare proprietà e metodi del controllo Windows Form'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- method calls, Windows Forms
- calling methods, Windows Forms control
- calling properties, Windows Forms control
- Windows Forms controls [C++], methods
- calling properties
- Windows Forms controls [C++], properties
ms.assetid: 6e647d8a-fdaa-4aa1-b3fe-04f15cff8eb3
ms.openlocfilehash: 809fa428172dffb5f53e7339e04882b451c8562f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50561486"
---
# <a name="how-to-call-properties-and-methods-of-the-windows-forms-control"></a>Procedura: chiamare proprietà e metodi del controllo Windows Form

In quanto [GetControl](../mfc/reference/cwinformsview-class.md#getcontrol) restituisce un puntatore a <xref:System.Windows.Forms.Control?displayProperty=fullName>e non un puntatore al `WindowsControlLibrary1::UserControl1`, è consigliabile aggiungere un membro del tipo di controllo utente e inizializzarla in [IView::OnInitialUpdate ](../mfc/reference/iview-interface.md#oninitialupdate). A questo punto è possibile chiamare metodi e proprietà usando `m_ViewControl`.

In questo argomento si presuppone che è stata completata [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) e [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Aprire l'applicazione MFC creata in [procedura: creare il controllo utente e l'Host nella visualizzazione MDI](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

1. Aggiungere la riga seguente alla sezione delle sostituzioni pubblica il `CMFC02View` in MFC02View.h dichiarazione di classe.

   `gcroot<WindowsFormsControlLibrary1::UserControl1 ^> m_ViewControl;`

1. Aggiungere una sostituzione per OnInitialupdate.

   Visualizzare il **proprietà** finestra (F4). Nelle **Visualizzazione classi** (CTRL + MAIUSC + C), selezionare CMFC02View classe. Nel **proprietà** finestra, selezionare l'icona per le sostituzioni. Scoll verso il basso nell'elenco per OnInitialUpdate. Fare clic sull'elenco a discesa elenco e selezionare \<Aggiungi >. In MFC02View.cpp in modo da. Verificare che il corpo della funzione OnInitialUpdate è come segue:

    ```
    CWinFormsView::OnInitialUpdate();
    m_ViewControl = safe_cast<WindowsFormsControlLibrary1::UserControl1 ^>(this->GetControl());
    m_ViewControl->textBox1->Text = gcnew System::String("hi");
    ```

1. Compilare ed eseguire il progetto.

   Scegliere **Compila soluzione** dal menu **Compila**.

   Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.

   Si noti che la casella di testo viene inizializzata.

## <a name="see-also"></a>Vedere anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)