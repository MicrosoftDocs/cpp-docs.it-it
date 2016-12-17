---
title: "Errore del compilatore CS0537 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0537"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0537"
ms.assetid: 6c832a5f-47dc-4f60-aed8-69ac328af44b
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0537
La classe System.Object non può avere una classe base o implementare un'interfaccia  
  
 L'errore CS0537 si verifica quando si ricompila le librerie di classi <xref:System> e nei casi in cui <xref:System.Object> derivi da un'altra classe. È molto improbabile che si verifichi questo errore. Nel caso in cui dovesse verificarsi, non derivare <xref:System.Object> da una classe o interfaccia perché è la radice dell'intera gerarchia di classi .NET Framework e, di conseguenza, non deriva da alcun altro elemento.