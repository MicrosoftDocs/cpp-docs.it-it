---
title: Compilatore avviso (livello 1) C4688 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4688
dev_langs: C++
helpviewer_keywords: C4688
ms.assetid: a027df3c-b2b8-4c49-8539-c2bc42db74e8
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2abfdc9ae3cf998a867b229dce88afbc994eb600
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4688"></a>Avviso del compilatore (livello 1) C4688
'constraint': l'elenco di vincoli contiene il tipo privato 'type' dell'assembly  
  
 Un elenco di vincoli include un tipo privato dell'assembly. Questo significa che il tipo non sarà disponibile se si accede dall'esterno dell'assembly. Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4688.  
  
```  
// C4688.cpp  
// compile with: /clr /c /W1  
ref struct A {};   // private type  
public ref struct B {};  
  
// Delete the following 3 lines to resolve.  
generic <class T>   
where T : A   // C4688  
public ref struct M {};  
  
generic <class T>   
where T : B  
public ref struct N {};  
```