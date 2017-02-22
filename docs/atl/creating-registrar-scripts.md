---
title: "Creating Registrar Scripts | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, Registro di sistema"
  - "registrar scripts [ATL]"
  - "script, registry scripting"
  - "script, creazione"
  - "script, Registrar scripts"
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Creating Registrar Scripts
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno script di registrazione fornisce basato sui dati, anziché basato sull'API, accedere al Registro di sistema.  L'accesso ai dati è in genere più efficace poiché accetta solo una o due riga in uno script per aggiungere una chiave del Registro di sistema.  
  
 [La creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) genera automaticamente uno script di registrazione per il server COM.  È possibile trovare questo script nel file RGS associato all'oggetto.  
  
 Il modulo di gestione di script ATL Registrar elabora lo script di registrazione in fase di esecuzione.  ATL richiama automaticamente il modulo di gestione di script durante l'installazione server.  
  
 Questo articolo vengono trattati i seguenti argomenti correlati agli script di registrazione:  
  
-   [Sintassi di comprensione di \(BNF\) del form di Backus Nauer](../atl/understanding-backus-nauer-form-bnf-syntax.md)  
  
-   [Strutture ad albero di traccia di informazioni](../atl/understanding-parse-trees.md)  
  
-   [Esempi di scripting del Registro Di Sistema](../atl/registry-scripting-examples.md)  
  
-   [Utilizzo di parametri sostituibili \(il preprocessore di registrazione\)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)  
  
-   [Script di chiamata](../atl/invoking-scripts.md)  
  
## Vedere anche  
 [Registro di sistema ATL \(Registrar\)](../atl/atl-registry-component-registrar.md)