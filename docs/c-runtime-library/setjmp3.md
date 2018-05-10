---
title: _setjmp3 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- _setjmp3
apilocation:
- msvcrt.dll
- msvcr90.dll
- msvcr110.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- setjmp3
- _setjmp3
dev_langs:
- C++
helpviewer_keywords:
- _setjmp3 function
- setjmp3 function
ms.assetid: 6129c2f3-8bac-4fdb-a827-44e1eebba500
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 04d06bd7728347770bd17c48abc9898f2a2467a4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="setjmp3"></a>_setjmp3
Funzione CRT interna. Nuova implementazione della funzione `setjmp`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _setjmp3(  
   OUT jmp_buf env,  
   int count,  
   (optional parameters)  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `env`  
 Indirizzo del buffer per l'archiviazione di informazioni sullo stato.  
  
 [in] `count`  
 Numero di `DWORD` aggiuntivi di informazioni archiviati in `optional parameters`.  
  
 [in] `optional parameters`  
 Dati aggiuntivi propagati da `setjmp` intrinseco. Il primo `DWORD` è un puntatore a funzione usato per rimuovere i dati in eccesso e tornare a uno stato di registro non volatile. Il secondo `DWORD` è il livello Try da ripristinare. Eventuali altri dati sono salvati nella matrice di dati generica in `jmp_buf`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
## <a name="remarks"></a>Note  
 Non usare questa funzione in un programma C++. Si tratta di una funzione intrinseca che non supporta C++. Per altre informazioni sull'uso di `setjmp`, vedere [Uso di setjmp/longjmp](../cpp/using-setjmp-longjmp.md).  
  
## <a name="requirements"></a>Requisiti  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [setjmp](../c-runtime-library/reference/setjmp.md)