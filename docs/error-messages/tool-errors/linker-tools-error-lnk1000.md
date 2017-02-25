---
title: "Errore degli strumenti del linker LNK1000 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1000"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1000"
ms.assetid: 86421b9a-460a-4285-8dce-9b8257d78122
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore degli strumenti del linker LNK1000
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore sconosciuto; per informazioni sul supporto tecnico, consultare la documentazione  
  
 Prendere nota delle circostanze in cui si è verificato l'errore, tentare di isolare il problema e creare un test case riproducibile, quindi vedere `Microsoft Product Support Services`.  Per informazioni su come investigare e segnalare questi errori, vedere [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;134650](http://support.microsoft.com/default.aspx?scid=kb;en-us;134650).  
  
 È possibile ottenere questo errore se si combinano file di intestazione standard \(ad esempio, dos.h\) con file personali.  `#include` prima le intestazioni standard, seguite dai file di intestazione personali.