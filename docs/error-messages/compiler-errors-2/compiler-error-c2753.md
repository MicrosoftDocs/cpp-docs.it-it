---
title: Errore del compilatore C2753 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2753
dev_langs:
- C++
helpviewer_keywords:
- C2753
ms.assetid: 92bfeeac-524a-4a8e-9a4f-fb8269055826
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: acbf5736c7c263293bc1c2782cab7df4f0af2083
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33235363"
---
# <a name="compiler-error-c2753"></a>Errore del compilatore C2753
'*modello*': la specializzazione parziale non può corrispondere a elenco di argomenti del modello principale  
  
 Se l'elenco di argomenti di modello corrisponde l'elenco di parametri, il compilatore considera il modello stesso. Non è consentito definire due volte lo stesso modello.  
  
## <a name="example"></a>Esempio
 L'esempio seguente genera l'errore C2753 e viene illustrato un modo per risolvere questo problema:  
  
```cpp  
// C2753.cpp  
// compile with: cl /c C2753.cpp
template<class T>  
struct A {};  
  
template<class T>  
struct A<T> {};   // C2753  
// try the following line instead  
// struct A<int> {};  
  
template<class T, class U, class V, class W, class X>  
struct B {};  
```