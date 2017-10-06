---
title: "Parole chiave di ereditarietà | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __multiple_inheritance
- __single_inheritance_cpp
- __virtual_inheritance_cpp
- __virtual_inheritance
- __multiple_inheritance_cpp
- __single_inheritance
dev_langs:
- C++
helpviewer_keywords:
- __single_inheritance keyword [C++]
- declaring derived classes [C++]
- keywords [C++], inheritance keywords
- __multiple_inheritance keyword [C++]
- __virtual_inheritance keyword [C++]
- inheritance, declaring derived classes
- derived classes [C++], declaring
- inheritance, keywords
ms.assetid: bb810f56-7720-4fea-b8b6-9499edd141df
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
ms.openlocfilehash: 6286d8e3082f0a4a3ce3e00fb3de1ad4ca41589a
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="inheritance-keywords"></a>Parole chiave di ereditarietà
**Sezione specifica Microsoft**  
  
```  
class [__single_inheritance] class-name;
class [__multiple_inheritance] class-name;
class [__virtual_inheritance] class-name;  
```  
  
 dove:  
  
 *nome di classe*  
 Il nome della classe che si sta dichiarando.  
  
 Il linguaggio C++ consente di dichiarare un puntatore a un membro della classe prima della definizione della classe. Ad esempio:  
  
```  
class S;  
int S::*p;  
```  
  
 Nel codice precedente, `p` è dichiarato come puntatore a membro integer di classe S. Tuttavia, `class S` ha non è ancora stato definito in questo codice; è stato solo dichiarato. Quando il compilatore rileva tale puntatore, deve effettuare una rappresentazione generalizzata del puntatore. La dimensione della rappresentazione dipende dal modello di ereditarietà specificato. Sono disponibili quattro modi per specificare un modello di ereditarietà al compilatore:  
  
-   Nell'IDE in **rappresentazione di puntatore a membro**  
  
-   Nella riga di comando mediante il [/vmg](../build/reference/vmb-vmg-representation-method.md) passare  
  
-   Utilizzo di [pointers_to_members](../preprocessor/pointers-to-members.md) (pragma)  
  
-   Utilizzando le parole chiave di ereditarietà `__single_inheritance`, `__multiple_inheritance` e `__virtual_inheritance`. Con questa tecnica viene controllato il modello di ereditarietà in base alle classi.  
  
    > [!NOTE]
    >  Se si dichiara sempre un puntatore a un membro di una classe dopo la definizione della classe, non è necessario utilizzare nessuna di queste opzioni.  
  
 La dichiarazione di un puntatore a un membro di una classe prima della definizione della classe influisce sulla dimensione e sulla velocità del file eseguibile risultante. Più è complessa l'ereditarietà utilizzata da una classe, maggiore è il numero di byte necessari per rappresentare un puntatore a un membro della classe e maggiori sono le dimensioni del codice necessario per interpretare il puntatore. L'ereditarietà singola è meno complessa e l'ereditarietà virtuale è più complessa.  
  
 Se l'esempio precedente viene modificato in:  
  
```  
class __single_inheritance S;  
int S::*p;  
```  
  
 indipendentemente dalle opzioni della riga di comando o dai pragma, i puntatori ai membri di `class S` utilizzeranno la più piccola rappresentazione possibile.  
  
> [!NOTE]
>  La stessa dichiarazione con prototipo della rappresentazione della classe puntatore a membro deve verificarsi in ogni unità di conversione che dichiara i puntatori ai membri di quella classe e la dichiarazione deve verificarsi prima che vengano dichiarati i puntatori ai membri.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)
