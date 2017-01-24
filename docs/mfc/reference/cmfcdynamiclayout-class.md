---
title: "Classe CMFCDynamicLayout | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: c2df2976-f049-47fc-9cf0-abe3e01948bc
caps.latest.revision: 16
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CMFCDynamicLayout
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica come i controlli in una finestra vengono spostati e ridimensionati quando l'utente ridimensiona la finestra.  
  
## Sintassi  
  
```  
class CMFCDynamicLayout : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCDynamicLayout::CMFCDynamicLayout`|Costruisce un oggetto `CMFCDynamicLayout`.|  
|`CMFCDynamicLayout::~CMFCDynamicLayout`|Distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDynamicLayout::AddItem](../Topic/CMFCDynamicLayout::AddItem.md)|Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.|  
|[CMFCDynamicLayout::Adjust](../Topic/CMFCDynamicLayout::Adjust.md)|Aggiunge una finestra figlio, in genere un controllo, all'elenco di finestre controllate dal gestore del layout dinamico.|  
|[CMFCDynamicLayout::Create](../Topic/CMFCDynamicLayout::Create.md)|Archivia e convalida la finestra host.|  
|[CMFCDynamicLayout::GetHostWnd](../Topic/CMFCDynamicLayout::GetHostWnd.md)|Restituisce un puntatore a una finestra host.|  
|[CMFCDynamicLayout::GetMinSize](../Topic/CMFCDynamicLayout::GetMinSize.md)|Restituisce le dimensioni finestra al di sotto delle quali il layout non verrà regolato.|  
|[CMFCDynamicLayout::GetWindowRect](../Topic/CMFCDynamicLayout::GetWindowRect.md)|Recupera il rettangolo per l'area client corrente della finestra.|  
|[CMFCDynamicLayout::HasItem](../Topic/CMFCDynamicLayout::HasItem.md)|Controlla se al layout dinamico è stato aggiunto un controllo figlio.|  
|[CMFCDynamicLayout::IsEmpty](../Topic/CMFCDynamicLayout::IsEmpty.md)|Controlla se un layout dinamico non dispone di finestre figlio aggiuntive.|  
|[CMFCDynamicLayout::LoadResource](../Topic/CMFCDynamicLayout::LoadResource.md)|Legge il layout dinamico dalla risorsa AFX\_DIALOG\_LAYOUT e quindi applica il layout alla finestra host.|  
|[CMFCDynamicLayout::MoveHorizontal](../Topic/CMFCDynamicLayout::MoveHorizontal.md) statico|Ottiene un valore [MoveSettings](../Topic/CMFCDynamicLayout::MoveSettings%20Structure.md) che definisce l'entità dello spostamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|  
|[CMFCDynamicLayout::MoveHorizontalAndVertical](../Topic/CMFCDynamicLayout::MoveHorizontalAndVertical.md) statico|Ottiene un valore [MoveSettings](../Topic/CMFCDynamicLayout::MoveSettings%20Structure.md) che definisce l'entità dello spostamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|  
|[CMFCDynamicLayout::MoveNone](../Topic/CMFCDynamicLayout::MoveNone.md) statico|Ottiene un valore [MoveSettings](../Topic/CMFCDynamicLayout::MoveSettings%20Structure.md) che rappresenta l'assenza di movimento, orizzontale o verticale, per un controllo figlio.|  
|[CMFCDynamicLayout::MoveVertical](../Topic/CMFCDynamicLayout::MoveVertical.md) statico|Ottiene un valore [MoveSettings](../Topic/CMFCDynamicLayout::MoveSettings%20Structure.md) che definisce l'entità dello spostamento verticale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|  
|[CMFCDynamicLayout::SetMinSize](../Topic/CMFCDynamicLayout::SetMinSize.md)|Imposta le dimensioni finestra al di sotto delle quali il layout non verrà regolato.|  
|[CMFCDynamicLayout::SizeHorizontal](../Topic/CMFCDynamicLayout::SizeHorizontal.md) statico|Ottiene un valore [SizeSettings](../Topic/CMFCDynamicLayout::SizeSettings%20Structure.md) che definisce l'entità del ridimensionamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|  
|[CMFCDynamicLayout::SizeHorizontalAndVertical](../Topic/CMFCDynamicLayout::SizeHorizontalAndVertical.md) statico|Ottiene un valore [SizeSettings](../Topic/CMFCDynamicLayout::SizeSettings%20Structure.md) che definisce l'entità del ridimensionamento orizzontale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|  
|[CMFCDynamicLayout::SizeNone](../Topic/CMFCDynamicLayout::SizeNone.md) statico|Ottiene un valore [SizeSettings](../Topic/CMFCDynamicLayout::SizeSettings%20Structure.md) che rappresenta l'assenza di modifiche nelle dimensioni di un controllo figlio.|  
|[CMFCDynamicLayout::SizeVertical](../Topic/CMFCDynamicLayout::SizeVertical.md) statico|Ottiene un valore [SizeSettings](../Topic/CMFCDynamicLayout::SizeSettings%20Structure.md) che definisce l'entità del ridimensionamento verticale di un controllo figlio quando l'utente ridimensiona la finestra di hosting.|  
  
## Tipi annidati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDynamicLayout::MoveSettings Structure](../Topic/CMFCDynamicLayout::MoveSettings%20Structure.md)|Incapsula i dati di spostamento per i controlli in un layout dinamico.|  
|[Struttura CMFCDynamicLayout::SizeSettings](../Topic/CMFCDynamicLayout::SizeSettings%20Structure.md)|Incapsula i dati di modifica delle dimensioni per i controlli in un layout dinamico.|  
  
## Note  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCDynamicLayout](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
## Requisiti  
 **Intestazione:** afxlayout.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)