---
title: Macro offsetof | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
f1_keywords: offsetof
dev_langs: C++
helpviewer_keywords:
- structure members, offset
- offsetof macro
ms.assetid: f3b4eb16-a882-4d38-afc9-eebd976a7352
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 47243b64519540397573a47180dca5eed25f4c57
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="offsetof-macro"></a>Macro offsetof
Recupera l'offset di un membro dall'inizio della relativa struttura padre.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      size_t offsetof(  
   structName,  
   memberName   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *structName*  
 Nome della struttura di dati padre.  
  
 `memberName`  
 Nome del membro nella struttura di dati padre per il quale determinare l'offset.  
  
## <a name="return-value"></a>Valore restituito  
 `offsetof` restituisce l'offset in byte del membro specificato dall'inizio della struttura di dati padre. Viene definito per i campi di bit.  
  
## <a name="remarks"></a>Note  
 La macro `offsetof` restituisce l'offset in byte di `memberName` dall'inizio della struttura specificata da *structName* come valore di tipo `size_t`. È possibile specificare tipi con la parola chiave `struct`.  
  
> [!NOTE]
>  `offsetof` non è una funzione e non può essere descritta usando un prototipo C.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`offsetof`|\<stddef.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)