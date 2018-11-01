---
title: 'Procedura: elaborare eventi di Windows Form da classi C++ native'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- event handling, managed/native interop
- event handling, sinking .NET in C++
- event handling, .NET/native interop
- event handling, Windows Forms in C++
ms.assetid: 6e30ddee-d058-4c8d-9956-2a43d86f19d5
ms.openlocfilehash: 1bc601a4dbd7a51695b6964ab4d0ee47531c1b2b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50555909"
---
# <a name="how-to-sink-windows-forms-events-from-native-c-classes"></a>Procedura: elaborare eventi di Windows Form da classi C++ native

È possibile abilitare le classi C++ native ricevere i callback da gestito eventi generati da controlli Windows Form o altre forme con il formato della mappa di macro MFC. Il sink degli eventi nelle visualizzazioni e finestre di dialogo è simile alla stessa operazione per i controlli.

A tale scopo, è necessario:

- Collegare un' `OnClick` gestore dell'evento per il controllo usando [MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate).

- Creare una mappa di delegati utilizzando [BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map), [END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map), e [EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry).

In questo esempio continua il lavoro svolto nelle [procedura: eseguire operazioni di associazione dati DDX/DDV con Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).

A questo punto, associare il controllo MFC (`m_MyControl`) con un delegato del gestore eventi gestito chiamato `OnClick` per managed <xref:System.Windows.Forms.Control.Click> evento.

### <a name="to-attach-the-onclick-event-handler"></a>Per associare il gestore dell'evento OnClick:

1. Aggiungere il codice seguente all'implementazione di CMFC01Dlg BOOL:

    ```
    m_MyControl.GetControl()->button1->Click += MAKE_DELEGATE( System::EventHandler, OnClick );
    ```

1. Aggiungere il codice seguente alla sezione pubblica nella dichiarazione di classe CMFC01Dlg: CDialog pubblico.

    ```
    // delegate map
    BEGIN_DELEGATE_MAP( CMFC01Dlg )
    EVENT_DELEGATE_ENTRY( OnClick, System::Object^, System::EventArgs^ )
    END_DELEGATE_MAP()

    void OnClick( System::Object^ sender, System::EventArgs^ e );
    ```

1. Infine, aggiungere l'implementazione per `OnClick` a CMFC01Dlg. cpp:

    ```
    void CMFC01Dlg::OnClick(System::Object^ sender, System::EventArgs^ e)
    {
        AfxMessageBox(_T("Button clicked"));
    }
    ```

## <a name="see-also"></a>Vedere anche

[MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate)<br/>
[BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map)<br/>
[END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map)<br/>
[EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry)