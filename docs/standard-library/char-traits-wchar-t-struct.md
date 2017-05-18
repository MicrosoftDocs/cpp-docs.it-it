---
title: Struct char_traits&lt;wchar_t&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- char_traits<wchar_t>
- string/std::char_traits<wchar_t>
dev_langs:
- C++
helpviewer_keywords:
- char_traits<wchar_t> class
ms.assetid: 31f34072-04d6-4871-88fe-48e17d473484
caps.latest.revision: 21
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
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 8816f9cadccdb1c8b52733c079668f1b07ea54da
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="chartraitsltwchartgt-struct"></a>Struct char_traits&lt;wchar_t&gt;
Classe che rappresenta una specializzazione dello struct modello **char_traits\<CharType>** in un elemento di tipo `wchar_t`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <>  
struct char_traits<wchar_t>;
```  
  
## <a name="remarks"></a>Note  
 La specializzazione consente allo struct di sfruttare i vantaggi delle funzioni della libreria che modificano gli oggetti di questo tipo `wchar_t`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<string>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Struct char_traits](../standard-library/char-traits-struct.md)   
 [Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)




