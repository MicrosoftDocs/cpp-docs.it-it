---
title: ___setlc_active_func, ___unguarded_readlc_active_add_func | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- ___setlc_active_func
- ___unguarded_readlc_active_add_func
apilocation:
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr110.dll
- msvcr80.dll
- msvcr120.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- ___unguarded_readlc_active_add_func
- ___setlc_active_func
dev_langs:
- C++
helpviewer_keywords:
- ___setlc_active_func
- ___unguarded_readlc_active_add_func
ms.assetid: 605ec4e3-81e5-4ece-935a-f434768cc702
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 532aac2e47a402ae04ba4d4bf4fcb133c997bd31
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32409735"
---
# <a name="setlcactivefunc-unguardedreadlcactiveaddfunc"></a>___setlc_active_func, ___unguarded_readlc_active_add_func
OBSOLETE. CRT esporta queste funzioni interne esclusivamente per mantenere la compatibilità binaria.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
int ___setlc_active_func(void);  
int * ___unguarded_readlc_active_add_func(void);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito non è rilevante.  
  
## <a name="remarks"></a>Note  
 Sebbene le funzioni CRT interne `___setlc_active_func` e `___unguarded_readlc_active_add_func` siano obsolete e non vengano più usate, vengono esportate dalla libreria CRT per mantenere la compatibilità binaria. Lo scopo originale di `___setlc_active_func` è quello di restituire il numero di chiamate alla funzione `setlocale` attualmente attive. Lo scopo originale di `___unguarded_readlc_active_add_func` è quello di restituire il numero di funzioni che fanno riferimento alle impostazioni locali senza bloccarle.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`___setlc_active_func`, `___unguarded_readlc_active_add_func`|none|  
  
## <a name="see-also"></a>Vedere anche  
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)