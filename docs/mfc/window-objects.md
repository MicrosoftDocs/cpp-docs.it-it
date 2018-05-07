---
title: Oggetti finestra | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 63b8d8dbde679d030eddd77fae6ca1fab519fdac
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="window-objects"></a>Oggetti finestra
MFC fornisce la classe [CWnd](../mfc/reference/cwnd-class.md) per incapsulare la `HWND` handle di una finestra. L'oggetto `CWnd` è un oggetto finestra di C++, distinto da `HWND` che rappresenta una finestra di Windows, ma la prima finestra contiene la seconda. Utilizzare `CWnd` per derivare le proprie classi di finestre figlie o utilizzare una delle varie classi MFC derivate da `CWnd`. La classe `CWnd` è la classe base per tutte le finestre, incluse le finestre cornice, le finestre di dialogo, le finestre figlio, i controlli e le barre di controllo come le barre degli strumenti. Una buona conoscenza dei [la relazione tra un oggetto finestra C++ e HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md) è fondamentale per programmare in modo efficace con MFC.  
  
 MFC fornisce alcune funzionalità predefinite e degli strumenti di gestione predefiniti per le finestre, ma è possibile derivare la propria classe da `CWnd` e utilizzare le relative funzioni membro per personalizzare la funzionalità fornita. È possibile creare finestre figlio costruendo un `CWnd` oggetto e chiamando il relativo [crea](../mfc/reference/cwnd-class.md#create) membro funzione, quindi personalizzare le finestre figlio mediante `CWnd` funzioni membro. È possibile incorporare oggetti derivati da [CView](../mfc/reference/cview-class.md), ad esempio le visualizzazioni form o le visualizzazioni albero, in una finestra cornice. E si può supportare più visualizzazioni dei documenti tramite dei riquadri di divisione, forniti dalla classe [CSplitterWnd](../mfc/reference/csplitterwnd-class.md).  
  
 Ogni oggetto derivato dalla classe `CWnd` contiene una mappa di messaggi, tramite la quale è possibile eseguire il mapping dei messaggi o degli ID di comando di Windows ai propri gestori.  
  
 La letteratura generale sulla programmazione per Windows è una valida risorsa per imparare a utilizzare le funzioni membro `CWnd`, che incapsulano le API `HWND`.  
  
## <a name="functions-for-operating-on-a-cwnd"></a>Funzioni per l'esecuzione in un oggetto CWnd  
 `CWnd` e il relativo [classi di finestre derivate](../mfc/derived-window-classes.md) forniscono costruttori, distruttori e funzioni membro per inizializzare l'oggetto, creano le strutture sottostanti di Windows e accedere incapsulato `HWND`. `CWnd` fornisce inoltre funzioni membro che incapsulano le API di Windows per inviare messaggi, accedere allo stato della finestra, convertire le coordinate, aggiornare, scorrere, accedere agli Appunti e molte altre attività. La maggior parte delle API di Windows per la gestione delle finestre che accettano un argomento `HWND` vengono incapsulate come funzioni membro di `CWnd`. I nomi delle funzioni e dei relativi parametri vengono mantenuti nella funzione membro `CWnd`. Per informazioni dettagliate sulle API di Windows incapsulate da `CWnd`, vedere la classe [CWnd](../mfc/reference/cwnd-class.md).  
  
## <a name="cwnd-and-windows-messages"></a>CWnd e messaggi di Windows  
 Uno degli scopi principali di `CWnd` è quello di fornire un'interfaccia per la gestione dei messaggi di Windows, ad esempio `WM_PAINT` o `WM_MOUSEMOVE`. Molte delle funzioni membro di `CWnd` sono gestori per messaggi standard, ovvero quelli che iniziano con l'identificatore **afx_msg** e il prefisso "On", ad esempio `OnPaint` e **OnMouseMove**. [Gestione e Mapping dei messaggi](../mfc/message-handling-and-mapping.md) messaggi e la gestione in modo dettagliato. Le informazioni dell'argomento sono ugualmente applicabili alle finestre del framework e a quelle create dall'utente per scopi speciali.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [La relazione tra un oggetto finestra C++ e HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md)  
  
-   [Classi di finestre derivate](../mfc/derived-window-classes.md)  
  
-   [Creazione di finestre](../mfc/creating-windows.md)  
  
-   [Distruzione di oggetti finestra](../mfc/destroying-window-objects.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
-   [Utilizzo di oggetti finestra](../mfc/working-with-window-objects.md)  
  
-   [Contesti di dispositivo](../mfc/device-contexts.md): oggetti che garantiscono indipendente dal dispositivo di disegno di Windows  
  
-   [Oggetti grafici](../mfc/graphic-objects.md): penne, pennelli, tipi di carattere, bitmap, tavolozze, aree  
  
## <a name="see-also"></a>Vedere anche  
 [Windows](../mfc/windows.md)

