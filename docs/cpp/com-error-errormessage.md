---
title: _com_error::ErrorMessage | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::ErrorMessage
dev_langs:
- C++
helpviewer_keywords:
- ErrorMessage method [C++]
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: afe11d570658ee077e8fdffe925349731f1921fd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46111368"
---
# <a name="comerrorerrormessage"></a>_com_error::ErrorMessage

**Sezione specifica Microsoft**

Recupera il messaggio stringa per HRESULT archiviate nel `_com_error` oggetto.

## <a name="syntax"></a>Sintassi

```
const TCHAR * ErrorMessage( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce la stringa di messaggio per il valore HRESULT registrati all'interno di `_com_error` oggetto. Se il valore HRESULT è mappata 16 bit [wCode](../cpp/com-error-wcode.md), quindi un messaggio generico "`IDispatch error #<wCode>`" viene restituito. Se non viene trovato nessun messaggio, viene restituito un messaggio generico "`Unknown error #<hresult>`". La stringa restituita è sia una stringa Unicode o multibyte, a seconda dello stato della macro Unicode.

## <a name="remarks"></a>Note

Recupera il testo del messaggio di sistema appropriato per HRESULT registrati all'interno di `_com_error` oggetto. Il testo del messaggio di sistema viene ottenuto mediante una chiamata Win32 [FormatMessage](/windows/desktop/api/winbase/nf-winbase-formatmessage) (funzione). La stringa restituita è allocata da `FormatMessage` API e viene rilasciata quando l'oggetto `_com_error` viene eliminato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)