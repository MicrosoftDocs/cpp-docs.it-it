---
title: Super | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __super_cpp
dev_langs:
- C++
helpviewer_keywords:
- __super keyword [C++]
ms.assetid: f0957c31-9256-405b-b402-cad182404b5f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 91ce48232884d1ab242ed52f82f614de058a2f91
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="super"></a>__super
**Sezione specifica Microsoft**  
  
 Consente di dichiarare in modo esplicito che si sta chiamando un'implementazione della classe di base per una funzione di cui si esegue l'override.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
__super::  
member_function  
();  
  
```  
  
## <a name="remarks"></a>Note  
 Tutti i metodi accessibili della classe di base vengono considerati durante la fase di risoluzione dell'overload e la funzione che fornisce la corrispondenza migliore è quella che viene chiamata.  
  
 `__super` può essere visualizzato solo all'interno del corpo di una funzione membro.  
  
 `__super` non può essere utilizzato con una dichiarazione di utilizzo. Vedere [dichiarazione using](../cpp/using-declaration.md) per ulteriori informazioni.  
  
 Con l'introduzione di [attributi](../windows/cpp-attributes-reference.md) che inseriscono codice, il codice può contenere uno o più classi base i cui nomi non è possibile conoscere ma che contengono metodi che si desiderano chiamare.  
  
## <a name="example"></a>Esempio  
  
```  
// deriv_super.cpp  
// compile with: /c  
struct B1 {  
   void mf(int) {}  
};  
  
struct B2 {  
   void mf(short) {}  
  
   void mf(char) {}  
};  
  
struct D : B1, B2 {  
   void mf(short) {  
      __super::mf(1);   // Calls B1::mf(int)  
      __super::mf('s');   // Calls B2::mf(char)  
   }  
};  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)