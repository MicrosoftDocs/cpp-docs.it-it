---
title: nothrow (C++)
ms.date: 01/03/2018
f1_keywords:
- nothrow_cpp
helpviewer_keywords:
- __declspec keyword [C++], nothrow
- nothrow __declspec keyword
ms.assetid: 0a475139-459c-4ec6-99e8-7ecd0d7f44a3
ms.openlocfilehash: 8164f47190267627bdaf7c7ee2f03f22f65c8f50
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161061"
---
# <a name="nothrow-c"></a>nothrow (C++)

**Sezione specifica Microsoft**

Un **__declspec** attributo esteso che può essere utilizzato nella dichiarazione di funzioni.

## <a name="syntax"></a>Sintassi

> *tipo restituito* __declspec (nothrow) [*chiamata-Convenzione*] *nome-funzione* ([*argument-list*])

## <a name="remarks"></a>Osservazioni

È consigliabile che tutto il nuovo codice usi l'operatore [noexcept](noexcept-cpp.md) anziché `__declspec(nothrow)`.

L'attributo indica al compilatore che la funzione dichiarata e le funzioni che tale funzione chiama non generano mai un'eccezione. Tuttavia, non impone la direttiva. In altre parole, non causa mai la richiamata di [std:: terminate](../standard-library/exception-functions.md#terminate) , a differenza `noexcept`o in modalità **std: C++ 17** (Visual Studio 2017 versione 15,5 e successive), `throw()`.

Con il modello di gestione delle eccezioni sincrona, per impostazione predefinita il compilatore può ora eliminare i meccanismi che consentono di tenere traccia della durata di alcuni oggetti non rimovibili in tale funzione, riducendo notevolmente la dimensione del codice. Data la seguente direttiva per il preprocessore, le tre dichiarazioni di funzione seguenti sono equivalenti nella modalità **/std: c++ 14** :

```cpp
#define WINAPI __declspec(nothrow) __stdcall

void WINAPI f1();
void __declspec(nothrow) __stdcall f2();
void __stdcall f3() throw();
```

In modalità **/std: c++ 17** , `throw()` non è equivalente alle altre che usano `__declspec(nothrow)` perché causa la richiamata `std::terminate` se viene generata un'eccezione dalla funzione.

La dichiarazione `void __stdcall f3() throw();` usa la sintassi definita dallo C++ standard. In C++ 17 la parola chiave `throw()` è stata deprecata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[noexcept](noexcept-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
