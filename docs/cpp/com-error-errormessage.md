---
description: 'Altre informazioni su: _com_error:: ErrorMessage'
title: _com_error::ErrorMessage
ms.date: 11/04/2016
f1_keywords:
- _com_error::ErrorMessage
helpviewer_keywords:
- ErrorMessage method [C++]
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
ms.openlocfilehash: e7f91882d55e629744df5f26f7dcc64df1dddb22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296004"
---
# <a name="_com_errorerrormessage"></a>_com_error::ErrorMessage

**Specifico di Microsoft**

Recupera il messaggio stringa per HRESULT archiviato nell' `_com_error` oggetto.

## <a name="syntax"></a>Sintassi

```
const TCHAR * ErrorMessage( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il messaggio stringa per il valore HRESULT registrato nell' `_com_error` oggetto. Se HRESULT è un [wCode](../cpp/com-error-wcode.md)a 16 bit mappato, viene restituito un messaggio generico " `IDispatch error #<wCode>` ". Se non viene trovato nessun messaggio, viene restituito un messaggio generico "`Unknown error #<hresult>`". La stringa restituita è una stringa Unicode o multibyte, a seconda dello stato della macro _UNICODE.

## <a name="remarks"></a>Commenti

Recupera il testo del messaggio di sistema appropriato per HRESULT registrato nell' `_com_error` oggetto. Il testo del messaggio di sistema viene ottenuto chiamando la funzione [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) di Win32. La stringa restituita è allocata da `FormatMessage` API e viene rilasciata quando l'oggetto `_com_error` viene eliminato definitivamente.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)
