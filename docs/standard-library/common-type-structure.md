---
title: Struttura common_type | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::common_type
dev_langs:
- C++
ms.assetid: 2b42722c-c3dc-4d62-8613-0271e52b6f00
caps.latest.revision: 13
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
ms.openlocfilehash: d54c14d3b16f2667f0acfe29960d90cba704ca66
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="commontype-structure"></a>Struttura common_type
Descrive le specializzazioni della classe modello [common_type](../standard-library/common-type-class.md) per la creazione di istanze di [duration](../standard-library/duration-class.md) e [time_point](../standard-library/time-point-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Rep1, class Period1,  
    class Rep2, class Period2>  
struct common_type  
<chrono::duration<Rep1, Period1>,   
chrono::duration<Rep2, Period2>>;  
 
template <class Clock,  
    class Duration1, class Duration2>  
struct common_type  
<chrono::time_point<Clock, Duration1>,  
chrono::time_point<Clock, Duration2>>;  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<chrono >  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)  (Riferimento file di intestazione)  
 [\<chrono>](../standard-library/chrono.md)


