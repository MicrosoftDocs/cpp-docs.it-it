---
title: "CCommandLineInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCommandLineInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "application flags [C++]"
  - "argv argument"
  - "CCommandLineInfo class"
  - "riga di comando, analisi"
  - "analisi, argomenti della riga di comando"
  - "avvio (codice), parsing command-line arguments"
ms.assetid: 3e313ddb-0a82-4991-87ac-a27feff4668c
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CCommandLineInfo Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per analizzare nella riga di comando all'avvio dell'applicazione.  
  
## Sintassi  
  
```  
class CCommandLineInfo : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCommandLineInfo::CCommandLineInfo](../Topic/CCommandLineInfo::CCommandLineInfo.md)|Costruisce un oggetto predefinito `CCommandLineInfo`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCommandLineInfo::ParseParam](../Topic/CCommandLineInfo::ParseParam.md)|Eseguire l'override di questo callback per analizzare i singoli parametri.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCommandLineInfo::m\_bRunAutomated](../Topic/CCommandLineInfo::m_bRunAutomated.md)|Indica che l'opzione **\/Automation** della riga di comando è stata trovata.|  
|[CCommandLineInfo::m\_bRunEmbedded](../Topic/CCommandLineInfo::m_bRunEmbedded.md)|Indica che l'opzione **\/Embedding** della riga di comando è stata trovata.|  
|[CCommandLineInfo::m\_bShowSplash](../Topic/CCommandLineInfo::m_bShowSplash.md)|Indica se una schermata iniziale viene visualizzata.|  
|[CCommandLineInfo::m\_nShellCommand](../Topic/CCommandLineInfo::m_nShellCommand.md)|Indica il comando della shell essere elaborati.|  
|[CCommandLineInfo::m\_strDriverName](../Topic/CCommandLineInfo::m_strDriverName.md)|Indica il nome del driver se il comando della shell è stampa su; in caso contrario vuoto.|  
|[CCommandLineInfo::m\_strFileName](../Topic/CCommandLineInfo::m_strFileName.md)|Indica il nome file da aprire o stampare; vuota se il comando della shell è nuovo o DDE.|  
|[CCommandLineInfo::m\_strPortName](../Topic/CCommandLineInfo::m_strPortName.md)|Indica il nome di porta se il comando della shell è stampa su; in caso contrario vuoto.|  
|[CCommandLineInfo::m\_strPrinterName](../Topic/CCommandLineInfo::m_strPrinterName.md)|Indica il nome della stampante se il comando della shell è stampa su; in caso contrario vuoto.|  
|[CCommandLineInfo::m\_strRestartIdentifier](../Topic/CCommandLineInfo::m_strRestartIdentifier.md)|Indica identificatore univoco di riavvio per Gestione riavvio se Gestione riavvio riavviasse l'applicazione.|  
  
## Note  
 Un'applicazione MFC in genere viene creata un'istanza locale della classe nella funzione [InitInstance](../Topic/CWinApp::InitInstance.md) del relativo oggetto applicazione.  Questo oggetto viene quindi passato a [CWinApp::ParseCommandLine](../Topic/CWinApp::ParseCommandLine.md), che chiama ripetutamente [ParseParam](../Topic/CCommandLineInfo::ParseParam.md) per riempire l'oggetto `CCommandLineInfo`.  L'oggetto `CCommandLineInfo` viene quindi passato a [CWinApp::ProcessShellCommand](../Topic/CWinApp::ProcessShellCommand.md) per gestire gli argomenti della riga di comando e i flag.  
  
 È possibile utilizzare questo oggetto per incapsulare le seguenti opzioni della riga di comando e parametri:  
  
|Argomento della riga di comando|Comando eseguito|  
|-------------------------------------|----------------------|  
|*applicazione*|Nuovo file.|  
|Nome file*dell'applicazione*|File aperto.|  
|Nome file di**\/p** di*applicazione*|File di stampa sulla stampante predefinita.|  
|Porta del driver della stampante il nome del file di**\/pt***di applicazione*|File di stampa la stampante specificata.|  
|*applicazione* **\/dde**|Avviare su e attendere il comando di DDE.|  
|*applicazione* **\/Automation**|Avviare su come server di automazione OLE.|  
|*applicazione* **\/Embedding**|Modifica di inizio fino a un elemento OLE incorporato.|  
|*applicazione* **\/Register**<br /><br /> *applicazione* **\/Regserver**|All'applicazione di eseguire tutte le attività di registrazione.|  
|*applicazione* **\/Unregister**<br /><br /> *applicazione* **\/Unregserver**|All'applicazione di eseguire tutte le attività di annullare la registrazione.|  
  
 Derivare una nuova classe da `CCommandLineInfo` per gestire altri flag e valori del parametro.  Override [ParseParam](../Topic/CCommandLineInfo::ParseParam.md) per gestire i nuovi flag.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CCommandLineInfo`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWinApp::ParseCommandLine](../Topic/CWinApp::ParseCommandLine.md)   
 [CWinApp::ProcessShellCommand](../Topic/CWinApp::ProcessShellCommand.md)