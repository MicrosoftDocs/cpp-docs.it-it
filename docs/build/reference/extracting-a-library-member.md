---
title: "Estrazione di membri dalle librerie | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Lib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/EXTRACT (opzione di Gestione librerie)"
  - "EXTRACT (opzione di Gestione librerie)"
  - "-EXTRACT (opzione di Gestione librerie)"
  - "estrazione di membri di librerie"
  - "LIB [C++], estrazione di membri di librerie"
  - "librerie, estrazione di membri"
ms.assetid: a2c5c2a1-9b7e-489a-a9a4-1dec694e1fc5
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Estrazione di membri dalle librerie
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare LIB per creare un file oggetto \(obj\) che contiene una copia di un membro di una libreria esistente.  Per estrarre una copia di un membro, utilizzare la seguente sintassi:  
  
```  
LIB library /EXTRACT:member /OUT:objectfile  
```  
  
 Questo comando consente di creare un file obj chiamato *objectfile* che contiene una copia di un membro \(`member`\) di una libreria \(*library*\).  Per il nome del membro viene rilevata la distinzione tra maiuscole e minuscole.  È possibile estrarre un unico membro per ciascun comando.  Specificare l'opzione \/OUT. Per l'output non è disponibile alcun nome predefinito.  Se è già presente un file denominato *objectfile* nella directory specificata, o nella directory corrente se non è stata specificata alcuna directory con *objectfile*, il file oggetto estratto sovrascriverà il file esistente.  
  
## Vedere anche  
 [Riferimenti a LIB](../../build/reference/lib-reference.md)