---
description: 'Altre informazioni su: _com_raise_error'
title: _com_raise_error
ms.date: 11/04/2016
f1_keywords:
- _com_raise_error
helpviewer_keywords:
- _com_raise_error function
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
ms.openlocfilehash: 81697b565104971d22da04a7b8b0e33a7f9255ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97178212"
---
# <a name="_com_raise_error"></a>_com_raise_error

**Specifico di Microsoft**

Genera un' [_com_error](../cpp/com-error-class.md) in risposta a un errore.

## <a name="syntax"></a>Sintassi

```cpp
void __stdcall _com_raise_error(
   HRESULT hr,
   IErrorInfo* perrinfo = 0
);
```

#### <a name="parameters"></a>Parametri

*h*<br/>
Informazioni HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

## <a name="remarks"></a>Commenti

**_com_raise_error**, definito in \<comdef.h> , può essere sostituito da una versione scritta dall'utente con lo stesso nome e il prototipo. Questa operazione può essere eseguita per utilizzare `#import` evitando la gestione delle eccezioni C++. In tal caso, una versione utente di **_com_raise_error** potrebbe decidere di eseguire `longjmp` o di visualizzare una finestra di messaggio e di arrestarsi. La versione dell'utente non deve effettuare restituzioni, perché il codice di supporto COM del compilatore non lo prevede.

È inoltre possibile utilizzare [_set_com_error_handler](../cpp/set-com-error-handler.md) per sostituire la funzione di gestione degli errori predefinita.

Per impostazione predefinita, **_com_raise_error** viene definito come segue:

```cpp
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {
   throw _com_error(hr, perrinfo);
}
```

**TERMINA specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:**\<comdef.h>

**Lib:** Se il **wchar_t è** l'opzione del compilatore di tipo nativo è on, utilizzare comsuppw. lib o comsuppwd. lib. Se **wchar_t è di tipo nativo** è disattivato, utilizzare comsupp. lib. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

## <a name="see-also"></a>Vedi anche

[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)<br/>
[_set_com_error_handler](../cpp/set-com-error-handler.md)
