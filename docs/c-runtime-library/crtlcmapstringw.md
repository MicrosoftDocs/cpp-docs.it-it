---
description: 'Altre informazioni su: __crtLCMapStringW'
title: __crtLCMapStringW
ms.date: 11/04/2016
api_name:
- __crtLCMapStringW
api_location:
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcr100.dll
- msvcrt.dll
- msvcr120.dll
- msvcr110.dll
- msvcr80.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __crtLCMapStringW
helpviewer_keywords:
- __crtLCMapStringW
ms.assetid: 45b4ac0e-438c-4fa3-b4d1-34195f4467d9
ms.openlocfilehash: 57b3f7e961de94d8a3dbd045a1fa1d74681cbfdc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246754"
---
# <a name="__crtlcmapstringw"></a>__crtLCMapStringW

Esegue il mapping di una stringa di caratteri a un'altra, eseguendo una trasformazione specificata dipendente dalle impostazioni locali. Questa funzione può essere anche utilizzata per generare una chiave di ordinamento per la stringa di input.

## <a name="syntax"></a>Sintassi

```cpp
int __crtLCMapStringW(
   LCID    Locale,
   DWORD   dwMapFlags,
   LPCWSTR lpSrcStr,
   int     cchSrc,
   LPWSTR  lpDestStr,
   int     cchDest)
```

#### <a name="parameters"></a>Parametri

*Impostazioni locali*<br/>
Identificatore delle impostazioni locali. Le impostazioni locali forniscono un contesto per il mapping di stringhe o la generazione di chiavi di ordinamento. Un'applicazione può utilizzare la macro `MAKELCID` per creare un identificatore delle impostazioni locali.

*dwMapFlags*<br/>
Il tipo di trasformazione da utilizzare durante il mapping di stringhe o la generazione di chiavi di ordinamento.

*lpSrcStr*<br/>
Puntatore a una stringa di origine di cui la funzione esegue il mapping o che la funzione utilizza per la generazione di chiavi di ordinamento. Si presuppone che questo parametro sia una stringa Unicode.

*cchSrc*<br/>
Dimensione, in caratteri, della stringa puntata dal parametro `lpSrcStr` . Questo conteggio può includere o meno la terminazione NULL.

Un valore `cchSrc` pari a -1 specifica che la stringa puntata da `lpSrcStr` ha terminazione Null. In tal caso e se questa funzione viene utilizzata nella modalità di mapping di stringhe, la funzione calcola la lunghezza della stringa e fa terminare con null la stringa mappata archiviata in `*lpDestStr`.

*lpDestStr*<br/>
Puntatore long a un buffer in cui la funzione archivia la stringa mappata o la chiave di ordinamento.

*cchDest*<br/>
Dimensione, in caratteri, del buffer puntato da `lpDestStr`.

## <a name="return-value"></a>Valore restituito

Se il valore di `cchDest` è diverso da zero, il numero di caratteri, o di byte se `LCMAP_SORTKEY` viene specificato, scritto nel buffer indica l'esito positivo. Questo conteggio include lo spazio per una terminazione NULL.

Se il valore di `cchDest` è zero, la dimensione del buffer in caratteri, o byte se `LCMAP_SORTKEY` viene specificato, richiesta per ricevere la stringa tradotta o la chiave di ordinamento indica l'esito positivo. Questa dimensione include lo spazio per una terminazione NULL.

Zero indica un errore. Per ottenere informazioni estese sull'errore, chiamare la funzione `GetLastError` .

## <a name="remarks"></a>Commenti

Se `cchSrc` è maggiore di zero e `lpSrcStr` è una stringa con terminazione null, `__crtLCMapStringW` imposta `cchSrc` sulla lunghezza della stringa. Quindi `__crtLCMapStringW` chiama la versione di stringa a caratteri wide (Unicode) della funzione `LCMapString` con i parametri specificati. Per altre informazioni sui parametri e sul valore restituito di questa funzione, vedere [LCMapString](/windows/win32/api/winnls/nf-winnls-lcmapstringw).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__crtLCMapStringW|awint.h|
