---
title: _abnormal_termination | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- _abnormal_termination
apilocation:
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr120.dll
- msvcrt.dll
- msvcr80.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- _abnormal_termination
dev_langs:
- C++
helpviewer_keywords:
- _abnormal_termination
ms.assetid: 952970a4-9586-4c3d-807a-db729448c91c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f70520b60ccfaf1af5b223bcb4ea1a90639aa484
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32385553"
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