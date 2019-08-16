---
title: _com_error::ErrorMessage
ms.date: 11/04/2016
f1_keywords:
- _com_error::ErrorMessage
helpviewer_keywords:
- ErrorMessage method [C++]
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
ms.openlocfilehash: 44fc9755cd69050ea82145636f01614258943794
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500584"
---
# <a name="_com_errorerrormessage"></a>_com_error::ErrorMessage

**Sezione specifica Microsoft**

Recupera il messaggio stringa per HRESULT archiviato nell' `_com_error` oggetto.

## <a name="syntax"></a>Sintassi

```
const TCHAR * ErrorMessage( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il messaggio stringa per il valore HRESULT registrato nell' `_com_error` oggetto. Se HRESULT è un [wCode](../cpp/com-error-wcode.md)a 16 bit mappato, viene restituito un messaggio generico`IDispatch error #<wCode>`"". Se non viene trovato nessun messaggio, viene restituito un messaggio generico "`Unknown error #<hresult>`". La stringa restituita è una stringa Unicode o multibyte, a seconda dello stato della macro _UNICODE.

## <a name="remarks"></a>Note

Recupera il testo del messaggio di sistema appropriato per HRESULT registrato `_com_error` nell'oggetto. Il testo del messaggio di sistema viene ottenuto chiamando la funzione [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) di Win32. La stringa restituita è allocata da `FormatMessage` API e viene rilasciata quando l'oggetto `_com_error` viene eliminato definitivamente.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)