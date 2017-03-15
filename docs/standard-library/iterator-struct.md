---
title: Struct iterator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- iterator
- std::iterator
- std.iterator
- xutility/std::iterator
dev_langs:
- C++
helpviewer_keywords:
- iterator class
- iterator struct
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
caps.latest.revision: 18
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
ms.openlocfilehash: b14712f36d8cc7b4dbbdd4fd6a0cef3cb0667d8b
ms.lasthandoff: 02/24/2017

---
# <a name="iterator-struct"></a>Struct iterator
Struct di base vuota usata per assicurare il funzionamento corretto di una classe iterator definita dall'utente con **iterator_trait**.  
  
## <a name="syntax"></a>Sintassi  
```    
struct iterator {
   typedef Category iterator_category;
   typedef Type value_type;
   typedef Distance difference_type;
   typedef Distance distance_type;
   typedef Pointer pointer;
   typedef Reference reference;
   };  
```    
## <a name="remarks"></a>Note  
 La struct modello viene usata come tipo di base per tutti gli iteratori. Definisce i tipi di membro:  
  
- `iterator_category` (sinonimo del parametro modello `Category`)  
  
- `value_type` (sinonimo del parametro modello **Type**)  
  
- `difference_type` (sinonimo del parametro modello `Distance`)  
  
- `distance_type` (sinonimo del parametro modello `Distance`)  
  
- `pointer` (sinonimo del parametro modello `Pointer`)  
  
- `reference` (sinonimo del parametro modello `Reference`)  
  
 Si noti che `value_type` non deve essere un tipo costante anche se **pointer** punta a un oggetto di tipo **Type** const e definisce come riferimento un oggetto dello stesso ****tipo.  
  
## <a name="example"></a>Esempio  
 Per un esempio di come dichiarare e usare i tipi nella classe iterator di base, vedere [iterator_traits](../standard-library/iterator-traits-struct.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iterator>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<iterator>](../standard-library/iterator.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




