---
title: __max | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- __max
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- max
- __max
dev_langs:
- C++
helpviewer_keywords:
- max macro
- maximum macro
- __max macro
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
caps.latest.revision: 12
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: a73c66cc0d1e49c514f8f451aa01a0c8ca7a9277
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="max"></a>__max
Restituisce il maggiore di due valori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
type __max(  
   type a,  
   type b   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `type`  
 Qualsiasi tipo di dati numerico.  
  
 `a, b`  
 Valori di qualsiasi tipo numerico da confrontare.  
  
## <a name="return-value"></a>Valore restituito  
 `__max` restituisce il maggiore degli argomenti.  
  
## <a name="remarks"></a>Note  
 La macro `__max` confronta due valori e restituisce il valore di quello maggiore. Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno. Il tipo di dati deve essere lo stesso per entrambi gli argomenti e il valore restituito.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`__max`|\<stdlib.h>|  
  
## <a name="example"></a>Esempio  
 Per altre informazioni, vedere l'esempio per [__min](../../c-runtime-library/reference/min.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [__min](../../c-runtime-library/reference/min.md)
