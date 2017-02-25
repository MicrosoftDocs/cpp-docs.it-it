---
title: "CMouseManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMouseManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMouseManager class"
ms.assetid: a4d05017-4e44-4a40-8b57-4ece0de20481
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CMouseManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente a un utente comandi diversi del membro con un oggetto specifico [CView](../../mfc/reference/cview-class.md) quando l'utente fa doppio clic sull'interno di visualizzazione.  
  
## Sintassi  
  
```  
class CMouseManager : public CObject  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMouseManager::AddView](../Topic/CMouseManager::AddView.md)|Aggiunge un oggetto `CView` nella finestra di dialogo **personalizzazione**.  La finestra di dialogo **personalizzazione** consente all'utente per associare un doppio clic con un comando per ognuna delle visualizzazioni elenco.|  
|[CMouseManager::GetViewDblClickCommand](../Topic/CMouseManager::GetViewDblClickCommand.md)|Restituisce il comando che viene eseguito quando l'utente fa doppio clic sull'interno della visualizzazione fornita.|  
|[CMouseManager::GetViewIconId](../Topic/CMouseManager::GetViewIconId.md)|Restituisce l'icona associata all'ID di visualizzazione|  
|[CMouseManager::GetViewIdByName](../Topic/CMouseManager::GetViewIdByName.md)|Restituisce la visualizzazione ID associata al nome di visualizzazione specificato.|  
|[CMouseManager::GetViewNames](../Topic/CMouseManager::GetViewNames.md)|Recupera un elenco di tutti i nomi di visualizzazione aggiunti.|  
|[CMouseManager::LoadState](../Topic/CMouseManager::LoadState.md)|Carica lo stato `CMouseManager` da Windows Registro di sistema.|  
|[CMouseManager::SaveState](../Topic/CMouseManager::SaveState.md)|Scrive lo stato `CMouseManager` a Windows Registro di sistema.|  
|[CMouseManager::SetCommandForDblClk](../Topic/CMouseManager::SetCommandForDblClk.md)|Associa il comando fornito e la visualizzazione fornita.|  
  
## Note  
 La classe `CMouseManager` gestisce una raccolta di oggetti `CView`.  Ogni visualizzazione è identificato da un nome o a un ID  Queste visualizzazioni verranno visualizzate nella finestra di dialogo **personalizzazione**.  L'utente può modificare il comando associato a una visualizzazione tramite la finestra di dialogo **personalizzazione**.  Il comando l'accesso viene eseguito quando l'utente fa doppio clic in tale visualizzazione.  Per supportare questo da una prospettiva di codifica, è necessario elaborare il messaggio `WM_LBUTTONDBLCLK` e chiamare la funzione [CWinAppEx::OnViewDoubleClick](../Topic/CWinAppEx::OnViewDoubleClick.md) nel codice dell'oggetto `CView`.  
  
 Non è necessario creare un oggetto `CMouseManager` manualmente.  Verrà creato il framework dell'applicazione.  Viene distrutto automaticamente quando l'utente esce dall'applicazione.  Per ottenere un puntatore all'amministratore del mouse per l'applicazione, chiamare [CWinAppEx::GetMouseManager](../Topic/CWinAppEx::GetMouseManager.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMouseManager](../../mfc/reference/cmousemanager-class.md)  
  
## Requisiti  
 **intestazione:** afxmousemanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)   
 [Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)