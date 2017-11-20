---
title: towctrans | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: towctrans
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords: towctrans
dev_langs: C++
helpviewer_keywords: towctrans function
ms.assetid: 1ed1e70d-7b31-490f-a7d9-42564b5924ca
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: fcd97b3af0bb7e469db18b1a7ff8290af5df1bc4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="towctrans"></a>towctrans
Trasforma un carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
wint_t towctrans(  
   wint_t c,  
   wctrans_t category   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Il carattere che si desidera trasformare.  
  
 `category`  
 Identificatore che contiene il valore restituito di [wctrans](../../c-runtime-library/reference/wctrans.md).  
  
## <a name="return-value"></a>Valore restituito  
 Il carattere `c`, dopo `towctrans` ha utilizzato la regola di trasformazione in `category`.  
  
## <a name="remarks"></a>Note  
 Il valore di `category` deve essere stato restituito da una chiamata precedente a [wctrans](../../c-runtime-library/reference/wctrans.md) con esito positivo.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`towctrans`|\<wctype.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere `wctrans` per un esempio di utilizzo di `towctrans`.  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)