---
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
ms.openlocfilehash: c13e7fec3289b66b40e44f91404a50cba7a473b1
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821714"
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
Parametro TypeName per una struttura ArgTraits che non può corrispondere a una firma del metodo `Invoke`.

*TDelegateInterface*<br/>
Interfaccia del delegato.

*TArg1*<br/>
Tipo del primo argomento del metodo `Invoke`.

*TArg2*<br/>
Tipo del secondo argomento del metodo `Invoke`.

*TArg3*<br/>
Tipo del terzo argomento del metodo `Invoke`.

*TArg4*<br/>
Tipo del quarto argomento del metodo `Invoke`.

*TArg5*<br/>
Tipo del quinto argomento del metodo `Invoke`.

*TArg6*<br/>
Tipo del sesto argomento del metodo `Invoke`.

*TArg7*<br/>
Tipo del settimo argomento del metodo `Invoke`.

*TArg8*<br/>
Tipo dell'ottavo argomento del metodo `Invoke`.

*TArg9*<br/>
Tipo del nono argomento del metodo `Invoke`.

## <a name="remarks"></a>Note

La struttura di `ArgTraits` dichiara un'interfaccia del delegato specificata e una funzione membro anonima con un numero specificato di parametri.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Name       | Descrizione
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

Name                     | Descrizione
------------------------ | ---------------------------------------------------------------------------------------
[ArgTraits::args](#args) | Mantiene il conteggio del numero di parametri nel metodo `Invoke` di un'interfaccia del delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraits`

## <a name="requirements"></a>Requisiti di

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="args"></a>ArgTraits::args

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const int args = -1;
```

### <a name="remarks"></a>Note

Mantiene il conteggio del numero di parametri nel metodo `Invoke` di un'interfaccia del delegato. Se `args` è uguale a-1, non è possibile trovare corrispondenze per la firma del metodo `Invoke`.
