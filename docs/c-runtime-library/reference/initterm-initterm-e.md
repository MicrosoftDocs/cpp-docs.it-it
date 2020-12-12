---
description: 'Altre informazioni su: _initterm, _initterm_e'
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
ms.openlocfilehash: c9686504ae39f5aad1678430f4e4ad0054aabc36
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296394"
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

## <a name="remarks"></a>Commenti

Questi metodi vengono chiamati solo internamente durante l'inizializzazione di un programma C++. Non chiamare questi metodi in un programma.

Quando questi metodi procedono a una tabella di voci di funzione, ignorano le voci **null** e continuano.

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
