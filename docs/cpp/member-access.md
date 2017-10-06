---
title: Accesso ai membri | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- member-selection operators [C++]
- pointers, smart
- member access, overloaded operators
- operator overloading [C++], member access operators
- smart pointers, definition
- smart pointers
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
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
ms.openlocfilehash: 21cdc3de990a8b23645bb09f9f093fb0f2498254
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="member-access"></a>Accesso ai membri
Accesso ai membri di classe può essere controllato mediante l'overload dell'operatore di accesso di membro (**->**). Questo operatore in tale utilizzo viene considerato un operatore unario e la funzione dell'operatore di overload deve essere una funzione membro di una classe. Di conseguenza, la dichiarazione per tale funzione è:  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
class-type *operator->()  
```  
  
## <a name="remarks"></a>Note  
 dove *-tipo di classe* è il nome della classe a cui appartiene questo operatore. La funzione operatore di accesso ai membri deve essere una funzione membro non statica.  
  
 Questo operatore viene utilizzato (spesso insieme all'operatore di dereferenziazione del puntatore) per implementare i "puntatori intelligenti" che convalidano i puntatori prima della dereferenziazione oppure ne conteggiano l'utilizzo.  
  
 L'elemento language **.** operatore di accesso ai membri non possa essere sottoposti a overload.  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)
