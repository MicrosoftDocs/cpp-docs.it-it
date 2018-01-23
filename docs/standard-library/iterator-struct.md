---
title: Struct iterator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xutility/std::iterator
dev_langs: C++
helpviewer_keywords:
- iterator class
- iterator struct
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 689ec4ab19b2e5079c31ab0a8677d25acf4e8899
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 Si noti che `value_type` non deve essere un tipo costante anche se **pointer** punta a un oggetto di tipo **Type** const e definisce come riferimento un oggetto dello stesso **tipo**.  
  
## <a name="example"></a>Esempio  
 Per un esempio di come dichiarare e usare i tipi nella classe iterator di base, vedere [iterator_traits](../standard-library/iterator-traits-struct.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iterator>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<iterator>](../standard-library/iterator.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)



