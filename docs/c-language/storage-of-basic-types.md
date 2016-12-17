---
title: "Archiviazione di tipi di base | Microsoft Docs"
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
  - "operazioni aritmetiche [C++], tipi"
  - "tipi di dati [C], identificatori"
  - "tipi di dati [C], archiviazione"
  - "double (tipo di dati), archiviazione"
  - "numeri a virgola mobile, archiviazione"
  - "tipo di dati int"
  - "tipi integrali"
  - "tipi integrali, archiviazione"
  - "long double (parola chiave) [C], archiviazione"
  - "long (parola chiave) [C]"
  - "tipo di dati short"
  - "tipi signed [C++], archiviazione"
  - "identificatori [C++], tipo"
  - "archiviazione [C++], tipi"
  - "archiviazione di tipi [C++]"
  - "identificatori di tipi [C++], dimensioni"
  - "tipi [C], aritmetici"
  - "tipi unsigned [C++], archiviazione"
ms.assetid: bd1f33c1-c6b9-4558-8a72-afb21aef3318
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Archiviazione di tipi di base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella seguente viene riepilogata l'archiviazione associata a ogni tipo di base.  
  
### Dimensioni dei tipi fondamentali  
  
|Tipo|Archiviazione|  
|----------|-------------------|  
|`char`, `unsigned char`, **char con segno**|1 byte|  
|**short**, **short senza segno**|2 byte|  
|`int`, `unsigned int`|4 byte|  
|**long**, `unsigned long`|4 byte|  
|**float**|4 byte|  
|**double**|8 byte|  
|`long double`|8 byte|  
  
 I tipi di dati C possono essere suddivisi in categorie generali.  I "tipi integrali" sono `char`, `int`, **short**, **long**, **signed**, `unsigned` e `enum`.  I "tipi a virgola mobile" sono **float**, **double** e `long double`.  I "tipi aritmetici" sono tutti i tipi a virgola mobile e integrali.  
  
## Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)