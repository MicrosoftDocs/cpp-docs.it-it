---
title: _local_unwind2 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _local_unwind2
apilocation:
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr100.dll
- msvcr110.dll
- msvcr80.dll
- msvcr90.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- _local_unwind2
- local_unwind2
dev_langs:
- C++
helpviewer_keywords:
- _local_unwind2 function
- local_unwind2 function
ms.assetid: 44f1fa82-e01e-490f-a6e6-18fc6811c28c
caps.latest.revision: 5
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
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 1c78b86523c42553ceb7532f5f28bcda66893e8d
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="localunwind2"></a>_local_unwind2
Funzione CRT interna. Esegue tutti i gestori di terminazione elencati nella tabella di ambito indicata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _local_unwind2(  
   PEXCEPTION_REGISTRATION xr,  
   int stop  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `xr`  
 Un record di registrazione associato a una tabella di ambito.  
  
 [in] `stop`  
 Il livello lessicale che indica dove `_local_unwind2` verrà arrestata.  
  
## <a name="remarks"></a>Note  
 Questo metodo viene usato solo dall'ambiente di runtime. Non chiamare il metodo nel proprio codice.  
  
 Quando questo metodo esegue i gestori di terminazione, inizia al livello lessicale corrente e procede tra i livelli lessicali fino al raggiungimento del livello indicato da `stop`. Non esegue i gestori di terminazione al livello che viene indicato da `stop`.  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)
