---
title: "MSBuild Error MSB3190 | Microsoft Docs"
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
  - "GenerateManifest.InvalidRequestedExecutionLevel"
helpviewer_keywords: 
  - "MSB3190"
ms.assetid: 45b45688-9345-45db-adc8-3e200f1c17eb
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3190
**MSB3190: il livello di esecuzione richiesto non è supportato da ClickOnce '\<livello\>'.**  
  
 Questo errore viene generato su computer che eseguono Windows Vista quando il manifesto di controllo dell'account utente \(UAC\) specifica che un'applicazione ClickOnce venga eseguita con credenziali amministrative.  ClickOnce e COM con registrazione gratuita richiedono un manifesto esterno che specifichi che l'applicazione venga eseguita come utente corrente.  
  
 ClickOnce non accetta i livelli di esecuzione `requireAdministrator` o `highestAvailable`.  Se si specifica uno di questi livelli, verrà visualizzato questo errore.  ClickOnce richiede `asInvoker`, ma non accetta alcun nodo `<requestedExecutionLevel>` che specifica la virtualizzazione di file\/Registro di sistema, per indicare che non verrà generato alcun manifesto \(per compatibilità con versioni precedenti\).  
  
> [!NOTE]
>  Il computer potrebbe mostrare nomi o percorsi diversi per alcuni elementi dell'interfaccia utente di Visual Studio nelle istruzioni seguenti.  Questi elementi sono determinati dall'edizione di Visual Studio in uso e dalle impostazioni utilizzate.  Per ulteriori informazioni, vedere [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/it-it/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### Per correggere l'errore  
  
-   Generare un manifesto di controllodell'account utente esterno \(app.manifest\) che specifichi che l'applicazione venga eseguita come utente corrente \(`asInvoker`\).  
  
     Nei progetti Visual C\#, andare alla pagina **Applicazione** di Progettazione progetti e fare clic su **Properties\\app.manifest** nell'elenco **Manifesto**.  Per ulteriori informazioni, vedere [Applicazione \(pagina\), Creazione progetti \(C\#\)](../Topic/Application%20Page,%20Project%20Designer%20\(C%23\).md).  
  
     Nei progetti di Visual Basic, andare alla pagina **Applicazione** di Progettazione progetti e fare clic sul pulsante **Visualizza impostazioni di controllo dell'account utente**.  Il file app.manifest viene aperto per consentirne la modifica.  Modificare il tag seguente nel manifesto nel modo indicato di seguito:  
  
    ```  
    <requestedExecutionLevel level="asInvoker" />  
    ```  
  
     Per ulteriori informazioni, vedere [Pagina Applicazione, Creazione progetti \(Visual Basic\)](../Topic/Application%20Page,%20Project%20Designer%20\(Visual%20Basic\).md).  
  
-   Per ulteriori informazioni su come generare un manifesto di controllo dell'account utente e specificare il livello di esecuzione, vedere [ClickOnce Deployment on Windows Vista](../Topic/ClickOnce%20Deployment%20on%20Windows%20Vista.md).  
  
## Vedere anche  
 [Applicazione \(pagina\), Creazione progetti \(C\#\)](../Topic/Application%20Page,%20Project%20Designer%20\(C%23\).md)   
 [Pagina Applicazione, Creazione progetti \(Visual Basic\)](../Topic/Application%20Page,%20Project%20Designer%20\(Visual%20Basic\).md)   
 [ClickOnce Deployment on Windows Vista](../Topic/ClickOnce%20Deployment%20on%20Windows%20Vista.md)