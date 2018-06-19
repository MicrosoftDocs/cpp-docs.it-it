---
title: Errore del compilatore C2500 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2500
dev_langs:
- C++
helpviewer_keywords:
- C2500
ms.assetid: 6bff8161-dc9a-48ca-91f1-fd2eefdbbc93
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c05ffd59e415375dd3c7f94ae9bc377c0fc2b9e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33229222"
---
# <a name="compiler-error-c2500"></a>Errore del compilatore C2500
'identifier1': 'identifier2' è già una classe base diretta  
  
 Una classe o struttura viene visualizzato più volte in un elenco delle classi base.  
  
 Una classe base diretta è presente nell'elenco di base. Base indiretta è una classe di base di una delle classi nell'elenco di base.  
  
 Una classe non può essere specificata più volte come una classe base diretta. Una classe può essere utilizzata come classe base indiretta più volte.  
  
 L'esempio seguente genera l'errore C2500:  
  
```  
// C2500.cpp  
// compile with: /c  
class A {};  
class B : public A, public A {};    // C2500  
  
// OK  
class C : public A {};  
class D : public A {};  
class E : public C, public D {};  
```