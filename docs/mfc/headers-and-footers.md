---
title: "Intestazioni e pi&#232; di pagina | Microsoft Docs"
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
  - "piè di pagina, stampa"
  - "intestazioni, stampa"
  - "pagina (piè di pagina)"
  - "pagina (piè di pagina), stampa"
  - "pagina (intestazioni)"
  - "pagina (intestazioni), stampa"
  - "stampa [MFC], intestazioni e piè di pagina"
  - "stampa [MFC], documenti con più pagine"
ms.assetid: b0be9c53-5773-4955-a777-3c15da745128
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Intestazioni e pi&#232; di pagina
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto come aggiungere le intestazioni e piè di pagina a un documento stampato.  
  
 Quando si esamina un documento sullo schermo, il nome del documento e la posizione corrente nel documento in genere vengono visualizzati in una barra del titolo e una barra di stato.  Nell'utilizzare una copia stampata di un documento, è utile disporre il nome e il numero di pagina visualizzati in un'intestazione o un piè di pagina.  Si tratta di un metodo comune in cui anche i programmi WYSIWYG si differenziano come eseguono la visualizzazione e la stampa.  
  
 La funzione membro di [OnPrint](../Topic/CView::OnPrint.md) è il posto appropriato per visualizzare le intestazioni o piè di pagina poiché viene chiamata per ogni pagina e poiché viene chiamato solo per stampare, non per la visualizzazione.  È possibile definire una funzione distinta per visualizzare un'intestazione o un piè di pagina e gli passa il contesto del dispositivo della stampante da `OnPrint`.  Potrebbe essere necessario modificare l'origine o l'ambito della finestra prima di chiamare [OnDraw](../Topic/CView::OnDraw.md) per evitare che il corpo della sovrapposizione della pagina l'intestazione e il piè di pagina.  Potrebbe inoltre essere necessario modificare `OnDraw` perché il documento che si adatta alla pagina può essere ridotta.  
  
 Un modo per compensare l'area selezionata dall'intestazione o dal piè di pagina è di utilizzare un membro di **m\_rectDraw** di [CPrintInfo](../mfc/reference/cprintinfo-structure.md).  Quando una pagina viene stampata, questo membro viene inizializzato con l'area utilizzabile della pagina.  Se si applica un'intestazione o un piè di pagina prima della stampa del corpo della pagina, è possibile ridurre le dimensioni del rettangolo archiviato in **m\_rectDraw** per rappresentare l'area selezionata dall'intestazione o dal piè di pagina.  Quindi `OnPrint` può fare riferimento a **m\_rectDraw** per determinare la quantità di area rimane per la stampa del corpo della pagina.  
  
 Non è possibile stampare un'intestazione, o altro, da [OnPrepareDC](../Topic/CView::OnPrepareDC.md), poiché viene chiamato prima che la funzione membro di `StartPage` di [CDC](../mfc/reference/cdc-class.md) sia stata chiamata.  A questo punto, il contesto del dispositivo della stampante è considerato un limite della pagina.  È possibile eseguire la stampa solo dalla funzione membro di `OnPrint`.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Stampa di documenti a più pagine](../mfc/multipage-documents.md)  
  
-   [Allocare risorse GDI per stampare](../mfc/allocating-gdi-resources.md)  
  
## Vedere anche  
 [Stampa](../mfc/printing.md)