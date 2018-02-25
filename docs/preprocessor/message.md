---
title: messaggio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- message_CPP
- vc-pragma.message
dev_langs:
- C++
helpviewer_keywords:
- message pragma
- pragmas, message
ms.assetid: 67414f25-ed47-4079-a5dc-21d9d1a39754
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fb998ef084f259601478ea9614a2bd8dc3da0d68
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="message"></a>messaggio
Invia un valore letterale stringa all'output standard senza terminare la compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma message( messagestring )  
```  
  
## <a name="remarks"></a>Note  
 Un tipico utilizzo del **messaggio** pragma consiste nel visualizzare i messaggi informativi in fase di compilazione.  
  
 Il *messagestring* parametro può essere una macro che si espande in un valore letterale stringa e consente di concatenare tali macro con valori letterali stringa in qualsiasi combinazione.  
  
 Se si utilizza una macro predefinita nel **messaggio** pragma, la macro deve restituire una stringa, altrimenti sarà necessario convertire l'output della macro in una stringa.  
  
 Il frammento di codice seguente utilizza il **messaggio** pragma per visualizzare i messaggi durante la compilazione:  
  
```  
// pragma_directives_message1.cpp  
// compile with: /LD  
#if _M_IX86 >= 500  
#pragma message("_M_IX86 >= 500")  
#endif  
  
#pragma message("")  
  
#pragma message( "Compiling " __FILE__ )   
#pragma message( "Last modified on " __TIMESTAMP__ )  
  
#pragma message("")  
  
// with line number  
#define STRING2(x) #x  
#define STRING(x) STRING2(x)  
  
#pragma message (__FILE__ "[" STRING(__LINE__) "]: test")  
  
#pragma message("")  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)