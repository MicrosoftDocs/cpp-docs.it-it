---
title: "CMFCShellTreeCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCShellTreeCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCShellTreeCtrl class"
ms.assetid: 3d1da715-9554-4ed7-968c-055c48146267
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CMFCShellTreeCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCShellTreeCtrl` estendere la funzionalità [CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md) visualizzare una gerarchia degli elementi della shell.  
  
## Sintassi  
  
```  
class CMFCShellTreeCtrl : public CTreeCtrl  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCShellTreeCtrl::EnableShellContextMenu](../Topic/CMFCShellTreeCtrl::EnableShellContextMenu.md)|Abilita o disabilita il menu di scelta rapida.|  
|[CMFCShellTreeCtrl::GetFlags](../Topic/CMFCShellTreeCtrl::GetFlags.md)|Restituisce una combinazione di flag che vengono passati a [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066).|  
|[CMFCShellTreeCtrl::GetItemPath](../Topic/CMFCShellTreeCtrl::GetItemPath.md)|Recupera il percorso di un elemento.|  
|[CMFCShellTreeCtrl::GetRelatedList](../Topic/CMFCShellTreeCtrl::GetRelatedList.md)|Restituisce un puntatore a un oggetto [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md) utilizzato insieme a questo oggetto `CMFCShellTreeCtrl` per creare una finestra di tipo Esplora risorse.|  
|[CMFCShellTreeCtrl::OnChildNotify](../Topic/CMFCShellTreeCtrl::OnChildNotify.md)|Questa funzione membro viene chiamata dalla finestra padre della finestra quando riceve un messaggio di notifica che si applica a questa finestra.  \(Override [CWnd::OnChildNotify](../Topic/CWnd::OnChildNotify.md)\).|  
|[CMFCShellTreeCtrl::OnGetItemIcon](../Topic/CMFCShellTreeCtrl::OnGetItemIcon.md)||  
|[CMFCShellTreeCtrl::OnGetItemText](../Topic/CMFCShellTreeCtrl::OnGetItemText.md)||  
|[CMFCShellTreeCtrl::Refresh](../Topic/CMFCShellTreeCtrl::Refresh.md)|Aggiornare e aggiorna l'oggetto corrente `CMFCShellTreeCtrl`.|  
|[CMFCShellTreeCtrl::SelectPath](../Topic/CMFCShellTreeCtrl::SelectPath.md)|Seleziona l'elemento appropriato di controllo tree basato su un percorso specificato di stringa o di PIDL.|  
|[CMFCShellTreeCtrl::SetFlags](../Topic/CMFCShellTreeCtrl::SetFlags.md)|Flag di set per filtrare il contesto della struttura ad albero \(simile ai flag utilizzati da `IShellFolder::EnumObjects`\).|  
|[CMFCShellTreeCtrl::SetRelatedList](../Topic/CMFCShellTreeCtrl::SetRelatedList.md)|Imposta una relazione tra l'oggetto corrente `CMFCShellTreeCtrl` e un oggetto `CMFCShellListCtrl`.|  
  
## Note  
 Questa classe estende la classe `CTreeCtrl` al programma per includere elementi shell di Windows nella struttura ad albero.  Questa classe può essere associata a un oggetto `CMFCShellListCtrl` per creare una finestra di esplorazione completa.  Quindi, selezionare un elemento nella struttura ad albero viene visualizzato un elenco di elementi della shell di Windows nell'elenco collegato.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CTreeCtrl](../../mfc/reference/ctreectrl-class.md)  
  
 [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md)  
  
## Requisiti  
 **intestazione:** afxshelltreeCtrl.h  
  
## Esempio  
 Nell'esempio seguente viene illustrato come creare un oggetto classe `CMFCShellTreeCtrl`.  Questo frammento di codice fa parte [Esempio explorer](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer#4](../../mfc/reference/codesnippet/CPP/cmfcshelltreectrl-class_1.h)]  
[!code-cpp[NVC_MFC_Explorer#5](../../mfc/reference/codesnippet/CPP/cmfcshelltreectrl-class_2.cpp)]  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)   
 [CMFCShellListCtrl Class](../../mfc/reference/cmfcshelllistctrl-class.md)