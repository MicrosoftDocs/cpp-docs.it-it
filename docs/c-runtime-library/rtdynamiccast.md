---
title: __RTDynamicCast | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- __RTDynamicCast
apilocation:
- msvcr90.dll
- msvcr110.dll
- msvcr120.dll
- msvcrt.dll
- msvcr100.dll
- msvcr80.dll
- msvcr110_clr0400.dll
apitype: DLLExport
f1_keywords:
- __RTDynamicCast
dev_langs:
- C++
helpviewer_keywords:
- __RTDynamicCast
ms.assetid: 56aa2d7a-aa47-46ef-830d-e37175611239
caps.latest.revision: 3
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
ms.openlocfilehash: ee7eea2815f3e836f862c9797ab46b909fef8cf8
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="rtdynamiccast"></a>__RTDynamicCast
Implementazione in fase di esecuzione dell'operatore [dynamic_cast](../cpp/dynamic-cast-operator.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
PVOID __RTDynamicCast (  
   PVOID inptr,   
   LONG VfDelta,  
   PVOID SrcType,  
   PVOID TargetType,   
   BOOL isReference  
   ) throw(...)  
```  
  
#### <a name="parameters"></a>Parametri  
 `inptr`  
 Puntatore a un oggetto polimorfico.  
  
 `VfDelta`  
 Offset del puntatore a funzione virtuale nell'oggetto.  
  
 `SrcType`  
 Tipo statico dell'oggetto puntato dal parametro `inptr`.  
  
 `TargetType`  
 Risultato di cast desiderato.  
  
 `isReference`  
 `true` se l'input è un riferimento; `false` se l'input è un puntatore.  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore al sotto-oggetto appropriato, in caso di esito positivo; in caso contrario, NULL.  
  
## <a name="exceptions"></a>Eccezioni  
 `bad_cast()` se l'input a `dynamic_cast<>` è un riferimento e il cast ha esito negativo.  
  
## <a name="remarks"></a>Note  
 Converte `inptr` in un oggetto del tipo `TargetType`. Il tipo di `inptr` deve essere un puntatore se `TargetType` è un puntatore o un l-value se `TargetType` è un riferimento. `TargetType` deve essere un puntatore o un riferimento a un tipo di classe definito in precedenza oppure un puntatore a void.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|__RTDynamicCast|rtti.h|
