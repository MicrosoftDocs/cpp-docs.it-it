---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.ConstraintException | Microsoft Docs"
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
  - "ConstraintException (classe)"
ms.assetid: 5e9ba3b8-73d5-4657-a76e-63ab6ea32cf1
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.ConstraintException
Un'eccezione <xref:System.Data.ConstraintException> viene generata quando viene eseguito un tentativo di effettuare un'operazione che comporta la violazione di un vincolo.  
  
## Suggerimenti associati  
 **Ridurre o disattivare i vincoli nel DataSet**.  
 È possibile utilizzare la proprietà <xref:System.Data.DataSet.EnforceConstraints%2A> per disattivare temporaneamente i vincoli durante il riempimento di tabelle in un oggetto <xref:System.Data.DataSet>.  
  
 **Accertarsi che non si stia tentando di assegnare un valore a un campo di chiave primaria che abbia già la chiave primaria.**  
 Se la chiave primaria esiste, verrà generata questa eccezione.  
  
 **Cancellare i dataset prima di caricarli dallo stato di visualizzazione.**  
 Se nel dataset che si tenta di caricare sono presenti alcuni dati, è possibile che venga generata questa eccezione.  
  
## Vedere anche  
 <xref:System.Data.ConstraintException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)