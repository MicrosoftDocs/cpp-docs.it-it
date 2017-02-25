---
title: "Dimensione di matrice massima | Microsoft Docs"
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
ms.assetid: 4c782cf6-73f3-40b0-b306-229d22da4ee1
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Dimensione di matrice massima
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.3.3.4, 4.1.1** Il tipo di intero necessario per mantenere la dimensione massima di un array, ovvero la dimensione di **size\_t**  
  
 Il typedef `size_t` è un `unsigned int` sulla piattaforma x86 a 32 bit.  Su piattaforme a 64 bit, il typedef `size_t` è un **unsigned \_\_int64**.  
  
## Vedere anche  
 [Matrici e puntatori](../c-language/arrays-and-pointers.md)