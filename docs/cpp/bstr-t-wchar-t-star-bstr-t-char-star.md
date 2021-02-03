---
description: 'Altre informazioni su: _bstr_t:: wchar_t *, _bstr_t:: char*'
title: _bstr_t::wchar_t *, _bstr_t::char*
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::wchar_t*
- _bstr_t::char*
helpviewer_keywords:
- operator wchar_t* [C++]
- operator char* [C++]
ms.openlocfilehash: b2e98ea4b62d4a2e346b552d31d66d23f301817c
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522547"
---
# <a name="_bstr_twchar_t-_bstr_tchar"></a>`_bstr_t::wchar_t*`, `_bstr_t::char*`

**Specifico di Microsoft**

Restituisce i `BSTR` caratteri come matrice di caratteri "narrow" o "wide".

## <a name="syntax"></a>Sintassi

```cpp
operator const wchar_t*( ) const throw( );
operator wchar_t*( ) const throw( );
operator const char*( ) const;
operator char*( ) const;
```

## <a name="remarks"></a>Osservazioni

Questi operatori possono essere utilizzati per estrarre i dati di tipo carattere incapsulati dall' `BSTR` oggetto. L'assegnazione di un nuovo valore al puntatore restituito non comporta la modifica dei `BSTR` dati originali.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)
