---
title: '&lt;limits&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std.<limits>
- std::<limits>
- limits/std::<limits>
- <limits>
dev_langs:
- C++
helpviewer_keywords:
- limits header
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 86978cd4549f0672dac7cad0e4713380ea189c27
ms.openlocfilehash: bd4d0e1dbc7b350cd0683fdd5e6ad3fc1dc1f781
ms.contentlocale: it-it
ms.lasthandoff: 04/18/2017

---
# <a name="ltlimitsgt"></a>&lt;limits&gt;
Definisce la classe modello `numeric_limits` e due enumerazioni relative all'arrotondamento e alle rappresentazioni a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <limits>  
  
```  
  
## <a name="remarks"></a>Note  
 Le specializzazioni esplicite della classe `numeric_limits` descrivono molte proprietà dei tipi fondamentali, inclusi i tipi di carattere, integer e a virgola mobile e `bool`, che sono definite dall'implementazione anziché dalle regole del linguaggio C++. Le proprietà descritte in \<limits> includono accuratezza, rappresentazioni con dimensioni minime e massime, arrotondamento e segnalazione degli errori di tipo.  
  
### <a name="enumerations"></a>Enumerazioni  
  
|||  
|-|-|  
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.|  
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe numeric_limits](../standard-library/numeric-limits-class.md)|La classe modello descrive le proprietà aritmetiche dei tipi numerici predefiniti.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)




