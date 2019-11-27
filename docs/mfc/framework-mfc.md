---
title: Framework (MFC)
ms.date: 09/17/2019
helpviewer_keywords:
- encapsulation [MFC], Win32 API
- MFC, application framework
- wrapper classes [MFC], explained
- Win32 [MFC], API encapsulation by MFC
- application framework [MFC], about MFC application framework
- APIs [MFC], encapsulation by MFC Win32
- encapsulation [MFC]
- Windows API [MFC], encapsulation by MFC
- encapsulated Win32 API [MFC]
ms.assetid: 3be0fec8-9843-4119-ae42-ece993ef500b
ms.openlocfilehash: 387f53e3123b6863fcf218da39c7c5e356eb8219
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303408"
---
# <a name="framework-mfc"></a>Framework (MFC)

Il lavoro con il Framework della libreria Microsoft Foundation Class (MFC) si basa principalmente su alcune classi principali e su diversi strumenti C++ visivi. Alcune classi incapsulano una parte grande del Application Programming Interface Win32 (API). Altre classi incapsulano concetti di applicazione quali documenti, visualizzazioni e l'applicazione stessa. Altri ancora incapsulano le funzionalità OLE e la funzionalità di accesso ai dati ODBC e DAO.  DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

Il concetto di finestra Win32, ad esempio, è incapsulato dalla classe MFC `CWnd`. Ovvero una C++ classe denominata `CWnd` incapsula o esegue il wrapping dell'handle di `HWND` che rappresenta una finestra di Windows. Analogamente, la classe `CDialog` incapsula le finestre di dialogo Win32.

Incapsulamento significa che C++ la classe `CWnd`, ad esempio, contiene una variabile membro di tipo `HWND`e le funzioni membro della classe incapsulano le chiamate alle funzioni Win32 che accettano un `HWND` come parametro. Le funzioni membro della classe hanno in genere lo stesso nome della funzione Win32 incapsulate.

## <a name="in-this-section"></a>Contenuto della sezione

[SDI e MDI](../mfc/sdi-and-mdi.md)

[Documenti, visualizzazioni e framework](../mfc/documents-views-and-the-framework.md)

[Procedure guidate ed editor di risorse](../mfc/wizards-and-the-resource-editors.md)

## <a name="in-related-sections"></a>Sezioni correlate

[Compilazione nel framework](../mfc/building-on-the-framework.md)

[Chiamate del codice dal framework](../mfc/how-the-framework-calls-your-code.md)

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)

[Modelli di documento e processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)

[Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)

[Oggetti finestra](../mfc/window-objects.md)

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
