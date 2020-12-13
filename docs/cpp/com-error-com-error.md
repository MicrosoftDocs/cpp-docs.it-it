---
description: 'Altre informazioni su: _com_error:: _com_error'
title: _com_error::_com_error
ms.date: 11/04/2016
f1_keywords:
- _com_error::_com_error
helpviewer_keywords:
- _com_error method [C++]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
ms.openlocfilehash: 2c5b912f5d532e9aed5b8e84a3fe7e2fcd7d4100
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332570"
---
# <a name="_com_error_com_error"></a>_com_error::_com_error

**Specifico di Microsoft**

Costruisce un oggetto **_com_error** .

## <a name="syntax"></a>Sintassi

```
_com_error(
   HRESULT hr,
   IErrorInfo* perrinfo = NULL,
   bool fAddRef=false) throw( );

_com_error( const _com_error& that ) throw( );
```

#### <a name="parameters"></a>Parametri

*h*<br/>
Informazioni HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

*fAddRef*<br/>
Il valore predefinito fa in modo che il costruttore chiami AddRef su un' `IErrorInfo` interfaccia non null. Questo consente il conteggio dei riferimenti corretto nel caso comune in cui la proprietà dell'interfaccia viene passata all'oggetto **_com_error** , ad esempio:

```cpp
throw _com_error(hr, perrinfo);
```

Se non si desidera che il codice trasferisca la proprietà all'oggetto **_com_error** e che `AddRef` sia necessario per compensare l'oggetto `Release` nel distruttore **_com_error** , costruire l'oggetto come segue:

```cpp
_com_error err(hr, perrinfo, true);
```

*that*<br/>
Oggetto **_com_error** esistente.

## <a name="remarks"></a>Commenti

Il primo costruttore crea un nuovo oggetto in base a un HRESULT e a un `IErrorInfo` oggetto facoltativo. Il secondo crea una copia di un oggetto **_com_error** esistente.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)
