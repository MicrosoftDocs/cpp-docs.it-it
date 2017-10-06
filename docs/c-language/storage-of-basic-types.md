---
title: Archiviazione di tipi di base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- specifiers [C++], type
- integral types, storage
- storage [C++], types
- floating-point numbers, storage
- type specifiers [C++], sizes
- arithmetic operations [C++], types
- int data type
- short data type
- signed types [C++], storage
- long double keyword [C], storage
- long keyword [C]
- double data type, storage
- types [C], arithmetic
- integral types
- data types [C], specifiers
- storing types [C++]
- unsigned types [C++], storage
- data types [C], storage
ms.assetid: bd1f33c1-c6b9-4558-8a72-afb21aef3318
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 5a42f5c0e4592fc397ac51d610ed6ca1495c4504
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="storage-of-basic-types"></a>Archiviazione di tipi di base
Nella tabella seguente viene riepilogata l'archiviazione associata a ogni tipo di base.  
  
### <a name="sizes-of-fundamental-types"></a>Dimensioni dei tipi fondamentali  
  
|Tipo|Archiviazione|  
|----------|-------------|  
|`char`, `unsigned char`, **signed char**|1 byte|  
|**short**, **unsigned short**|2 byte|  
|`int`, `unsigned int`|4 byte|  
|**long**, `unsigned long`|4 byte|  
|**float**|4 byte|  
|**double**|8 byte|  
|`long double`|8 byte|  
  
 I tipi di dati C possono essere suddivisi in categorie generali. I "tipi integrali" sono `char`, `int`, **short**, **long**, **signed**, `unsigned` e `enum`. I "tipi a virgola mobile" sono **float**, **double** e `long double`. I "tipi aritmetici" sono tutti i tipi a virgola mobile e integrali.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)
