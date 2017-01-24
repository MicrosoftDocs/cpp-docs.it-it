---
title: "Il progetto &lt;nome&gt; deve essere convertito nel formato di progetto corrente. | Microsoft Docs"
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
  - "VC.Project.Conversion7"
  - "vs.UpgradeWarningDlg"
ms.assetid: e27d58e5-c270-468b-bb98-3163d40900bc
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Il progetto &lt;nome&gt; deve essere convertito nel formato di progetto corrente.
È stato aperto un progetto creato in una versione precedente di Visual Studio. Per poter aprire e modificare un progetto nella versione di Visual Studio installata nel computer, i file del progetto devono essere convertiti nei formati correnti. È possibile scegliere se convertire questo progetto ora. Le conversioni di formato non possono essere annullate.  
  
> [!CAUTION]
>  Se il progetto viene archiviato sotto il controllo del codice sorgente e si desidera archiviare nuovamente il progetto convertito, determinare innanzitutto se altre soluzioni lo condividono. Non archiviare un progetto appena convertito che è ancora in uso in altre soluzioni non convertite. Così facendo verrebbero interrotte le dipendenze all'interno di tali soluzioni, impedendone la corretta apertura o compilazione.  
  
 È possibile creare copie di backup dei file del progetto prima di convertirli.  
  
> [!NOTE]
>  Quando si convertono determinati tipi di progetto, ad esempio progetti di Visual C\+\+, i file del progetto precedente vengono contrassegnati con l'estensione ".old" e salvati nella directory del progetto.  
  
 I progetti di sola lettura non vengono convertiti. Tali progetti possono essere convertiti solo da utenti che dispongono dell'autorizzazione per la modifica. Per poter usare un progetto in una soluzione convertita è necessario convertirne i file nei formati correnti. Dopo aver convertito un progetto non è più possibile modificare, compilare o eseguire una soluzione che include il progetto nelle versioni precedenti di Visual Studio.  
  
### Per rispondere a questo messaggio  
  
1.  Selezionare **Sì** o **No**.  
  
    -   **Sì** \- Se il progetto è modificabile, viene convertito nel formato relativo alla versione di Visual Studio installata nel computer. Se un progetto convertito è archiviato sotto il controllo del codice sorgente, viene estratto nell'unità locale e aperto per la modifica.  
  
    -   **No** \- Il progetto non viene convertito, non viene estratto dal controllo del codice sorgente e non viene aperto.  
  
 Tutti i membri di un team di sviluppo che lavorano a un progetto devono avere la stessa versione di Visual Studio installata sul proprio computer locale. Per garantire che il progetto rimanga accessibile, è importante comunicare regolarmente con il team.  
  
## Vedere anche  
 [Project Dependencies Dialog Box](http://msdn.microsoft.com/it-it/d66e48c3-3722-40dd-99b4-53d93cac128e)   
 [Compilazione di applicazioni in Visual Studio](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)