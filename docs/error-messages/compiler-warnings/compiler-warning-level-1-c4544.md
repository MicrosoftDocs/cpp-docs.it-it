---
title: Compilatore avviso (livello 1) C4544 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4544
dev_langs:
- C++
helpviewer_keywords:
- C4544
ms.assetid: 11ee04df-41ae-435f-af44-881e801315a8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc07340c0b8c9cc513e8b10910ccee21152328f0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279305"
---
# <a name="compiler-warning-level-1-c4544"></a>Avviso del compilatore (livello 1) C4544
'declaration': argomento di modello predefinito ignorato in questa dichiarazione di modello  
  
 Un argomento di modello predefinito è stato specificato in un percorso non corretto ed è stato ignorato. Un argomento di modello predefinito per un modello di classe può essere specificato solo nella dichiarazione o nella definizione del modello di classe e non in un membro del modello di classe.  
  
 Questo esempio genera l'errore C4545 e l'esempio successivo mostra come correggerlo:  
  
```  
// C4544.cpp  
// compile with: /W1 /LD  
template <class T>   
struct S  
{  
   template <class T1>   
      struct S1;  
   void f();  
};  
  
template <class T=int>  
template <class T1>  
struct S<T>::S1 {};   // C4544  
```  
  
 In questo esempio, il parametro predefinito si applica al modello di classe `S`:  
  
```  
// C4544b.cpp  
// compile with: /LD  
template <class T = int>   
struct S  
{  
   template <class T1>   
      struct S1;  
   void f();  
};  
  
template <class T>  
template <class T1>  
struct S<T>::S1 {};  
```