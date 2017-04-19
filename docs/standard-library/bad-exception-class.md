---
title: Classe bad_exception | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- bad_exception
- exception/std::bad_exception
dev_langs:
- C++
helpviewer_keywords:
- bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
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
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 7870c00b019718188b80a64e0102638deb76f588
ms.lasthandoff: 02/24/2017

---
# <a name="badexception-class"></a>bad_exception Class
La classe descrive un'eccezione che può essere generata da un gestore imprevisto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class bad_exception    : public exception {};  
```  
  
## <a name="remarks"></a>Note  
 [unexpected](../standard-library/exception-functions.md#unexpected) genererà `bad_exception` anziché terminare o chiamare un'altra funzione specificata con [set_unexpected](../standard-library/exception-functions.md#set_unexpected) se `bad_exception` è incluso nell'elenco di generazione di una funzione.  
  
 Il valore restituito da **what** è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.  
  
 Per un elenco dei membri ereditati dalla classe `bad_exception`, vedere [Classe exception](../standard-library/exception-class.md).  
  
## <a name="example"></a>Esempio  
 Vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected) per un esempio dell'utilizzo di [unexpected](../standard-library/exception-functions.md#unexpected) che genera `bad_exception`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<exception>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
[Classe exception](../standard-library/exception-class.md)
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)


