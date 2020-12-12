---
description: 'Altre informazioni su: implementa la struttura'
title: Implementa la struttura
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Implements
- implements/Microsoft::WRL::Implements::CanCastTo
- implements/Microsoft::WRL::Implements::CastToUnknown
- implements/Microsoft::WRL::Implements::FillArrayWithIid
- implements/Microsoft::WRL::Implements::IidCount
helpviewer_keywords:
- Microsoft::WRL::Implements structure
- Microsoft::WRL::Implements::CanCastTo method
- Microsoft::WRL::Implements::CastToUnknown method
- Microsoft::WRL::Implements::FillArrayWithIid method
- Microsoft::WRL::Implements::IidCount method
ms.assetid: 29b13e90-34d4-4a0b-babd-5187c9eb0c36
ms.openlocfilehash: b438e012b23e34b08956c969ffe604878d3065fe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249828"
---
# <a name="implements-structure"></a>Implementa la struttura

Implementa `QueryInterface` e `GetIid` per le interfacce specificate.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename I0,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil,
    typename I3 = Details::Nil,
    typename I4 = Details::Nil,
    typename I5 = Details::Nil,
    typename I6 = Details::Nil,
    typename I7 = Details::Nil,
    typename I8 = Details::Nil,
    typename I9 = Details::Nil
>
struct __declspec(novtable) Implements :
    Details::ImplementsHelper<
        RuntimeClassFlags<WinRt>,
        typename Details::InterfaceListHelper<
            I0, I1, I2, I3, I4, I5, I6, I7, I8, I9
        >::TypeT
    >,
    Details::ImplementsBase;

template <
    int flags,
    typename I0,
    typename I1,
    typename I2,
    typename I3,
    typename I4,
    typename I5,
    typename I6,
    typename I7,
    typename I8
>
struct __declspec(novtable) Implements<
        RuntimeClassFlags<flags>,
        I0, I1, I2, I3, I4, I5, I6, I7, I8> :
    Details::ImplementsHelper<
        RuntimeClassFlags<flags>,
        typename Details::InterfaceListHelper<
            I0, I1, I2, I3, I4, I5, I6, I7, I8
        >::TypeT
    >,
    Details::ImplementsBase;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
ID dell'interfaccia zero. Obbligatoria

*I1*<br/>
Primo ID di interfaccia. Facoltativa

*I2*<br/>
Secondo ID di interfaccia. Facoltativa

*I3*<br/>
Terzo ID di interfaccia. Facoltativa

*I4*<br/>
Quarto ID di interfaccia. Facoltativa

*I5*<br/>
ID di interfaccia quinto. Facoltativa

*I6*<br/>
Sesto ID di interfaccia. Facoltativa

*I7*<br/>
Settimo ID di interfaccia. Facoltativa

*I8*<br/>
Ottavo ID di interfaccia. Facoltativa

*I9*<br/>
Nono ID di interfaccia. Facoltativa

*flags*<br/>
Flag di configurazione per la classe. Una o più enumerazioni [RuntimeClassType](runtimeclasstype-enumeration.md) specificate in una struttura [RuntimeClassFlags](runtimeclassflags-structure.md) .

## <a name="remarks"></a>Commenti

Deriva dall'elenco di interfacce specificate e implementa i modelli di supporto per `QueryInterface` e `GetIid` .

Ogni *I0* tramite il parametro dell'interfaccia *i9* deve derivare da `IUnknown` , `IInspectable` o dal modello [ChainInterfaces](chaininterfaces-structure.md) . Il parametro *Flags* determina se viene generato il supporto per `IUnknown` o `IInspectable` .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

| Nome        | Description                               |
| ----------- | ----------------------------------------- |
| `ClassFlags`| Sinonimo di `RuntimeClassFlags<WinRt>`. |

### <a name="protected-methods"></a>Metodi protetti

| Nome                                              | Description                                                                                                   |
| ------------------------------------------------- | ------------------------------------------------------------------------------------------------------------- |
| [Implementa:: CanCastTo](#cancastto)               | Ottiene un puntatore all'interfaccia specificata.                                                                    |
| [Implementa:: CastToUnknown](#casttounknown)       | Ottiene un puntatore all'interfaccia sottostante `IUnknown` .                                                        |
| [Implementa:: FillArrayWithIid](#fillarraywithiid) | Inserisce l'ID di interfaccia specificato dal parametro del modello zero corrente nell'elemento di matrice specificato. |

### <a name="protected-constants"></a>Costanti protette

| Nome                              | Description                                    |
| --------------------------------- | ---------------------------------------------- |
| [Implementa:: IidCount](#iidcount) | Include il numero di ID di interfaccia implementati. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

`I0`

`ImplementsBase`

`ImplementsHelper`

`Implements`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="implementscancastto"></a><a name="cancastto"></a> Implementa:: CanCastTo

Ottiene un puntatore all'interfaccia specificata.

```cpp
__forceinline HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
Riferimento a un ID di interfaccia.

*PPV*<br/>
In caso di esito positivo, puntatore all'interfaccia specificata da *riid*.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un valore HRESULT che indica l'errore, ad esempio E_NOINTERFACE.

### <a name="remarks"></a>Commenti

Si tratta di una funzione di supporto interna che esegue un'operazione QueryInterface.

## <a name="implementscasttounknown"></a><a name="casttounknown"></a> Implementa:: CastToUnknown

Ottiene un puntatore all'interfaccia sottostante `IUnknown` .

```cpp
__forceinline IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Questa operazione ha sempre esito positivo e restituisce il `IUnknown` puntatore.

### <a name="remarks"></a>Commenti

Funzione helper interna.

## <a name="implementsfillarraywithiid"></a><a name="fillarraywithiid"></a> Implementa:: FillArrayWithIid

Inserisce l'ID di interfaccia specificato dal parametro del modello zero corrente nell'elemento di matrice specificato.

```cpp
__forceinline static void FillArrayWithIid(
   unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine dell'operazione, l' *Indice* viene incrementato di 1.

*IID*<br/>
Matrice di tipo IID.

### <a name="remarks"></a>Commenti

Funzione helper interna.

## <a name="implementsiidcount"></a><a name="iidcount"></a> Implementa:: IidCount

Include il numero di ID di interfaccia implementati.

```cpp
static const unsigned long IidCount;
```
