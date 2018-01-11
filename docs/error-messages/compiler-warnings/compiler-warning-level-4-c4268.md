---
title: Compilatore avviso (livello 4) C4268 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4268
dev_langs: C++
helpviewer_keywords: C4268
ms.assetid: d0511e80-904f-4ee1-b4d7-39b5c0bd8234
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b88e7c44099d49eb76d1bee9c68dd8a94413074a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4268"></a>Avviso del compilatore (livello 4) C4268
'identifier': dati statici/globali di tipo 'const' inizializzati con un costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri  
  
 Oggetto **const** istanza globale o statica di una classe non semplice viene inizializzata con un costruttore predefinito generato dal compilatore.  
  
## <a name="example"></a>Esempio  
  
```  
// C4268.cpp  
// compile with: /c /LD /W4  
class X {  
public:  
   int m_data;  
};  
  
const X x1;   // C4268  
```  
  
 Poiché l'istanza della classe è **const**, il valore di `m_data` non può essere modificato.