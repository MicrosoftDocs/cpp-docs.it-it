---
title: "Classi Output (contesto del dispositivo) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.output"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contesti di dispositivo, classi"
  - "classi di output"
  - "classi di stampa"
  - "stampa di classi"
  - "classi di output dello schermo"
  - "classi di disegno della finestra"
ms.assetid: 35fd6435-a38e-42c6-a3fa-cd6f39370fc3
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi Output (contesto del dispositivo)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi contengono i differenti tipi di contesti di dispositivo disponibili in Windows.  
  
 La maggior parte delle classi seguenti incapsulano un handle ad un contesto di dispositivo di Windows.  Un contesto di dispositivo è un oggetto di Windows contenente informazioni sugli attributi di disegno di un dispositivo come uno schermo o una stampante.  Tutte le chiamate di disegno vengono effettuate tramite un oggetto di contesto di dispositivo.  Le classi derivate aggiuntive da `CDC` incapsulano funzionalità specializzate di contesto di dispositivo, incluso il supporto per i metafile Windows.  
  
 [CDC](../mfc/reference/cdc-class.md)  
 La classe base per i contesti di dispositivo.  Viene utilizzato per accedere direttamente all'intera visualizzazione e per accedere ai contesti di non visualizzazione come stampanti.  
  
 [CPaintDC](../mfc/reference/cpaintdc-class.md)  
 Un contesto di visualizzazione utilizzato nelle funzioni membro `OnPaint` di Windows.  Chiama automaticamente `BeginPaint` alla costruzione e `EndPaint` alla distruzione.  
  
 [CClientDC](../mfc/reference/cclientdc-class.md)  
 Un contesto di visualizzazione delle aree client di windows.  Viene utilizzato, ad esempio, per tracciare una risposta immediata agli eventi del mouse.  
  
 [CWindowDC](../mfc/reference/cwindowdc-class.md)  
 Un contesto di visualizzazione per intere finestre, includendo sia le aree client che quelle non client.  
  
 [CMetaFileDC](../mfc/reference/cmetafiledc-class.md)  
 Un contesto di dispositivo per metafile Windows.  Un metafile Windows contiene una sequenza di comandi GDI \(graphics device interface\) che possono essere ripetuti per creare un'immagine.  Le chiamate effettuate alle funzioni membro di un `CMetaFileDC` vengono registrate in un metafile.  
  
## Classi correlate  
 [CPoint](../atl-mfc-shared/reference/cpoint-class.md)  
 Contiene coppie \(x, y\) di coordinate.  
  
 [CSize](../atl-mfc-shared/reference/csize-class.md)  
 Contiene valori di distanze, posizioni relative o valori accoppiati.  
  
 [CRect](../atl-mfc-shared/reference/crect-class.md)  
 Contiene le coordinate delle aree rettangolari.  
  
 [CRgn](../mfc/reference/crgn-class.md)  
 Incapsula un'area GDI per modificare un'area ellittica, poligonale, o irregolare all'interno di una finestra.  Utilizzata insieme alle funzioni membro di ritaglio nella classe `CDC`.  
  
 [CRectTracker](../mfc/reference/crecttracker-class.md)  
 Mostra e gestisce l'interfaccia utente di ridimensionamento e di spostamento di oggetti rettangolari.  
  
 [CColorDialog](../mfc/reference/ccolordialog-class.md)  
 Fornisce una finestra di dialogo standard per selezionare un colore.  
  
 [CFontDialog](../mfc/reference/cfontdialog-class.md)  
 Fornisce una finestra di dialogo standard per selezionare un tipo di carattere.  
  
 [CPrintDialog](../mfc/reference/cprintdialog-class.md)  
 Fornisce una finestra di dialogo standard per la stampa di un file.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)