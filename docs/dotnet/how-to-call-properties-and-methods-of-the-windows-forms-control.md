---
description: 'Altre informazioni su: procedura: chiamare proprietà e metodi del controllo Windows Forms'
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
ms.openlocfilehash: a797084a28eefec27699814a09c8521da7460bc7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268405"
---
# <a name="how-to-call-properties-and-methods-of-the-windows-forms-control"></a>Procedura: chiamare proprietà e metodi del controllo Windows Form

Poiché [CWinFormsView:: GetControl](../mfc/reference/cwinformsview-class.md#getcontrol) restituisce un puntatore a <xref:System.Windows.Forms.Control?displayProperty=fullName> e non un puntatore a `WindowsControlLibrary1::UserControl1` , è consigliabile aggiungere un membro del tipo di controllo utente e inizializzarlo in [iView:: OnInitialUpdate](../mfc/reference/iview-interface.md#oninitialupdate). A questo punto è possibile chiamare metodi e proprietà usando `m_ViewControl` .

In questo argomento si presuppone che sia stata completata la [procedura: creare il controllo utente e l'host in una](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md) finestra di dialogo e [procedura: creare il controllo utente e la visualizzazione MDI host](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Aprire l'applicazione MFC creata in [procedura: creare il controllo utente e la visualizzazione MDI host](../dotnet/how-to-create-the-user-control-and-host-mdi-view.md).

1. Aggiungere la riga seguente alla sezione Public Overrides della `CMFC02View` dichiarazione di classe in MFC02View. h.

   `gcroot<WindowsFormsControlLibrary1::UserControl1 ^> m_ViewControl;`

1. Aggiungere una sostituzione per OnInitialupdate.

   Visualizzare la finestra **Proprietà** (F4). In **Visualizzazione classi** (CTRL + MAIUSC + C) selezionare classe CMFC02View. Nella finestra **Proprietà** selezionare l'icona per sostituzioni. Scoll l'elenco in OnInitialUpdate. Fare clic sull'elenco a discesa e selezionare \<Add> . In MFC02View. cpp. Verificare che il corpo della funzione OnInitialUpdate sia il seguente:

    ```
    CWinFormsView::OnInitialUpdate();
    m_ViewControl = safe_cast<WindowsFormsControlLibrary1::UserControl1 ^>(this->GetControl());
    m_ViewControl->textBox1->Text = gcnew System::String("hi");
    ```

1. Compilare ed eseguire il progetto.

   Nel menu **Compila** scegliere **Compila soluzione**.

   Scegliere **Avvia senza eseguire debug** dal menu **debug** .

   Si noti che la casella di testo è stata inizializzata.

## <a name="see-also"></a>Vedi anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)
