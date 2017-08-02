---
title: Controllo degli errori di runtime | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
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
ms.translationtype: Human Translation
ms.sourcegitcommit: 3c1955bece0c8cdadb4a151ee06fa006402666a4
ms.openlocfilehash: 3aa56b70b02500998665289e69480570cfa39166
ms.contentlocale: it-it
ms.lasthandoff: 06/08/2017

---
# <a name="run-time-error-checking"></a>Controllo degli errori di runtime
La libreria di runtime C contiene le funzioni che supportano i controlli degli errori di runtime (RTC). Il controllo degli errori di runtime consente di compilare il programma in modo che determinati tipi di errori di runtime vengano segnalati. Specificare come gli errori vengono segnalati e quali tipi di errori vengono segnalati. Per altre informazioni, vedere [Procedura: Usare controlli run-time nativi](/visualstudio/debugger/how-to-use-native-run-time-checks).  
  
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
 [Routine di debug](../c-runtime-library/debug-routines.md)
