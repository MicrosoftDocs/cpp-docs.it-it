---
title: Compilatore avviso (livello 1) C4269 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4269
dev_langs:
- C++
helpviewer_keywords:
- C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5e393c657e12f84d3cadfacd469e35e3472a39d0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33281791"
---
# <a name="compiler-warning-level-1-c4269"></a>Avviso del compilatore (livello 1) C4269
'identifier': dati automatici di tipo 'const' inizializzati con un costruttore predefinito generato dal compilatore producono risultati inaffidabili  
  
 Oggetto **const** istanza automatica di una classe non semplice viene inizializzata con un costruttore predefinito generato dal compilatore.  
  
## <a name="example"></a>Esempio  
  
```  
// C4269.cpp  
// compile with: /c /LD /W1  
class X {  
public:  
   int m_data;  
};  
  
void g() {  
   const X x1;   // C4269  
};  
```  
  
 Poiché questa istanza della classe viene generata nello stack, il valore iniziale di `m_data` può essere qualsiasi carattere. Inoltre, poiché si tratta un **const** istanza, il valore di `m_data` non può essere modificata.