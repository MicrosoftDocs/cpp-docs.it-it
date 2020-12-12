---
description: 'Altre informazioni su: struttura ArgTraits'
title: ArgTraits (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraits
- event/Microsoft::WRL::Details::ArgTraits::args
helpviewer_keywords:
- Microsoft::WRL::Details::ArgTraits structure
- Microsoft::WRL::Details::ArgTraits::args constant
ms.assetid: 58ae4115-c1bc-48c8-b01b-e60554841c30
ms.openlocfilehash: b44cd1ff8d5aa4355385629cc08321dfe353e24c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175911"
---
# <a name="argtraits-structure"></a>ArgTraits (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename TMemberFunction>
struct ArgTraits;

template<typename TDelegateInterface>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(void)>;

template<typename TDelegateInterface, typename TArg1>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1)>;

template<typename TDelegateInterface, typename TArg1, typename TArg2>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6,
    typename TArg7
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6,
    typename TArg7,
    typename TArg8
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6,
    typename TArg7,
    typename TArg8,
    typename TArg9
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)>;
```

### <a name="parameters"></a>Parametri

*TMemberFunction*<br/>
Parametro TypeName per una struttura ArgTraits che non può corrispondere a una `Invoke` firma del metodo.

*TDelegateInterface*<br/>
Interfaccia del delegato.

*TArg1*<br/>
Tipo del primo argomento del `Invoke` metodo.

*TArg2*<br/>
Tipo del secondo argomento del `Invoke` metodo.

*TArg3*<br/>
Tipo del terzo argomento del `Invoke` metodo.

*TArg4*<br/>
Tipo del quarto argomento del `Invoke` metodo.

*TArg5*<br/>
Tipo del quinto argomento del `Invoke` metodo.

*TArg6*<br/>
Tipo del sesto argomento del `Invoke` metodo.

*TArg7*<br/>
Tipo del settimo argomento del `Invoke` metodo.

*TArg8*<br/>
Tipo dell'ottavo argomento del `Invoke` metodo.

*TArg9*<br/>
Tipo del nono argomento del `Invoke` metodo.

## <a name="remarks"></a>Commenti

La `ArgTraits` struttura dichiara un'interfaccia del delegato specificata e una funzione membro anonima con un numero specificato di parametri.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Description
---------- | ----------------------
`Arg1Type` | Typedef per TArg1.
`Arg2Type` | Typedef per TArg2.
`Arg3Type` | Typedef per TArg3.
`Arg4Type` | Typedef per TArg4.
`Arg5Type` | Typedef per TArg5.
`Arg6Type` | Typedef per TArg6.
`Arg7Type` | Typedef per TArg7.
`Arg8Type` | Typedef per TArg8.
`Arg9Type` | Typedef per TArg9.

### <a name="public-constants"></a>Costanti pubbliche

Nome                     | Description
------------------------ | ---------------------------------------------------------------------------------------
[ArgTraits:: args](#args) | Mantiene il conteggio del numero di parametri nel `Invoke` metodo di un'interfaccia del delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="argtraitsargs"></a><a name="args"></a> ArgTraits:: args

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const int args = -1;
```

### <a name="remarks"></a>Commenti

Mantiene il conteggio del numero di parametri nel `Invoke` metodo di un'interfaccia del delegato. Se `args` è uguale a-1, non è possibile trovare corrispondenze per la `Invoke` firma del metodo.
