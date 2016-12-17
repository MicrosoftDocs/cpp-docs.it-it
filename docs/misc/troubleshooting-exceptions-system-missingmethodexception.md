---
title: "Risoluzione dei problemi relativi alle eccezioni: System.MissingMethodException | Microsoft Docs"
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
  - "MissingMethodException (classe)"
ms.assetid: 1ca4c351-ca26-4a6d-a5a1-c484ac193e2e
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.MissingMethodException
Un'eccezione <xref:System.MissingMethodException> viene generata quando viene eseguito un tentativo di accesso dinamico a un metodo inesistente.  
  
## Suggerimenti associati  
 **Se un metodo di una libreria di classi è stato rimosso, ricompilare ogni assembly che fa riferimento alla libreria.**  
 Normalmente, questa eccezione viene generata quando viene eseguito un tentativo di accesso dinamico a un metodo eliminato o rinominato di un assembly al quale non viene fatto riferimento tramite il nome sicuro.  
  
## Note  
 Quando si esegue una chiamata a una funzione non gestita, questa eccezione viene generata se CLR non riesce a trovare il modulo o la funzione.  
  
## Vedere anche  
 <xref:System.MissingMethodException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Troubleshooting Interoperability](../Topic/Troubleshooting%20Interoperability%20\(Visual%20Basic\).md)