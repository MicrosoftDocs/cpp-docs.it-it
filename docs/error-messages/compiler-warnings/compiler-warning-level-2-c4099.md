---
title: Compilatore avviso (livello 2) C4099 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4099
dev_langs:
- C++
helpviewer_keywords:
- C4099
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: afecb3fb2420d27bedf16c81894f224a1119a67b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-2-c4099"></a>Avviso del compilatore (livello 2) C4099
'identifier': il nome del tipo utilizzando 'tipooggetto1' ora utilizzando 'objecttype2'  
  
 Un oggetto dichiarato come una struttura viene definito come una classe o un oggetto dichiarato come una classe è definito come una struttura. Il compilatore utilizza il tipo specificato nella definizione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4099.  
  
```  
// C4099.cpp  
// compile with: /W2 /c  
struct A;  
class A {};   // C4099, use different identifer or use same object type  
```