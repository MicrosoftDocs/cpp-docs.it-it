---
title: Routine di gestione delle eccezioni | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.exceptions
dev_langs:
- C++
helpviewer_keywords:
- exception handling, routines
ms.assetid: f60548c6-850a-4e1e-a79b-a2a6a541ab62
caps.latest.revision: 8
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 3dd5d8dd77f2b62a6b0ea52e7d056b3d779cd2f4
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="exception-handling-routines"></a>Routine di gestione delle eccezioni
Usare le funzioni C++ di gestione delle eccezioni per il ripristino dopo eventi imprevisti durante l'esecuzione del programma.  
  
### <a name="exception-handling-functions"></a>Funzioni di gestione delle eccezioni  
  
|Funzione|Uso|  
|--------------|---------|  
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++|  
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la routine di terminazione personalizzata che verrà chiamata da `terminate`|  
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da `unexpected`|  
|[terminate](../c-runtime-library/reference/terminate-crt.md)|Viene chiamata automaticamente in determinate circostanze dopo che è stata generata un'eccezione. La funzione `terminate` chiama `abort` o una funzione specificata mediante `set_terminate`|  
|[Imprevisto](../c-runtime-library/reference/unexpected-crt.md)|Chiama `terminate` o una funzione specificata con `set_unexpected`. La funzione `unexpected` non viene usata nell'implementazione corrente di gestione delle eccezioni di Microsoft C++|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
