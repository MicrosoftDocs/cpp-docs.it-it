---
title: Istruzione break (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: break
dev_langs: C++
helpviewer_keywords: break keyword [C]
ms.assetid: 015627c7-0924-49b2-a4d1-c77edf5eae6a
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 648ab54d23e22d6c6aae3022593440cb892c1ea9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="break-statement-c"></a>Istruzione break (C)
L'istruzione `break` termina l'esecuzione dell'istruzione contenitore `do`, `for`, `switch` o `while` più vicina in cui è presente. Il controllo passa all'istruzione che segue l'istruzione terminata, se presente.  
  
## <a name="syntax"></a>Sintassi  
 *jump-statement*:  
 `break;`  
  
 L'istruzione `break` viene spesso utilizzata per terminare l'elaborazione di un particolare case all'interno di un'istruzione `switch`. La mancanza di un contenitore iterativo o di un'istruzione `switch` genera un errore.  
  
 Nelle istruzioni annidate l'istruzione `break` termina solo l'istruzione `do`, `for`, `switch` o `while` che la contiene più da vicino. È possibile utilizzare un'istruzione `return` o `goto` per trasferire il controllo in un punto diverso della struttura annidata.  
  
 In questo esempio viene illustrata l'istruzione `break`:  
  
```  
#include <stdio.h>  
int main() {  
   char c;  
   for(;;) {  
      printf_s( "\nPress any key, Q to quit: " );  
  
      // Convert to character value  
      scanf_s("%c", &c);  
      if (c == 'Q')  
          break;  
   }  
} // Loop exits only when 'Q' is pressed  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione break](../cpp/break-statement-cpp.md)