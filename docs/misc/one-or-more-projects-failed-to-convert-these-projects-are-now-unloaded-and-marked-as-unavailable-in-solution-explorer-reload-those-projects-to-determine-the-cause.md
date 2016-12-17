---
title: "Impossibile convertire uno o pi&#249; progetti. I progetti sono stati scaricati e contrassegnati come non disponibili in Esplora soluzioni. Per determinare la causa, ricaricare i progetti. | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.projectmigrationsfailed"
ms.assetid: c2fd3bbd-15f0-4b30-97f5-59abeae02141
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile convertire uno o pi&#249; progetti. I progetti sono stati scaricati e contrassegnati come non disponibili in Esplora soluzioni. Per determinare la causa, ricaricare i progetti.
Si è tentato di aprire una soluzione contenente uno o più progetti creati in una versione precedente di Visual Studio. Alcuni progetti non sono stati convertiti e saranno contrassegnati come \(non disponibile\) in Esplora soluzioni. Questi progetti devono essere convertiti nei formati correnti per poter aprire e modificare la soluzione e per poter usare i progetti riparati nella versione di Visual Studio installata nel computer.  
  
### Per rispondere a questo messaggio  
  
1.  Selezionare **Sì** per chiudere la finestra di dialogo.  
  
     I progetti che non sono stati convertiti sono contrassegnati come **\(non disponibile\)** in Esplora soluzioni.  
  
2.  Ricaricare i progetti che non sono stati convertiti.  
  
    1.  In Esplora soluzioni selezionare ciascun progetto della soluzione attiva contrassegnato come **\(non disponibile\)**.  
  
    2.  Nel menu **Proprietà** selezionare **Ricarica progetto**.  
  
3.  Esaminare con attenzione eventuali messaggi di errore contenenti informazioni sui problemi relativi ai progetti. I problemi possibili includono:  
  
    1.  Il progetto è di sola lettura. I progetti di sola lettura non vengono convertiti. Tali progetti possono essere convertiti solo da utenti che dispongono dell'autorizzazione per la modifica.  
  
    2.  Il progetto è già estratto in modo esclusivo per un altro utente. Tale utente deve archiviare a sua volta il progetto prima che sia possibile estrarlo di nuovo.  
  
    3.  Non è stato possibile estrarre il progetto da un server di rete. Verificare le condizioni della rete e riprovare.  
  
    4.  Il progetto è danneggiato e deve essere ricompilato.  
  
4.  Risolvere i problemi indicati mentre si tenta di ricaricare i progetti contrassegnati come **\(non disponibile\)**.  
  
5.  Riaprire e convertire questi progetti. È possibile creare copie di backup dei file del progetto prima di convertirli.  
  
    > [!NOTE]
    >  Quando si convertono determinati tipi di progetto, ad esempio progetti di Visual C\+\+, i file del progetto precedente vengono contrassegnati con l'estensione .old e salvati nella directory del progetto.  
  
 Tutti i membri di un team di sviluppo che lavorano a un progetto devono avere la stessa versione di Visual Studio installata sul proprio computer locale. Per garantire che il progetto rimanga accessibile, è importante comunicare regolarmente con il team.  
  
> [!CAUTION]
>  Se i progetti della soluzione sono archiviati sotto il controllo del codice sorgente e si desidera archiviare nuovamente i progetti convertiti, determinare innanzitutto se altre soluzioni condividono qualcuno di questi progetti. Non archiviare progetti convertiti ancora in uso in soluzioni non convertite. Così facendo verrebbero interrotte le dipendenze all'interno di tali soluzioni, impedendone la corretta apertura o compilazione.  
  
## Vedere anche  
 [NIB: Procedura: Scaricare e ricaricare i progetti](http://msdn.microsoft.com/it-it/abc0155b-8fcb-4ffc-95b6-698518a7100b)   
 [Project Dependencies Dialog Box](http://msdn.microsoft.com/it-it/d66e48c3-3722-40dd-99b4-53d93cac128e)   
 [Compilazione di applicazioni in Visual Studio](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)