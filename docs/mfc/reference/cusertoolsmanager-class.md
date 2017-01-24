---
title: "CUserToolsManager Class | Microsoft Docs"
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
  - "CUserToolsManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CUserToolsManager class"
ms.assetid: bdfa37ae-efca-4616-abb5-9d0dcd2d335b
caps.latest.revision: 26
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CUserToolsManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Mantiene la raccolta di oggetti [CUserTool Class](../../mfc/reference/cusertool-class.md) in un'applicazione.  Uno strumento dell'utente è una voce di menu che esegue un'applicazione esterna.  L'oggetto `CUserToolsManager` consente all'utente o allo sviluppatore di aggiungere nuovi strumenti dell'applicazione.  Supporta l'esecuzione di controlli associati agli strumenti dell'utente e salva le informazioni sugli strumenti dell'utente in Windows Registro di sistema.  
  
## Sintassi  
  
```  
class CUserToolsManager : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserToolsManager::CUserToolsManager](../Topic/CUserToolsManager::CUserToolsManager.md)|Costruisce un oggetto `CUserToolsManager`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserToolsManager::CreateNewTool](../Topic/CUserToolsManager::CreateNewTool.md)|Crea un nuovo strumento utente.|  
|[CUserToolsManager::FindTool](../Topic/CUserToolsManager::FindTool.md)|Restituisce il puntatore all'oggetto `CMFCUserTool` associato a un ID di comando|  
|[CUserToolsManager::GetArgumentsMenuID](../Topic/CUserToolsManager::GetArgumentsMenuID.md)|Restituisce l'id della risorsa associato al menu **argomenti** nella scheda **Strumenti** la finestra di dialogo **Personalizza**.|  
|[CUserToolsManager::GetDefExt](../Topic/CUserToolsManager::GetDefExt.md)|Restituisce l'estensione predefinita che la finestra di dialogo **Apri file** \([CFileDialog::CFileDialog](../Topic/CFileDialog::CFileDialog.md)\) utilizza nel campo **Comando** nella scheda **Strumenti** la finestra di dialogo **Personalizza**.|  
|[CUserToolsManager::GetFilter](../Topic/CUserToolsManager::GetFilter.md)|Restituisce il filtro di file nella finestra di dialogo **Apri file** \([CFileDialog Class](../../mfc/reference/cfiledialog-class.md)\) utilizza nel campo **Comando** nella scheda **Strumenti** la finestra di dialogo **Personalizza**.|  
|[CUserToolsManager::GetInitialDirMenuID](../Topic/CUserToolsManager::GetInitialDirMenuID.md)|Restituisce l'id della risorsa associato al menu **directory iniziale** nella scheda **Strumenti** la finestra di dialogo **Personalizza**.|  
|[CUserToolsManager::GetMaxTools](../Topic/CUserToolsManager::GetMaxTools.md)|Restituisce il numero massimo degli strumenti dell'utente che possono essere allocati nell'applicazione.|  
|[CUserToolsManager::GetToolsEntryCmd](../Topic/CUserToolsManager::GetToolsEntryCmd.md)|Restituisce l'id di comando segnaposto della voce di menu per gli strumenti dell'utente.|  
|[CUserToolsManager::GetUserTools](../Topic/CUserToolsManager::GetUserTools.md)|Restituisce un riferimento all'elenco degli strumenti dell'utente.|  
|[CUserToolsManager::InvokeTool](../Topic/CUserToolsManager::InvokeTool.md)|Esegue un'applicazione associata allo strumento dell'utente con un ID di comando|  
|[CUserToolsManager::IsUserToolCmd](../Topic/CUserToolsManager::IsUserToolCmd.md)|Determina se un ID di comando associato a uno strumento dell'utente.|  
|[CUserToolsManager::LoadState](../Topic/CUserToolsManager::LoadState.md)|Carica le informazioni sugli strumenti dell'utente da Windows Registro di sistema.|  
|[CUserToolsManager::MoveToolDown](../Topic/CUserToolsManager::MoveToolDown.md)|Sposta lo strumento specificato dell'utente nell'elenco degli strumenti dell'utente.|  
|[CUserToolsManager::MoveToolUp](../Topic/CUserToolsManager::MoveToolUp.md)|Sposta lo strumento utente specificato nell'elenco degli strumenti dell'utente.|  
|[CUserToolsManager::RemoveTool](../Topic/CUserToolsManager::RemoveTool.md)|Rimuove lo strumento utente specificato dall'applicazione.|  
|[CUserToolsManager::SaveState](../Topic/CUserToolsManager::SaveState.md)|Archivia le informazioni sugli strumenti dell'utente in Windows Registro di sistema.|  
|[CUserToolsManager::SetDefExt](../Topic/CUserToolsManager::SetDefExt.md)|Specifica l'estensione predefinita che la finestra di dialogo **Apri file** \([CFileDialog Class](../../mfc/reference/cfiledialog-class.md)\) utilizza nel campo **Comando** nella scheda **Strumenti** la finestra di dialogo **Personalizza**.|  
|[CUserToolsManager::SetFilter](../Topic/CUserToolsManager::SetFilter.md)|Specifica il filtro di file nella finestra di dialogo **Apri file** \([CFileDialog Class](../../mfc/reference/cfiledialog-class.md)\) utilizza nel campo **Comando** nella scheda **Strumenti** la finestra di dialogo **Personalizza**.|  
  
## Note  
 Per incorporare gli strumenti utente nell'applicazione, è necessario:  
  
 1.  Riservare una voce di menu e un ID di comando collegato a una voce di menu dello strumento dell'utente.  
  
 2.  Riservare un ID di comando sequenziale a ogni strumento dell'utente che un utente può definire nell'applicazione.  
  
 3.  Chiamare il metodo [CWinAppEx::EnableUserTools](../Topic/CWinAppEx::EnableUserTools.md) e forniscono i seguenti parametri: comando di menu ID, primo ID di comandi di strumenti dell'utente e ultima ID di comandi di strumenti dell'utente  
  
 Deve essere un solo oggetto globale `CUserToolsManager` per l'applicazione.  
  
 Per un esempio degli strumenti dell'utente, vedere progetto di esempio VisualStudioDemo.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come recuperare un riferimento a un oggetto `CUserToolsManager` e come creare nuovi strumenti dell'utente.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#38](../../mfc/codesnippet/CPP/cusertoolsmanager-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md)  
  
## Requisiti  
 **intestazione:** afxusertoolsmanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)   
 [CUserTool Class](../../mfc/reference/cusertool-class.md)