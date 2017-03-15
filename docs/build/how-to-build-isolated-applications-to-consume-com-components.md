---
title: "Procedura: compilare applicazioni isolate per l&#39;utilizzo di componenti COM | Microsoft Docs"
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
  - "applicazioni isolate [C++]"
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Procedura: compilare applicazioni isolate per l&#39;utilizzo di componenti COM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le applicazioni isolate sono applicazioni che contengono manifesti integrati nel programma.  È possibile creare applicazioni isolate che utilizzino componenti COM.  
  
### Per aggiungere riferimenti COM a manifesti di applicazioni isolate  
  
1.  Aprire le pagine delle proprietà del progetto relative all'applicazione isolata.  
  
2.  Espandere il nodo **Proprietà di configurazione**, quindi il nodo **Strumento Manifesto**.  
  
3.  Selezionare la pagina delle proprietà **COM isolato**, quindi impostare la proprietà **Nome file componente** sul nome del componente COM che deve essere utilizzato dall'applicazione isolata.  
  
4.  Scegliere **OK**.  
  
### Per compilare manifesti in applicazioni isolate  
  
1.  Aprire le pagine delle proprietà del progetto relative all'applicazione isolata.  
  
2.  Espandere il nodo **Proprietà di configurazione**, quindi il nodo **Strumento Manifesto**.  
  
3.  Selezionare la pagina delle proprietà **Input e output**, quindi impostare la proprietà **Incorpora manifesto** su **Sì**.  
  
4.  Scegliere **OK**.  
  
5.  Compilare la soluzione.  
  
## Vedere anche  
 [Applicazioni isolate](http://msdn.microsoft.com/library/aa375190)   
 [Assembly side\-by\-side](_win32_side_by_side_assemblies)