---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Threading.AbandonedMutexException | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.Threading.AbandonedMutexException (eccezione)"
  - "AbandonedMutexException (eccezione)"
ms.assetid: 11157066-32ed-492c-83af-29983f915eec
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Threading.AbandonedMutexException
Eccezione generata quando un thread è in attesa su un oggetto mutex e un altro thread abbandona il mutex tramite un'operazione di uscita senza rilascio.  
  
## Note  
 Un mutex abbandonato indica in genere la presenza di un errore grave nel codice. Quando un thread esce senza rilasciare il mutex, è possibile che lo stato delle strutture di dati protette dal mutex non sia coerente. Il successivo thread che richiede la proprietà del mutex può gestire questa eccezione e continuare se è possibile verificare l'integrità delle strutture di dati.  
  
## Vedere anche  
 <xref:System.Threading.AbandonedMutexException>   
 <xref:System.Threading.Mutex>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Threading](../Topic/Threading%20\(C%23%20and%20Visual%20Basic\).md)