---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IO.IOException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "IOException (classe)"
ms.assetid: 87812daa-0784-43dc-b3dc-6652a960c362
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IO.IOException
Un'eccezione <xref:System.IO.IOException> viene generata quando si verifica un errore di I\/O, ad esempio un problema di lettura o scrittura in un file.  
  
## Suggerimenti associati  
 **Assicurarsi che il file e la directory siano esistenti.**  
 Verificare che la directory da cui si tenta di leggere o in cui si tenta di scrivere sia esistente. Verificare che il file da cui si tenta di leggere sia esistente.  
  
### Note  
 <xref:System.IO.IOException> è la classe base per le eccezioni generate durante l'accesso a informazioni tramite flussi, file e directory.  
  
 Nella libreria di classi base sono disponibili i seguenti tipi \(che sono tutti classi derivate di <xref:System.IO.IOException>\):  
  
-   <xref:System.IO.DirectoryNotFoundException>  
  
-   <xref:System.IO.EndOfStreamException>  
  
-   <xref:System.IO.FileNotFoundException>  
  
-   <xref:System.IO.FileLoadException>  
  
-   <xref:System.IO.PathTooLongException>  
  
## Vedere anche  
 <xref:System.IO.IOException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [NOTINBUILD Procedura: Creare applicazioni console CLR](http://msdn.microsoft.com/it-it/b8af4197-e65f-4b17-b18e-b9e92965d026)