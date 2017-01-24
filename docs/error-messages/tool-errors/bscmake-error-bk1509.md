---
title: "Errore BK1509 di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1509"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1509"
ms.assetid: 53df7037-1913-4b63-b425-c0bf44081792
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore BK1509 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

spazio dell'heap insufficiente  
  
 La memoria, inclusa la memoria virtuale, non è sufficiente a eseguire BSCMAKE.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Liberare spazio sul disco.  
  
2.  Aumentare la dimensione del file di scambio.  
  
3.  Aumentare la dimensione del file di scambio di Windows.  
  
4.  Ridurre la quantità di memoria richiesta da BSCMAKE utilizzando \/Ei o \/Es per eliminare alcuni file di input oppure \/Em per eliminare dei corpi di macro.