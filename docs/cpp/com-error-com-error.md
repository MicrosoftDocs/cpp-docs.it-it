---
title: _com_error::_com_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::_com_error
dev_langs:
- C++
helpviewer_keywords:
- _com_error method [C++]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 89377e33e56b0796fc850c050c8e79eac86ee07d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040466"
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

*risorse umane*<br/>
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

*che*<br/>
Un oggetto esistente **com_error** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore crea un nuovo oggetto dato un oggetto HRESULT e facoltative `IErrorInfo` oggetto. Il secondo crea una copia di un oggetto esistente **com_error** oggetto.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)