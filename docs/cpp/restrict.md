---
title: limitare | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- restrict_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], restrict
- restrict __declspec keyword
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 2d1cdbff84966e7926b30ef70c40581cc3801a93
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="restrict"></a>restrict
**Sezione specifica Microsoft**  
  
 Applicato a una dichiarazione di funzione o a una definizione che restituisce un tipo di puntatore e indica al compilatore che la funzione restituisce un oggetto per cui non verrà utilizzato un alias con altri puntatori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec(restrict) return_type f();  
```  
  
## <a name="remarks"></a>Note  
 Il compilatore propagherà `__declspec(restrict)`. Ad esempio, la funzione `malloc` CRT è decorata con `__declspec(restrict)`, pertanto anche i puntatori inizializzati in posizioni di memoria con `malloc` sono previsti senza alias.  
  
 Il compilatore non controlla che per il puntatore non venga effettivamente utilizzato un alias. È responsabilità dello sviluppatore specificare che il programma non utilizzi un alias per un puntatore contrassegnato con il modificatore `restrict __declspec`.  
  
 Per una semantica simile alle variabili, vedere [Restrict](../cpp/extension-restrict.md).  
  
## <a name="example"></a>Esempio  
 Vedere [noalias](../cpp/noalias.md) per un esempio di utilizzo `restrict`.  
  
 Per informazioni sulla parola chiave restrict che fa parte di C++ AMP, vedere [restrict (C++ AMP)](../cpp/restrict-cpp-amp.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
