---
title: "CDataRecoveryHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDataRecoveryHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataRecoveryHandler class"
ms.assetid: 7794802c-e583-4eba-90b9-2fed1a161f9c
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# CDataRecoveryHandler Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CDataRecoveryHandler` autosaves documenti e li ripristinato se chiusura di un'applicazione in modo imprevisto.  
  
## Sintassi  
  
```  
class CDataRecoveryHandler : public CObject  
```  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[CDataRecoveryHandler::CDataRecoveryHandler](../Topic/CDataRecoveryHandler::CDataRecoveryHandler.md)|Costruisce un oggetto `CDataRecoveryHandler`.|  
  
### Metodi  
  
|||  
|-|-|  
|[CDataRecoveryHandler::AutosaveAllDocumentInfo](../Topic/CDataRecoveryHandler::AutosaveAllDocumentInfo.md)|Autosaves ogni file registrato con la classe `CDataRecoveryHandler`.|  
|[CDataRecoveryHandler::AutosaveDocumentInfo](../Topic/CDataRecoveryHandler::AutosaveDocumentInfo.md)|Autosaves il documento specificato.|  
|[CDataRecoveryHandler::CreateDocumentInfo](../Topic/CDataRecoveryHandler::CreateDocumentInfo.md)|Aggiunge un documento all'elenco documenti aperti.|  
|[CDataRecoveryHandler::DeleteAllAutosavedFiles](../Topic/CDataRecoveryHandler::DeleteAllAutosavedFiles.md)|Elimina tutti i file autosaved corrente.|  
|[CDataRecoveryHandler::DeleteAutosavedFile](../Topic/CDataRecoveryHandler::DeleteAutosavedFile.md)|Eliminare il file autosaved specificato.|  
|[CDataRecoveryHandler::GenerateAutosaveFileName](../Topic/CDataRecoveryHandler::GenerateAutosaveFileName.md)|Genera un nome per un file di autosave associato al nome file specificato di documento.|  
|[CDataRecoveryHandler::GetAutosaveInterval](../Topic/CDataRecoveryHandler::GetAutosaveInterval.md)|Restituisce l'intervallo tra autosave i test.|  
|[CDataRecoveryHandler::GetAutosavePath](../Topic/CDataRecoveryHandler::GetAutosavePath.md)|Restituisce il percorso dei file autosaved.|  
|[CDataRecoveryHandler::GetDocumentListName](../Topic/CDataRecoveryHandler::GetDocumentListName.md)|Recupera il nome del documento da un oggetto `CDocument`.|  
|[CDataRecoveryHandler::GetNormalDocumentTitle](../Topic/CDataRecoveryHandler::GetNormalDocumentTitle.md)|Recupera il titolo normale del documento specificato.|  
|[CDataRecoveryHandler::GetRecoveredDocumentTitle](../Topic/CDataRecoveryHandler::GetRecoveredDocumentTitle.md)|Crea e restituisce il titolo del documento recuperato.|  
|[CDataRecoveryHandler::GetRestartIdentifier](../Topic/CDataRecoveryHandler::GetRestartIdentifier.md)|Recupera l'identificatore univoco di riavvio dell'applicazione.|  
|[CDataRecoveryHandler::GetSaveDocumentInfoOnIdle](../Topic/CDataRecoveryHandler::GetSaveDocumentInfoOnIdle.md)|Indica se `CDataRecoveryHandler` esegue un autosave nel ciclo inattivo corrente.|  
|[CDataRecoveryHandler::GetShutdownByRestartManager](../Topic/CDataRecoveryHandler::GetShutdownByRestartManager.md)|Indica se Gestione riavvio ha provocato l'applicazione uscire.|  
|[CDataRecoveryHandler::Initialize](../Topic/CDataRecoveryHandler::Initialize.md)|Inizializza `CDataRecoveryHandler`.|  
|[CDataRecoveryHandler::QueryRestoreAutosavedDocuments](../Topic/CDataRecoveryHandler::QueryRestoreAutosavedDocuments.md)|Visualizza una finestra di dialogo all'utente per ogni documento che `CDataRecoveryHandler` autosaved.  La finestra di dialogo determina se l'utente desidera ripristinare il documento autosaved.|  
|[CDataRecoveryHandler::ReadOpenDocumentList](../Topic/CDataRecoveryHandler::ReadOpenDocumentList.md)|Carica l'elenco di documento aperto dal Registro di sistema.|  
|[CDataRecoveryHandler::RemoveDocumentInfo](../Topic/CDataRecoveryHandler::RemoveDocumentInfo.md)|Rimuove il documento fornito dall'elenco di documento aperto.|  
|[CDataRecoveryHandler::ReopenPreviousDocuments](../Topic/CDataRecoveryHandler::ReopenPreviousDocuments.md)|Apre nei documenti aperti.|  
|[CDataRecoveryHandler::RestoreAutosavedDocuments](../Topic/CDataRecoveryHandler::RestoreAutosavedDocuments.md)|Ripristina i documenti autosaved in base all'input.|  
|[CDataRecoveryHandler::SaveOpenDocumentList](../Topic/CDataRecoveryHandler::SaveOpenDocumentList.md)|Salvare l'elenco corrente dei documenti aperti in Windows Registro di sistema.|  
|[CDataRecoveryHandler::SetAutosaveInterval](../Topic/CDataRecoveryHandler::SetAutosaveInterval.md)|Imposta il tempo tra autosave cicli in millisecondi.|  
|[CDataRecoveryHandler::SetAutosavePath](../Topic/CDataRecoveryHandler::SetAutosavePath.md)|Imposta la directory in cui i file autosaved archiviati.|  
|[CDataRecoveryHandler::SetRestartIdentifier](../Topic/CDataRecoveryHandler::SetRestartIdentifier.md)|Imposta l'identificatore univoco di riavvio per questa istanza `CDataRecoveryHandler`.|  
|[CDataRecoveryHandler::SetSaveDocumentInfoOnIdle](../Topic/CDataRecoveryHandler::SetSaveDocumentInfoOnIdle.md)|Imposta se `CDataRecoveryHandler` salva le informazioni del documento aperto a Windows Registro di sistema durante il ciclo inattivo corrente.|  
|[CDataRecoveryHandler::SetShutdownByRestartManager](../Topic/CDataRecoveryHandler::SetShutdownByRestartManager.md)|Imposta se si esce precedente dell'applicazione è stata causata da Gestione riavvio.|  
|[CDataRecoveryHandler::UpdateDocumentInfo](../Topic/CDataRecoveryHandler::UpdateDocumentInfo.md)|Aggiorna le informazioni per un documento perché l'utente ha salvato.|  
  
