---
title: "Formati data e ora di Windows a 32 bit | Microsoft Docs"
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
  - "vc.time"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "Windows a 32 bit"
ms.assetid: ef1589db-84d7-4b24-8799-7c7a22cfe2bf
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Formati data e ora di Windows a 32 bit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'ora del file e la data vengono archiviate separatamente, utilizzando gli unsigned integer come campi di bit.  L'ora del file e la data sono raccolte nel modo seguente:  
  
### Ora  
  
|Posizione di bit:|0   1   2   3   4|5   6   7   8   9   A|B   C   D   E   F|  
|-----------------------|-----------------------|---------------------------|-----------------------|  
|Lunghezza:|5|6|5|  
|Sommario:|hours|minutes|incrementi di 2 secondi|  
|Intervallo del valore:|0–23|0–59|intervalli di 0\-29 in 2 secondi|  
  
### Data  
  
|Posizione di bit:|0   1   2   3   4   5   6|7   8   9   A|B   C   D   E   F|  
|-----------------------|-------------------------------|-------------------|-----------------------|  
|Lunghezza:|7|4|5|  
|Sommario:|year|month|day|  
|Intervallo del valore:|0–119|1–12|1–31|  
||\(rispetto al 1980\)|||  
  
## Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)