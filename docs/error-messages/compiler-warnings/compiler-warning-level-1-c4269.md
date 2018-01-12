---
title: Compilatore avviso (livello 1) C4269 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4269
dev_langs: C++
helpviewer_keywords: C4269
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e3d276aa5744d457ee987334d65728b1835593ca
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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