---
title: "Utilizzo di una barra di finestra di dialogo con un controllo Rebar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WM_EX_TRANSPARENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "barra della finestra, utilizzo con bande Rebar"
  - "Rebar (controlli), barra della finestra"
  - "WS_EX_TRANSPARENT (stile)"
ms.assetid: e528cea0-6b81-4bdf-9643-7c03b6176590
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di una barra di finestra di dialogo con un controllo Rebar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come indicato in [Controllo Rebar e bande](../mfc/rebar-controls-and-bands.md), ogni banda può contenere solo una finestra figlio \(o controllo.  Ciò potrebbe rappresentare una limitazione se si desidera disporre di più finestre figlio di banda.  Una soluzione comoda alternativa consiste nella creazione di una risorsa barra della finestra di dialogo con più controlli e aggiungere una banda del rebar \(contenente la barra della finestra di dialogo\) al controllo Rebar.  
  
 In generale, se si desiderava la banda della barra della finestra di dialogo per visualizzare trasparente, impostare lo stile esteso **WS\_EX\_TRANSPARENT** per l'oggetto della barra della finestra di dialogo.  Tuttavia, poiché **WS\_EX\_TRANSPARENT** presenta alcuni problemi con correttamente il disegno dello sfondo di una barra della finestra di dialogo, sarà necessario eseguire le operazioni un poco aggiuntivo per ottenere l'effetto desiderato.  
  
 La procedura descritta di seguito vengono illustrate i passaggi necessari per ottenere la trasparenza senza utilizzare uno stile esteso **WS\_EX\_TRANSPARENT**.  
  
### Per implementare una barra della finestra di dialogo trasparente in un controllo leghi  
  
1.  Utilizzando [La finestra di dialogo aggiungi classe](../mfc/reference/adding-an-mfc-class.md), aggiungere una nuova classe, ad esempio `CMyDlgBar`\) che implementa l'oggetto della barra della finestra di dialogo.  
  
2.  Aggiungere un gestore per il messaggio di `WM_ERASEBKGND`.  
  
3.  Nel nuovo gestore, modificare il codice esistente in base all'esempio seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#29](../mfc/codesnippet/CPP/using-a-dialog-bar-with-a-rebar-control_1.cpp)]  
  
4.  Aggiungere un gestore per il messaggio di `WM_MOVE`.  
  
5.  Nel nuovo gestore, modificare il codice esistente in base all'esempio seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#30](../mfc/codesnippet/CPP/using-a-dialog-bar-with-a-rebar-control_2.cpp)]  
  
 I nuovi gestori simulano la trasparenza della barra della finestra di dialogo inoltrando il messaggio di `WM_ERASEBKGND` alla finestra padre e forzare un aggiornamento di ogni volta che l'oggetto della barra della finestra di dialogo è spostato.  
  
## Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)