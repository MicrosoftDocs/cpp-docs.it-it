---
title: Funzioni di callback utilizzate da MFC
ms.date: 11/04/2016
helpviewer_keywords:
- callback functions [MFC], MFC
- MFC, callback functions
- functions [MFC], callback
- callback functions [MFC]
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
ms.openlocfilehash: 8d84f939795e768c6b1356dcd8dc291421aedfdc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371131"
---
# <a name="callback-functions-used-by-mfc"></a>Funzioni di callback utilizzate da MFC

Nella libreria Microsoft Foundation Class vengono visualizzate tre funzioni di callback. Queste funzioni di callback vengono passate a [CDC::EnumObjects](../../mfc/reference/cdc-class.md#enumobjects), [CDC::GrayString](../../mfc/reference/cdc-class.md#graystring)e [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc). Si noti che tutte le funzioni di callback devono intercettare le eccezioni MFC prima di tornare a Windows, poiché le eccezioni non possono essere generate oltre i limiti di callback. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

|Nome||
|----------|-----------------|
|[Funzione di callback per CDC::EnumObjects](#enum_objects)||
|[Funzione di callback per CDC::GrayString](#graystring)||
|[Funzione di callback per CDC::SetAbortProc](#setabortproc)||

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="callback-function-for-cdcenumobjects"></a><a name="enum_objects"></a>Funzione di callback per CDC::EnumObjects

Il nome *ObjectFunc* è un segnaposto per il nome della funzione fornita dall'applicazione.

### <a name="syntax"></a>Sintassi

```
int CALLBACK EXPORT ObjectFunc(
    LPSTR lpszLogObject,
    LPSTR* lpData);
```

### <a name="parameters"></a>Parametri

*lpszLogObject*<br/>
Punta a una struttura di dati [LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen) o [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) che contiene informazioni sugli attributi logici dell'oggetto.

*lpDati*<br/>
Punta ai dati forniti dall'applicazione passati alla funzione `EnumObjects`.

### <a name="return-value"></a>Valore restituito

La funzione di callback restituisce un **oggetto int**. Il valore di questo valore restituito è definito dall'utente. Se la funzione di callback restituisce 0, `EnumObjects` arresta l'enumerazione prima.

### <a name="remarks"></a>Osservazioni

Il nome effettivo deve essere esportato.

## <a name="callback-function-for-cdcgraystring"></a><a name="graystring"></a>Callback Function for CDC::GrayString

*OutputFunc* è un segnaposto per il nome della funzione di callback fornita dall'applicazione.

### <a name="syntax"></a>Sintassi

```
BOOL CALLBACK EXPORT OutputFunc(
    HDC hDC,
    LPARAM lpData,
    int nCount);
```

### <a name="parameters"></a>Parametri

*Hdc*<br/>
Identifica un contesto di periferica di memoria con `nWidth` una `nHeight` `GrayString`bitmap di almeno la larghezza e l'altezza specificate da e da .

*lpDati*<br/>
Punta alla stringa di caratteri da tracciare.

*nConteggio*<br/>
Specifica il numero di caratteri da restituire.

### <a name="return-value"></a>Valore restituito

Il valore restituito della funzione di callback deve essere TRUE per indicare l'esito positivo. in caso contrario è FALSO.

### <a name="remarks"></a>Osservazioni

La funzione di callback (*OutputFunc*) deve disegnare un'immagine relativa alle coordinate (0,0) anziché (*x*, *y*).

## <a name="callback-function-for-cdcsetabortproc"></a><a name="setabortproc"></a>Funzione di callback per CDC::SetAbortProc

Il nome *AbortFunc* è un segnaposto per il nome della funzione fornita dall'applicazione.

### <a name="syntax"></a>Sintassi

```
BOOL CALLBACK EXPORT AbortFunc(
    HDC hPr,
    int code);
```

### <a name="parameters"></a>Parametri

*Hpr*<br/>
Identifica il contesto di dispositivo.

*Codice*<br/>
Specifica se si è verificato un errore. È 0 se non si è verificato alcun errore. È SP_OUTOFDISK se Print Manager è attualmente esaurito e più spazio su disco sarà disponibile se l'applicazione è in attesa. Se il *codice* è SP_OUTOFDISK, l'applicazione non deve interrompere il processo di stampa. In caso contrario, deve cedere a `PeekMessage` `GetMessage` Print Manager chiamando la funzione o Windows.

### <a name="return-value"></a>Valore restituito

Il valore restituito della funzione abort-handler è diverso da zero se il processo di stampa deve continuare e 0 se viene annullato.

### <a name="remarks"></a>Osservazioni

Il nome effettivo deve essere esportato come descritto nella sezione Osservazioni di [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc).

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](structures-styles-callbacks-and-message-maps.md)<br/>
[CDC::EnumObjects](../../mfc/reference/cdc-class.md#enumobjects)<br/>
[CDC::SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc)<br/>
[CDC::StringaGrigio](../../mfc/reference/cdc-class.md#graystring)