### Membri di dati  
  
|||  
|-|-|  
|m\_bRestoringPreviousOpenDocs|Indica se il gestore di ripristinare i dati riapre nei documenti aperti.|  
|m\_bSaveDocumentInfoOnIdle|Indica se il gestore di ripristinare i dati autosaves i documenti nel ciclo inattivo seguente.|  
|m\_bShutdownByRestartManager|Indica se Gestione riavvio profilata l'applicazione uscire.|  
|m\_dwRestartManagerSupportFlags|Flag che indica che il supporto di Gestione riavvio fornisce per l'applicazione.|  
|m\_lstAutosavesToDelete|Un elenco di file autosaved che non sono stati eliminati quando i documenti originali sono stati chiusi.  Al termine dell'applicazione, Gestione riavvio riprova eliminare i file.|  
|m\_mapDocNameToAutosaveName|Un mapping dei nomi del documento ai nomi file autosaved.|  
|m\_mapDocNameToDocumentPtr|Un mapping dei nomi del documento a puntatori [CDocument](../../mfc/reference/cdocument-class.md).|  
|m\_mapDocNameToRestoreBool|Un mapping dei nomi del documento a un parametro booleano che indica se ripristinare il documento autosaved.|  
|m\_mapDocumentPtrToDocName|Un mapping dei puntatori `CDocument` i nomi del documento.|  
|m\_mapDocumentPtrToDocTitle|Un mapping dei puntatori `CDocument` a titoli del documento.  Questi articoli utilizzati per salvare i file.|  
|m\_nAutosaveInterval|Il tempo in millisecondi tra autosaves.|  
|m\_nTimerID|l'identificatore per il timer di autosave.|  
|m\_strAutosavePath|La posizione in cui i documenti autosaved archiviati.|  
|più m\_strRestartIdentifier|La rappresentazione di stringa di un GUID per Gestione riavvio.|  
  
## Note  
 Gestione riavvio utilizza la classe `CDataRecoveryHandler` per tenere traccia di tutti i documenti aperti e per autosave secondo necessità.  Per abilitare autosave, utilizzare il metodo [CDataRecoveryHandler::SetSaveDocumentInfoOnIdle](../Topic/CDataRecoveryHandler::SetSaveDocumentInfoOnIdle.md).  Questo metodo esegue `CDataRecoveryHandler` per eseguire un autosave nel ciclo inattivo seguente.  Gestione riavvio chiama `SetSaveDocumentInfoOnIdle` quando `CDataRecoveryHandler` deve eseguire un autosave.  
  
 Tutti i metodi della classe `CDataRecoveryHandler` sono virtuali.  Eseguire l'override dei metodi di questa classe per creare un gestore personalizzato di ripristinare i dati.  A meno di creare il gestore o Gestione riavvio di ripristinare i dati, non creare un'istanza di un CDataRecoveryHandler.  [CWinApp Class](../../mfc/reference/cwinapp-class.md) crea un oggetto `CDataRecoveryHandler` come richiesto.  
  
 Prima di poter utilizzare un oggetto `CDataRecoveryHandler`, è necessario chiamare [CDataRecoveryHandler::Initialize](../Topic/CDataRecoveryHandler::Initialize.md).  
  
 Poiché la classe `CDataRecoveryHandler` è connessa strettamente di Gestione riavvio, `CDataRecoveryHandler` dipende dal parametro `m_dwRestartManagerSupportFlags`globale.  Questo parametro determina quali autorizzazioni Gestione riavvio consente e come interagisce con l'applicazione.  Per incorporare Gestione riavvio in un'applicazione esistente, è necessario assegnare a `m_dwRestartManagerSupportFlags` il valore appropriato nel costruttore dell'applicazione principale.  Per ulteriori informazioni su come utilizzare Gestione riavvio, vedere [Procedura: Aggiungere il supporto di Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md).  
  
## Requisiti  
 **intestazione:** afxdatarecovery.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Procedura: Aggiungere il supporto di Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md)