---
title: _com_raise_error
ms.date: 11/04/2016
f1_keywords:
- _com_raise_error
helpviewer_keywords:
- _com_raise_error function
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
ms.openlocfilehash: f5efbe98a489a380c4e9be5a0e40603be2a409c0
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745090"
---
# <a name="_com_raise_error"></a>_com_raise_error

**Specifico di Microsoft**

Genera un [_com_error](../cpp/com-error-class.md) in risposta a un errore.

## <a name="syntax"></a>Sintassi

```cpp
void __stdcall _com_raise_error(
   HRESULT hr,
   IErrorInfo* perrinfo = 0
);
```

#### <a name="parameters"></a>Parametri

*hr*<br/>
informazioni HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

## <a name="remarks"></a>Osservazioni

**_com_raise_error**, definito \<nel> comdef.h, può essere sostituito da una versione scritta dall'utente con lo stesso nome e prototipo. Questa operazione può essere eseguita per utilizzare `#import` evitando la gestione delle eccezioni C++. In tal caso, una **_com_raise_error** versione utente di `longjmp` _com_raise_error potrebbe decidere di eseguire o visualizzare una finestra di messaggio e di interrompere. La versione dell'utente non deve effettuare restituzioni, perché il codice di supporto COM del compilatore non lo prevede.

È inoltre possibile utilizzare [_set_com_error_handler](../cpp/set-com-error-handler.md) per sostituire la funzione di gestione degli errori predefinita.

Per impostazione predefinita, **_com_raise_error** è definito come segue:

```cpp
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {
   throw _com_error(hr, perrinfo);
}
```

**FINE Specifico di Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> comdef.h

**Lib:** Se l'opzione del compilatore **wchar_t è Native Type** è attivata, utilizzare comsuppw.lib o comsuppwd.lib. Se **wchar_t è Native Type** è disattivato, utilizzare comsupp.lib.If a type is Native Type is off, use comsupp.lib. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

## <a name="see-also"></a>Vedere anche

[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)<br/>
[_set_com_error_handler](../cpp/set-com-error-handler.md)
