---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Collections.Generic.KeyNotFoundException | Microsoft Docs"
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
  - "KeyNotFoundException (classe)"
ms.assetid: de33f5bb-5709-46fe-b889-7105dbd24299
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Collections.Generic.KeyNotFoundException
Un'eccezione <xref:System.Collections.Generic.KeyNotFoundException> viene generata quando viene eseguito un tentativo di recuperare da una raccolta una chiave o una coppia di valori di chiave tramite una chiave inesistente.  
  
## Suggerimenti associati  
 **Controllare che la chiave utilizzata esista nella raccolta alla quale si sta tentando di accedere.**  
 Questa eccezione viene generata quando un'operazione tenta di recuperare un elemento in una raccolta tramite una chiave che non esiste in tale raccolta.  
  
### Note  
 Per verificare se esiste una chiave, è possibile utilizzare il metodo <xref:System.Collections.Generic.Dictionary%602.ContainsKey%2A>.  
  
## Vedere anche  
 <xref:System.Collections.Generic>   
 <xref:System.Collections.Generic.KeyNotFoundException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)