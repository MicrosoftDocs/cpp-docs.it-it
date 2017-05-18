---
title: Struct bidirectional_iterator_tag | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xutility/std::bidirectional_iterator_tag
- bidirectional_iterator_tag
dev_langs:
- C++
helpviewer_keywords:
- bidirectional_iterator_tag class
- bidirectional_iterator_tag struct
ms.assetid: 9ac06066-b8ae-44b6-bee4-b05855f6a31a
caps.latest.revision: 20
author: corob-msft
ms.author: corob
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: 33302a822cc36adf7f68d7cce29b678654aabb29
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="bidirectionaliteratortag-struct"></a>Struct bidirectional_iterator_tag
Classe che specifica un tipo restituito per la funzione **iterator_category** che rappresenta un iteratore bidirezionale.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct bidirectional_iterator_tag    : public forward_iterator_tag {};
```  
  
## <a name="remarks"></a>Note  
 Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione di modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`>::**iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.  
  
 Il tipo è uguale a **iterator**\< **Iter**>::**iterator_category** quando **Iter** descrive un oggetto che può essere usato come iteratore bidirezionale.  
  
## <a name="example"></a>Esempio  
 Vedere [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di utilizzo di `bidirectional_iterator_tag`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iterator>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Struct forward_iterator_tag](../standard-library/forward-iterator-tag-struct.md)   
 [Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




