---
title: void (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- void
- void_cpp
dev_langs:
- C++
helpviewer_keywords:
- void keyword [C++]
- functions [C++], void
- pointers, void
ms.assetid: d203edba-38e6-4056-8b89-011437351057
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
ms.openlocfilehash: dea06f16979fab9aa4494b172d6d95193a9f3727
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="void-c"></a>void (C++)
Quando usato come tipo restituito da una funzione, `void` specifica che la funzione non restituisce alcun valore. Quando usato per l'elenco di parametri di una funzione, void specifica che la funzione non accetta parametri. Quando usato nella dichiarazione di un puntatore, void specifica che il puntatore è universale.  
  
 Se il tipo di un indicatore di misura è **void \* **, il puntatore può indicare una variabile che non è dichiarato con la **const** o `volatile` (parola chiave). Un puntatore void non può essere dereferenziato a meno che su di esso non venga eseguito il cast su un altro tipo. Un puntatore void può essere convertito in qualsiasi altro tipo di puntatore ai dati.  
  
 Un puntatore void può puntare a una funzione, ma non a un membro di classe in C++.  
  
 Non è possibile dichiarare una variabile di tipo void.  
  
## <a name="example"></a>Esempio  
  
```  
// void.cpp  
void vobject;   // C2182  
void *pv;   // okay  
int *pint; int i;  
int main() {  
   pv = &i;  
   // Cast optional in C required in C++  
   pint = (int *)pv;  
}   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)
