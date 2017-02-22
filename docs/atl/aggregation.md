---
title: "Aggregation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregate objects [C++]"
  - "aggregation [C++]"
ms.assetid: 7125bb8e-b269-4b50-9bba-295b467a54cc
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Aggregation
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In alcuni casi quando il implementor di un oggetto richieste sfruttare i servizi offerti da un altro oggetto, preesistente.  Inoltre, richieste questo secondo oggetto venga visualizzato come parte naturale del primo.  COM raggiunge entrambi obiettivi con contenimento e aggregazione.  
  
 L'aggregazione significa che l'oggetto \(esterno\) che crea l'oggetto \(interno\) contenuto come parte del processo di creazione e le interfacce dell'oggetto interno sono esposte dall'esterno.  Un oggetto si consente a cui aggregatable o meno.  Se è, pertanto deve seguire determinate regole per l'aggregazione funzioni correttamente.  
  
 In genere, tutte le chiamate al metodo **IUnknown** l'oggetto contenuto devono delegare l'oggetto contenitore.  
  
## Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Reusing Objects](http://msdn.microsoft.com/library/windows/desktop/ms678443)