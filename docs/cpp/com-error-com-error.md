---
title: _com_error::_com_error
ms.date: 11/04/2016
f1_keywords:
- _com_error::_com_error
helpviewer_keywords:
- _com_error method [C++]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
ms.openlocfilehash: 4ac902f0fda90f77526ef53139ef0d523d8c22e7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180784"
---
# <a name="_com_error_com_error"></a>_com_error::_com_error

**Sezione specifica Microsoft**

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

*HR*<br/>
Informazioni HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

*fAddRef*<br/>
Per impostazione predefinita, il costruttore chiama AddRef su un'interfaccia `IErrorInfo` non null. Questo consente il conteggio dei riferimenti corretto nel caso comune in cui la proprietà dell'interfaccia viene passata all'oggetto **_com_error** , ad esempio:

```cpp
throw _com_error(hr, perrinfo);
```

Se non si desidera che il codice trasferisca la proprietà all'oggetto **_com_error** e il `AddRef` sia necessario per compensare la `Release` nel distruttore **_com_error** , costruire l'oggetto come segue:

```cpp
_com_error err(hr, perrinfo, true);
```

*che*<br/>
Oggetto **_com_error** esistente.

## <a name="remarks"></a>Osservazioni

Il primo costruttore crea un nuovo oggetto in base a un HRESULT e a un oggetto `IErrorInfo` facoltativo. Il secondo crea una copia di un oggetto **_com_error** esistente.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
