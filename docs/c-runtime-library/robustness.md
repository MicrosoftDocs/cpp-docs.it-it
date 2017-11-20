---
title: Efficienza | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: c.runtime
dev_langs: C++
helpviewer_keywords: robustness [CRT]
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 27412403fe6ce0f1884a2ea99790376acb1c5236
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="robustness"></a>Efficienza
Usare le funzioni della libreria di runtime C seguenti per migliorare l'efficienza del programma  
  
### <a name="run-time-robustness-functions"></a>Funzioni per efficienza del runtime  
  
|Funzione|Uso|  
|--------------|---------|  
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Trasferisce il controllo al meccanismo di gestione degli errori se l'operatore `new` non riesce ad allocare la memoria.|  
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++.|  
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [terminate](../c-runtime-library/reference/terminate-crt.md).|  
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [unexpected](../c-runtime-library/reference/unexpected-crt.md).|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [SetUnhandledExceptionFilter](http://msdn.microsoft.com/library/windows/desktop/ms680634.aspx)