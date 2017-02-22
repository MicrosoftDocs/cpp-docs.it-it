---
title: "CUserTool Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CUserTool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CUserTool class"
ms.assetid: 7c287d3e-d012-488d-b4e1-aa0f83f294bb
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CUserTool Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Uno strumento dell'utente è una voce di menu che esegue un'applicazione esterna.  La scheda **Strumenti** la finestra di dialogo **Personalizza** \([CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)\) consente all'utente di aggiungere gli strumenti dell'utente e per specificare il nome, il comando, gli argomenti e la directory di partenza per ogni strumento dell'utente.  
  
## Sintassi  
  
```  
class CUserTool : public CObject  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::CopyIconToClipboard](../Topic/CUserTool::CopyIconToClipboard.md)||  
|[CUserTool::DrawToolIcon](../Topic/CUserTool::DrawToolIcon.md)|Disegna l'icona dello strumento di un utente in un rettangolo specificato.|  
|[CUserTool::GetCommand](../Topic/CUserTool::GetCommand.md)|Restituisce una stringa contenente il testo del comando associato allo strumento dell'utente.|  
|[CUserTool::GetCommandId](../Topic/CUserTool::GetCommandId.md)|Restituisce l'id di comando voce di menu degli strumenti dell'utente.|  
|[CUserTool::Invoke](../Topic/CUserTool::Invoke.md)|Esegue il comando associato allo strumento dell'utente.|  
|[CUserTool::Serialize](../Topic/CUserTool::Serialize.md)|Lettura o scrittura questo oggetto da o in un archivio.  \(Override [CObject::Serialize](../Topic/CObject::Serialize.md)\).|  
|[CUserTool::SetCommand](../Topic/CUserTool::SetCommand.md)|Imposta il comando associato allo strumento dell'utente.|  
|[CUserTool::SetToolIcon](../Topic/CUserTool::SetToolIcon.md)|Carica l'icona dello strumento dell'applicazione associata allo strumento.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::LoadDefaultIcon](../Topic/CUserTool::LoadDefaultIcon.md)|Carica l'icona predefinita per uno strumento dell'utente.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::m\_strArguments](../Topic/CUserTool::m_strArguments.md)|Gli argomenti della riga di comando per lo strumento utente.|  
|[CUserTool::m\_strInitialDirectory](../Topic/CUserTool::m_strInitialDirectory.md)|La directory iniziale per lo strumento utente.|  
|[CUserTool::m\_strLabel](../Topic/CUserTool::m_strLabel.md)|Il nome dello strumento che visualizza la voce di menu per lo strumento.|  
  
## Note  
 Per ulteriori informazioni su come abilitare gli strumenti dell'utente nell'applicazione, vedere [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come creare uno strumento da un oggetto `CUserToolsManager`, imposta la variabile membro `m_strLabel` e impostare l'applicazione che lo strumento utente esegue.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#35](../../mfc/codesnippet/CPP/cusertool-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CUserTool](../../mfc/reference/cusertool-class.md)  
  
## Requisiti  
 **intestazione:** afxusertool.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)   
 [CUserToolsManager Class](../../mfc/reference/cusertoolsmanager-class.md)