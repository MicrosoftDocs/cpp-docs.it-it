---
title: "Ottimizzazione del disegno dei controlli | Microsoft Docs"
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
  - "MFC (controlli ActiveX), ottimizzazione"
ms.assetid: 29ff985d-9bf5-4678-b62d-aad12def75fb
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ottimizzazione del disegno dei controlli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando viene richiesto a un controllo di disegnarsi in un contesto di dispositivo fornito dal contenitore, in genere seleziona gli oggetti GDI \(come penne, pennelli e i tipi di carattere\) nel contesto di dispositivo, esegue le operazioni di disegno e ripristina gli oggetti GDI precedenti.  Se il contenitore ha più controlli che devono essere disegnati nello stesso contesto di dispositivo e ogni controllo seleziona gli oggetti GDI necessari, è possibile risparmiare tempo se i controlli non ripristinano i singoli oggetti precedentemente selezionati.  Dopo che tutti i controlli sono stati disegnati, il contenitore può automaticamente ripristinare gli oggetti originali.  
  
 Per individuare se un contenitore supporta questa tecnica, un controllo può chiamare la funzione membro [COleControl::IsOptimizedDraw](../Topic/COleControl::IsOptimizedDraw.md).  Se la funzione restituisce **TRUE**, il controllo può ignorare il passaggio normale di ripristino degli oggetti precedentemente selezionati.  
  
 Si consideri un controllo con la seguente funzione `OnDraw` \(non ottimizzata\):  
  
 [!code-cpp[NVC_MFC_AxOpt#15](../mfc/codesnippet/CPP/optimizing-control-drawing_1.cpp)]  
  
 La penna e il pennello in questo esempio sono variabili locali e pertanto i loro distruttori verranno chiamati quando escono dall'ambito \(quando la funzione `OnDraw` termina\).  I distruttori cercheranno di eliminare gli oggetti GDI corrispondenti.  Ma non devono essere eliminati se si intende lasciarli selezionati nel contesto di dispositivo restituito da `OnDraw`.  
  
 Per impedire che gli oggetti [CBrush](../mfc/reference/cbrush-class.md) e [CPen](../mfc/reference/cpen-class.md) vengano eliminati quando `OnDraw` completa, li si memorizzi in variabili membro anziché in variabili locali.  Nella dichiarazione della classe del controllo, aggiungere le dichiarazioni per due nuove variabili membro:  
  
 [!code-cpp[NVC_MFC_AxOpt#16](../mfc/codesnippet/CPP/optimizing-control-drawing_2.h)]  
[!code-cpp[NVC_MFC_AxOpt#17](../mfc/codesnippet/CPP/optimizing-control-drawing_3.h)]  
  
 È quindi possibile riscrivere la funzione `OnDraw`, come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#18](../mfc/codesnippet/CPP/optimizing-control-drawing_4.cpp)]  
  
 In questo modo si evita la creazione della penna e del pennello ogni volta che `OnDraw` viene chiamato.  Il miglioramento della velocità avviene al costo di mantenere dati aggiuntivi dell'istanza.  
  
 Se la proprietà BackColor o ForeColor cambia, la penna o il pennello devono essere ricreati.  A tale scopo, eseguire l'override delle funzioni membro [OnBackColorChanged](../Topic/COleControl::OnBackColorChanged.md) e [OnForeColorChanged](../Topic/COleControl::OnForeColorChanged.md) :  
  
 [!code-cpp[NVC_MFC_AxOpt#19](../mfc/codesnippet/CPP/optimizing-control-drawing_5.cpp)]  
  
 Infine, eliminare le chiamate non necessarie di `SelectObject`, modificare `OnDraw` come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#20](../mfc/codesnippet/CPP/optimizing-control-drawing_6.cpp)]  
  
## Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)   
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)   
 [Controlli ActiveX MFC: disegno di un controllo ActiveX](../mfc/mfc-activex-controls-painting-an-activex-control.md)