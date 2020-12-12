---
description: 'Altre informazioni su: __getmainargs, __wgetmainargs'
title: __getmainargs, __wgetmainargs
ms.date: 11/04/2016
api_name:
- __wgetmainargs
- __getmainargs
api_location:
- msvcr100.dll
- msvcrt.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcr110.dll
- msvcr90.dll
- msvcr120.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __wgetmainargs
- __getmainargs
helpviewer_keywords:
- __wgetmainargs
- __getmainargs
ms.assetid: f72f54eb-9509-4bdf-8752-40fc49055439
ms.openlocfilehash: 6f06f83a72d037df6a0973b24ac92ecade6c21eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181748"
---
# <a name="__getmainargs-__wgetmainargs"></a>__getmainargs, __wgetmainargs

Richiama l'analisi della riga di comando e copia gli argomenti nel `main()` tramite i puntatori passati.

## <a name="syntax"></a>Sintassi

```cpp
int __getmainargs(
    int * _Argc,
   char *** _Argv,
   char **_ _Env,
   int _DoWildCard,
_startupinfo _ _StartInfo);

int __wgetmainargs (
   int *_Argc,
   wchar_t ***_Argv,
   wchar_t **__Env,
   int _DoWildCard,
   _startupinfo _ _StartInfo)
```

#### <a name="parameters"></a>Parametri

`_Argc`<br/>
Un Integer contenente il numero di argomenti che seguono in `argv`. Il parametro `argc` è sempre maggiore di o uguale a 1.

`_Argv`<br/>
Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `argv[0]` è il comando con cui il programma viene richiamato, argv [1] è il primo argomento della riga di comando e così via, fino a argv [argc], che è sempre **null**. Il primo argomento della riga di comando è sempre `argv[1]` e l'ultimo è `argv[argc - 1]`.

`_Env`<br/>
Una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da una voce **null** .

`_DoWildCard`<br/>
Un Integer che, se impostato su 1, espande i caratteri jolly negli argomenti della riga di comando o, se impostato su 0, non esegue alcuna operazione.

`_StartInfo`<br/>
Altre informazioni da passare alla DLL CRT.

## <a name="return-value"></a>Valore restituito

0 se ha esito positivo; un valore negativo sa ha esito negativo.

## <a name="remarks"></a>Commenti

Utilizzare `__getmainargs` sulle piattaforme di caratteri non wide e `__wgetmainargs` sulle piattaforme di caratteri wide (Unicode).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__getmainargs|internal.h|
|__wgetmainargs|internal.h|
