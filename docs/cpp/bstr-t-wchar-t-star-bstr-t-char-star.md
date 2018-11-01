---
title: _bstr_t::wchar_t *, _bstr_t::char*
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::wchar_t*
- _bstr_t::char*
helpviewer_keywords:
- operator wchar_t* [C++]
- operator char* [C++]
ms.assetid: acd9f4a7-b427-42c2-aaae-acae21cab317
ms.openlocfilehash: da1e93a4bed195f2951e47f52bf2016cff1df3ab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50572948"
---
# <a name="bstrtwchart-bstrtchar"></a>_bstr_t::wchar_t *, _bstr_t::char*

**Sezione specifica Microsoft**

Vengono restituiti i caratteri BSTR come matrice di caratteri "narrow" o "wide".

## <a name="syntax"></a>Sintassi

```
operator const wchar_t*( ) const throw( ); 
operator wchar_t*( ) const throw( ); 
operator const char*( ) const; 
operator char*( ) const;
```

## <a name="remarks"></a>Note

Questi operatori possono essere utilizzati per estrarre i dati del carattere che è incapsulato dall'oggetto `BSTR`. Assegnare un nuovo al puntatore restituito non modifica i dati BSTR di origine.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)