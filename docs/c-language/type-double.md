---
title: Tipo double | Microsoft Docs
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
- mantissas, floating-point variables
- type double
- portability [C++], type double
- double data type
ms.assetid: 17c85b24-1475-4d41-a03c-ddf2d6561d34
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 331e41cd5f333a1f2c628d50e6c4a34a3bc9dd96
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="type-double"></a>Tipo double
I valori a doppia precisione con tipo double sono costituiti da 8 byte. Il formato è simile al formato di tipo float con la differenza che il numero viene rappresentato con un esponente a 11 bit in eccesso 1023 e con una mantissa a 52 bit, più 1 bit più significativi implicito. Questo formato specifica un intervallo di valori inclusi approssimativamente tra 1,7E-308 e 1,7E+308 per il tipo double.  
  
 **Sezione specifica Microsoft**  
  
 Il tipo double contiene 64 bit: 1 per il segno, 11 per l'esponente e 52 per la mantissa. L'intervallo è +/-1,7E-308 con almeno 15 cifre di precisione.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)