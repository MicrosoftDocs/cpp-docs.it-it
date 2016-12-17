---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ArgumentNullException | Microsoft Docs"
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
  - "ArgumentNullException (classe)"
ms.assetid: 5f21413c-d997-47c6-9b06-3d85a719d51b
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ArgumentNullException
Un'eccezione <xref:System.ArgumentNullException> viene generata quando viene passato un riferimento con valore null \(`Nothing` in Visual Basic\) a un metodo che non lo accetta come argomento valido.  
  
## Suggerimenti associati  
 **Controllare gli argomenti per verificare che non contengano valori null \(Nothing in Visual Basic\).**  
 Un riferimento con valore null è un riferimento a un oggetto che non esiste, spesso perché non è stata creata un'istanza dell'oggetto a livello di codice.  
  
## Note  
 <xref:System.ArgumentNullException> si comporta in modo identico a <xref:System.ArgumentException>. Questa eccezione è stata fornita per consentire al codice dell'applicazione di distinguere le eccezioni causate da argomenti null da quelle causate da argomenti non null. Per gli errori causati da argomenti non null, vedere [Risoluzione dei problemi relativi alle eccezioni: System.ArgumentOutOfRangeException](../misc/troubleshooting-exceptions-system-argumentoutofrangeexception.md).  
  
## Vedere anche  
 <xref:System.ArgumentNullException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)