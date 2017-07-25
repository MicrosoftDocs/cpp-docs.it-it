---
title: _CIlog | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CIlog
apilocation:
- msvcr90.dll
- msvcr120.dll
- msvcr80.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcrt.dll
apitype: DLLExport
f1_keywords:
- _CIlog
- CIlog
dev_langs:
- C++
helpviewer_keywords:
- _CIlog intrinsic
- CIlog intrinsic
ms.assetid: 23503854-ddaa-4fe0-a4a3-7fbb3a43bdec
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: fde46bca1e6befb0129732c16f2024b6ee6d9b86
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="cilog"></a>_CIlog
Calcola il logaritmo naturale del primo valore dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _CIlog();  
```  
  
## <a name="remarks"></a>Note  
 Questa versione della funzione `log` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.  
  
 Il valore risultante viene inserito all'inizio dello stack.  
  
## <a name="requirements"></a>Requisiti  
 **Piattaforma:** x86  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)
