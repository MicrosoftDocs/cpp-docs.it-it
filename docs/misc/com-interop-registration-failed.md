---
title: "COM Interop registration failed | Microsoft Docs"
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
  - "vs.tasklisterror.cannot_register_com2"
ms.assetid: d1b81f8e-66d7-4cfc-96ff-f1436a8f854a
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# COM Interop registration failed
Questo messaggio viene visualizzato in caso di errore durante la registrazione di un assembly che espone le funzionalità ai client COM.  Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
 Gli assembly sono in grado di esporre oggetti ai client COM.  Il sistema del progetto fornisce una proprietà per registrare le classi esposte per l'interoperabilità COM nonché per generare e registrare una libreria dei tipi in modo che queste classi siano utilizzabili sia dai linguaggi di script che da Visual Basic 6.  
  
 Per accedere alla proprietà **Registra per interoperabilità COM**, aprire la pagina delle proprietà **Compila** nella cartella **Proprietà di configurazione**.  
  
 Di seguito sono indicate alcune delle possibili cause dell'errore:  
  
-   Impossibilità di generare una libreria dei tipi per l'assembly.  È possibile che questa situazione si verifichi a causa dell'insufficienza di spazio disponibile su disco o per un problema di blocco dei file, se la libreria dei tipi è bloccata da Visual Studio o da un altro processo.  È inoltre possibile che le librerie dei tipi per gli assembly a cui si fa riferimento non siano registrate correttamente nel sistema.  
  
-   Impossibilità di registrare la libreria dei tipi generata.  Questa situazione potrebbe essere causata da problemi relativi alle autorizzazioni nel Registro di sistema.  
  
-   Impossibilità di registrare le classi nell'assembly.  Questa situazione potrebbe essere causata da problemi relativi alle autorizzazioni nel Registro di sistema.  
  
 **Per correggere l'errore**  
  
-   Creare spazio su disco disponibile.  
  
-   In caso di problemi di blocco dei file, riavviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Verificare di essere connessi come Administrator o come membro di un gruppo che dispone delle autorizzazioni di accesso al registro.  
  
## Vedere anche  
 [COM Interoperability in .NET Framework Applications](../Topic/COM%20Interoperability%20in%20.NET%20Framework%20Applications%20\(Visual%20Basic\).md)