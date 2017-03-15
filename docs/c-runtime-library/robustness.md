---
title: Efficienza | Microsoft Docs
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
- robustness [CRT]
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
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
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 12424d6d233c1c109cb246b6c5b520f2ef12539e
ms.lasthandoff: 02/24/2017

---
# <a name="robustness"></a>Efficienza
Usare le funzioni della libreria di runtime C seguenti per migliorare l'efficienza del programma  
  
### <a name="run-time-robustness-functions"></a>Funzioni per efficienza del runtime  
  
|Funzione|Uso|Equivalente .NET Framework|  
|--------------|---------|-------------------------------|  
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Trasferisce il controllo al meccanismo di gestione degli errori se l'operatore `new` non riesce ad allocare la memoria.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [terminate](../c-runtime-library/reference/terminate-crt.md).|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [unexpected](../c-runtime-library/reference/unexpected-crt.md).|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [SetUnhandledExceptionFilter](http://msdn.microsoft.com/library/windows/desktop/ms680634.aspx)
