---
title: 'Procedura: elaborare eventi di Windows Form da classi C++ Native | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- event handling, managed/native interop
- event handling, sinking .NET in C++
- event handling, .NET/native interop
- event handling, Windows Forms in C++
ms.assetid: 6e30ddee-d058-4c8d-9956-2a43d86f19d5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9316d27637d335bc0e3a71656a5d7b9c8796ec28
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46424989"
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