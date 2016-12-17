---
title: "Archiviazione di valori letterali stringa | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "stringhe letterali, archiviazione"
ms.assetid: ba5e4d2c-d456-44b3-a8ca-354af547ac50
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Archiviazione di valori letterali stringa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I caratteri di una stringa letterale vengono archiviati in ordine in posizioni di memoria contigue.  Una sequenza di escape \(come **\\\\** o **\\"**\) in un valore letterale stringa viene considerato come un singolo carattere.  Un carattere null \(rappresentato dalla sequenza di escape **\\0**\) viene automaticamente aggiunto a ogni stringa letterale e ne contrassegna la fine. Tale situazione si verifica durante la [fase di conversione](../preprocessor/phases-of-translation.md) 7. Si noti che il compilatore non è in grado di archiviare due stringhe identiche in due indirizzi diversi.  [\/GF](../build/reference/gf-eliminate-duplicate-strings.md) induce il compilatore a inserire una sola copia di stringhe identiche nel file eseguibile.  
  
## Osservazioni  
 **Sezione specifica Microsoft**  
  
 Le stringhe hanno una durata di archiviazione statica.  Per ulteriori informazioni sulla durata di archiviazione, vedere [Classi di archiviazione](../c-language/c-storage-classes.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Valori letterali stringa C](../c-language/c-string-literals.md)