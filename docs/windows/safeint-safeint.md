---
title: 'SafeInt:: SafeInt | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeInt::SafeInt
- SafeInt
- SafeInt.SafeInt
dev_langs:
- C++
helpviewer_keywords:
- SafeInt class, constructor
ms.assetid: 39e6f632-a396-40e6-9ece-cc3d4c5a78ef
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: de318ab79638f63fae98856987340ad62534f695
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45721345"
---
# <a name="safeintsafeint"></a>SafeInt::SafeInt

Costruisce un **SafeInt** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
SafeInt() throw

SafeInt (
   const T& i
) throw ()

SafeInt (
   bool b
) throw ()

template <typename U>
SafeInt (
   const SafeInt <U, E>& u
)

I template <typename U>
SafeInt (
   const U& i
)  
```

### <a name="parameters"></a>Parametri

*i*<br/>
[in] Il valore per il nuovo **SafeInt** oggetto. Deve trattarsi di un parametro di tipo T o U, a seconda del costruttore.

*b*<br/>
[in] Il valore booleano per la nuova **SafeInt** oggetto.

*u*<br/>
[in] Oggetto **SafeInt** di tipo U. Il nuovo **SafeInt** oggetto avrà lo stesso valore di *u*, ma sarà di tipo T.

Il tipo di dati archiviati in U il **SafeInt**. Può trattarsi di un valore booleano, carattere o integer di tipo. Se è un tipo integer, può essere con o senza segno ed essere compresa tra 8 e 64 bit.

## <a name="remarks"></a>Note

Per altre informazioni sui tipi di modello `T` e `E`, vedere [classe SafeInt](../windows/safeint-class.md).

Il parametro di input per il costruttore *ho* oppure *u*, deve essere un tipo Boolean, carattere o integer. Se si tratta di un altro tipo del parametro, il **SafeInt** classe chiamate [static_assert](../cpp/static-assert.md) per indicare un parametro di input non valido.

I costruttori che utilizzano il tipo di modello `U` convertire automaticamente il parametro di input nel tipo specificato dal `T`. Il **SafeInt** classe converte i dati senza alcuna perdita di dati. Segnala al gestore errori `E` se non è possibile convertire i dati da digitare `T` senza perdita di dati.

Se si crea una **SafeInt** da un parametro booleano, è necessario inizializzare il valore immediatamente. Non è possibile costruire una **SafeInt** usando il codice `SafeInt<bool> sb;`. Verrà generato un errore di compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** MSL:: Utilities

## <a name="see-also"></a>Vedere anche

[Libreria SafeInt](../windows/safeint-library.md)  
[Classe SafeInt](../windows/safeint-class.md)  
[Classe SafeIntException](../windows/safeintexception-class.md)