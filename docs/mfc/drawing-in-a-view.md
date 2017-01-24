---
title: "Disegno in una visualizzazione | Microsoft Docs"
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
  - "contesti di dispositivo, disegni su schermata"
  - "disegno, in visualizzazioni"
  - "messaggi di disegno in classe visualizzazione"
  - "stampa [MFC], visualizzazioni"
  - "visualizzazioni di stampa"
  - "visualizzazioni, stampa"
  - "visualizzazioni, rendering"
  - "visualizzazioni, aggiornamento"
ms.assetid: e3761db6-0f19-4482-a4cd-ac38ef7c4d3a
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Disegno in una visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quasi tutti gli cui l'applicazione viene eseguita nella funzione membro di `OnDraw` di visualizzazione, di cui è necessario eseguire l'override della classe di visualizzazione. L'unica eccezione è disegno del mouse, illustrati in [Interpretazione di input con una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)\). Nell'override di `OnDraw` :  
  
1.  Ottiene i dati chiamando le funzioni membro che il documento svolgete.  
  
2.  Visualizzare i dati dalle funzioni membro chiamanti di un oggetto di contesto di dispositivo che viene passato dal framework a `OnDraw`.  
  
 Quando i dati di un documento vengono modificati in qualche modo, la visualizzazione ridisegnare per riflettere le modifiche.  In genere, ciò si verifica quando l'utente apporta una modifica a una visualizzazione nel documento.  In questo caso, la visualizzazione chiama la funzione membro di [UpdateAllViews](../Topic/CDocument::UpdateAllViews.md) di documento per notificare a tutte le visualizzazioni nello stesso documento a ridisegnarsi.  `UpdateAllViews` chiama la funzione membro di [OnUpdate](../Topic/CView::OnUpdate.md) di ogni visualizzazione.  L'implementazione predefinita di `OnUpdate` invalida l'intera area client della visualizzazione.  È possibile eseguirne l'override per invalidare solo le aree dell'area client che eseguono il mapping alle parti si modifica del documento.  
  
 La funzione membro di `UpdateAllViews` di classe **CDocument** e la funzione membro di `OnUpdate` di classe `CView` consentono di passare la descrizione di informazioni quali parti del documento sono state modificate.  Questo meccanismo "di l" consente di limitare l'area che la visualizzazione deve ridisegnare.  `OnUpdate` accetta due argomenti di l".  Il primo, `lHint`, di tipo **LPARAM**, consente di passare tutti i dati desiderato, mentre il secondo, `pHint`, di tipo `CObject`\*, consente di passare un puntatore a un oggetto derivato da `CObject`.  
  
 Quando una visualizzazione diventa non valido, le finestre la invia un messaggio di `WM_PAINT`.  La funzione di gestione di [OnPaint](../Topic/CWnd::OnPaint.md) della visualizzazione risponde al messaggio creando un oggetto di contesto di dispositivo di classe [CPaintDC](../mfc/reference/cpaintdc-class.md) e chiama la funzione membro di `OnDraw` della visualizzazione.  Generalmente non è necessario scrivere una funzione di gestione eseguire l'override di `OnPaint`.  
  
 [contesto di dispositivo](../mfc/device-contexts.md) è una struttura di dati windows contenente informazioni sugli attributi di disegno di un dispositivo come una visualizzazione o una stampante.  Tutte le chiamate di disegno vengono effettuate tramite un oggetto di contesto di dispositivo.  Per disegnare lo schermo, `OnDraw` viene passato un oggetto di `CPaintDC`.  Per disegnare una stampante, viene passato un oggetto di [CDC](../mfc/reference/cdc-class.md) configurato per la stampante corrente.  
  
 Il codice per disegnare nel primo di visualizzazione recupera un puntatore al documento, quindi apportare le chiamate di disegno utilizzando il contesto di dispositivo.  Il semplice esempio riportato di `OnDraw` illustra il processo:  
  
 [!code-cpp[NVC_MFCDocView#1](../mfc/codesnippet/CPP/drawing-in-a-view_1.cpp)]  
  
 In questo esempio, è possibile definire la funzione di `GetData` come membro della classe derivata del documento.  
  
 Stampa di esempio qualsiasi stringa ottiene il documento, centrate nella visualizzazione.  Se la chiamata di `OnDraw` è per il disegno dello schermo, l'oggetto di `CDC` passato in `pDC` è `CPaintDC` il cui costruttore ha già chiamato `BeginPaint`.  Le chiamate a disegnare le funzioni vengono effettuate tramite il puntatore di contesto di dispositivo.  Per informazioni sui contesti di periferica e le chiamate di disegno, vedere la classe [CDC](../mfc/reference/cdc-class.md)*in riferimenti alla libreria MFC* e in [Utilizzo di oggetti Window](../mfc/working-with-window-objects.md).  
  
 Per ulteriori esempi su come scrivere `OnDraw`, vedere [Esempi di MFC](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Utilizzo delle visualizzazioni](../mfc/using-views.md)