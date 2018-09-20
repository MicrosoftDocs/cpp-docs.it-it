---
title: Framework (MFC) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 87db7b28ec340a76c074a7b32c0e182030042eeb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381959"
---
# <a name="framework-mfc"></a>Framework (MFC)

Il lavoro con il framework della libreria di classi MFC (Microsoft Foundation) dipende in gran parte alcune classi principali e diversi strumenti di Visual C++. Alcune classi incapsulano gran parte delle Win32 application programming interface (API). Altre classi di incapsulano i concetti di applicazione, ad esempio documenti, visualizzazioni e l'applicazione stessa. Altre classi ancora includono funzionalità OLE e le funzionalità di accesso ai dati ODBC e DAO.

Ad esempio, il concetto di Win32 di finestra viene incapsulato dalla classe MFC `CWnd`. Vale a dire, una classe C++ denominata `CWnd` incapsula o "esegue il wrapping" il `HWND` handle che rappresenta una finestra di Windows. Analogamente, classe `CDialog` incapsula le finestre di dialogo Win32.

Incapsulamento significa che la classe C++ `CWnd`, ad esempio, contiene una variabile membro di tipo `HWND`, e funzioni membro della classe incapsulano le chiamate a funzioni Win32 che accettano un `HWND` come parametro. In genere, le funzioni membro della classe hanno lo stesso nome della funzione Win32 che incapsulano.

## <a name="in-this-section"></a>In questa sezione

[SDI e MDI](../mfc/sdi-and-mdi.md)

[Documenti, visualizzazioni e framework](../mfc/documents-views-and-the-framework.md)

[Procedure guidate ed editor risorse](../mfc/wizards-and-the-resource-editors.md)

## <a name="in-related-sections"></a>Nelle sezioni correlate

[Compilazione nel framework](../mfc/building-on-the-framework.md)

[Chiamate del codice dal framework](../mfc/how-the-framework-calls-your-code.md)

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)

[I modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)

[Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)

[Oggetti finestra](../mfc/window-objects.md)

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
