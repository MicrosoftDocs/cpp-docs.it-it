---
title: fwide | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- fwide
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
- fwide
dev_langs:
- C++
helpviewer_keywords:
- fwide function
ms.assetid: a4641f5b-d74f-4946-95d5-53a64610d28d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e38bce95a26bd8b128a048768870c63f7de9da9f
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fwide"></a>fwide
Non implementato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fwide(  
   FILE *stream,  
   int mode;  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` (ignorata).  
  
 `mode`  
 La nuova larghezza del flusso: positivo per carattere wide, negativo per byte, zero da lasciare invariato. (Questo valore viene ignorato).  
  
## <a name="return-value"></a>Valore restituito  
 Questa funzione attualmente restituisce semplicemente `mode`.  
  
## <a name="remarks"></a>Note  
 La versione corrente di questa funzione non è conforme allo standard.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fwide`|\<wchar.h>|  
  
 Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).