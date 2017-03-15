---
title: "Gestione della visualizzazione corrente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "visualizzazione corrente nella finestra cornice"
  - "disattivazione di visualizzazioni"
  - "finestre cornice, visualizzazione corrente"
  - "OnActivateView (metodo)"
  - "visualizzazioni, attivazione"
  - "visualizzazioni, metodo OnActivateView"
  - "visualizzazioni, corrente"
  - "visualizzazioni, disattivazione"
ms.assetid: 0a1cc22d-d646-4536-9ad2-3cb6d7092e4a
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Gestione della visualizzazione corrente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come parte dell'implementazione predefinita delle finestre cornice, una finestra cornice tiene traccia della visualizzazione attualmente attiva.  Se la finestra cornice contiene più di una visualizzazione, come ad esempio in una finestra con separatore, la visualizzazione corrente è la visualizzazione più recente in uso.  La visualizzazione attiva è indipendente dalla finestra attiva in Windows o dallo stato attivo per l'input corrente.  
  
 Quando la visualizzazione attiva viene modificata, il framework notifica la visualizzazione corrente chiamando la funzione membro [OnActivateView](../Topic/CView::OnActivateView.md).  È possibile stabilire se la visualizzazione è stata attivata o disattivata esaminando il parametro `bActivate` di `OnActivateView`.  Per impostazione predefinita, `OnActivateView` imposta lo stato attivo sulla visualizzazione corrente nell'attivazione.  È possibile eseguire l'override di `OnActivateView` per eseguire qualsiasi elaborazione speciale quando la visualizzazione viene disattivata o riattivata.  Ad esempio, è possibile fornire indicazioni visive speciali per distinguere la visualizzazione attiva da altre visualizzazioni inattive.  
  
 Una finestra cornice inoltra i comandi alla sua visualizzazione corrente \(attiva\), come illustrato in [Routing dei comandi](../mfc/command-routing.md), come parte del routing dei comandi standard.  
  
## Vedere anche  
 [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)