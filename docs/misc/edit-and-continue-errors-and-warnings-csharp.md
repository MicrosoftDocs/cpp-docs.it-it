---
title: "Errori e avvisi di Modifica e continuazione (C#) | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.csharp.enc.error_4001"
  - "vs.csharp.enc.error_4034"
  - "vs.csharp.enc.error_4003"
  - "vs.csharp.enc.error_4026"
  - "vs.csharp.enc.error_4032"
  - "vs.csharp.enc.error_4017"
  - "vs.csharp.enc.error_4053"
  - "vs.csharp.enc.error_4024"
  - "vs.csharp.enc.error_4012"
  - "vs.csharp.enc.error_4066"
  - "vs.csharp.enc.error_4020"
  - "vs.csharp.enc.error_4008"
  - "vs.csharp.enc.error_4033"
  - "vs.csharp.enc.error_4014"
  - "vs.csharp.enc.error_4023"
  - "vs.csharp.enc.error_4011"
  - "vs.csharp.enc.error_4006"
  - "vs.csharp.enc.error_4059"
  - "vs.csharp.enc.error_4015"
  - "vs.csharp.enc.error_4018"
  - "vs.csharp.enc.error_4028"
  - "vs.csharp.enc.error_4013"
  - "vs.csharp.enc.error_4009"
  - "vs.csharp.enc.error_4021"
  - "vs.csharp.enc.error_4065"
  - "vs.csharp.enc.error_4029"
  - "vs.csharp.enc.error_4058"
  - "vs.csharp.enc.error_4019"
  - "vs.csharp.enc.error_4007"
  - "vs.csharp.enc.error_4052"
  - "vs.csharp.enc.error_4025"
  - "vs.csharp.enc.error_4055"
  - "vs.csharp.enc.error_4022"
  - "vs.csharp.enc.error_4002"
  - "vs.csharp.enc.error_4016"
  - "vs.csharp.enc.error_4043"
  - "vs.csharp.enc.error_4027"
  - "vs.csharp.enc.error_4054"
  - "vs.csharp.enc.error_4004"
  - "vs.csharp.enc.error_4010"
  - "vs.csharp.enc.error_4030"
  - "vs.csharp.enc.error_4005"
  - "vs.csharp.enc.error_4035"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "Modifica e continuazione (C#), errori e avvisi"
  - "errori [c#], debug"
  - "errori [debugger], Modifica e continuazione"
ms.assetid: c0e12b0a-8009-4a4a-979f-c804a91a5d9b
caps.latest.revision: 11
caps.handback.revision: 11
ms.author: "susanno"
manager: "douge"
---
# Errori e avvisi di Modifica e continuazione (C#)
È stata apportata una modifica a una sezione di codice che non è consentita in Modifica e continuazione di Visual c\#.  
  
 La funzionalità Modifica e continuazione di [!INCLUDE[csharp_current_short](../misc/includes/csharp_current_short_md.md)] consente di arrestare l'esecuzione del programma in modalità di interruzione, apportare modifiche al codice in esecuzione e riprendere l'esecuzione del programma con le modifiche incorporate.  
  
 Le modifiche al codice dichiarativo che hanno effetto sulla struttura pubblica di una classe in genere non sono consentite. Alcune modifiche che potrebbe essere necessario apportare al corpo di un metodo o una proprietà oppure a dichiarazioni private all'interno di una classe non sono consentite. Quando possibile, la funzionalità Modifica e continuazione contrassegna il codice che non è possibile modificare in grigio chiaro e visualizza un messaggio di errore.  
  
 Per altre informazioni sulle modifiche supportate in Modifica e continuazione per [!INCLUDE[csharp_current_short](../misc/includes/csharp_current_short_md.md)], vedere [Modifiche al codice supportate \(C\#\)](../Topic/Supported%20Code%20Changes%20\(C%23\).md). Se si desiderano maggiori informazioni su un errore o un avviso specifico, è possibile cercare o pubblicare un post nel [forum MSDN sull'IDE di Visual C\#](http://go.microsoft.com/fwlink/?LinkId=214693).  
  
### Per correggere l'errore  
  
1.  Scegliere **Annulla** dal menu **Debug** per annullare la modifica.  
  
     \-oppure\-  
  
2.  Terminare la sessione di debug, apportare le modifiche, quindi avviare una nuova sessione di debug.  
  
## Vedere anche  
 [Modifica e continuazione \(Visual C\#\)](../Topic/Edit%20and%20Continue%20\(Visual%20C%23\).md)