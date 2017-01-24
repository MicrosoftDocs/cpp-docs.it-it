---
title: "Risoluzione dei problemi relativi alle eccezioni: Microsoft.VisualBasic.FileIO.TextFieldParser.MalformedLineException | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
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
  - "Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException (eccezione)"
ms.assetid: d780b8cc-c3f1-45ed-8f8e-3f8728a4b770
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: Microsoft.VisualBasic.FileIO.TextFieldParser.MalformedLineException
Un'eccezione <xref:Microsoft.VisualBasic.FileIO.MalformedLineException> viene generata quando un oggetto <xref:Microsoft.VisualBasic.FileIO.TextFieldParser> non può analizzare una riga con il formato specificato.  
  
 La proprietà `Error Line` dell'oggetto eccezione contiene il testo della riga che causa l'errore.  
  
## Suggerimenti associati  
 **Controllare che TextFieldType e Delimiter siano definiti correttamente.**  
 Il tipo `TextFieldType`, delimitato o a larghezza fissa, deve corrispondere al formato del file. Se il tipo `TextFieldType` è `FixedWidth`, verificare che la proprietà `FieldWidths` sia impostata in modo corretto. Se il tipo `TextFieldType` è `Delimited`, verificare che la proprietà `Delimiters` sia impostata in modo corretto.  
  
## Vedere anche  
 <xref:Microsoft.VisualBasic.FileIO.MalformedLineException>   
 [Parsing Text Files with the TextFieldParser Object](../Topic/Parsing%20Text%20Files%20with%20the%20TextFieldParser%20Object%20\(Visual%20Basic\).md)   
 [How to: Read From Comma\-Delimited Text Files](../Topic/How%20to:%20Read%20From%20Comma-Delimited%20Text%20Files%20in%20Visual%20Basic.md)   
 [How to: Read From Fixed\-width Text Files](../Topic/How%20to:%20Read%20From%20Fixed-width%20Text%20Files%20in%20Visual%20Basic.md)