---
title: "Ridistribuzione di un&#39;applicazione ATL | Microsoft Docs"
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
  - "ATL, ridistribuzione"
  - "modelli OLE DB, ridistribuzione"
  - "ridistribuzione di ATL"
  - "ridistribuzione di modelli OLE DB"
ms.assetid: 9a696b22-2345-43ec-826b-be7cb8cfd676
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Ridistribuzione di un&#39;applicazione ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Iniziando da Visual Studio 2012, Active Template Library \(ATL\) è una libreria di sola intestazione.  I progetti ATL non presentano un'opzione di collegamento dinamico ad ATL.  Non è necessaria alcuna libreria ATL ridistribuibile.  
  
 Se si ridistribuisce un'applicazione eseguibile ATL, è necessario registrare il file .exe \(e tutti i controlli all'interno dello stesso\) eseguendo il comando seguente:  
  
```  
filename /regserver  
  
```  
  
 dove `filename` è il nome del file eseguibile.  
  
 In Visual Studio 2010, può essere creato un progetto ATL per una configurazione MinDependency o MinSize.  Una configurazione MinDependency viene visualizzata quando si imposta la proprietà **Uso di ATL** su  **Collegamento statico ad ATL**  nella pagina della proprietà **Generale** e si imposta la proprietà **Libreria di runtime** su **Multithread \(\/MT\)** nella pagina della proprietà **Generazione codice** \(cartella C\/C\+\+\).  
  
 Una configurazione MinSize viene visualizzata quando si imposta la proprietà **Uso di ATL** su  **Collegamento dinamico ad ATL**  nella pagina della proprietà **Generale** o si imposta la proprietà **Libreria di runtime** su **DLL multithread \(\/MD\)** nella pagina della proprietà **Generazione codice** \(cartella C\/C\+\+\).  
  
 MinSize rende il file di output il più piccolo possibile, ma richiede che ATL100 e Msvcr100. dll \(se è stata selezionata l'opzione **DLL multithread \(\/MD\)** opzione\) si trovino nel computer di destinazione.  ATL100 deve essere registrato nel computer di destinazione per essere sicuri che tutte le funzionalità ATL siano presenti.  ATL100.ddl contiene esportazioni ANSI e Unicode.  
  
 Se si compila un progetto ATL o di modelli OLE DB per una destinazione MinDependency, non è necessario installare e registrare ATL100.dll nel computer di destinazione, anche se è possibile ottenere un'immagine più grande del programma.  
  
 Per le applicazioni di modelli OLE DB, assicurarsi che nel computer di destinazione siano installate le versioni più recenti dei file Microsoft Data Access Components \(MDAC\).  Per altre informazioni, vedere [Ridistribuzione dei file di supporto del database](../ide/redistributing-database-support-files.md).  
  
## Vedere anche  
 [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md)