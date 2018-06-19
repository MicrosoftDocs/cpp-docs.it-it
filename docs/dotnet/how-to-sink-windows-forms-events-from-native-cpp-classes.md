---
title: 'Procedura: elaborare eventi di Windows Form da classi C++ Native | Documenti Microsoft'
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
ms.openlocfilehash: 0fec32bf179424b5ec0164e4511f74eae44f7320
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33130425"
---
# <a name="how-to-sink-windows-forms-events-from-native-c-classes"></a>Procedura: elaborare eventi di Windows Form da classi C++ native
È possibile abilitare le classi C++ native ricevere callback da eventi gestiti generati da controlli Windows Form o in altri formati in formato di mappa macro MFC. Elaborazione di eventi in visualizzazioni e finestre di dialogo è simile alla stessa operazione per i controlli.  
  
 A tale scopo, è necessario:  
  
-   Collegare un `OnClick` gestore eventi per il controllo usando [MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate).  
  
-   Creare una mappa di delegati utilizzando [BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map), [END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map), e [EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry).  
  
 In questo esempio continua il lavoro fatto in [procedura: eseguire associazione dati DDX/DDV con Windows Form](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).  
  
 A questo punto, associare il controllo MFC (`m_MyControl`) con un delegato del gestore eventi gestito denominato `OnClick` per gestito <xref:System.Windows.Forms.Control.Click> evento.  
  
### <a name="to-attach-the-onclick-event-handler"></a>Per collegare il gestore dell'evento OnClick:  
  
1.  Aggiungere il codice seguente all'implementazione di BOOL CMFC01Dlg:  
  
    ```  
    m_MyControl.GetControl()->button1->Click += MAKE_DELEGATE( System::EventHandler, OnClick );  
    ```  
  
2.  Aggiungere il codice seguente alla sezione pubblica nella dichiarazione di classe CMFC01Dlg: public CDialog.  
  
    ```  
    // delegate map  
    BEGIN_DELEGATE_MAP( CMFC01Dlg )  
    EVENT_DELEGATE_ENTRY( OnClick, System::Object^, System::EventArgs^ )  
    END_DELEGATE_MAP()  
  
    void OnClick( System::Object^ sender, System::EventArgs^ e );  
    ```  
  
3.  Infine, aggiungere l'implementazione per `OnClick` a CMFC01Dlg. cpp:  
  
    ```  
    void CMFC01Dlg::OnClick(System::Object^ sender, System::EventArgs^ e)  
    {  
        AfxMessageBox(_T("Button clicked"));  
    }  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [MAKE_DELEGATE](../mfc/reference/delegate-and-interface-maps.md#make_delegate)   
 [BEGIN_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#begin_delegate_map)   
 [END_DELEGATE_MAP](../mfc/reference/delegate-and-interface-maps.md#end_delegate_map)   
 [EVENT_DELEGATE_ENTRY](../mfc/reference/delegate-and-interface-maps.md#event_delegate_entry)