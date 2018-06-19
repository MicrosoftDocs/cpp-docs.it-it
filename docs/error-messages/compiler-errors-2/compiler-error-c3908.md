---
title: Errore del compilatore C3908 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3908
dev_langs:
- C++
helpviewer_keywords:
- C3908
ms.assetid: 3c322482-c79e-4197-a578-2ad9bc379d1a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3f971ec355c3f1c3772b2a0cd4059cf0a8abd630
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33275278"
---
# <a name="compiler-error-c3908"></a>Errore del compilatore C3908
livello di accesso meno restrittivo di 'construct'  
  
 Un metodo di funzione di accesso della proprietà (get o set) non può avere accesso meno restrittivo rispetto all'accesso specificato sulla proprietà stessa.  Analogamente, per i metodi della funzione di accesso eventi.  
  
 Per ulteriori informazioni, vedere [proprietà](../../windows/property-cpp-component-extensions.md) e [evento](../../windows/event-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3908:  
  
```  
// C3908.cpp  
// compile with: /clr  
ref class X {  
protected:  
   property int i {  
   public:   // C3908 property i is protected   
      int get();  
   private:  
      void set(int);   // OK more restrictive  
   };  
};  
```