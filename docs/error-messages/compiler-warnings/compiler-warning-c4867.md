---
title: Avviso del compilatore C4867 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4867
dev_langs:
- C++
helpviewer_keywords:
- C4867
ms.assetid: 8a257d70-c3a7-462d-b285-e57c952a8bf7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b46bf4866791ec82ac5984132903e22ab16e07ad
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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