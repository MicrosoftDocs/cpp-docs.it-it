---
title: "Naked (C) | Microsoft Docs"
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
  - "codice di epilogo"
  - "naked (parola chiave) [C]"
  - "naked (parola chiave) [C], attributo di classe di archiviazione"
  - "codice di prologo"
ms.assetid: 23b1209b-93ba-46ad-a60f-2327c1933eaf
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Naked (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'attributo della classe di archiviazione naked è un'estensione specifica di Microsoft per il linguaggio C.  Per le funzioni dichiarate con l'attributo della classe di archiviazione naked, il compilatore genera codice senza codice di epilogo e di prologo.  Le funzioni naked sono utili quando è necessario scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline.  Le funzioni con attributo naked sono utili per la scrittura di driver di dispositivi virtuali.  
  
 Per informazioni specifiche sull'utilizzo dell'attributo naked, vedere [Funzione naked](../c-language/naked-functions.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)