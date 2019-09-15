---
title: _initterm, _initterm_e
ms.date: 11/04/2016
api_name:
- _initterm_e
- _initterm
api_location:
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _initterm_e
- initterm
- _initterm
- initterm_e
helpviewer_keywords:
- initterm function
- initterm_e function
- _initterm function
- _initterm_e function
ms.assetid: 85131efe-c747-429a-8897-bcdedb000172
ms.openlocfilehash: 7e85494bf6c8215d03602ee112e1ff2c0f1cf6f2
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70954623"
---
# <a name="_initterm-_initterm_e"></a>_initterm, _initterm_e

Metodi interni che procedono a una tabella di puntatori funzione e li inizializzano.

Il primo puntatore è la posizione iniziale nella tabella e il secondo puntatore è la posizione finale.

## <a name="syntax"></a>Sintassi

```C
void __cdecl _initterm(
   PVFV *,
   PVFV *
);

int __cdecl _initterm_e(
   PVFV *,
   PVFV *
);
```

## <a name="return-value"></a>Valore restituito

Un codice di errore diverso da zero se un'inizializzazione ha esito negativo e genera un errore; 0 se non si verificano errori.

## <a name="remarks"></a>Note

Questi metodi vengono chiamati solo internamente durante l'inizializzazione di un programma C++. Non chiamare questi metodi in un programma.

Quando questi metodi procedono a una tabella di voci di funzione, ignorano le voci **null** e continuano.

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
