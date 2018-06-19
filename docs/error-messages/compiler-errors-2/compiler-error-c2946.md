---
title: Errore del compilatore C2946 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2946
dev_langs:
- C++
helpviewer_keywords:
- C2946
ms.assetid: c86dfbfc-7702-4f09-8a53-d205710e99c2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9485f424306d66514c9e919f13ff5988f8b0d1f2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33247071"
---
# <a name="compiler-error-c2946"></a>Errore del compilatore C2946
creazione di un'istanza esplicita. 'class' non è una specializzazione della classe modello  
  
 Non è possibile creare un'istanza esplicita di una classe non basata su modello.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2946.  
  
```  
// C2946.cpp  
class C {};  
template C;  // C2946  
int main() {}  
```