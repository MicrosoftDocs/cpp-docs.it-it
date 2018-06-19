---
title: Compilatore avviso (livello 1) C4076 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4076
dev_langs:
- C++
helpviewer_keywords:
- C4076
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1cfa28469e099dbf2b6bd43213073c304d0b2894
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33275473"
---
# <a name="compiler-warning-level-1-c4076"></a>Avviso del compilatore (livello 1) C4076
'typemod': non può essere utilizzato con il tipo 'typename'  
  
 Non è possibile usare un modificatore di tipo, **signed** o `unsigned`, con un tipo non intero. ***typemod*** viene ignorato.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4076:  
  
```  
// C4076.cpp  
// compile with: /W1 /LD  
unsigned double x;   // C4076  
```