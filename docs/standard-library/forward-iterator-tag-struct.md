---
title: Struct forward_iterator_tag | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std.forward_iterator_tag
- forward_iterator_tag
- std::forward_iterator_tag
- xutility/std::forward_iterator_tag
dev_langs:
- C++
helpviewer_keywords:
- forward_iterator_tag struct
- forward_iterator_tag class
ms.assetid: 68b633ac-b135-4e9e-837d-14248a262ec5
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
translationtype: Machine Translation
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: 659ada41e69a0d9d2ab90e80b60ea0b3e4546d3b
ms.lasthandoff: 02/24/2017

---
# <a name="forwarditeratortag-struct"></a>Struct forward_iterator_tag
Classe che fornisce un tipo restituito per la funzione **iterator_category** che rappresenta un iteratore in avanti.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct forward_iterator_tag    : public input_iterator_tag {};
```  
  
## <a name="remarks"></a>Note  
 Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve individuare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`> **::iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.  
  
 Il tipo è uguale a **iterator**\< **Iter**> **::iterator_category** quando **Iter** descrive un oggetto che può essere usato come iteratore in avanti.  
  
## <a name="example"></a>Esempio  
 Per un esempio di come usare i tag **iterator_tag**, vedere [iterator_traits](../standard-library/iterator-traits-struct.md) o [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iterator>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Struct input_iterator_tag](../standard-library/input-iterator-tag-struct.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




