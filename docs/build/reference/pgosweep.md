---
title: "pgosweep | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pgosweep (programma)"
  - "ottimizzazioni PGO, pgosweep"
ms.assetid: f39dd3b7-1cd9-4c3b-8e8b-fb794744b757
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# pgosweep
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato nell'ottimizzazione PGO \(Profile\-Guided Optimization\) per scrivere tutti i dati del profilo da un programma in esecuzione nel file PGC.  
  
## Sintassi  
  
```  
pgosweep [options] image pgcfile  
```  
  
#### Parametri  
 `options`  
 Parametro opzionale che può essere lasciato vuoto.  I valori validi per `options` sono i seguenti:  
  
-   **\/?** o **\/help,** consentono di visualizzare il messaggio della guida.  
  
-   **\/noreset,** consente di mantenere il conteggio nelle strutture dei dati di runtime.  
  
 `image`  
 Percorso completo di un file EXE o DLL creato utilizzando l'opzione del compilatore \/LTCG:PGINSTRUMENT.  
  
 `pgcfile`  
 File PGC in cui il comando scrive i conteggi dei dati.  
  
## Note  
 Questo comando funziona sui programmi compilati con l'opzione del compilatore \/LTCG:PGINSTRUMENT.  Interrompe un programma in esecuzione e scrive i dati del profilo in un nuovo file PGC.  Per impostazione predefinita, il comando reimposta i conteggi dopo ogni operazione di scrittura.  Se si specifica l'opzione **\/noreset**, il comando registrerà i valori senza però reimpostarli nel programma in esecuzione.  Se i dati del profilo vengono recuperati successivamente, questa opzione produrrà dati duplicati.  
  
 `pgosweep` può anche essere utilizzato solo per recuperare le informazioni sul profilo per il runtime dell'applicazione.  È possibile, ad esempio, eseguire `pgosweep` subito dopo l'avvio dell'applicazione e ignorare il file.  In questo modo si eliminerebbero i dati del profilo associati ai costi di avviamento.  Sarà quindi possibile eseguire `pgosweep` prima di terminare l'applicazione.  I dati raccolti conterranno ora solo le informazioni sul profilo dal runtime.  
  
 Quando si assegna un nome a un file .pgc \(`pgcfile`\), è possibile utilizzare il formato standard, ovvero *appname\!n*.pgc.  Mediante questo formato, i dati verranno trovati durante l'utilizzo dell'opzione \/LTCG:PGO.  Se non si utilizza il formato standard, è necessario ricorrere a [pgomgr](../../build/reference/pgomgr.md) per unire i file PGC.  
  
## Esempio  
  
```  
pgosweep myapp.exe myapp!1.pgc  
```  
  
 In questo esempio `pgosweep` scrive le informazioni sul profilo corrente per myapp.exe in myapp\! 1.pgc.  
  
## Vedere anche  
 [Strumenti per l'ottimizzazione PGO \(Profile Guided Optimization, Ottimizzazione guidata da profilo\)](../../build/reference/tools-for-manual-profile-guided-optimization.md)