---
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
ms.openlocfilehash: 223f37d7cabbd0b8cd238582773c05d7b9eaabf6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371413"
---
# <a name="implements-structure"></a>Implementa la struttura

Implementa `QueryInterface` `GetIid` e per le interfacce specificate.

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
ID di interfaccia zero. Obbligatoria

*I1*<br/>
Primo ID di interfaccia. Facoltativa

*I2*<br/>
Secondo ID di interfaccia. Facoltativa

*I3 I3*<br/>
Terzo ID di interfaccia. Facoltativa

*I4*<br/>
Quarto ID di interfaccia. Facoltativa

*I5*<br/>
Il quinto ID di interfaccia. Facoltativa

*I6 I6*<br/>
L'ID della sesta interfaccia. Facoltativa

*I7 I7*<br/>
Il settimo ID di interfaccia. Facoltativa

*I8*<br/>
ID dell'interfaccia dell'ottavo. Facoltativa

*I9*<br/>
Nono ID interfaccia. Facoltativa

*Bandiere*<br/>
Flag di configurazione per la classe. Una o più enumerazioni [RuntimeClassType](runtimeclasstype-enumeration.md) specificate in una struttura [RuntimeClassFlags.](runtimeclassflags-structure.md)

## <a name="remarks"></a>Osservazioni

Deriva dall'elenco delle interfacce specificate `QueryInterface` e `GetIid`implementa modelli di supporto per e .

Ogni parametro di interfaccia *da I0* a *I9* deve derivare da uno dei due `IUnknown`modelli , `IInspectable`, o [ChainInterfaces](chaininterfaces-structure.md) . Il *flags* flags parametro determina `IUnknown` se `IInspectable`il supporto viene generato per o .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

| Nome        | Descrizione                               |
| ----------- | ----------------------------------------- |
| `ClassFlags`| Sinonimo di `RuntimeClassFlags<WinRt>`. |

### <a name="protected-methods"></a>Metodi protetti

| Nome                                              | Descrizione                                                                                                   |
| ------------------------------------------------- | ------------------------------------------------------------------------------------------------------------- |
| [Implementa::CanCastTo](#cancastto)               | Ottiene un puntatore all'interfaccia specificata.                                                                    |
| [Strumenti::CastToUnknown](#casttounknown)       | Ottiene un puntatore `IUnknown` all'interfaccia sottostante.                                                        |
| [Implementa::FillArrayWithIid](#fillarraywithiid) | Inserisce l'ID di interfaccia specificato dal parametro di modello zero corrente nell'elemento di matrice specificato. |

### <a name="protected-constants"></a>Costanti protette

| Nome                              | Descrizione                                    |
| --------------------------------- | ---------------------------------------------- |
| [Implementa::IidCount](#iidcount) | Contiene il numero di ID di interfaccia implementati. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

`I0`

`ImplementsBase`

`ImplementsHelper`

`Implements`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="implementscancastto"></a><a name="cancastto"></a>Implementa::CanCastTo

Ottiene un puntatore all'interfaccia specificata.

```cpp
__forceinline HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
Riferimento a un ID di interfaccia.

*Ppv*<br/>
In caso di esito positivo, un puntatore all'interfaccia specificata da *riid*.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un HRESULT che indica l'errore, ad esempio E_NOINTERFACE.

### <a name="remarks"></a>Osservazioni

Si tratta di una funzione di supporto interna che esegue un'operazione QueryInterface.This is an internal helper function that performs a QueryInterface operation.

## <a name="implementscasttounknown"></a><a name="casttounknown"></a>Strumenti::CastToUnknown

Ottiene un puntatore `IUnknown` all'interfaccia sottostante.

```cpp
__forceinline IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Questa operazione ha sempre `IUnknown` esito positivo e restituisce il puntatore.

### <a name="remarks"></a>Osservazioni

Funzione di supporto interna.

## <a name="implementsfillarraywithiid"></a><a name="fillarraywithiid"></a>Implementa::FillArrayWithIid

Inserisce l'ID di interfaccia specificato dal parametro di modello zero corrente nell'elemento di matrice specificato.

```cpp
__forceinline static void FillArrayWithIid(
   unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine dell'operazione, *l'indice* viene incrementato di 1.

*iids*<br/>
Matrice di tipo IID.

### <a name="remarks"></a>Osservazioni

Funzione di supporto interna.

## <a name="implementsiidcount"></a><a name="iidcount"></a>Implementa::IidCount

Contiene il numero di ID di interfaccia implementati.

```cpp
static const unsigned long IidCount;
```
