---
title: "Stampa in controlli Rich Edit | Microsoft Docs"
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
  - "CRichEditCtrl (classe), stampa"
  - "stampa [MFC], CRichEditCtrl"
  - "Rich Edit (controlli), stampa"
ms.assetid: dbda0e40-018f-424e-b5d8-7b489aaf27af
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stampa in controlli Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile impostare un controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) di eseguire il rendering dell'output per un dispositivo specifico, ad esempio una stampante.  È inoltre possibile specificare il dispositivo di output per i formati di controllo Rich Edit il testo.  
  
 Per formattare la parte del contenuto di un controllo Rich Edit per un dispositivo specifico, è possibile utilizzare la funzione membro di [FormatRange](../Topic/CRichEditCtrl::FormatRange.md).  La struttura di [FORMATRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787911) utilizzata con questa funzione specifica l'intervallo di testo per formattare nonché il contesto di dispositivo \(DC\) per il dispositivo di destinazione.  
  
 Dopo la formattazione del testo per un dispositivo di output, è possibile inviare l'output al dispositivo utilizzando la funzione membro di [DisplayBand](../Topic/CRichEditCtrl::DisplayBand.md).  Da ripetutamente utilizzando `FormatRange` e di `DisplayBand`, un'applicazione che visualizza il contenuto di un controllo Rich Edit può implementare la fascia. \(Fascia è divisione di output in parti più piccole per scopi di stampa\).  
  
 È possibile utilizzare la funzione membro di [SetTargetDevice](../Topic/CRichEditCtrl::SetTargetDevice.md) per specificare il dispositivo di destinazione per cui formati di controllo Rich Edit il testo.  Questa funzione è utile per la modifica WYSIWYG \(visualizzati è quello che si ottiene\) di formattazione, in cui un'applicazione inserisce il testo utilizzando la metrica del carattere della stampante predefinita anziché lo schermo.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)