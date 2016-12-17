---
title: "Errori e avvisi di Modifica e continuazione (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ENC2001"
  - "ENC1006"
  - "ENC2008"
  - "ENC1009"
  - "ENC1002"
  - "ENC2002"
  - "ENC1011"
  - "ENC1003"
  - "ENC1004"
  - "ENC1008"
  - "ENC1013"
  - "ENC2005"
  - "ENC1010"
  - "ENC2004"
  - "ENC1007"
  - "ENC1005"
  - "ENC2006"
  - "ENC1001"
  - "ENC2007"
  - "ENC2003"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "Modifica e continuazione [C++], errori e avvisi"
  - "errori [C++], Modifica e continuazione"
  - "errori [debugger], Modifica e continuazione"
ms.assetid: b5c5e25c-7ca4-4ca9-b91e-e8882de44dae
caps.latest.revision: 12
caps.handback.revision: 12
ms.author: "susanno"
manager: "douge"
---
# Errori e avvisi di Modifica e continuazione (C++)
La funzionalità Modifica e continuazione di [!INCLUDE[cpp_current_short](../misc/includes/cpp_current_short_md.md)] consente di arrestare l'esecuzione del programma in modalità di interruzione, apportare modifiche al codice in esecuzione e riprendere l'esecuzione del programma con le modifiche incorporate.  
  
 Le modifiche al codice dichiarativo che hanno effetto sulla struttura pubblica di una classe in genere non sono consentite. Alcune modifiche che potrebbe essere necessario apportare al corpo di un metodo o una proprietà oppure a dichiarazioni private all'interno di una classe non sono consentite.  Quando possibile, la funzionalità Modifica e continuazione contrassegna il codice che non è possibile modificare in grigio chiaro e visualizza un messaggio di errore.  Per ulteriori informazioni sulle modifiche non supportate in Modifica e continuazione per [!INCLUDE[cpp_current_short](../misc/includes/cpp_current_short_md.md)], vedere [Modifica e continuazione \(Visual C\+\+\)](../Topic/Edit%20and%20Continue%20\(Visual%20C++\).md).  
  
 Gli errori e gli avvisi correlati alla funzionalità Modifica e continuazione possono essere risolti in uno dei modi seguenti:  
  
|Risoluzione|Numeri dei messaggi di avviso e di errore|  
|-----------------|-----------------------------------------------|  
|Interrompere il debug, riapplicare le modifiche e riprendere il debug.|1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1010, 1013, 2003, 2005 Per un elenco dei messaggi di errore e di avviso in questa categoria, vedere [Messaggi di riavvio debug](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_RestartDebuggingMessages).|  
|Scegliere **Annulla** dal menu **Modifica**, quindi continuare il debug con il codice non modificato.<br /><br /> \-oppure\-<br /><br /> Interrompere il debug, riapplicare le modifiche e riprendere il debug.|1009, 1011 Per un elenco dei messaggi di errore e di avviso in questa categoria, vedere [Messaggi di annullamento o interruzione](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_UndoOrStopMessages).|  
|Continuare il debug.  Le modifiche verranno ignorate la prima volta che verrà raggiunto il punto nel codice, ma verranno applicate nelle chiamate successive.|2001, 2002, 2004.  Per un elenco dei messaggi di errore e di avviso in questa categoria, vedere [Applicare ai messaggi di chiamate successive](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_ApplyAtNextCallMessages).|  
|Eseguire un'altra azione, ad esempio reimpostare i punti di interruzione o ricompilare i moduli con la versione corrente di [!INCLUDE[cpp_current_short](../misc/includes/cpp_current_short_md.md)].|2007, 2008.  Per un elenco dei messaggi di errore e di avviso in questa categoria, vedere [Altri messaggi di azione richiesta](../misc/edit-and-continue-errors-and-warnings-cpp.md#BKMK_OtherActionRequiredMessages)|  
  
##  <a name="BKMK_RestartDebuggingMessages"></a> Messaggi di riavvio debug  
 I messaggi di errore seguenti devono essere risolti interrompendo la sessione di debug corrente, riapplicando le modifiche apportate e riavviando la sessione di debug.  
  
