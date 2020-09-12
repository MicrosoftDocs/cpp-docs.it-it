---
title: Funzioni di callback utilizzate da MFC
ms.date: 11/04/2016
helpviewer_keywords:
- callback functions [MFC], MFC
- MFC, callback functions
- functions [MFC], callback
- callback functions [MFC]
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
ms.openlocfilehash: 553e87320828590c9e1e9204b54622f2f1ca6d80
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040886"
---
# <a name="callback-functions-used-by-mfc"></a>Funzioni di callback utilizzate da MFC

Tre funzioni di callback vengono visualizzate nel libreria Microsoft Foundation Class. Queste funzioni di callback vengono passate a [CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects), [CDC:: GrayString](../../mfc/reference/cdc-class.md#graystring)e [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc). Si noti che tutte le funzioni di callback devono intercettare le eccezioni MFC prima di tornare a Windows, perché non è possibile generare eccezioni tra i limiti di callback. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

[Funzione di callback per CDC:: EnumObjects](#enum_objects)\
[Funzione di callback per CDC:: GrayString](#graystring)\
[Funzione di callback per CDC::SetAbortProc](#setabortproc)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="callback-function-for-cdcenumobjects"></a><a name="enum_objects"></a> Funzione di callback per CDC:: EnumObjects

Il nome del *ObjectFunc* è un segnaposto per il nome della funzione fornito dall'applicazione.

### <a name="syntax"></a>Sintassi

```
int CALLBACK EXPORT ObjectFunc(
    LPSTR lpszLogObject,
    LPSTR* lpData);
```

### <a name="parameters"></a>Parametri

*lpszLogObject*<br/>
Punta a una struttura di dati [LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen) o [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) che contiene informazioni sugli attributi logici dell'oggetto.

*lpData*<br/>
Punta ai dati forniti dall'applicazione passati alla funzione `EnumObjects`.

### <a name="return-value"></a>Valore restituito

La funzione di callback restituisce un oggetto **`int`** . Il valore restituito è definito dall'utente. Se la funzione di callback restituisce 0, `EnumObjects` arresta l'enumerazione prima.

### <a name="remarks"></a>Commenti

Il nome effettivo deve essere esportato.

## <a name="callback-function-for-cdcgraystring"></a><a name="graystring"></a> Funzione di callback per CDC:: GrayString

*OutputFunc* è un segnaposto per il nome della funzione di callback fornita dall'applicazione.

### <a name="syntax"></a>Sintassi

```
BOOL CALLBACK EXPORT OutputFunc(
    HDC hDC,
    LPARAM lpData,
    int nCount);
```

### <a name="parameters"></a>Parametri

*hDC*<br/>
Identifica un contesto di dispositivo di memoria con una bitmap di almeno la larghezza e l'altezza specificate da `nWidth` e `nHeight` a `GrayString` .

*lpData*<br/>
Punta alla stringa di caratteri da tracciare.

*nCount*<br/>
Specifica il numero di caratteri da restituire.

### <a name="return-value"></a>Valore restituito

Il valore restituito della funzione di callback deve essere TRUE per indicare l'esito positivo; in caso contrario, è FALSE.

### <a name="remarks"></a>Commenti

La funzione di callback (*OutputFunc*) deve creare un'immagine relativa alle coordinate (0, 0) anziché (*x*, *y*).

## <a name="callback-function-for-cdcsetabortproc"></a><a name="setabortproc"></a> Funzione di callback per CDC:: SetAbortProc

Il nome *AbortFunc* è un segnaposto per il nome della funzione fornito dall'applicazione.

### <a name="syntax"></a>Sintassi

```
BOOL CALLBACK EXPORT AbortFunc(
    HDC hPr,
    int code);
```

### <a name="parameters"></a>Parametri

*hPr*<br/>
Identifica il contesto di dispositivo.

*code*<br/>
Specifica se si è verificato un errore. È 0 se non si è verificato alcun errore. È SP_OUTOFDISK se lo spazio su disco del gestore di stampa è esaurito e se l'applicazione è in attesa, sarà disponibile più spazio su disco. Se il *codice* è SP_OUTOFDISK, l'applicazione non deve interrompere il processo di stampa. In caso contrario, deve restituire al gestore di stampa chiamando la `PeekMessage` `GetMessage` funzione o Windows.

### <a name="return-value"></a>Valore restituito

Il valore restituito dalla funzione del gestore di interruzione è diverso da zero se il processo di stampa deve continuare e 0 se è stato annullato.

### <a name="remarks"></a>Commenti

Il nome effettivo deve essere esportato, come descritto nella sezione Note di [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc).

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](structures-styles-callbacks-and-message-maps.md)<br/>
[CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects)<br/>
[CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc)<br/>
[CDC:: GrayString](../../mfc/reference/cdc-class.md#graystring)
