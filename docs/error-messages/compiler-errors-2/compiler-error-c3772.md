---
title: Errore del compilatore C3772 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3772
dev_langs:
- C++
helpviewer_keywords:
- C3772
ms.assetid: 63e938d4-088d-41cc-a562-5881a05b5710
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: c2f6d59a03757ca609a821fd0ca7d520ffdbf8ba
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3772"></a>Errore del compilatore C3772
"name": dichiarazione di modello Friend non valida  
  
Non è consentito dichiarare un elemento Friend di una specializzazione di modello di classe. Non è possibile dichiarare una specializzazione esplicita o parziale di un modello di classe se nella stessa istruzione viene dichiarato un elemento Friend di tale specializzazione. Il segnaposto *nome* identifica la dichiarazione non valida.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Non dichiarare un elemento Friend di una specializzazione di modello di classe.  
  
-   Se possibile per l'applicazione usata, dichiarare un elemento Friend del modello di classe o dichiarare un elemento Friend di una determinata specializzazione parziale o esplicita.  
  
## <a name="example"></a>Esempio  
 Nell'esempio di codice seguente viene generato un errore perché viene dichiarato un elemento Friend di una specializzazione parziale di un modello di classe.  
  
```cpp  
// c3772.cpp  
// compile with: /c  
  
// A class template.  
    template<class T> class A {};  
  
// A partial specialization of the class template.  
    template<class T> class A<T*> {};  
  
// An explicit specialization.  
    template<> class A<char>;  
  
class X {  
// Invalid declaration of a friend of a partial specialization.  
    template<class T> friend class A<T*>; // C3772  
  
// Instead, if it is appropriate for your application, declare a   
// friend of the class template. Consequently, all specializations   
// of the class template are friends:  
//    template<class T> friend class A;  
// Or declare a friend of a particular partial specialization:  
//    friend class A<int*>;  
// Or declare a friend of a particular explicit specialization:  
//    friend class A<char>;  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
[Modelli](../../cpp/templates-cpp.md)   
[Specializzazione di modello](../../cpp/template-specialization-cpp.md)   