|||  
|-|-|  
|1001|Impossibile aggiornare il thunk per il simbolo: *symbol* \(loc: *location*, thunk: *address*\)|  
|1002|Il simbolo dei dati è cambiato: simbolo \(*symbol*\)|  
|1003|Impossibile eseguire il mapping del thunk per la nuova funzione: *function*|  
|1004|Impossibile aprire il PDB per la compressione del tipo: *pdb* \(pdb\)|  
|1005|Il simbolo è stato rinominato, rimosso o modificato: *symbol*|  
|1006|Una variabile globale o statica è stata aggiunta, rinominata, rimossa o ne è stato modificato il tipo di dati o l'inizializzazione: *symbol* \(riferimento da: *module*\)|  
|1007|Simbolo non definito: *symbol* \(riferimento da: *module*\)|  
|1008|Impossibile eseguire l'inizializzazione in fase di esecuzione richiesta dall'oggetto caricato durante la modifica: *module*|  
|1010|È stata aggiunta una variabile statica o globale: *variable referenced in file*|  
|1013|Memoria insufficiente per l'applicazione delle modifiche al codice.|  
|2003|Modificando la posizione del codice potrebbero verificarsi errori di gestione delle eccezioni o di distruzione delle variabili: *function*|  
|2005|La nuova origine contribuisce al codice.  Questo potrebbe influire sulle informazioni sul numero di riga del debugger: \(*function*\)|  
  
##  <a name="BKMK_UndoOrStopMessages"></a> Messaggi di annullamento o interruzione  
 I messaggi di errore seguenti possono essere risolti interrompendo la sessione di debug corrente, riapplicando le modifiche apportate e riavviando la sessione di debug.  
  
-   Scegliere Annulla dal menu Modifica.  È possibile riprendere il debug, ma le modifiche non verranno applicate.  
  
     \-oppure\-  
  
-   Interrompere il debug, riapplicare le modifiche e riavviare il debug.  
  
|||  
|-|-|  
|1009|È stata eliminata una variabile statica o globale: *variable referenced in file*|  
|1011|È stata modificata una variabile statica o globale: *variable referenced in file*|  
  
##  <a name="BKMK_ApplyAtNextCallMessages"></a> Applicare ai messaggi di chiamate successive  
 È possibile continuare la sessione di debug quando viene visualizzato uno dei messaggi di avviso seguenti.  Le modifiche non verranno applicate quando il codice viene chiamato la prima volta dopo la modifica. Le modifiche verranno invece applicate a tutte le chiamate successive al codice.  
  
|||  
|-|-|  
|2001|Impossibile trovare la variabile locale oppure il tipo di dati della variabile è stato modificato: simbolo \(*symbol*\)|  
|2002|Variabile eliminata oppure la nuova variabile locale richiede la costruzione o la distruzione: \(*symbol*\)|  
|2004|Impossibile gestire l'aggiunta o la rimozione di una variabile locale con un nome già definito più di una volta: simbolo \(*symbol*\)|  
  
##  <a name="BKMK_OtherActionRequiredMessages"></a> Altri messaggi di azione richiesta  
 L'azione richiesta per risolvere questi messaggi è riportata dopo il testo del messaggio.  
  
|||  
|-|-|  
|2007|Impossibile spostare alcuni punti di interruzione impostati nella finestra Disassembly.<br /><br /> Per risolvere questo problema, reimpostare i punti di interruzione interessati.|  
|2008|Impossibile caricare i simboli di debug per il file *file* nel modulo *module*.<br /><br /> Per risolvere questo problema, ricompilare il modulo specificato con la versione corrente di [!INCLUDE[vs_current_short](../misc/includes/vs_current_short_md.md)].|  
  
## Vedere anche  
 [Modifica e continuazione \(Visual C\+\+\)](../Topic/Edit%20and%20Continue%20\(Visual%20C++\).md)   
 [Modifica e continuazione](../Topic/Edit%20and%20Continue.md)