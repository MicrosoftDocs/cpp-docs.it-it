---
title: "CContextMenuManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CContextMenuManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CContextMenuManager class"
ms.assetid: 1de20640-243c-47e1-85de-1baa4153bc83
caps.latest.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 33
---
# CContextMenuManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'oggetto `CContextMenuManager` gestisce i menu di scelta rapida, anche noti come i menu di scelta rapida.  
  
## Sintassi  
  
```  
class CContextMenuManager : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContextMenuManager::CContextMenuManager](../Topic/CContextMenuManager::CContextMenuManager.md)|Costruisce un oggetto `CContextMenuManager`.|  
|`CContextMenuManager::~CContextMenuManager`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContextMenuManager::AddMenu](../Topic/CContextMenuManager::AddMenu.md)|Aggiunge un nuovo menu di scelta rapida.|  
|[CContextMenuManager::GetMenuById](../Topic/CContextMenuManager::GetMenuById.md)|Restituisce un handle al menu associato all'ID delle risorse|  
|[CContextMenuManager::GetMenuByName](../Topic/CContextMenuManager::GetMenuByName.md)|Restituisce un handle al menu che corrisponde al nome del menu fornito.|  
|[CContextMenuManager::GetMenuNames](../Topic/CContextMenuManager::GetMenuNames.md)|Restituisce un elenco di nomi di menu.|  
|[CContextMenuManager::LoadState](../Topic/CContextMenuManager::LoadState.md)|Carica i menu di scelta rapida archiviati in Windows Registro di sistema.|  
|[CContextMenuManager::ResetState](../Topic/CContextMenuManager::ResetState.md)|Rimuove i menu di scelta rapida dal menu di scelta rapida.|  
|[CContextMenuManager::SaveState](../Topic/CContextMenuManager::SaveState.md)|Salva i menu di scelta rapida a Windows Registro di sistema.|  
|[CContextMenuManager::SetDontCloseActiveMenu](../Topic/CContextMenuManager::SetDontCloseActiveMenu.md)|Controlla se `CContextMenuManager` chiude il menu di scelta rapida attivo quando viene illustrato un nuovo menu di scelta rapida.|  
|[CContextMenuManager::ShowPopupMenu](../Topic/CContextMenuManager::ShowPopupMenu.md)|Visualizzare il menu di scelta rapida specificato.|  
|[CContextMenuManager::TrackPopupMenu](../Topic/CContextMenuManager::TrackPopupMenu.md)|Visualizzare il menu di scelta rapida specificato.  Restituisce l'indice del comando di menu.|  
  
## Note  
 `CContextMenuManager` gestisce i menu di scelta rapida e verificare che abbia un aspetto coerente.  
  
 Non è necessario creare un oggetto `CContextMenuManager` manualmente.  Il framework dell'applicazione crea l'oggetto `CContextMenuManager`.  Tuttavia, è necessario chiamare [CWinAppEx::InitContextMenuManager](../Topic/CWinAppEx::InitContextMenuManager.md) quando l'applicazione viene inizializzata.  Dopo aver inizializzato l'amministratore di contesto, utilizzare il metodo [CWinAppEx::GetContextMenuManager](../Topic/CWinAppEx::GetContextMenuManager.md) per ottenere un puntatore all'amministratore di contesto per l'applicazione.  
  
 È possibile creare menu di scelta rapida in runtime chiamando `AddMenu`.  Se si desidera visualizzare il menu senza prima ricevere l'input dell'utente, chiamare `ShowPopupMenu`.  `TrackPopupMenu` viene utilizzato quando si desidera creare un menu e attendere input.  `TrackPopupMenu` restituisce l'indice del comando o di 0 selezionato se l'utente rilasciato senza selezionato alcun elemento.  
  
 `CContextMenuManager` è possibile salvare e caricare lo stato su Windows Registro di sistema.  
  
## Esempio  
 Il seguente esempio viene illustrato come aggiungere un menu a un oggetto `CContextMenuManager` e quanto non chiudere il menu di scelta rapida attivo quando l'oggetto `CContextMenuManager` visualizzato un nuovo menu di scelta rapida.  Questo frammento di codice fa parte [Esempio personalizzato delle pagine](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages#4](../../mfc/reference/codesnippet/CPP/ccontextmenumanager-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md)  
  
## Requisiti  
 **intestazione:** afxcontextmenumanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)   
 [CWinAppEx::InitContextMenuManager](../Topic/CWinAppEx::InitContextMenuManager.md)