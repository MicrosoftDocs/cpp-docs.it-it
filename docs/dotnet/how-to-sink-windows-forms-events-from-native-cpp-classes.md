---
description: 'Per altre informazioni, vedere Procedura: eseguire il sink di eventi Windows Forms da classi C++ native'
title: 'Procedura: elaborare eventi di Windows Form da classi C++ native'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- event handling, managed/native interop
- event handling, sinking .NET in C++
- event handling, .NET/native interop
- event handling, Windows Forms in C++
ms.assetid: 6e30ddee-d058-4c8d-9956-2a43d86f19d5
ms.openlocfilehash: 223590849f114bfe02b030a0639f160b8fc1c321
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286358"
---
# <a name="how-to-sink-windows-forms-events-from-native-c-classes"></a>Procedura: elaborare eventi di Windows Form da classi C++ native

È possibile abilitare le classi C++ native per ricevere callback da eventi gestiti generati da controlli Windows Forms o altri form con il formato di mappa macro MFC. Gli eventi di sink nelle visualizzazioni e nelle finestre di dialogo sono simili alla stessa attività per i controlli.

A questo scopo, è necessario:

- Alleghi un `OnClick` gestore eventi al controllo utilizzando [MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate).

- Creare una mappa di delegati usando [BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map), [END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map)e [EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry).

Questo esempio continua le operazioni eseguite in [procedura: eseguire il data binding DDX/DDV con Windows Forms](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).

A questo punto, si associa il controllo MFC ( `m_MyControl` ) a un delegato del gestore eventi gestito denominato `OnClick` per l' <xref:System.Windows.Forms.Control.Click> evento gestito.

### <a name="to-attach-the-onclick-event-handler"></a>Per alleghi il gestore eventi OnClick:

1. Aggiungere il codice seguente all'implementazione di BOOL CMFC01Dlg:: OnInitDialog:

    ```
    m_MyControl.GetControl()->button1->Click += MAKE_DELEGATE( System::EventHandler, OnClick );
    ```

1. Aggiungere il codice seguente alla sezione public nella dichiarazione della classe CMFC01Dlg: public CDialog.

    ```
    // delegate map
    BEGIN_DELEGATE_MAP( CMFC01Dlg )
    EVENT_DELEGATE_ENTRY( OnClick, System::Object^, System::EventArgs^ )
    END_DELEGATE_MAP()

    void OnClick( System::Object^ sender, System::EventArgs^ e );
    ```

1. Aggiungere infine l'implementazione per `OnClick` a CMFC01Dlg. cpp:

    ```
    void CMFC01Dlg::OnClick(System::Object^ sender, System::EventArgs^ e)
    {
        AfxMessageBox(_T("Button clicked"));
    }
    ```

## <a name="see-also"></a>Vedi anche

[MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate)<br/>
[BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map)<br/>
[END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map)<br/>
[EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry)
