---
title: Errore del compilatore C3235 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3235
dev_langs:
- C++
helpviewer_keywords:
- C3235
ms.assetid: 0554d6c7-e1dc-4c99-8934-cbcf491c8203
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6101d6f3d15e0276697130f26627ced593fef0a9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33252245"
---
# <a name="compiler-error-c3235"></a>Errore del compilatore C3235
'specialization': la specializzazione esplicita o parziale di una classe generica non è consentita  
  
 Le classi generiche non possono essere usate per le specializzazioni esplicite o parziali.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3235.  
  
```  
// C3235.cpp  
// compile with: /clr  
generic<class T>  
public ref class C {};  
  
generic<>  
public ref class C<int> {};   // C3235 Remove this specialization to resolve this error.  
```