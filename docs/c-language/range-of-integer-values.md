---
title: Intervallo di valori interi | Microsoft Docs
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
ms.assetid: 0e9c6161-8f3f-4bfb-9fcc-a6c8dc97d702
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 568bc2884f7fb9642175a006c09a218d8cbe1668
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="range-of-integer-values"></a>Intervallo di valori interi
**ANSI 3.1.2.5**   Rappresentazioni e set di valori di vari tipi di interi  
  
 I tipi Integer contengono 32 bit (quattro byte). I valori Signed Integer sono rappresentati in complemento a due. Il bit più significativo rappresenta il segno, ovvero 1 per il segno negativo, 0 per il segno positivo e zero. I valori vengono elencati di seguito:  
  
|Tipo|Minimo e massimo|  
|----------|-------------------------|  
|**unsigned short**|Da 0 a 65535|  
|`signed short`|-32768 to 32767|  
|`unsigned long`|Da 0 a 4294967295|  
|**signed long**|da -2147483648 a 2147483647|  
  
## <a name="see-also"></a>Vedere anche  
 [Valori Integer](../c-language/integers.md)