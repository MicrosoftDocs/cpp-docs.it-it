---
title: "Formato immagine | Microsoft Docs"
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
ms.assetid: 3ca3654b-42fe-4253-9f2e-723644041aa0
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Formato immagine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il formato delle immagini eseguibili è PE32\+.  Poiché le immagini eseguibili \(sia DLL che EXE\) possono avere una dimensione massima di 2 gigabyte, è possibile utilizzare l'indirizzamento relativo con spostamento a 32 bit per indirizzare dati immagine statici,  tra cui la tabella di indirizzi di importazione, le costanti di stringa, i dati globali statici e così via.  
  
## Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)