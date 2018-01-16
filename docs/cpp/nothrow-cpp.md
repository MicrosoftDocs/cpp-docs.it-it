---
title: nothrow (C++) | Microsoft Docs
ms.custom: 
ms.date: 01/03/2018
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: nothrow_cpp
dev_langs: C++
helpviewer_keywords:
- __declspec keyword [C++], nothrow
- nothrow __declspec keyword
ms.assetid: 0a475139-459c-4ec6-99e8-7ecd0d7f44a3
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5e0f5f40fbcfcb95952fd956060801e862e9cdaf
ms.sourcegitcommit: c2e990450ccd528d85b2783fbc63042612987cfd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2018
---
# <a name="nothrow-c"></a>nothrow (C++)

**Sezione specifica Microsoft**

Attributo esteso `__declspec` che può essere utilizzato nella dichiarazione di funzioni.

## <a name="syntax"></a>Sintassi  
  
> *tipo restituito* __declspec(nothrow) [*convenzione di chiamata*] *-nome della funzione* ([*elenco di argomenti*])

## <a name="remarks"></a>Note

Si consiglia di utilizzare tutto il codice di nuovo il [noexcept](noexcept-cpp.md) operatore anziché `__declspec(nothrow)`.

L'attributo indica al compilatore che la funzione dichiarata e le funzioni che tale funzione chiama non generano mai un'eccezione. Tuttavia, non viene imposta la direttiva. In altre parole, non fa mai [std:: Terminate](../standard-library/exception-functions.md#terminate) da richiamare, a differenza di `noexcept`, o in **std:c + + 17** (Visual Studio 2017 15,5 e versioni successive), la modalità `throw()`.

Con il modello di gestione delle eccezioni sincrona, per impostazione predefinita il compilatore può ora eliminare i meccanismi che consentono di tenere traccia della durata di alcuni oggetti non rimovibili in tale funzione, riducendo notevolmente la dimensione del codice. Data la seguente direttiva del preprocessore, le dichiarazioni di tre funzione seguenti sono equivalenti nel **/std:c + + 14** modalità:

```cpp
#define WINAPI __declspec(nothrow) __stdcall

void WINAPI f1();
void __declspec(nothrow) __stdcall f2();
void __stdcall f3() throw();
```

In **/std:c + + 17** modalità `throw()` non equivale ad altri utenti che utilizzano `__declspec(nothrow)` perché causa `std::terminate` da richiamare se viene generata un'eccezione dalla funzione.

Il `void __stdcall f3() throw();` dichiarazione utilizza la sintassi definita dallo standard C++. In C++ 17 il `throw()` (parola chiave) è stata deprecata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)  
[noexcept](noexcept-cpp.md)  
[Parole chiave](../cpp/keywords-cpp.md)  
