---
title: "CTabView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTabView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTabView class"
ms.assetid: 8e6ecd9d-d28d-432b-8ec8-0446f0204d52
caps.latest.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 34
---
# CTabView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CTabView` semplifica l'utilizzo della classe del controllo Struttura a schede \([CMFCTabCtrl](../../mfc/reference/ctabview-class.md)\) nelle applicazioni che utilizzano l'architettura documento\/visualizzazione MFC.  
  
## Sintassi  
  
```  
class CTabbedView : public CView  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabView::AddView](../Topic/CTabView::AddView.md)|Aggiunge una nuova visualizzazione al controllo Struttura a schede.|  
|[CTabView::FindTab](../Topic/CTabView::FindTab.md)|Restituisce l'indice della visualizzazione specificata nel controllo Struttura a schede.|  
|[CTabView::GetActiveView](../Topic/CTabView::GetActiveView.md)|Attualmente restituisce un puntatore alla visualizzazione attiva|  
|[CTabView::GetTabControl](../Topic/CTabView::GetTabControl.md)|Restituisce un riferimento al controllo Struttura a schede associato alla visualizzazione.|  
|[CTabView::RemoveView](../Topic/CTabView::RemoveView.md)|Rimuove la visualizzazione dal controllo Struttura a schede.|  
|[CTabView::SetActiveView](../Topic/CTabView::SetActiveView.md)|Esegue attivo di visualizzazione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabView::IsScrollBar](../Topic/CTabView::IsScrollBar.md)|Chiamato dal framework quando creano una visualizzazione della scheda per determinare se la visualizzazione della scheda è presente una barra di scorrimento orizzontale condivisa.|  
|[CTabView::OnActivateView](../Topic/CTabView::OnActivateView.md)|Chiamato dal framework quando la visualizzazione della scheda è resa attiva o inattiva.|  
  
## Note  
 Questa classe consente di inserire una visualizzazione a schede in un'applicazione documento\/visualizzazione.  `CTabView` è `CView`classe derivata da che contiene un oggetto incorporato `CMFCTabCtrl`.  `CTabView` gestisce tutti i messaggi necessari per supportare l'oggetto `CMFCTabCtrl`.  Derivano dalla classe da `CTabView` e inserirla l'applicazione, quindi aggiungere `CView`di classi derivate tramite il metodo `AddView`.  Il controllo Struttura a schede video visualizzate come schede.  
  
 Ad esempio, un documento che può essere rappresentato in diversi modi: come foglio di calcolo, un grafico, un modulo modificabile, e così via.  È possibile creare le singole visualizzazioni che un oggetto dati in base alle necessità, inserirle nel `CTabView`oggetto derivato da e farvi spostarsi senza scrivere codice aggiuntivo.  
  
 [Esempio TabbedView: Applicazione di visualizzazione a schede MFC](../../top/visual-cpp-samples.md) illustrato l'utilizzo `CTabView`.  
  
## Esempio  
 Di seguito viene illustrato come `CTabView` viene utilizzato nell'esempio TabbedView.  
  
 [!code-cpp[NVC_MFC_TabbedView#1](../../mfc/reference/codesnippet/CPP/ctabview-class_1.h)]  
  
## Requisiti  
 **intestazione:** afxTabView.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CTabView Class](../../mfc/reference/ctabview-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)