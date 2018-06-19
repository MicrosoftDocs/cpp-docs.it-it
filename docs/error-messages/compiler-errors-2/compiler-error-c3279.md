---
title: Errore del compilatore C3279 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3279
dev_langs:
- C++
helpviewer_keywords:
- C3279
ms.assetid: 639afc20-984c-4a95-be35-8bf9409f02d5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0a86f3dd637f84901559c4be8443a81425347237
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33256822"
---
# <a name="compiler-error-c3279"></a>Errore del compilatore C3279
le specializzazioni parziali ed esplicite e le creazioni di istanze esplicite di modelli di classe dichiarati nello spazio dei nomi cli non sono consentite  
  
 Lo spazio dei nomi `cli` è definito da Microsoft e contiene pseudo-modelli. Il compilatore Visual C++ non consente specializzazioni parziali ed esplicite definite dall'utente e le creazioni di istanze esplicite di modelli di classe in questo spazio dei nomi.  
  
 L'esempio seguente genera l'errore C3279:  
  
```  
// C3279.cpp  
// compile with: /clr  
namespace cli {  
   template <> ref class array<int> {};   // C3279  
   template <typename T> ref class array<T, 2> {};   // C3279  
}  
```