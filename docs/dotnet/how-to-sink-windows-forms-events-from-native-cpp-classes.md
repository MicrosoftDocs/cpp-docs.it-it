---
title: "Procedura: elaborare eventi di Windows Form da classi C++ native | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eventi, interoperabilità .NET/nativa"
  - "gestione eventi, interoperabilità gestita/nativa"
  - "gestione eventi, sink di .NET in C++"
  - "gestione eventi, Windows Form in C++"
ms.assetid: 6e30ddee-d058-4c8d-9956-2a43d86f19d5
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: elaborare eventi di Windows Form da classi C++ native
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile attivare classi C\+\+ native in modo da ricevere callback da eventi gestiti generati da controlli Windows Form o da altri form in formato mappa macro MFC.  L'elaborazione di eventi in visualizzazioni e finestre di dialogo è simile alla stessa attività effettuata sui controlli.  
  
 A tal fine, è necessario:  
  
-   Collegare un gestore eventi `OnClick` al controllo utilizzando [MAKE\_DELEGATE](../Topic/MAKE_DELEGATE.md).  
  
-   Creare una mappa di delegati utilizzando [BEGIN\_DELEGATE\_MAP](../Topic/BEGIN_DELEGATE_MAP.md), [END\_DELEGATE\_MAP](../Topic/END_DELEGATE_MAP.md) e [EVENT\_DELEGATE\_ENTRY](../Topic/EVENT_DELEGATE_ENTRY.md).  
  
 In questo esempio vengono proseguite le operazioni effettuate in [Procedura: eseguire associazioni dati DDX\/DDV con Windows Form](../dotnet/how-to-do-ddx-ddv-data-binding-with-windows-forms.md).  
  
 A questo punto il controllo MFC verrà associato \(`m_MyControl`\) a un delegato del gestore eventi gestito denominato `OnClick` per l'evento gestito <xref:System.Windows.Forms.Control.Click>.  
  
### Per allegare il gestore eventi OnClick:  
  
1.  Aggiungere la seguente riga di codice all'implementazione di BOOL CMFC01Dlg::OnInitDialog:  
  
    ```  
    m_MyControl.GetControl()->button1->Click += MAKE_DELEGATE( System::EventHandler, OnClick );  
    ```  
  
2.  Aggiungere il seguente codice alla sezione pubblica nella dichiarazione di classe CMFC01Dlg : public CDialog.  
  
    ```  
    // delegate map  
    BEGIN_DELEGATE_MAP( CMFC01Dlg )  
    EVENT_DELEGATE_ENTRY( OnClick, System::Object^, System::EventArgs^ )  
    END_DELEGATE_MAP()  
  
    void OnClick( System::Object^ sender, System::EventArgs^ e );  
    ```  
  
3.  Infine, aggiungere l'implementazione per `OnClick` a CMFC01Dlg.cpp:  
  
    ```  
    void CMFC01Dlg::OnClick(System::Object^ sender, System::EventArgs^ e)  
    {  
        AfxMessageBox(_T("Button clicked"));  
    }  
    ```  
  
## Vedere anche  
 [MAKE\_DELEGATE](../Topic/MAKE_DELEGATE.md)   
 [BEGIN\_DELEGATE\_MAP](../Topic/BEGIN_DELEGATE_MAP.md)   
 [END\_DELEGATE\_MAP](../Topic/END_DELEGATE_MAP.md)   
 [EVENT\_DELEGATE\_ENTRY](../Topic/EVENT_DELEGATE_ENTRY.md)