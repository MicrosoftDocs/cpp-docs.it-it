---
title: "La soluzione &lt;name&gt; e i relativi progetti devono essere convertiti nei formati correnti. | Microsoft Docs"
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
  - "vs.querymigratesolution"
ms.assetid: 1ecb09ab-1283-4ba5-874c-f675905a3b7b
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# La soluzione &lt;name&gt; e i relativi progetti devono essere convertiti nei formati correnti.
È stata aperta una soluzione creata in una versione precedente di Visual Studio. I file della soluzione e dei progetti devono essere convertiti nei formati correnti per poter aprire e modificare una soluzione nella versione di Visual Studio installata nel computer. È possibile scegliere se convertire questa soluzione ora. Le conversioni di formato non possono essere annullate.  
  
> [!CAUTION]
>  Se la soluzione è archiviata nel controllo del codice sorgente e si desidera archiviare nuovamente la soluzione convertita, determinare prima di tutto se altre soluzioni ne condividono uno dei progetti. Non archiviare una soluzione che include progetti convertiti ancora in uso in altre soluzioni non convertite. Così facendo verrebbero interrotte le dipendenze all'interno di tali soluzioni, impedendone la corretta apertura o compilazione.  
  
 Si potrebbe voler eseguire copie di backup dei file della soluzione e dei progetti prima di convertirli.  
  
> [!NOTE]
>  Quando le soluzioni di Visual Studio vengono convertite, i file della soluzione precedente sono contrassegnati con l'estensione "old" e salvati nella directory della soluzione di primo livello. Quando vengono convertiti alcuni tipi di progetto, ad esempio progetti di Visual C\+\+, i file del progetto precedente sono contrassegnati con l'estensione "old" e salvati nella directory del progetto.  
  
 I progetti di sola lettura non vengono convertiti. Tali progetti possono essere convertiti solo da utenti che dispongono dell'autorizzazione per la modifica. Per poter usare un progetto in una soluzione convertita è necessario convertirne i file nei formati correnti. Dopo aver convertito una soluzione o uno dei relativi progetti, non è più possibile modificare, compilare o eseguire la soluzione nelle versioni precedenti di Visual Studio.  
  
### Per rispondere a questo messaggio  
  
1.  Selezionare **Sì** o **No**.  
  
    -   **Sì**: il file della soluzione e i file dei relativi progetti modificabili vengono convertiti nei formati usati dalla versione di Visual Studio installata nel computer. Se la soluzione convertita è archiviata nel controllo del codice sorgente, viene estratta nell'unità locale e aperta per la modifica.  
  
    -   **No**: la soluzione e i relativi progetti non vengono convertiti, non vengono estratti dal controllo del codice sorgente né vengono aperti.  
  
 Tutti i membri di un team di sviluppo che lavorano con una soluzione devono avere la stessa versione di Visual Studio installata sui propri computer locali. Per garantire che le soluzioni e i progetti rimangano accessibili, comunicare regolarmente con il team.  
  
## Vedere anche  
 [Project Dependencies Dialog Box](http://msdn.microsoft.com/it-it/d66e48c3-3722-40dd-99b4-53d93cac128e)   
 [Compilazione di applicazioni in Visual Studio](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)