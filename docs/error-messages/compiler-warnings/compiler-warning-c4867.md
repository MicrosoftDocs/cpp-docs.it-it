---
title: Avviso del compilatore C4867 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4867
dev_langs:
- C++
helpviewer_keywords:
- C4867
ms.assetid: 8a257d70-c3a7-462d-b285-e57c952a8bf7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a412080d05e570711fcc65926459f9d2fcc45ed3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-c4867"></a>Avviso del compilatore C4867
'function': chiamata di funzione senza elenco di argomenti; Utilizzare 'chiamata' per creare un puntatore a membro  
  
 Un puntatore a funzione membro è stato inizializzato in modo non corretto.  
  
 Questo avviso può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C++ 2005: conformità avanzata di puntatore a membro.  Il codice compilato prima di Visual C++ 2005 ora genererà C4867.  
  
 Questo avviso viene sempre generato come errore. Usare il pragma [warning](../../preprocessor/warning.md) per disabilitare l'avviso. Per ulteriori informazioni sull'avviso C4867 e MFC/ATL, vedere [_ATL_ENABLE_PTM_WARNING](../../atl/reference/compiler-options-macros.md#_atl_enable_ptm_warning).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4867.  
  
```  
// C4867.cpp  
// compile with: /c  
class A {  
public:  
   void f(int) {}  
  
   typedef void (A::*TAmtd)(int);  
  
   struct B {  
      TAmtd p;  
   };  
  
   void g() {  
      B b = {f};   // C4867  
      B b2 = {&A::f};   // OK  
   }  
};  
```