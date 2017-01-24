---
title: "Il tipo di progetto non &#232; supportato da questa installazione | Microsoft Docs"
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
  - "vs.projectflavornotavailable"
ms.assetid: 50e92aff-3ce9-4600-94af-4a16e9dffc90
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Il tipo di progetto non &#232; supportato da questa installazione
Questo errore si verifica quando si tenta di aprire un tipo di progetto che richiede un software development kit \(SDK\) non installato con Visual Studio.  Ad esempio, questo errore si verifica se si apre Visual Studio su un computer che non ha Visual Studio SDK installato e si tenta poi di aprire un file di progetto per quell'SDK, ad esempio un progetto VSIX. \(Per ulteriori informazioni su Visual Studio SDK, vedere [Estensioni di Visual Studio](http://go.microsoft.com/fwlink/?LinkID=64968).\)  
  
## Soluzione alternativa  
 È necessario verificare di avere installato l'SDK corretto per il tipo di progetto che si sta tentando di aprire.  
  
#### Per verificare se si ha già installato l'SDK  
  
1.  Nella barra dei menu, scegliere **File**, **Nuovo**, **Progetto**.  
  
2.  Nella della finestra di dialogo **Nuovo progetto**, espandere il nodo **Installato**, espandere il nodo **Modelli**, quindi scegliere il nodo **Altri tipi di progetto**.  
  
3.  Esaminare i tipi di progetto disponibili per determinare se il progetto che si sta tentando di aprire è disponibile.  
  
 Se non è possibile trovare il tipo di progetto che si sta tentando di aprire, l'SDK associato non è stato installato.  È necessario individuare e installare l'SDK associato per aprire il tipo di progetto.  
  
## Vedere anche  
 [Novità di Visual Studio 2015](../Topic/What's%20New%20in%20Visual%20Studio%202015.md)   
 [Portabilità, migrazione e aggiornamento dei progetti di Visual Studio](../Topic/Porting,%20Migrating,%20and%20Upgrading%20Visual%20Studio%20Projects.md)