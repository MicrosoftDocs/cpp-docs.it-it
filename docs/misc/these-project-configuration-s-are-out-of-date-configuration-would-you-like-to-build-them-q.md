---
title: "Le seguenti configurazioni di progetti non sono aggiornate: &lt;configurazione&gt;. Compilarli? | Microsoft Docs"
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
  - "VS.Message.BuildOutOfDateProjects"
ms.assetid: d0711f3b-3a2e-4247-afad-9e6468f9df96
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Le seguenti configurazioni di progetti non sono aggiornate: &lt;configurazione&gt;. Compilarli?
Si sta modificando un progetto di Visual Studio o è stato selezionato un progetto in Esplora soluzioni e si è scelto Avvia \(F5\) o Avvia senza eseguire debug \(CTRL\+ F5\). Uno o più progetti consentono il debug senza ricompilazione, anche se il progetto è stato modificato rispetto all'ultima compilazione.  
  
 L'ambiente di sviluppo integrato \(IDE\) chiede se ricompilare o meno i progetti che consentono il debug senza ricompilazione.  
  
### Per rispondere a questo messaggio  
  
-   Selezionare uno dei pulsanti nella parte inferiore del messaggio. È possibile scegliere:  
  
|Termine|Definizione|  
|-------------|-----------------|  
|**Sì**|I progetti non aggiornati verranno ricompilati. Vale a dire che:<br /><br /> -   Se il progetto non è ancora stato compilato, verrà compilato.<br />-   Se il progetto ha subito modifiche rispetto all'ultima compilazione, verrà ricompilato.<br />-   Viene eseguito il debug del progetto oppure questo viene avviato senza debug.|  
|**No**|Vengono ricompilati solo i progetti non aggiornati che richiedono la ricompilazione prima del debug. Vale a dire che:<br /><br /> -   Se il progetto consente il debug senza ricompilazione \(ad esempio, un progetto di applicazione MFC in Visual C\+\+\), il progetto non viene ricompilato.<br />-   Se il progetto deve essere ricompilato prima del debug \(ad esempio, un progetto Visual Basic\), il progetto viene ricompilato.<br />-   Viene eseguito il debug del progetto oppure questo viene avviato senza debug.|  
|**Annulla**|L'operazione corrente viene arrestata. Nessun progetto viene compilato, avviato o sottoposto a debug.|  
  
## Vedere anche  
 [Finestra di dialogo Gestione configurazione](http://msdn.microsoft.com/it-it/fa182dca-282e-4ae5-bf37-e155344ca18b)   
 [Procedura: creare configurazioni di compilazione di soluzioni e progetti](../Topic/How%20to:%20Create%20Solution%20and%20Project%20Build%20Configurations.md)   
 [Procedura: creare e rimuovere dipendenze di progetto](../Topic/How%20to:%20Create%20and%20Remove%20Project%20Dependencies.md)   
 [Project Dependencies Dialog Box](http://msdn.microsoft.com/it-it/d66e48c3-3722-40dd-99b4-53d93cac128e)   
 [Project Dependencies, Common Properties, Solution Property Pages Dialog Box](http://msdn.microsoft.com/it-it/2ba638fc-719c-4a79-b166-3455a4374e31)   
 [Compilazione di applicazioni in Visual Studio](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)   
 [Informazioni sulle configurazioni della build](../Topic/Understanding%20Build%20Configurations.md)   
 [NIB: Progetti come contenitori](http://msdn.microsoft.com/it-it/87d40f63-f487-4767-8963-64beec27ba1b)   
 [NIB: Gestione degli elementi nei progetti](http://msdn.microsoft.com/it-it/762e606b-7f44-4b66-97a1-e30a703654a0)