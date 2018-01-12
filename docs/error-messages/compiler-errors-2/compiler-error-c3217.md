---
title: Errore del compilatore C3217 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3217
dev_langs: C++
helpviewer_keywords: C3217
ms.assetid: 99070417-c23a-4d82-bdd2-04be1a07adea
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4abb64c2cc647e7b4f4e8b378e8209ce8511d14c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3217"></a>Errore del compilatore C3217
'param': un parametro generico non può essere vincolato in questa dichiarazione  
  
 Il formato di un vincolo non è corretto. Il parametro generico del vincolo deve essere conforme al parametro di modello di classe generica.  
  
 L'esempio seguente genera l'errore C3217:  
  
```  
// C3217.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>  
ref class C {  
   generic <class T1>  
   where T : A   // C3217  
   void f();  
};  
```  
  
 L'esempio seguente illustra una possibile soluzione:  
  
```  
// C3217b.cpp  
// compile with: /clr /c  
interface struct A {};  
  
generic <class T>  
ref class C {  
   generic <class T1>  
   where T1 : A  
   void f();  
};  
```