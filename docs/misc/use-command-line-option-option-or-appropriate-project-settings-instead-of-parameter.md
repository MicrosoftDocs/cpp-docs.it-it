---
title: "Usare l&#39;opzione della riga di comando &#39;&lt;opzione&gt;&#39; o le impostazioni di progetto appropriate invece di &#39;&lt;parametro&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc41008"
  - "vbc41008"
helpviewer_keywords: 
  - "BC41008"
ms.assetid: 1c5d6d7a-b767-4dae-aa61-d7fa81d5aad1
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Usare l&#39;opzione della riga di comando &#39;&lt;opzione&gt;&#39; o le impostazioni di progetto appropriate invece di &#39;&lt;parametro&gt;&#39;
Per specificare un file che contiene una chiave pubblica per un assembly, un contenitore di chiavi pubbliche per un assembly o un assembly con firma parziale, è preferibile usare le opzioni del compilatore di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]. Si sconsiglia di usare gli attributi <xref:System.Reflection.AssemblyKeyFileAttribute>, <xref:System.Reflection.AssemblyKeyNameAttribute> o <xref:System.Reflection.AssemblyDelaySignAttribute> nel codice.  
  
 **ID errore:** BC41008  
  
### Per correggere l'errore  
  
1.  Usare le opzioni [\/keyfile](../Topic/-keyfile.md), [\/keycontainer](../Topic/-keycontainer.md) o [\/delaysign](../Topic/-delaysign.md) del compilatore di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] anziché gli attributi <xref:System.Reflection.AssemblyKeyFileAttribute>, <xref:System.Reflection.AssemblyKeyNameAttribute> o <xref:System.Reflection.AssemblyDelaySignAttribute> nel codice.  
  
## Vedere anche  
 [Procedura: creare assembly Friend firmati](../Topic/How%20to:%20Create%20Signed%20Friend%20Assemblies%20\(C%23%20and%20Visual%20Basic\).md)   
 [Visual Basic Command\-Line Compiler](../Topic/Visual%20Basic%20Command-Line%20Compiler.md)   
 [\/keyfile](../Topic/-keyfile.md)   
 [\/keycontainer](../Topic/-keycontainer.md)   
 [\/delaysign](../Topic/-delaysign.md)