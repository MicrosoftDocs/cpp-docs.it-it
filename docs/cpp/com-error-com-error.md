---
title: _com_error::_com_error
ms.date: 11/04/2016
f1_keywords:
- _com_error::_com_error
helpviewer_keywords:
- _com_error method [C++]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
ms.openlocfilehash: 8856289605cce430fdab36d6e3e8b743190e02ea
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155124"
---
# <a name="comerrorcomerror"></a>_com_error::_com_error

**Sezione specifica Microsoft**

Costruisce un **com_error** oggetto.

## <a name="syntax"></a>Sintassi

```
_com_error(
   HRESULT hr,
   IErrorInfo* perrinfo = NULL,
   bool fAddRef=false) throw( );

_com_error( const _com_error& that ) throw( );
```

#### <a name="parameters"></a>Parametri

*hr*<br/>
Informazioni su HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

*fAddRef*<br/>
Il valore predefinito fa sì che il costruttore di chiamare AddRef su non null `IErrorInfo` interfaccia. In questo modo corretto nel conteggio dei riferimenti nel caso comune in cui la proprietà dell'interfaccia viene passata il **com_error** dell'oggetto, ad esempio:

```cpp
throw _com_error(hr, perrinfo);
```

Se non si desidera il codice per trasferire la proprietà per il **com_error** oggetto e il `AddRef` è necessario per compensare la `Release` nel **com_error** distruttore, costruire l'oggetto come di seguito:

```cpp
_com_error err(hr, perrinfo, true);
```

*that*<br/>
Un oggetto esistente **com_error** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore crea un nuovo oggetto dato un oggetto HRESULT e facoltative `IErrorInfo` oggetto. Il secondo crea una copia di un oggetto esistente **com_error** oggetto.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)