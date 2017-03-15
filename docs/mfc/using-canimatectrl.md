---
title: "Utilizzo di CAnimateCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CAnimateCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli animazione [C++], CAnimateCtrl (classe)"
  - "CAnimateCtrl (classe), informazioni sulla classe CAnimateCtrl"
  - "controlli [MFC], animazione"
ms.assetid: 696c0805-bef0-4e2e-a9e7-b37b9215b7f0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Utilizzo di CAnimateCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo animazione, rappresentato dalla classe [CAnimateCtrl](../mfc/reference/canimatectrl-class.md), è una finestra che visualizza un clip nel formato di \(AVI\) interfoliazione audio \- visualizza la visualizzazione standard di windows\/audio formato.  Un clip AVI è una serie di frame bitmap, ad esempio un filmato.  
  
 Poiché il thread continua l'esecuzione mentre il clip video, AVI un utilizzo comune di un controllo animazione è di indicare l'attività di sistema durante un'operazione di lunga durata.  Ad esempio, nella finestra di dialogo trova finestre viene una lente di ingrandimento in movimento mentre il sistema cerca un file.  
  
 I controlli possono riprodurre l'animazione solo i clip AVI semplici e non supportano il suono. Per un elenco completo delle limitazioni, vedere [CAnimateCtrl](../mfc/reference/canimatectrl-class.md)\). Poiché le funzionalità di un controllo animazione sono notevolmente limitate ed è soggetto a modifiche, è necessario utilizzare un'alternativa come il controllo di MCIWnd se è necessario un controllo per fornire la riproduzione multimediale e\/o le funzionalità di registrazione.  Per ulteriori informazioni sul controllo di MCIWnd, vedere la documentazione multimediale.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di un controllo animazione](../mfc/using-an-animation-control.md)  
  
-   [Le notifiche inviate dai controlli animazione](../mfc/notifications-sent-by-animation-controls.md)  
  
## Vedere anche  
 [Controlli](../mfc/controls-mfc.md)