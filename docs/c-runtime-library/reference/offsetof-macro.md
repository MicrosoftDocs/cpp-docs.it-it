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
ms.workload: cplusplus
ms.openlocfilehash: d99947615f2f24116f3d9b64e94daba60c848ec4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)