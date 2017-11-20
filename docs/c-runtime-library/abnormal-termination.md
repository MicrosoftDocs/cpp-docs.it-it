---
title: _abnormal_termination | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _abnormal_termination
apilocation:
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr120.dll
- msvcrt.dll
- msvcr80.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords: _abnormal_termination
dev_langs: C++
helpviewer_keywords: _abnormal_termination
ms.assetid: 952970a4-9586-4c3d-807a-db729448c91c
caps.latest.revision: "2"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 17dbe8079972626439f2706061258265303f5226
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="abnormaltermination"></a>_abnormal_termination
Indica se il blocco `__finally` di un'[istruzione try-finally](../cpp/try-finally-statement.md) viene inserito mentre il sistema esegue un elenco interno di gestori di terminazione.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
int   _abnormal_termination(  
   );  
```  
  
## <a name="return-value"></a>Valore restituito  
 `true` se il sistema sta eseguendo la *rimozione* dello stack; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Si tratta di una funzione interna utilizzata per gestire eccezioni di rimozione e non deve essere chiamata dal codice utente.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|_abnormal_termination|excpt.h|  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione try-finally](../cpp/try-finally-statement.md)