---
title: "Risoluzione dei problemi relativi alle eccezioni: System.StackOverflowException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "StackOverflowException (classe)"
ms.assetid: 51b71217-c507-4f5b-bc35-0236180d7968
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.StackOverflowException
Un'eccezione <xref:System.StackOverflowException> viene generata quando si verifica un overflow dello stack di esecuzione a causa di un numero eccessivo di chiamate a metodi annidate.  
  
## Suggerimenti associati  
 Assicurarsi che non si tratti di un ciclo infinito o una ricorsione infinita.  
 La presenza di un numero eccessivo di chiamate a metodi spesso segnala un problema di ricorsione troppo profonda o illimitata.  
  
## Note  
 Non è possibile intercettare le eccezioni di overflow dello stack poiché il codice di gestione delle eccezioni può richiedere lo stack. Quando invece un overflow dello stack si verifica in un'applicazione normale, Common Language Runtime termina il processo.  
  
 Un'applicazione contenente CLR può modificare il comportamento predefinito e specificare che CLR scarichi il dominio di applicazione al verificarsi dell'eccezione ma lasci continuare il processo. Per altre informazioni, vedere [Interfaccia ICLRPolicyManager](../Topic/ICLRPolicyManager%20Interface.md).  
  
## Vedere anche  
 <xref:System.StackOverflowException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Loop Structures](../Topic/Loop%20Structures%20\(Visual%20Basic\).md)