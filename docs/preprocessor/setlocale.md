---
title: setlocale | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
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
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c52697fffb27e6fd25936f3c6566f027cc265c18
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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