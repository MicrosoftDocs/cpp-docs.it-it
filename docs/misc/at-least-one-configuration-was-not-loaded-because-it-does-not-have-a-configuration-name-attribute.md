---
title: "At least one configuration was not loaded because it does not have a configuration name attribute | Microsoft Docs"
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
  - "vs.tasklisterror.projfile_nameless_config"
ms.assetid: 711f7253-308b-44e0-b8bc-ca5c16536a2c
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# At least one configuration was not loaded because it does not have a configuration name attribute
È necessario che ogni sezione `<Config>` di un file CSPROJ o VBPROJ contenga un attributo Name che definisca un nome univoco per la configurazione.  Questo messaggio diagnostico indica che l'attributo Name risulta mancante.  Se in una configurazione manca l'attributo Name, la configurazione non verrà caricata nel progetto.  
  
 L'errore è solitamente dovuto alla modifica manuale del file di progetto.  
  
 **Per correggere l'errore**  
  
-   Inserire un nome di configurazione immediatamente dopo la riga `<Config>`  nel file di progetto.  
  
    ```  
    Name = "someconfigname"  
    ```  
  
     Un nome tipico per la configurazione è `Debug` o `Release`.  
  
## Vedere anche  
 [File di progetto](../ide/project-files.md)   
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)