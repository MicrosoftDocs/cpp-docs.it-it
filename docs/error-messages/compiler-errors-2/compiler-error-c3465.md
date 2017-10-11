---
title: Errore del compilatore C3465 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3465
dev_langs:
- C++
helpviewer_keywords:
- C3465
ms.assetid: aeb815e5-b3fc-4525-afe2-d738e9321df1
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 716eb175d03cc97389c84b9fa382ac92153071f5
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3465"></a>Errore del compilatore C3465
per utilizzare il tipo 'type' è necessario fare riferimento all'assembly 'assembly'  
  
 L'inoltro dei tipi non verrà eseguito per un'applicazione client finché non si ricompila il client. Quando si esegue la ricompilazione,sarà necessario un riferimento per ogni assembly che contiene la definizione di un tipo usato nell'applicazione client.  
  
 Per ulteriori informazioni, vedere [inoltro dei tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera un assembly che contiene il nuovo percorso di un tipo.  
  
```  
// C3465.cpp  
// compile with: /clr /LD  
public ref class R {  
public:  
   ref class N {};  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera un assembly che conteneva la definizione del tipo, ma che adesso contiene la sintassi di inoltro per il tipo.  
  
```  
// C3465_b.cpp  
// compile with: /clr /LD  
#using "C3465.dll"  
[ assembly:TypeForwardedTo(R::typeid) ];  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3465.  
  
```  
// C3465_c.cpp  
// compile with: /clr  
// C3465 expected  
#using "C3465_b.dll"  
// Uncomment the following line to resolve.  
// #using "C3465.dll"  
  
int main() {  
   R^ r = gcnew R();  
}  
```
