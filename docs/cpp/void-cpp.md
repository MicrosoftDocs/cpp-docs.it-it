---
title: void (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- void_cpp
dev_langs:
- C++
helpviewer_keywords:
- void keyword [C++]
- functions [C++], void
- pointers, void
ms.assetid: d203edba-38e6-4056-8b89-011437351057
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 81dd7717940bb6f78063b0fba64dd5d7f8cad583
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943542"
---
# <a name="void-c"></a>void (C++)
Quando usato come tipo restituito dalla funzione, il **void** parola chiave specifica che la funzione non restituisce un valore. Quando usato per l'elenco di parametri di una funzione, void specifica che la funzione non accetta parametri. Quando usato nella dichiarazione di un puntatore, void specifica che il puntatore è universale.  
  
 Se è di tipo di puntatore **void \*** , il puntatore può indicare una variabile che non è dichiarato con il **const** oppure **volatile** (parola chiave). Un puntatore void non può essere dereferenziato a meno che su di esso non venga eseguito il cast su un altro tipo. Un puntatore void può essere convertito in qualsiasi altro tipo di puntatore ai dati.  
  
 Un puntatore void può puntare a una funzione, ma non a un membro di classe in C++.  
  
 Non è possibile dichiarare una variabile di tipo void.  
  
## <a name="example"></a>Esempio  
  
```cpp 
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