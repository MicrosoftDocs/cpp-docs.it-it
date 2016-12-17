---
title: "nonextensible Attribute | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "nonextensible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfacce duali, nonextensible attribute"
  - "nonextensible attribute"
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# nonextensible Attribute
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se un'interfaccia duale non viene estesa in fase di esecuzione \(ovvero non forniscono i metodi o le proprietà mediante **IDispatch::Invoke** che non siano disponibili tramite il puntatore vtable\), è necessario applicare l'attributo **nonextensible** alla definizione di interfaccia.  L'attributo fornisce informazioni ai linguaggi client \(in Visual Basic\) che possono essere utilizzati per attivare la verifica di codice completo in fase di compilazione.  Se questo attributo non viene specificato, i bug possono rimanere nascosti nel codice client solo in fase di esecuzione.  
  
 Per ulteriori informazioni sull'attributo **nonextensible** e un esempio, vedere [non estensibile](../windows/nonextensible.md).  
  
## Vedere anche  
 [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)