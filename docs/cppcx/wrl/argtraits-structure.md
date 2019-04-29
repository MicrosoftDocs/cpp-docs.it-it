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
ms.openlocfilehash: 17109508cf99888ccde79be39a41c5361da24c6e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398810"
---
# <a name="argtraits-structure"></a>ArgTraits (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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
Parametro TypeName per una struttura ArgTraits che non può corrispondere a qualsiasi `Invoke` firma del metodo.

*TDelegateInterface*<br/>
Un'interfaccia di delegato.

*TArg1*<br/>
Il tipo del primo argomento del `Invoke` (metodo).

*TArg2*<br/>
Il tipo del secondo argomento del `Invoke` (metodo).

*TArg3*<br/>
Il tipo del terzo argomento del `Invoke` (metodo).

*TArg4*<br/>
Il tipo del quarto argomento del `Invoke` (metodo).

*TArg5*<br/>
Il tipo del quinto argomento del `Invoke` (metodo).

*TArg6*<br/>
Il tipo del sesto argomento del `Invoke` (metodo).

*TArg7*<br/>
Il tipo del settimo argomento del `Invoke` (metodo).

*TArg8*<br/>
Il tipo dell'ottavo argomento del `Invoke` (metodo).

*TArg9*<br/>
Il tipo del nono argomento del `Invoke` (metodo).

## <a name="remarks"></a>Note

Il `ArgTraits` struttura dichiara un delegato specificato dell'interfaccia e una funzione membro anonimo che include un numero specificato di parametri.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
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

Nome                     | Descrizione
------------------------ | ---------------------------------------------------------------------------------------
[ArgTraits::args](#args) | Conta il numero di parametri di `Invoke` metodo di un'interfaccia di delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="args"></a>ArgTraits::args

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static const int args = -1;
```

### <a name="remarks"></a>Note

Conta il numero di parametri di `Invoke` metodo di un'interfaccia di delegato. Quando `args` è uguale a -1, non può essere presente alcuna corrispondenza per il `Invoke` firma del metodo.
