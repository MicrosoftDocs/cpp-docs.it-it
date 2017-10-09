---
title: __p__fmode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- __p__fmode
apilocation:
- msvcr80.dll
- msvcr120.dll
- msvcr90.dll
- msvcrt.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- __p__fmode
dev_langs:
- C++
helpviewer_keywords:
- __p__fmode
ms.assetid: 1daa1394-81eb-43aa-a71b-4cc6acf3207b
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0a563385ecd1e773433e053cffbae24403eab6fc
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="pfmode"></a>__p__fmode
Punta alla variabile globale `_fmode` che specifica la *modalità di conversione di file* predefinita per operazioni di I/O dei file.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
int* __p__fmode(  
   );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore alla variabile globale `_fmode`.  
  
## <a name="remarks"></a>Note  
 La funzione `__p__fmode` è solo per uso interno e non deve essere chiamata dal codice utente.  
  
 La modalità di conversione dei file specifica la conversione `binary` o `text` per le operazioni di I/O [_open](../c-runtime-library/reference/open-wopen.md) e [_pipe](../c-runtime-library/reference/pipe.md). Per altre informazioni, vedere [_fmode](../c-runtime-library/fmode.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|__p\__fmode|stdlib.h|
