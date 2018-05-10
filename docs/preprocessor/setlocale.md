---
title: setlocale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- setlocale_CPP
- vc-pragma.setlocale
dev_langs:
- C++
helpviewer_keywords:
- pragmas, setlocale
- setlocale pragma
ms.assetid: e60b43d9-fbdf-4c4e-ac85-805523a13b86
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0cfabfa3c83fe2ff90a6f7dbe07d5205f7a6f9a9
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="setlocale"></a>setlocale
Definisce le impostazioni locali (paese/area geografica e la lingua) da utilizzare quando si traducono le costanti a caratteri "wide" e valori letterali stringa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma setlocale( "[locale-string]" )  
```  
  
## <a name="remarks"></a>Note  
 Poiché l'algoritmo per la conversione dei caratteri multibyte in caratteri "wide" può variare dalle impostazioni locali o la compilazione può aver luogo in impostazioni locali diverse da dove un file eseguibile verrà eseguito, questo pragma consente di specificare le impostazioni locali di destinazione in fase di compilazione. In questo modo si garantisce che le stringhe di caratteri "wide" saranno memorizzate nel formato corretto.  
  
 Il valore predefinito *stringa delle impostazioni locali* è "".  
  
 Le impostazioni locali "C" eseguono il mapping di ogni carattere nella stringa al relativo valore come un `wchar_t` (unsigned short). Altri valori validi per `setlocale` sono quelle voci disponibili nel [stringhe lingua](../c-runtime-library/language-strings.md) elenco. Ad esempio, generare:  
  
```  
#pragma setlocale("dutch")  
```  
  
 La possibilità di generare una stringa di linguaggio dipende dal supporto di ID lingua e dalla tabella codici nel computer.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)