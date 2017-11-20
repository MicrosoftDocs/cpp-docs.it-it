---
title: Valori | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 24003f89-220f-4f93-be7a-b650c26157d7
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 13f497358ae320263fd7043787abb943f760809b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="values"></a>Valori
**ANSI 3.1.2.5**   Rappresentazioni e set di valori dei vari tipi di numeri a virgola mobile  
  
 Il tipo **float** contiene 32 bit: 1 per il segno, 8 per l'esponente e 23 per la mantissa. L'intervallo è +/- 3,4E38 con almeno 7 cifre di precisione.  
  
 Il tipo **double** contiene 64 bit: 1 per il segno, 11 per l'esponente e 52 per la mantissa. L'intervallo è +/- 1,7E308 con almeno 15 cifre di precisione.  
  
 Il tipo **long double** contiene 80 bit: 1 per il segno, 15 per l'esponente e 64 per la mantissa. L'intervallo è +/- 1,2E4932 con almeno 19 cifre di precisione. Si noti che nel compilatore C di Microsoft la rappresentazione del tipo **long double** è identico al tipo **double**.  
  
## <a name="see-also"></a>Vedere anche  
 [Matematica a virgola mobile](../c-language/floating-point-math.md)