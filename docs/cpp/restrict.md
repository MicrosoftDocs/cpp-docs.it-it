---
title: limitare | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: restrict_cpp
dev_langs: C++
helpviewer_keywords:
- __declspec keyword [C++], restrict
- restrict __declspec keyword
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 24fa0dae15fb0d4dfab8d481c6626c7611295572
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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