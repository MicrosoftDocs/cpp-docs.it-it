---
description: 'Altre informazioni su: Framework (MFC)'
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
ms.openlocfilehash: 12e5a28e231dfadec867213ebf1cea6fd6ae7300
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193487"
---
# <a name="framework-mfc"></a>Framework (MFC)

Il lavoro con il Framework della libreria Microsoft Foundation Class (MFC) si basa principalmente su alcune classi principali e su diversi strumenti di Visual C++. Alcune classi incapsulano una parte grande del Application Programming Interface Win32 (API). Altre classi incapsulano concetti di applicazione quali documenti, visualizzazioni e l'applicazione stessa. Altri ancora incapsulano le funzionalità OLE e la funzionalità di accesso ai dati ODBC e DAO.  DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

Il concetto di finestra Win32, ad esempio, è incapsulato dalla classe MFC `CWnd` . Ovvero una classe C++ denominata `CWnd` incapsula o esegue il wrapping dell' `HWND` handle che rappresenta una finestra di Windows. Analogamente, la classe `CDialog` incapsula le finestre di dialogo Win32.

Incapsulamento significa che la classe C++ `CWnd` , ad esempio, contiene una variabile membro di tipo `HWND` e le funzioni membro della classe incapsulano le chiamate alle funzioni Win32 che accettano `HWND` come parametro. Le funzioni membro della classe hanno in genere lo stesso nome della funzione Win32 incapsulate.

## <a name="in-this-section"></a>Contenuto della sezione

[SDI e MDI](sdi-and-mdi.md)

[Documenti, visualizzazioni e Framework](documents-views-and-the-framework.md)

[Procedure guidate ed editor di risorse](wizards-and-the-resource-editors.md)

## <a name="in-related-sections"></a>Sezioni correlate

[Compilazione nel Framework](building-on-the-framework.md)

[Come il Framework chiama il codice](how-the-framework-calls-your-code.md)

[CWinApp: classe Application](cwinapp-the-application-class.md)

[Modelli di documento e processo di creazione documento/visualizzazione](document-templates-and-the-document-view-creation-process.md)

[Gestione e mapping dei messaggi](message-handling-and-mapping.md)

[Oggetti finestra](window-objects.md)

## <a name="see-also"></a>Vedi anche

[Utilizzo delle classi per scrivere applicazioni per Windows](using-the-classes-to-write-applications-for-windows.md)
