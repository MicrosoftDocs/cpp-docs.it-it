---
title: Funzioni di callback utilizzate da MFC
ms.date: 11/04/2016
helpviewer_keywords:
- callback functions [MFC], MFC
- MFC, callback functions
- functions [MFC], callback
- callback functions [MFC]
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
ms.openlocfilehash: 84581a4a1147a5b0b046e1bf2fbe412bffe9c662
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65612246"
---
# <a name="callback-functions-used-by-mfc"></a>Funzioni di callback utilizzate da MFC

Tre funzioni di callback vengono visualizzati nella libreria di classi Microsoft Foundation. Queste funzioni di callback vengono passate a [CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects), [CDC:: graystring](../../mfc/reference/cdc-class.md#graystring), e [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc). Si noti che tutte le funzioni di callback necessario intercettare le eccezioni MFC prima della restituzione di Windows, poiché non possono essere generate eccezioni attraverso i limiti di callback. Per altre informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

|Nome||
|----------|-----------------|
|[Funzione di callback per CDC::EnumObjects](#enum_objects)||
|[Funzione di callback per CDC::GrayString](#graystring)||
|[Funzione di callback per CDC::SetAbortProc](#setabortproc)||

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="enum_objects"></a> Funzione di callback per CDC:: EnumObjects

Il *ObjectFunc* nome è un segnaposto per il nome della funzione fornita dall'applicazione.

### <a name="syntax"></a>Sintassi

```
int CALLBACK EXPORT ObjectFunc(
    LPSTR lpszLogObject,
    LPSTR* lpData);
```

### <a name="parameters"></a>Parametri

*lpszLogObject*<br/>
Punta a un [LOGPEN](/windows/desktop/api/Wingdi/ns-wingdi-taglogpen) oppure [LOGBRUSH](/windows/desktop/api/wingdi/ns-wingdi-taglogbrush) struttura dei dati che contiene informazioni sugli attributi logici dell'oggetto.

*lpData*<br/>
Punta ai dati forniti dall'applicazione passati alla funzione `EnumObjects`.

### <a name="return-value"></a>Valore restituito

La funzione di callback restituisce un **int**. Il valore restituito è definito dall'utente. Se la funzione di callback restituisce 0, `EnumObjects` arresta l'enumerazione prima.

### <a name="remarks"></a>Note

Il nome effettivo deve essere esportato.

## <a name="graystring"></a>  Funzione di callback per CDC:: graystring

*OutputFunc* è un segnaposto per il nome di funzione di callback fornita dall'applicazione.

### <a name="syntax"></a>Sintassi

```
BOOL CALLBACK EXPORT OutputFunc(
    HDC hDC,
    LPARAM lpData,
    int nCount);
```

### <a name="parameters"></a>Parametri

*hDC*<br/>
Identifica un contesto di dispositivo di memoria con una bitmap pari almeno alla larghezza e altezza specificati da `nWidth` e `nHeight` a `GrayString`.

*lpData*<br/>
Punta alla stringa di caratteri da tracciare.

*nCount*<br/>
Specifica il numero di caratteri da restituire.

### <a name="return-value"></a>Valore restituito

Valore restituito della funzione di callback deve essere TRUE per indicare l'esito positivo; in caso contrario è FALSE.

### <a name="remarks"></a>Note

La funzione di callback (*OutputFunc*) è necessario disegnare un'immagine rispetto alle coordinate (0,0) anziché (*x*, *y*).

## <a name="setabortproc"></a>  Funzione di callback per CDC:: SETABORTPROC

Il nome *AbortFunc* è un segnaposto per il nome della funzione fornita dall'applicazione.

### <a name="syntax"></a>Sintassi

```
BOOL CALLBACK EXPORT AbortFunc(
    HDC hPr,
    int code);
```

### <a name="parameters"></a>Parametri

*hPr*<br/>
Identifica il contesto di dispositivo.

*codice*<br/>
Specifica se si è verificato un errore. È 0 se si è verificato alcun errore. È SP_OUTOFDISK Print Manager è attualmente spazio su disco insufficiente e più spazio su disco sarà disponibile se l'applicazione resta in attesa. Se *codice* è SP_OUTOFDISK, l'applicazione non è necessario interrompere il processo di stampa. Se non è presente, deve restituire alla gestione stampa chiamando il `PeekMessage` o `GetMessage` funzione Windows.

### <a name="return-value"></a>Valore restituito

Il valore restituito della funzione del gestore di interruzione è diverso da zero se deve continuare il processo di stampa e 0 se viene annullato.

### <a name="remarks"></a>Note

Il nome effettivo deve essere esportato come descritto nella sezione Osservazioni di [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc).

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](structures-styles-callbacks-and-message-maps.md)<br/>
[CDC::EnumObjects](../../mfc/reference/cdc-class.md#enumobjects)<br/>
[CDC::SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc)<br/>
[CDC::GrayString](../../mfc/reference/cdc-class.md#graystring)
