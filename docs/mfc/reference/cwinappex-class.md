---
title: "CWinAppEx Class | Microsoft Docs"
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
  - "CWinAppEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinAppEx class"
ms.assetid: a3d3e053-3e22-463f-9444-c73abb1bb9d7
caps.latest.revision: 37
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWinAppEx Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CWinAppEx` mantiene lo stato applicazione, salvare lo stato al Registro di sistema, carica lo stato dal Registro di sistema, inizializza gli amministratori di applicazione e vengono forniti i collegamenti agli stessi amministratori di applicazione.  
  
## Sintassi  
  
```  
class CWinAppEx : public CWinApp  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::CWinAppEx](../Topic/CWinAppEx::CWinAppEx.md)|Costruisce un oggetto `CWinAppEx`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::CleanState](../Topic/CWinAppEx::CleanState.md)|Rimuove le informazioni sull'applicazione Windows dal Registro di sistema.|  
|[CWinAppEx::EnableLoadWindowPlacement](../Topic/CWinAppEx::EnableLoadWindowPlacement.md)|Specifica se l'applicazione carica la dimensione e la posizione iniziale della finestra cornice principale dal Registro di sistema.|  
|[CWinAppEx::EnableTearOffMenus](../Topic/CWinAppEx::EnableTearOffMenus.md)|Abilita i menu di tipo tear\-off per l'applicazione.|  
|[CWinAppEx::EnableUserTools](../Topic/CWinAppEx::EnableUserTools.md)|Gli consente di creare comandi di menu personalizzati nell'applicazione.|  
|[CWinAppEx::ExitInstance](../Topic/CWinAppEx::ExitInstance.md)|Chiamato dal framework dalla funzione membro `Run` per uscire da questa istanza dell'applicazione.  \(Override [CWinApp::ExitInstance](../Topic/CWinApp::ExitInstance.md)\).|  
|[CWinAppEx::GetBinary](../Topic/CWinAppEx::GetBinary.md)|Legge i dati binari associati al valore del Registro di sistema specificato.|  
|[CWinAppEx::GetContextMenuManager](../Topic/CWinAppEx::GetContextMenuManager.md)|Restituisce un puntatore a un oggetto globale [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).|  
|[CWinAppEx::GetDataVersion](../Topic/CWinAppEx::GetDataVersion.md)||  
|[CWinAppEx::GetDataVersionMajor](../Topic/CWinAppEx::GetDataVersionMajor.md)|Restituisce la versione principale dell'applicazione salvata in Windows Registro di sistema.|  
|[CWinAppEx::GetDataVersionMinor](../Topic/CWinAppEx::GetDataVersionMinor.md)|Restituisce la versione secondaria dell'applicazione salvata in Windows Registro di sistema.|  
|[CWinAppEx::GetInt](../Topic/CWinAppEx::GetInt.md)|Legge i dati numerici associati al valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetKeyboardManager](../Topic/CWinAppEx::GetKeyboardManager.md)|Restituisce un puntatore a un oggetto globale [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md).|  
|[CWinAppEx::GetMouseManager](../Topic/CWinAppEx::GetMouseManager.md)|Restituisce un puntatore a un oggetto globale [CMouseManager](../../mfc/reference/cmousemanager-class.md).|  
|[CWinAppEx::GetObject](../Topic/CWinAppEx::GetObject.md)|Legge `CObject`\- dati derivati associati al valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetRegSectionPath](../Topic/CWinAppEx::GetRegSectionPath.md)|Restituisce una stringa che rappresenta il percorso di una chiave del Registro di sistema.  Questo percorso concatena il percorso relativo fornito con il percorso dell'applicazione.|  
|[CWinAppEx::GetRegistryBase](../Topic/CWinAppEx::GetRegistryBase.md)|Restituisce il percorso del Registro di sistema per l'applicazione.|  
|[CWinAppEx::GetSectionBinary](../Topic/CWinAppEx::GetSectionBinary.md)|Legge i dati binari associati alla chiave e il valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetSectionInt](../Topic/CWinAppEx::GetSectionInt.md)|Legge i dati numerici dal Registro di sistema associato alla chiave e il valore specificato.|  
|[CWinAppEx::GetSectionObject](../Topic/CWinAppEx::GetSectionObject.md)|Legge i dati `CObject` associati alla chiave e il valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetSectionString](../Topic/CWinAppEx::GetSectionString.md)|Legge i dati in formato stringa associata alla chiave e il valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetShellManager](../Topic/CWinAppEx::GetShellManager.md)|Restituisce un puntatore a un oggetto globale [CShellManager](../../mfc/reference/cshellmanager-class.md).|  
|[CWinAppEx::GetString](../Topic/CWinAppEx::GetString.md)|Legge i dati in formato stringa associati al valore specificato dal Registro di sistema.|  
|[CWinAppEx::GetTooltipManager](../Topic/CWinAppEx::GetTooltipManager.md)|Restituisce un puntatore a un oggetto globale [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md).|  
|[CWinAppEx::GetUserToolsManager](../Topic/CWinAppEx::GetUserToolsManager.md)|Restituisce un puntatore a un oggetto globale [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md).|  
|[CWinAppEx::InitContextMenuManager](../Topic/CWinAppEx::InitContextMenuManager.md)|Inizializza l'oggetto `CContextMenuManager`.|  
|[CWinAppEx::InitKeyboardManager](../Topic/CWinAppEx::InitKeyboardManager.md)|Inizializza l'oggetto `CKeyboardManager`.|  
|[CWinAppEx::InitMouseManager](../Topic/CWinAppEx::InitMouseManager.md)|Inizializza l'oggetto `CMouseManager`.|  
|[CWinAppEx::InitShellManager](../Topic/CWinAppEx::InitShellManager.md)|Inizializza la classe `CShellManager`|  
|[CWinAppEx::InitTooltipManager](../Topic/CWinAppEx::InitTooltipManager.md)|Inizializza la classe `CTooltipManager`.|  
|[CWinAppEx::IsResourceSmartUpdate](../Topic/CWinAppEx::IsResourceSmartUpdate.md)||  
|[CWinAppEx::IsStateExists](../Topic/CWinAppEx::IsStateExists.md)|Indica se la chiave specificata nel Registro di sistema.|  
|[CWinAppEx::LoadState](../Topic/CWinAppEx::LoadState.md)|Carica lo stato applicazione dal Registro di sistema.|  
|[CWinAppEx::OnAppContextHelp](../Topic/CWinAppEx::OnAppContextHelp.md)|Chiamato dal framework quando la guida del contesto di richieste utente per la finestra di dialogo **personalizzazione**.|  
|[CWinAppEx::OnViewDoubleClick](../Topic/CWinAppEx::OnViewDoubleClick.md)|Richiama il comando definito dall'utente quando l'utente fa doppio clic in qualsiasi punto dell'applicazione.|  
|[CWinAppEx::OnWorkspaceIdle](../Topic/CWinAppEx::OnWorkspaceIdle.md)||  
|[CWinAppEx::SaveState](../Topic/CWinAppEx::SaveState.md)|Scrive lo stato del framework applicazione Windows al Registro di sistema.|  
|[CWinAppEx::SetRegistryBase](../Topic/CWinAppEx::SetRegistryBase.md)|Imposta il percorso della chiave del Registro di sistema predefinito.  Questa chiave funge da radice di tutte le chiamate successive del Registro di sistema.|  
|[CWinAppEx::ShowPopupMenu](../Topic/CWinAppEx::ShowPopupMenu.md)|Visualizza un menu popup.|  
|[CWinAppEx::WriteBinary](../Topic/CWinAppEx::WriteBinary.md)|Scrive i dati binari al valore del Registro di sistema specificato.|  
|[CWinAppEx::WriteInt](../Topic/CWinAppEx::WriteInt.md)|Scrive i dati numerici il valore del Registro di sistema specificato.|  
|[CWinAppEx::WriteObject](../Topic/CWinAppEx::WriteObject.md)|Scrive i dati derivati da [CObject Class](../../mfc/reference/cobject-class.md) al valore del Registro di sistema specificato.|  
|[CWinAppEx::WriteSectionBinary](../Topic/CWinAppEx::WriteSectionBinary.md)|Scrive i dati binari in un valore della chiave del Registro di sistema specificato.|  
|[CWinAppEx::WriteSectionInt](../Topic/CWinAppEx::WriteSectionInt.md)|Scrive i dati numerici in un valore della chiave del Registro di sistema specificato.|  
|[CWinAppEx::WriteSectionObject](../Topic/CWinAppEx::WriteSectionObject.md)|Scrive i dati derivati dalla classe `CObject` a un valore della chiave del Registro di sistema specificato.|  
|[CWinAppEx::WriteSectionString](../Topic/CWinAppEx::WriteSectionString.md)|Scrive i dati in formato stringa in un valore della chiave del Registro di sistema specificato.|  
|[CWinAppEx::WriteString](../Topic/CWinAppEx::WriteString.md)|Scrive i dati in formato stringa a valore del Registro di sistema specificato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::LoadCustomState](../Topic/CWinAppEx::LoadCustomState.md)|Chiamato dal framework quando lo stato applicazione è stato caricato.|  
|[CWinAppEx::LoadWindowPlacement](../Topic/CWinAppEx::LoadWindowPlacement.md)|Chiamato dal framework quando carica la dimensione e la posizione dell'applicazione dal Registro di sistema.  I dati sono caricati alla dimensione e la posizione della cornice principale dell'ultimo di applicazione chiuso.|  
|[CWinAppEx::OnClosingMainFrame](../Topic/CWinAppEx::OnClosingMainFrame.md)|Chiamato dal framework quando una finestra cornice principale sta sviluppando `WM_CLOSE`.|  
|[CWinAppEx::PreLoadState](../Topic/CWinAppEx::PreLoadState.md)|Chiamato dal framework immediatamente prima dello stato applicazione viene caricato.|  
|[CWinAppEx::PreSaveState](../Topic/CWinAppEx::PreSaveState.md)|Chiamato dal framework immediatamente prima dello stato applicazione viene salvato.|  
|[CWinAppEx::ReloadWindowPlacement](../Topic/CWinAppEx::ReloadWindowPlacement.md)|Ricarica la dimensione e la posizione della finestra fornita dal Registro di sistema|  
|[CWinAppEx::SaveCustomState](../Topic/CWinAppEx::SaveCustomState.md)|Chiamato dal framework dopo che scrive lo stato applicazione al Registro di sistema.|  
|[CWinAppEx::StoreWindowPlacement](../Topic/CWinAppEx::StoreWindowPlacement.md)|Chiamato dal framework per scrivere le dimensioni e la posizione della cornice principale al Registro di sistema.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinAppEx::m\_bForceImageReset](../Topic/CWinAppEx::m_bForceImageReset.md)|Specifica se il framework reimposterà tutte le immagini della barra degli strumenti quando la finestra cornice contenente la barra degli strumenti viene caricata.|  
  
