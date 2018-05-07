---
title: Compilatore avviso (livello 4) C4268 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4268
dev_langs:
- C++
helpviewer_keywords:
- C4268
ms.assetid: d0511e80-904f-4ee1-b4d7-39b5c0bd8234
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bef62649af39df950c3966ef93dddb6c71ec2fd6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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