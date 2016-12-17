---
title: "Overload dell&#39;operatore &gt;&gt; per classi personalizzate | Microsoft Docs"
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
  - "operatore >>, overload di classi personali"
  - "operatore >>"
  - "operatore >>, overload di classi personali"
ms.assetid: 40dab4e0-3f97-4745-9cc8-b86e740fa246
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Overload dell&#39;operatore &gt;&gt; per classi personalizzate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I flussi di input utilizzano l'operatore di estrazione \(`>>`\) per i tipi standard.  È possibile scrivere analoghi operatori di estrazione per i propri tipi; il successo dipende dall'utilizzo dello spazio vuoto con precisione.  
  
 Di seguito è riportato un esempio di un operatore di estrazione per la classe di `Date` verificata in precedenza:  
  
```  
istream& operator>> ( istream& is, Date& dt )  
{  
   is >> dt.mo >> dt.da >> dt.yr;  
   return is;  
}  
```  
  
## Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)