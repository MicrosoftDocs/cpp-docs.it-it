---
title: "Archiviazione di indirizzi | Microsoft Docs"
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
  - "indirizzi [C++], archiviazione"
  - "archiviazione [C++], indirizzi"
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Archiviazione di indirizzi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La quantità di memoria richiesta per un indirizzo e il significato dell'indirizzo dipendono dall'implementazione del compilatore.  Non è garantito che i puntatori ai diversi tipi abbiano la stessa lunghezza.  Di conseguenza, **sizeof\(char \*\)** non è necessariamente uguale a **sizeof\(int \*\)**.  
  
 **Sezione specifica Microsoft**  
  
 Per il compilatore C Microsoft, **sizeof\(char \*\)** è uguale a **sizeof\(int \*\)**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Dichiarazioni di puntatori](../c-language/pointer-declarations.md)