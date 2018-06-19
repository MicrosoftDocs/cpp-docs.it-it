---
title: Errore del compilatore C2427 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2427
dev_langs:
- C++
helpviewer_keywords:
- C2427
ms.assetid: a7d421af-6180-40b4-b7a6-9f3bc7dfaaf9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b98f04dd02b4881f3177afd93b2acf74a304b7fc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196909"
---
# <a name="compiler-error-c2427"></a>Errore del compilatore C2427
'class': Impossibile definire la classe in questo ambito  
  
 È stato effettuato un tentativo per definire una classe annidata, ma la classe annidata è un membro di una classe base, non la classe principale che la contiene.  
  
 L'esempio seguente genera l'errore C2427:  
  
```  
// C2427.cpp  
// compile with: /c  
template <class T>   
struct S {  
   struct Inner;   
};   
  
struct Y : S<int> {};   
  
struct Y::Inner {};   // C2427  
  
// OK  
template<typename T>  
struct S<T>::Inner {};  
```