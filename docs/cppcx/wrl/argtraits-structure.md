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
ms.openlocfilehash: 16c44d861ebbbc98fa1bffb62a00d1989c0c803c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377168"
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

*Funzione TMember*<br/>
Parametro Typename per una struttura ArgTraits che non può corrispondere ad alcuna `Invoke` firma del metodo.

*TDelegateInterface*<br/>
Interfaccia di delegato.

*TArg1*<br/>
Tipo del primo argomento `Invoke` del metodo.

*TArg2*<br/>
Tipo del secondo argomento `Invoke` del metodo.

*Targ3*<br/>
Tipo del terzo argomento `Invoke` del metodo.

*TArg4*<br/>
Tipo del quarto argomento `Invoke` del metodo.

*TArg5*<br/>
Tipo del quinto argomento `Invoke` del metodo.

*TArg6*<br/>
Tipo del sesto `Invoke` argomento del metodo.

*Targ7*<br/>
Tipo del settimo argomento `Invoke` del metodo.

*TArg8*<br/>
Tipo dell'ottavo argomento `Invoke` del metodo.

*TArg9*<br/>
Tipo del nono argomento `Invoke` del metodo.

## <a name="remarks"></a>Osservazioni

La `ArgTraits` struttura dichiara un'interfaccia di delegato specificata e una funzione membro anonima con un numero specificato di parametri.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
---------- | ----------------------
`Arg1Type` | Il typedef per TArg1.
`Arg2Type` | Il typedef per TArg2.
`Arg3Type` | Il typedef per TArg3.
`Arg4Type` | Il typedef per TArg4.
`Arg5Type` | Il typedef per TArg5.
`Arg6Type` | Il typedef per TArg6.
`Arg7Type` | Il typedef per TArg7.
`Arg8Type` | Il typedef per TArg8.
`Arg9Type` | Il typedef per TArg9.

### <a name="public-constants"></a>Costanti pubbliche

Nome                     | Descrizione
------------------------ | ---------------------------------------------------------------------------------------
[ArgTraits::args](#args) | Mantiene il conteggio del numero `Invoke` di parametri nel metodo di un'interfaccia di delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** event.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="argtraitsargs"></a><a name="args"></a>ArgTraits::args

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const int args = -1;
```

### <a name="remarks"></a>Osservazioni

Mantiene il conteggio del numero `Invoke` di parametri nel metodo di un'interfaccia di delegato. Quando `args` è uguale a -1, `Invoke` non può essere presente alcuna corrispondenza per la firma del metodo.
