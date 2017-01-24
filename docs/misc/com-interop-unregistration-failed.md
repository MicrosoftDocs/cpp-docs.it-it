---
title: "COM Interop unregistration failed | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannot_unregister_com2"
ms.assetid: 1172b560-c4b0-4aff-9f74-cf9b29ff76d9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# COM Interop unregistration failed
Si è verificato un problema quando si è provato ad annullare la registrazione di una copia precedente dell'assembly.  
  
 Se viene impostata la proprietà **Registra per interoperabilità COM**, il sistema del progetto tenterà di annullare la registrazione di una copia precedente dell'oggetto COM prima di registrare la copia appena compilata.  Questa operazione viene eseguita al fine di mantenere aggiornato il Registro di sistema.  
  
 Per accedere alla proprietà **Registra per interoperabilità COM**, aprire la pagina delle proprietà **Compila** nella cartella Proprietà di configurazione.  
  
 Di seguito sono indicate alcune delle possibili cause dell'errore:  
  
-   Impossibilità di annullare la registrazione della precedente libreria dei tipi per l'assembly.  Questa situazione potrebbe essere causata da problemi relativi alle autorizzazioni nel Registro di sistema.  
  
-   Impossibilità di annullare la registrazione dell'assembly precedente.  Anche questa situazione potrebbe essere causata da problemi relativi alle autorizzazioni nel Registro di sistema.  
  
 In caso di errore nel processo di annullamento della registrazione, è possibile che si verifichino problemi nel GUID per gli oggetti CoCreatable e nei GUID per qualsiasi libreria dei tipi.  Tuttavia il processo complessivo di compilazione verrà comunque eseguito correttamente.  
  
## Vedere anche  
 [COM Interoperability in .NET Framework Applications](../Topic/COM%20Interoperability%20in%20.NET%20Framework%20Applications%20\(Visual%20Basic\).md)