---
title: "Dual Interfaces and Events | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfacce duali, eventi"
  - "eventi (C++), interfacce duali"
ms.assetid: bb382f7c-e885-4274-bf07-83f3602615d2
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dual Interfaces and Events
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sebbene sia possibile progettare un'interfaccia eventi come un doppio, sono disponibili numerosi buone ragioni di progettazione non a tale scopo.  Il motivo fondamentale è che l'origine dell'evento generato solo l'evento tramite il puntatore vtable o tramite `Invoke`, non entrambi.  Se l'origine evento genera l'evento come chiamata al metodo vtable diretta, i metodi `IDispatch` non verranno utilizzati mai ed è chiaro che l'interfaccia deve essere un'interfaccia vtable pure.  Se l'origine evento genera l'evento come chiamata a `Invoke`, i metodi vtable non verranno utilizzati mai ed è chiaro che l'interfaccia deve essere un'interfaccia dispatch.  Se si definiscono le interfacce eventi in modo raddoppiate, saranno ai client di distribuire parte di un'interfaccia che non verranno mai.  
  
> [!NOTE]
>  Questo argomento non si applica alle interfacce duali, in generale.  Da una prospettiva di implementazione, raddoppia è un modo rapido, efficace e supportata di implementare le interfacce che sono accessibili a una vasta gamma del client.  
  
 Esistono ulteriori motivi evitare le interfacce eventi doppie, né Visual Basic né Internet Explorer le supporta.  
  
## Vedere anche  
 [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)