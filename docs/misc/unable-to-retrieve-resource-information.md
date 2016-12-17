---
title: "Unable to retrieve resource information | Microsoft Docs"
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
  - "vs.tasklisterror.resx_scan_failed"
ms.assetid: e4389ff0-eb64-4c31-b32f-5216c73fadfb
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Unable to retrieve resource information
La ricerca di file RESX nella gerarchia ha dato esito negativo.  
  
 Come parte dell'istruzione di compilazione `Preparing resources`, visibile nella finestra di **Output**, nella gerarchia del progetto vengono cercati tutti i file con estensione RESX.  In tal modo, verrà restituito un elenco di file XML con estensione RESX che devono essere convertiti in file binari con estensione RESOURCES prima di essere inclusi nell'output del progetto come risorse.  
  
 **Per correggere l'errore**  
  
-   Riavviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Se il problema non viene risolto, contattare il Servizio supporto tecnico Microsoft.  
  
     Questo errore comporterà la mancata riuscita del processo di compilazione.  
  
## Vedere anche  
 [File Types and File Extensions in Visual Basic and Visual C\#](http://msdn.microsoft.com/it-it/f793852c-da06-4d52-a826-65f635844772)