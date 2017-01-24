---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IO.FileNotFoundException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "FileNotFoundException (classe)"
  - "System.IO.FileNotFoundException (eccezione)"
ms.assetid: 6e5ab395-7c81-434e-835f-0fc792b9149d
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IO.FileNotFoundException
Un'eccezione <xref:System.IO.FileNotFoundException> viene generata quando viene eseguito un tentativo di accedere a un file o una directory che non esiste nel disco.  
  
## Suggerimenti associati  
 **Verificare che il file esista nel percorso specificato.**  
 Se il file non esiste, verrà generata questa eccezione. Per altre informazioni, vedere <xref:Microsoft.VisualBasic.FileIO.FileSystem.FileExists%2A>.  
  
 **Quando si utilizzano i percorsi relativi, accertarsi che la directory corrente sia corretta.**  
 Se la directory corrente non è corretta, anche i percorsi relativi non saranno corretti.  
  
## Vedere anche  
 <xref:System.IO.FileNotFoundException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)