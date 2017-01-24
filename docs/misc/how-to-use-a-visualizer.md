---
title: "Procedura: utilizzare un visualizzatore | Microsoft Docs"
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
  - "vs.debug.dataviewer"
  - "vs.debug.stringviewer"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "debugger, visualizzatori"
  - "visualizzatori, informazioni sui visualizzatori"
ms.assetid: d2611385-0134-4387-8c5a-979fe625a462
caps.latest.revision: 37
caps.handback.revision: 37
ms.author: "susanno"
manager: "douge"
---
# Procedura: utilizzare un visualizzatore
È possibile usare un visualizzatore per visualizzare il contenuto di una variabile o di un oggetto in modo significativo per il tipo di dati.  È possibile usare i visualizzatori da **Suggerimenti dati**, da una finestra **Espressioni di controllo**, dalla finestra **Auto** o **Variabili locali**.  
  
 I visualizzatori non sono supportati in Compact Framework.  
  
> [!NOTE]
>  Nelle app di **Store** sono supportati solo i visualizzatori di testo standard, HTML, XML e JSON.  Non sono supportati i visualizzatori personalizzati \(creati dall'utente\).  
  
### Per aprire un visualizzatore  
  
1.  Fare clic sull'icona a forma di lente di ingrandimento accanto al nome di una variabile in **Suggerimenti dati**, in una finestra **Espressioni di controllo**, nella finestra **Auto**, **Variabili locali** o **Controllo immediato**.  
  
     Verrà visualizzato un elenco di visualizzatori.  
  
2.  Fare clic sul visualizzatore da usare.  
  
### Per usare un visualizzatore per il codice gestito durante il debug remoto  
  
-   Copiare la DLL del visualizzatore nel computer remoto prima di avviare la sessione di debug.  
  
     Il percorso della DLL deve essere lo stesso sia nel computer remoto che in quello locale.  Il percorso può essere uno dei seguenti:  
  
     *Percorso di installazione di Visual Studio*`\Common7\Packages\Debugger\Visualizers`  
  
     \-oppure\-  
  
     `My Documents\Visual Studio 2010\Visualizers`*Versione di Visual Studio*`\Visualizers`  
  
## Vedere anche  
 [Visualizzatori](../Topic/Create%20Custom%20Visualizers%20of%20Data.md)   
 [Procedura: installare un visualizzatore](../Topic/How%20to:%20Install%20a%20Visualizer.md)   
 [Procedura: scrivere un visualizzatore](../Topic/How%20to:%20Write%20a%20Visualizer.md)   
 [Visualizzare i valori di dati nei suggerimenti dati](../Topic/View%20data%20values%20in%20Data%20Tips%20%20in%20the%20code%20editor.md)