---
title: __dllonexit | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- __dllonexit
apilocation:
- msvcrt.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcr80.dll
- msvcr120.dll
- msvcr90.dll
- msvcr120_clr0400.dll
apitype: DLLExport
f1_keywords:
- __dllonexit
dev_langs:
- C++
helpviewer_keywords:
- __dllonexit
ms.assetid: 708f2ceb-f95c-46b0-a58d-d68b3fa36f12
caps.latest.revision: 4
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
ms.openlocfilehash: 147458732658b5e08efa880fc9e7e76ebcd7da63
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="dllonexit"></a>__dllonexit
Registra una routine da chiamare in fase di uscita.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_onexit_t __dllonexit(   _onexit_t func,  
   _PVFV **  pbegin,   
   _PVFV **  pend   
   )  
```  
  
#### <a name="parameters"></a>Parametri  
 `func`  
 Puntatore a una funzione da eseguire all'uscita.  
  
 `pbegin`  
 Puntatore a una variabile che indica l'inizio di un elenco di funzioni da eseguire in fase di disconnessione.  
  
 `pend`  
 Puntatore a una variabile che indica la fine di un elenco di funzioni da eseguire in fase di disconnessione.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore che indica la funzione dell'utente. In caso contrario, un puntore NULL.  
  
## <a name="remarks"></a>Note  
 La funzione `__dllonexit` è analoga alla funzione [OnExit](../c-runtime-library/reference/onexit-onexit-m.md) ad eccezione delle variabili globali usate da tale funzione che non sono visibili per questa routine. Al posto di variabili globali, questa funzione usa i parametri `pbegin` e `pend`.  
  
 Le funzioni `_onexit` e `atexit` in una DLL collegata a MSVCRT. LIB devono mantenere il proprio elenco atexit/_onexit. Questa routine rappresenta il lavoro che viene chiamato da tali DLL.  
  
 Il tipo `_PVFV` viene è definito come `typedef void (__cdecl *_PVFV)(void)`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|File obbligatorio|  
|-------------|-------------------|  
|__dllonexit|onexit.c|  
  
## <a name="see-also"></a>Vedere anche  
 [_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)
