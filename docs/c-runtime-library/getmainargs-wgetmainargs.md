---
title: __getmainargs, __wgetmainargs | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- __wgetmainargs
- __getmainargs
apilocation:
- msvcr100.dll
- msvcrt.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcr110.dll
- msvcr90.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- __wgetmainargs
- __getmainargs
dev_langs:
- C++
helpviewer_keywords:
- __wgetmainargs
- __getmainargs
ms.assetid: f72f54eb-9509-4bdf-8752-40fc49055439
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 13707791b78de2c000535d60ed3f298046e4576c
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
ms.locfileid: "34451286"
---
# <a name="getmainargs-wgetmainargs"></a>__getmainargs, __wgetmainargs
Richiama l'analisi della riga di comando e copia gli argomenti nel `main()` tramite i puntatori passati.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
int __getmainargs(  
    int * _Argc,   
   char *** _Argv,   
   char *** _Env,   
   int _DoWildCard,  
_startupinfo * _StartInfo);  
  
 int __wgetmainargs (  
   int *_Argc,  
   wchar_t ***_Argv,  
   wchar_t ***_Env,  
   int _DoWildCard,  
   _startupinfo * _StartInfo)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `_Argc`  
 Un Integer contenente il numero di argomenti che seguono in `argv`. Il parametro `argc` è sempre maggiore di o uguale a 1.  
  
 `_Argv`  
 Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `argv[0]` è il comando con cui il programma viene richiamato, argv[1] è il primo argomento della riga di comando e così via, fino a argv[argc] che è sempre **NULL**. Il primo argomento della riga di comando è sempre `argv[1]` e l'ultimo è `argv[argc - 1]`.  
  
 `_Env`  
 Una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da una voce **NULL**.  
  
 `_DoWildCard`  
 Un Integer che, se impostato su 1, espande i caratteri jolly negli argomenti della riga di comando o, se impostato su 0, non esegue alcuna operazione.  
  
 `_StartInfo`  
 Altre informazioni da passare alla DLL CRT.  
  
## <a name="return-value"></a>Valore restituito  
 0 se ha esito positivo; un valore negativo sa ha esito negativo.  
  
## <a name="remarks"></a>Note  
 Utilizzare `__getmainargs` sulle piattaforme di caratteri non wide e `__wgetmainargs` sulle piattaforme di caratteri wide (Unicode).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|__getmainargs|internal.h|  
|__wgetmainargs|internal.h|