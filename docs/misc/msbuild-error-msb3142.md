---
title: "MSBuild Error MSB3142 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.CopyError"
helpviewer_keywords: 
  - "MSB3142"
ms.assetid: acca7437-6c72-446c-a6b5-a1c051b6855f
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3142
**MSB3142: errore durante il tentativo di copiare '\<file\>' in '\<cartella\>': '\<errore\>'**  
  
 Questo errore viene generato a seguito della copia di setup.bin nella directory di output di compilazione.  Alcune cause possibili di questo errore possono essere:  
  
-   Non si dispone dell'autorizzazione di copia nella directory di output.  
  
-   Il disco è pieno.  
  
 Si tratta delle stesse ragioni potenziali dell'esito negativo di file.copy o directory.createdirectory.  
  
## Vedere anche  
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)