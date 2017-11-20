---
title: Errore matematico M6201 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: M6201
dev_langs: C++
helpviewer_keywords: M6201
ms.assetid: 4041c331-d9aa-4dd4-b565-7dbe0218538c
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e8288770d74497e576a299d683b846214a187a1c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="math-error-m6201"></a>Errore matematico M6201
'function': errore Domain  
  
 Un argomento della funzione specificata non è all'esterno del dominio di valori di input validi per tale funzione.  
  
## <a name="example"></a>Esempio  
  
```  
result = sqrt(-1.0)   // C statement  
result = SQRT(-1.0)   !  FORTRAN statement  
```  
  
 L'errore chiama la `_matherr` funzione con il nome della funzione, gli argomenti e il tipo di errore. È possibile riscrivere la `_matherr` funzione per personalizzare la gestione di determinati errori matematica a virgola mobile in fase di esecuzione.