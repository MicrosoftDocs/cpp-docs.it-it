---
title: __set_app_type | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- __set_app_type
- _set_app_type
apilocation:
- msvcr90.dll
- msvcr100.dll
- msvcr110.dll
- msvcr80.dll
- msvcrt.dll
- msvcr120.dll
- msvcr110_clr0400.dll
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- __set_app_type
dev_langs:
- C++
helpviewer_keywords:
- __set_app_type
ms.assetid: f0ac0f4d-70e6-4e96-9e43-eb9d1515490c
caps.latest.revision: 2
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 4eb5a061e2468c9590dd49c7ae2306091b397aa3
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="setapptype"></a>__set_app_type
Imposta il tipo di applicazione corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
void __set_app_type (  
   int at  
   )  
```  
  
#### <a name="parameters"></a>Parametri  
 `at`  
 Un valore che indica il tipo di applicazione. I valori possibili sono:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|_UNKNOWN_APP|Tipo di applicazione sconosciuto.|  
|_CONSOLE_APP|Applicazione console (riga di comando).|  
|_GUI_APP|Applicazione GUI (Windows).|  
  
## <a name="remarks"></a>Note  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|__set_app_type|internal.h|
