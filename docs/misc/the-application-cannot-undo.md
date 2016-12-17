---
title: "The application cannot undo. | Microsoft Docs"
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
  - "vs.message.VS_E_MULTIDOCUNDO_BLOCKED"
  - "vs.message.0x800A00AB"
ms.assetid: c2b5e2af-0e64-4cff-9814-b80e26cd240e
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The application cannot undo.
Generalmente questo errore si verifica quando si tenta un'operazione di annullamento relativa a un elemento per cui è in corso un'operazione di annullamento collegata a un altro file.  Se l'operazione si è verificata dopo la modifica collegata, Visual Studio non sarà in grado di annullare la modifica.  
  
### Per correggere l'errore  
  
1.  Annullare manualmente la modifica.  
  
## Vedere anche  
 [Ricerca e sostituzione di testo](../Topic/Finding%20and%20Replacing%20Text.md)