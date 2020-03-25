---
title: _com_error::ErrorMessage
ms.date: 11/04/2016
f1_keywords:
- _com_error::ErrorMessage
helpviewer_keywords:
- ErrorMessage method [C++]
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
ms.openlocfilehash: b5e884956b5a51d3c714f1a81dc6945409f74f4b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180667"
---
# <a name="_com_errorerrormessage"></a>_com_error::ErrorMessage

**Sezione specifica Microsoft**

Recupera il messaggio stringa per HRESULT archiviato nell'oggetto `_com_error`.

## <a name="syntax"></a>Sintassi

```
const TCHAR * ErrorMessage( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il messaggio stringa per HRESULT registrato nell'oggetto `_com_error`. Se HRESULT è un [wCode](../cpp/com-error-wcode.md)a 16 bit mappato, viene restituito un messaggio generico "`IDispatch error #<wCode>`". Se non viene trovato nessun messaggio, viene restituito un messaggio generico "`Unknown error #<hresult>`". La stringa restituita è una stringa Unicode o multibyte, a seconda dello stato della macro _UNICODE.

## <a name="remarks"></a>Osservazioni

Recupera il testo del messaggio di sistema appropriato per HRESULT registrato nell'oggetto `_com_error`. Il testo del messaggio di sistema viene ottenuto chiamando la funzione [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) di Win32. La stringa restituita è allocata da `FormatMessage` API e viene rilasciata quando l'oggetto `_com_error` viene eliminato definitivamente.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
