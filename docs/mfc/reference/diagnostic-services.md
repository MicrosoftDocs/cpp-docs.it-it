---
title: "Servizi diagnostici | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "diagnosi, funzioni e variabili di diagnostica"
  - "diagnosi, servizi di diagnostica"
  - "diagnosi, elenco MFC generale"
  - "funzioni e variabili di diagnostica"
  - "macro diagnostiche"
  - "macro diagnostiche, elenco MFC generale"
  - "servizi di diagnostica"
  - "diagnostica, funzioni e variabili di diagnostica"
  - "diagnostica, servizi di diagnostica"
  - "diagnostica, elenco MFC generale"
  - "funzioni e variabili di diagnostica generale"
  - "macro diagnostiche generali in MFC"
  - "MFC, servizi di diagnostica"
  - "funzioni di diagnostica oggetti in MFC"
  - "servizi, diagnostici"
ms.assetid: 8d78454f-9fae-49c2-88c9-d3fabd5393e8
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Servizi diagnostici
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria Microsoft Foundation Class fornisce numerosi servizi di diagnostica che semplificano il debug dei programmi. I servizi di diagnostica includono macro e funzioni globali che consentono di tenere traccia delle allocazioni della memoria del programma, scaricare il contenuto degli oggetti in fase di esecuzione e stampare i messaggi di debug in fase di esecuzione. Le macro e funzioni globali per servizi di diagnostica sono raggruppate nelle categorie seguenti:  
  
-   Macro diagnostiche generali  
  
-   Funzioni e variabili di diagnostica generale  
  
-   Funzioni di diagnostica oggetti  
  
 Queste macro e funzioni sono disponibili per tutte le classi derivate da `CObject` nelle versioni di debug e rilascio di MFC. Tuttavia, tutte tranne `DEBUG_NEW` e **VERIFY** non eseguono alcuna operazione nella versione di rilascio.  
  
 Nella libreria di debug, tutti i blocchi di memoria allocata sono racchiusi tra parentesi quadre con una serie di "byte guard". Se i byte vengono disturbati da un'operazione di scrittura non corretta della memoria, le routine di diagnostica possono segnalare un problema. Se si include la riga:  
  
 [!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/CPP/diagnostic-services_1.cpp)]  
  
 nel file di implementazione, tutte le chiamate a **new** archivieranno il numero di riga e il nome file laddove ha avuto luogo l'allocazione di memoria. La funzione [CMemoryState:: DumpAllObjectsSince](../Topic/CMemoryState::DumpAllObjectsSince.md) visualizzerà queste informazioni aggiuntive, che consentono di identificare le perdite di memoria. Per altre informazioni sull'output di diagnostica vedere anche la classe [CDumpContext](../../mfc/reference/cdumpcontext-class.md).  
  
 Inoltre, la libreria di runtime C supporta anche un set di funzioni di diagnostica che è possibile usare per eseguire il debug delle applicazioni. Per altre informazioni, vedere [Routine di debug](../../c-runtime-library/debug-routines.md) in Riferimenti alla libreria di runtime.  
  
### Macro diagnostiche generali in MFC  
  
|||  
|-|-|  
|[ASSERT](../Topic/ASSERT%20\(MFC\).md)|Stampa un messaggio e quindi arresta il programma se l'espressione specificata restituisce **FALSE** nella versione di debug della libreria.|  
|[ASSERT\_KINDOF](../Topic/ASSERT_KINDOF.md)|Verifica se un oggetto è un oggetto della classe specificata o di una classe derivata dalla classe specificata.|  
|[ASSERT\_VALID](../Topic/ASSERT_VALID.md)|Verifica la validità interna di un oggetto chiamando la relativa funzione membro `AssertValid`; in genere sottoposta a override da `CObject`.|  
|[DEBUG\_NEW](../Topic/DEBUG_NEW.md)|Fornisce un nome file e un numero di riga per tutte le allocazioni di oggetti in modalità di debug per trovare perdite di memoria.|  
|[DEBUG\_ONLY](../Topic/DEBUG_ONLY.md)|Simile ad **ASSERT** ma non verifica il valore dell'espressione; utile per il codice che deve essere eseguito solo in modalità di debug.|  
|[TRACE](../Topic/TRACE.md)|Fornisce una funzionalità simile a `printf`\-nella versione di debug della libreria.|  
|[VERIFY](../Topic/VERIFY.md)|Simile ad **ASSERT** ma valuta l'espressione nella versione di rilascio della libreria oltre che nella versione di debug.|  
  
### Funzioni e variabili di diagnostica generale in MFC  
  
|||  
|-|-|  
|[afxDump](../Topic/afxDump%20\(CDumpContext%20in%20MFC\).md)|Variabile globale che invia informazioni [CDumpContext](../../mfc/reference/cdumpcontext-class.md) alla finestra di output o al terminale di debug.|  
|[afxMemDF](../Topic/afxMemDF.md)|Variabile globale che controlla il comportamento dell'allocatore di memoria di debug.|  
|[AfxCheckError](../Topic/AfxCheckError.md)|Variabile globale usata per verificare l'oggetto **SCODE** passato per verificare se è un errore; in caso affermativo, genera l'errore appropriato.|  
|[AfxCheckMemory](../Topic/AfxCheckMemory.md)|Controlla l'integrità di tutta la memoria attualmente allocata.|  
|[AfxDump](../Topic/AfxDump%20\(MFC\).md)|Se viene chiamato quando nel debugger, esegue il dump dello stato di un oggetto durante il debug.|  
|[AfxDumpStack](../Topic/AfxDumpStack.md)|Genera un'immagine dello stack corrente. Questa funzione è sempre collegata staticamente.|  
|[AfxEnableMemoryLeakDump](../Topic/AfxEnableMemoryLeakDump.md)|Consente il dump della perdita di memoria.|  
|[AfxEnableMemoryTracking](../Topic/AfxEnableMemoryTracking.md)|Attiva e disattiva rilevamento della memoria.|  
|[AfxIsMemoryBlock](../Topic/AfxIsMemoryBlock.md)|Verifica che un blocco di memoria sia stato allocato in modo corretto.|  
|[AfxIsValidAddress](../Topic/AfxIsValidAddress.md)|Verifica che un intervallo di indirizzi di memoria si trovi all'interno dei limiti del programma.|  
|[AfxIsValidString](../Topic/AfxIsValidString.md)|Determina se un puntatore a una stringa è valido.|  
|[AfxSetAllocHook](../Topic/AfxSetAllocHook.md)|Consente la chiamata di una funzione in ogni allocazione di memoria.|  
  
### Funzioni di diagnostica oggetti in MFC  
  
|||  
|-|-|  
|[AfxDoForAllClasses](../Topic/AfxDoForAllClasses.md)|Esegue una funzione specificata su tutte le classi derivate da `CObject` che supportano il controllo del tipo in fase di esecuzione.|  
|[AfxDoForAllObjects](../Topic/AfxDoForAllObjects.md)|Esegue una funzione specificata su tutti gli oggetti derivati da `CObject` allocati con **new**.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)