---
title: "L&#39;attivit&#224; richiede ulteriori diritti | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.UACDialog"
ms.assetid: a03d3509-5e6e-411a-9aec-0766d7ee3a0e
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# L&#39;attivit&#224; richiede ulteriori diritti
Questo errore viene visualizzato se un comando di Visual Studio viene richiamato da un utente che l'account dispone di autorizzazioni sufficienti per completare l'operazione.  
  
 Alcuni comandi di Visual Studio devono essere eseguiti con un account con diritti di accesso utente sufficienti per attivare il comando leggere o scrivere tutti i file e le chiavi del Registro di sistema necessari.  Per ottenere tali autorizzazioni, è necessario chiudere e riaprire Visual Studio con un account che dispone di accesso, come amministratore.  
  
 Per ulteriori informazioni sulle autorizzazioni quando si esegue Visual Studio, vedere [Autorizzazioni utente](../Topic/User%20Permissions%20and%20Visual%20Studio.md).  
  
### Per correggere l'errore  
  
1.  Nella finestra di dialogo fare clic su **Riavvia utilizzando un altro account**.  
  
     Verrà chiesto di salvare la soluzione attualmente caricata e chiude Visual Studio e viene riavviato, verrà chiesto di passare a un altro account.  
  
2.  Al prompt d’accesso utilizzare un account con diritti più elevati rispetto a quello precedente, ad esempio Amministratore.  
  
     All'avvio di Visual Studio, ricarica l'ultima soluzione e la riga di comando.  
  
> [!NOTE]
>  L'accesso con un account con diritti più elevati non garantisce che il comando di Visual Studio computer.  Non essere possibile eseguire alcuni comandi anche se si utilizza un account amministratore.