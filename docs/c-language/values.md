---
title: Valori | Microsoft Docs
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
ms.assetid: 24003f89-220f-4f93-be7a-b650c26157d7
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: e9ea33117517a0d01eed0a1eb264e1e2e4f2cc80
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="values"></a>Valori
**ANSI 3.1.2.5**   Rappresentazioni e set di valori dei vari tipi di numeri a virgola mobile  
  
 Il tipo **float** contiene 32 bit: 1 per il segno, 8 per l'esponente e 23 per la mantissa. L'intervallo è +/- 3,4E38 con almeno 7 cifre di precisione.  
  
 Il tipo **double** contiene 64 bit: 1 per il segno, 11 per l'esponente e 52 per la mantissa. L'intervallo è +/- 1,7E308 con almeno 15 cifre di precisione.  
  
 Il tipo **long double** contiene 80 bit: 1 per il segno, 15 per l'esponente e 64 per la mantissa. L'intervallo è +/- 1,2E4932 con almeno 19 cifre di precisione. Si noti che nel compilatore C di Microsoft la rappresentazione del tipo **long double** è identico al tipo **double**.  
  
## <a name="see-also"></a>Vedere anche  
 [Matematica a virgola mobile](../c-language/floating-point-math.md)
