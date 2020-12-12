---
description: 'Altre informazioni su: oggetti finestra'
title: Oggetti finestra
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], window
- Windows window [MFC]
- MFC, windows
- frame windows [MFC], C++ window objects
- window objects [MFC]
- windows [MFC], C++ window objects
- window messages [MFC]
- HWND
- messages [MFC], Windows
- Visual C++, window objects [MFC]
- HWND, window objects [MFC]
ms.assetid: 28b33ce2-af05-4617-9d03-1cb9a02be687
ms.openlocfilehash: 5a7755dfecc8205279785a6452b04c3f8dc429d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214494"
---
# <a name="window-objects"></a>Oggetti finestra

MFC fornisce la classe [CWnd](../mfc/reference/cwnd-class.md) per incapsulare l' `HWND` handle di una finestra. L'oggetto `CWnd` è un oggetto finestra di C++, distinto da `HWND` che rappresenta una finestra di Windows, ma la prima finestra contiene la seconda. Utilizzare `CWnd` per derivare le proprie classi di finestre figlie o utilizzare una delle varie classi MFC derivate da `CWnd`. La classe `CWnd` è la classe base per tutte le finestre, incluse le finestre cornice, le finestre di dialogo, le finestre figlio, i controlli e le barre di controllo come le barre degli strumenti. Una corretta comprensione della [relazione tra un oggetto finestra C++ e un HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md) è fondamentale per la programmazione efficace con MFC.

MFC fornisce alcune funzionalità predefinite e degli strumenti di gestione predefiniti per le finestre, ma è possibile derivare la propria classe da `CWnd` e utilizzare le relative funzioni membro per personalizzare la funzionalità fornita. È possibile creare finestre figlio costruendo un `CWnd` oggetto e chiamando la relativa funzione membro [create](../mfc/reference/cwnd-class.md#create) , quindi personalizzare le finestre figlio utilizzando le `CWnd` funzioni membro. In una finestra cornice è possibile incorporare oggetti derivati da [CView](../mfc/reference/cview-class.md), quali le visualizzazioni form o le visualizzazioni ad albero. Ed è possibile supportare più visualizzazioni dei documenti tramite riquadri Splitter, forniti dalla classe [CSplitterWnd](../mfc/reference/csplitterwnd-class.md).

Ogni oggetto derivato dalla classe `CWnd` contiene una mappa di messaggi, tramite la quale è possibile eseguire il mapping dei messaggi o degli ID di comando di Windows ai propri gestori.

La letteratura generale sulla programmazione per Windows è una valida risorsa per imparare a utilizzare le funzioni membro `CWnd`, che incapsulano le API `HWND`.

## <a name="functions-for-operating-on-a-cwnd"></a>Funzioni per l'esecuzione in un oggetto CWnd

`CWnd` e le [classi della finestra derivata](../mfc/derived-window-classes.md) forniscono costruttori, distruttori e funzioni membro per inizializzare l'oggetto, creare le strutture di Windows sottostanti e accedere a incapsulato `HWND` . `CWnd` fornisce inoltre funzioni membro che incapsulano le API di Windows per inviare messaggi, accedere allo stato della finestra, convertire le coordinate, aggiornare, scorrere, accedere agli Appunti e molte altre attività. La maggior parte delle API di Windows per la gestione delle finestre che accettano un argomento `HWND` vengono incapsulate come funzioni membro di `CWnd`. I nomi delle funzioni e dei relativi parametri vengono mantenuti nella funzione membro `CWnd`. Per informazioni dettagliate sulle API Windows incapsulate da `CWnd` , vedere la classe [CWnd](../mfc/reference/cwnd-class.md).

## <a name="cwnd-and-windows-messages"></a>CWnd e messaggi di Windows

Uno degli scopi principali di `CWnd` è fornire un'interfaccia per la gestione dei messaggi di Windows, ad esempio WM_PAINT o WM_MOUSEMOVE. Molte delle funzioni membro di `CWnd` sono gestori per i messaggi standard, ovvero quelli che iniziano con l'identificatore **afx_msg** e il prefisso "on", ad esempio `OnPaint` e `OnMouseMove` . Il [mapping e la gestione](../mfc/message-handling-and-mapping.md) dei messaggi riguardano in modo dettagliato i messaggi e la gestione dei messaggi. Le informazioni dell'argomento sono ugualmente applicabili alle finestre del framework e a quelle create dall'utente per scopi speciali.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Relazione tra un oggetto finestra C++ e HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md)

- [Classi di finestra derivate](../mfc/derived-window-classes.md)

- [Creazione di finestre](../mfc/creating-windows.md)

- [Eliminazione permanente di oggetti finestra](../mfc/destroying-window-objects.md)

- [Scollegamento di un elemento CWnd dal relativo HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)

- [Uso di oggetti finestra](../mfc/working-with-window-objects.md)

- [Contesti di dispositivo](../mfc/device-contexts.md): oggetti che rendono indipendente il dispositivo di disegno Windows

- [Oggetti grafici](../mfc/graphic-objects.md): penne, pennelli, tipi di carattere, bitmap, tavolozze, aree

## <a name="see-also"></a>Vedi anche

[Windows](../mfc/windows.md)