## Note  
 Gran parte della funzionalità fornita dal framework MFC dipende dalla classe `CWinAppEx`.  È possibile includere la classe `CWinAppEx` nell'applicazione in due modi:  
  
-   Creare una classe `CWinAppEx` nel thread principale.  
  
-   Derivare la classe dell'applicazione principale da `CWinAppEx`.  
  
 Dopo aver incorporate `CWinAppEx` nell'applicazione, è possibile inizializzare uno qualsiasi degli amministratori di applicazione.  Prima di utilizzare un amministratore di applicazione, è necessario inizializzarlo chiamando il metodo Initialize appropriato.  Per ottenere un puntatore a un gestore specifico, chiamare il collegamento del metodo.  La classe `CWinAppEx` gestisce gli amministratori di applicazione: [CMouseManager Class](../../mfc/reference/cmousemanager-class.md), [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md), [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md), [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md)e [CMenuTearOffManager Class](../../mfc/reference/cmenutearoffmanager-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 [CWinApp](../../mfc/reference/cwinapp-class.md)  
  
 [CWinAppEx](../../mfc/reference/cwinappex-class.md)  
  
## Requisiti  
 **intestazione:** afxwinappex.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)   
 [CMouseManager Class](../../mfc/reference/cmousemanager-class.md)   
 [CContextMenuManager Class](../../mfc/reference/ccontextmenumanager-class.md)   
 [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)   
 [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md)