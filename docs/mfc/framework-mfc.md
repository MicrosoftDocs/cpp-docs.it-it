---
title: "Framework (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "API [C++], incapsulamento in Win32 MFC"
  - "framework applicazione [C++], informazioni sul framework applicazione MFC"
  - "API Win32 incapsulata"
  - "incapsulamento [C++]"
  - "incapsulamento [C++], API Win32"
  - "MFC [C++], framework applicazione"
  - "Win32 [C++], incapsulamento API in MFC"
  - "API Windows [C++], incapsulamento in MFC"
  - "classi wrapper, spiegazione"
ms.assetid: 3be0fec8-9843-4119-ae42-ece993ef500b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Framework (MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il lavoro con il framework della libreria MFC \(Microsoft Foundation Class \(MFC\) si basa in gran parte in alcune classi importanti e in diversi strumenti di Visual C\+\+.  Alcune classi includono una grande parte Win32 API \(API\).  Altre classi includono i concetti di applicazione quali documenti, visualizzazioni e l'applicazione stessa.  Altri ancora incapsulano funzionalità OLE DAO e ODBC di accesso ai dati e funzionalità.  
  
 Ad esempio, il concetto di Win32 window viene incapsulato da classe MFC `CWnd`.  Ovvero la c\+\+ `CWnd` classe denominata si incapsula o "esegue il wrapping di" handles di `HWND` che rappresentano una finestra di windows.  Inoltre, la classe `CDialog` incapsula le finestre di dialogo Win32.  
  
 L'incapsulamento indica che la classe `CWnd`C\+\+, ad esempio, contiene una variabile membro di tipo `HWND` e le funzioni membro di classi includono le chiamate alle funzioni Win32 che accettano `HWND` come parametro.  Funzioni membro di classe in genere hanno lo stesso nome della funzione Win32 che incapsula.  
  
## Argomenti della sezione  
 [SDI e MDI](../mfc/sdi-and-mdi.md)  
  
 [Documenti, visualizzazioni e Framework](../mfc/documents-views-and-the-framework.md)  
  
 [Procedure guidate e editor di risorse](../mfc/wizards-and-the-resource-editors.md)  
  
## Nelle sezioni correlate  
 [Compilazione in Framework](../mfc/building-on-the-framework.md)  
  
 [Come Framework chiama il codice](../mfc/how-the-framework-calls-your-code.md)  
  
 [CWinApp: La classe application](../mfc/cwinapp-the-application-class.md)  
  
 [Modelli di documento e il processo di creazione documento\/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)  
  
 [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)  
  
 [Oggetti Window](../mfc/window-objects.md)  
  
## Vedere anche  
 [Utilizzo delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)