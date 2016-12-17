---
title: "CDragListBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDragListBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDragListBox class"
  - "drag list box [C++]"
  - "dragging list items"
  - "caselle di riepilogo"
  - "Windows [C++], caselle di riepilogo"
ms.assetid: fee20b42-60ae-4aa9-83f9-5a3d9b96e33b
caps.latest.revision: 24
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDragListBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Oltre a fornire la funzionalità di una casella di riepilogo di Windows, la classe consente `CDragListBox` l'utente agli elementi della casella di riepilogo di spostamento, ad esempio nomi file, nella casella di riepilogo.  
  
## Sintassi  
  
```  
class CDragListBox : public CListBox  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDragListBox::CDragListBox](../Topic/CDragListBox::CDragListBox.md)|Costruisce un oggetto `CDragListBox`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDragListBox::BeginDrag](../Topic/CDragListBox::BeginDrag.md)|Chiamato dal framework quando un'operazione di trascinamento viene avviato.|  
|[CDragListBox::CancelDrag](../Topic/CDragListBox::CancelDrag.md)|Chiamato dal framework durante un'operazione di trascinamento è stata annullata.|  
|[CDragListBox::Dragging](../Topic/CDragListBox::Dragging.md)|Chiamato dal framework durante un'operazione di trascinamento.|  
|[CDragListBox::DrawInsert](../Topic/CDragListBox::DrawInsert.md)|Consente di disegnare la guida di inserimento della casella di riepilogo di trascinamento.|  
|[CDragListBox::Dropped](../Topic/CDragListBox::Dropped.md)|Chiamato dal framework dopo che è stato rilasciato.|  
|[CDragListBox::ItemFromPt](../Topic/CDragListBox::ItemFromPt.md)|Restituisce le coordinate dell'elemento trascinato.|  
  
## Note  
 Le caselle di riepilogo con questa funzionalità consente agli utenti necessitano gli elementi di un elenco in qualsiasi modo è più utile essi.  Per impostazione predefinita, la casella di riepilogo sposterà l'elemento nella nuova posizione nell'elenco.  Tuttavia, gli oggetti `CDragListBox` possono essere personalizzati agli elementi della copia anziché spostarli.  
  
 Il controllo casella di riepilogo associato alla classe `CDragListBox` non deve avere **LBS\_SORT** o lo stile **LBS\_MULTIPLESELECT**.  Per una descrizione degli stili casella di riepilogo, vedere [Stili della casella di riepilogo](../../mfc/reference/list-box-styles.md).  
  
 Per utilizzare una casella di riepilogo di trascinamento in una finestra di dialogo esistente dell'applicazione, aggiungere un controllo casella di riepilogo al modello di finestra di dialogo utilizzando l'editor finestre di dialogo e quindi assegnare una variabile membro \(la categoria `Control` e di variabile `CDragListBox`\) che corrisponde al controllo casella di riepilogo nel modello di finestra di dialogo.  
  
 Per ulteriori informazioni sull'assegnazione i controlli a variabili membro, vedere [Raccorci per la definizione delle variabili membro per i controlli della finestra di dialogo](../../mfc/defining-member-variables-for-dialog-controls.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListBox](../../mfc/reference/clistbox-class.md)  
  
 `CDragListBox`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Esempio TSTCON MFC](../../top/visual-cpp-samples.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)