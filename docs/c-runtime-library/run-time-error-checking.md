---
title: Controllo degli errori di runtime | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.runtime
dev_langs:
- C++
helpviewer_keywords:
- run-time error checking
- run-time errors, checking
ms.assetid: c965dd01-57ad-4a3c-b1d6-5aa04f920501
caps.latest.revision: 7
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
translationtype: Human Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: eb9db9ea42d50faa6e7a693c95795036e650a760
ms.lasthandoff: 03/29/2017

---
# <a name="run-time-error-checking"></a>Controllo degli errori di runtime
La libreria di runtime C contiene le funzioni che supportano i controlli degli errori di runtime (RTC). Il controllo degli errori di runtime consente di compilare il programma in modo che determinati tipi di errori di runtime vengano segnalati. Specificare come gli errori vengono segnalati e quali tipi di errori vengono segnalati. Per altre informazioni, vedere [/RTC (Controlli di runtime)](http://msdn.microsoft.com/Library/dc7b2f1e-5ff6-42e0-89b3-dc9dead83ee1).  
  
 Utilizzare le seguenti funzioni per personalizzare il modo in cui il programma esegue il controllo degli errori di runtime.  
  
### <a name="run-time-error-checking-functions"></a>Funzioni di controllo degli errori di runtime  
  
|Funzione|Uso|  
|--------------|---------|  
|[_RTC_GetErrDesc](../c-runtime-library/reference/rtc-geterrdesc.md)|Restituisce una breve descrizione di un tipo di controllo degli errori di runtime.|  
|[_RTC_NumErrors](../c-runtime-library/reference/rtc-numerrors.md)|Restituisce il numero totale di errori che possono essere rilevati dai controlli degli errori di runtime.|  
|[_RTC_SetErrorFunc](../c-runtime-library/reference/rtc-seterrorfunc.md)|Definisce una funzione come gestore per la segnalazione dei controlli degli errori di runtime.|  
|[_RTC_SetErrorType](../c-runtime-library/reference/rtc-seterrortype.md)|Associa un errore che viene rilevato dai controlli degli errori di runtime con un tipo.|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [/RTC (Controlli di runtime)](../build/reference/rtc-run-time-error-checks.md)   
 [runtime_checks](../preprocessor/runtime-checks.md)   
 [Esempio RTC](http://msdn.microsoft.com/en-us/b3415b09-f6fd-43dc-8c02-9a910bc2574e)   
 [Routine di debug](../c-runtime-library/debug-routines.md)
