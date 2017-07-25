---
title: __p__commode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- __p__commode
apilocation:
- msvcr110.dll
- msvcrt.dll
- msvcr120.dll
- msvcr90.dll
- msvcr100.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- __p__commode
dev_langs:
- C++
helpviewer_keywords:
- __p__commode
ms.assetid: 4380acb8-e3e4-409c-a60f-6205ac5189ce
caps.latest.revision: 2
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
ms.openlocfilehash: cdb058b0173e15d17f47a90d6101aca65954c814
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="pcommode"></a>__p__commode
Punta alla variabile globale `_commode` che specifica la *modalità di commit di file* predefinita per operazioni di I/O dei file.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
int * __p__commode(  
   );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore alla variabile globale `_commode`.  
  
## <a name="remarks"></a>Note  
 La funzione `__p__commode` è solo per uso interno e non deve essere chiamata dal codice utente.  
  
 La modalità di commit di file specifica quando i dati critici vengono scritti nel disco. Per altre informazioni, vedere [fflush](../c-runtime-library/reference/fflush.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|__p\__commode|internal.h|
