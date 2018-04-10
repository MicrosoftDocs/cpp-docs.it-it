---
title: Super | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
f1_keywords:
- __super_cpp
dev_langs:
- C++
helpviewer_keywords:
- __super keyword [C++]
ms.assetid: f0957c31-9256-405b-b402-cad182404b5f
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 93585337ae34e7c95d1c11b0a970afc8b36987bb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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