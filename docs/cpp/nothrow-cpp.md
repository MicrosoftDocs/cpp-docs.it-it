---
title: nothrow (C++)
ms.date: 01/03/2018
f1_keywords:
- nothrow_cpp
helpviewer_keywords:
- __declspec keyword [C++], nothrow
- nothrow __declspec keyword
ms.assetid: 0a475139-459c-4ec6-99e8-7ecd0d7f44a3
ms.openlocfilehash: 88041b374cc48ac31c8990aa7f867ba25b33e1d7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50548135"
---
# <a name="nothrow-c"></a>nothrow (C++)

**Sezione specifica Microsoft**

Oggetto **declspec** attributo esteso che può essere usato nella dichiarazione di funzioni.

## <a name="syntax"></a>Sintassi

> *tipo restituito* __declspec(nothrow) [*convenzione di chiamata*] *-nome della funzione* ([*dall'elenco di argomenti*])

## <a name="remarks"></a>Note

Si consiglia di nuovo codice usare il [noexcept](noexcept-cpp.md) operatore anziché `__declspec(nothrow)`.

L'attributo indica al compilatore che la funzione dichiarata e le funzioni che tale funzione chiama non generano mai un'eccezione. Tuttavia, non comporta la direttiva. In altre parole, non provoca mai [std:: Terminate](../standard-library/exception-functions.md#terminate) deve essere richiamato, a differenza `noexcept`, o in **/std: c + + 17** (Visual Studio 2017 versione 15.5 e successive), la modalità `throw()`.

Con il modello di gestione delle eccezioni sincrona, per impostazione predefinita il compilatore può ora eliminare i meccanismi che consentono di tenere traccia della durata di alcuni oggetti non rimovibili in tale funzione, riducendo notevolmente la dimensione del codice. Data la seguente direttiva del preprocessore, le dichiarazioni di tre funzione seguenti sono equivalenti **/std: c + + 14** modalità:

```cpp
#define WINAPI __declspec(nothrow) __stdcall

void WINAPI f1();
void __declspec(nothrow) __stdcall f2();
void __stdcall f3() throw();
```

Nelle **/std: c + + 17** modalità `throw()` non equivale ad altri utenti che usano `__declspec(nothrow)` perché causa `std::terminate` da richiamare se viene generata un'eccezione dalla funzione.

Il `void __stdcall f3() throw();` dichiarazione utilizza la sintassi definita dallo standard C++. In c++17 il `throw()` parola chiave è stata deprecata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[noexcept](noexcept-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)