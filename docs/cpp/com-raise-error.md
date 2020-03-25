---
title: _com_raise_error
ms.date: 11/04/2016
f1_keywords:
- _com_raise_error
helpviewer_keywords:
- _com_raise_error function
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
ms.openlocfilehash: 2012ec98d8d40d60a7f12feb68bdc371e1616223
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189793"
---
# <a name="_com_raise_error"></a>_com_raise_error

**Sezione specifica Microsoft**

Genera un' [_com_error](../cpp/com-error-class.md) in risposta a un errore.

## <a name="syntax"></a>Sintassi

```
void __stdcall _com_raise_error(
   HRESULT hr,
   IErrorInfo* perrinfo = 0
);
```

#### <a name="parameters"></a>Parametri

*HR*<br/>
Informazioni HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

## <a name="remarks"></a>Osservazioni

**_com_raise_error**, definito in \<Comdef. h >, può essere sostituito da una versione scritta dall'utente con lo stesso nome e il prototipo. Questa operazione può essere eseguita per utilizzare `#import` evitando la gestione delle eccezioni C++. In tal caso, una versione utente di **_com_raise_error** potrebbe decidere di eseguire una `longjmp` o visualizzare una finestra di messaggio e arrestarla. La versione dell'utente non deve effettuare restituzioni, perché il codice di supporto COM del compilatore non lo prevede.

È inoltre possibile utilizzare [_set_com_error_handler](../cpp/set-com-error-handler.md) per sostituire la funzione di gestione degli errori predefinita.

Per impostazione predefinita, **_com_raise_error** viene definito come segue:

```cpp
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {
   throw _com_error(hr, perrinfo);
}
```

**Fine sezione specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:** \<Comdef. h >

**Lib:** Se il **wchar_t è** l'opzione del compilatore di tipo nativo è on, utilizzare comsuppw. lib o comsuppwd. lib. Se **wchar_t è di tipo nativo** è disattivato, utilizzare comsupp. lib. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

## <a name="see-also"></a>Vedere anche

[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)<br/>
[_set_com_error_handler](../cpp/set-com-error-handler.md)
