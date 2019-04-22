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
ms.openlocfilehash: 63cac6931428644cc5ddec7d87e49007e95e039d
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58785657"
---
# <a name="implements-structure"></a>Implementa la struttura

Implements `QueryInterface` e `GetIid` per le interfacce specificate.

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
L'ID di interfaccia di zero. (Obbligatorio)

*I1*<br/>
Il primo ID di interfaccia (facoltativo)

*I2*<br/>
Il secondo ID di interfaccia (facoltativo)

*I3*<br/>
Il terzo ID di interfaccia (facoltativo)

*I4*<br/>
Il quarto ID di interfaccia (facoltativo)

*I5*<br/>
Il quinto ID di interfaccia (facoltativo)

*I6*<br/>
Il sesto ID di interfaccia (facoltativo)

*I7*<br/>
Il settimo ID di interfaccia (facoltativo)

*I8*<br/>
L'ottavo ID di interfaccia (facoltativo)

*I9*<br/>
Il nono ID di interfaccia (facoltativo)

*flags*<br/>
Flag di configurazione per la classe. Uno o più [RuntimeClassType](runtimeclasstype-enumeration.md) enumerazioni che vengono specificate in un [RuntimeClassFlags](runtimeclassflags-structure.md) struttura.

## <a name="remarks"></a>Note

Deriva dall'elenco di interfacce specificate e implementa i modelli di supporto per `QueryInterface` e `GetIid`.

Ogni *I0* attraverso *I9* parametro di interfaccia deve derivare da `IUnknown`, `IInspectable`, oppure il [ChainInterfaces](chaininterfaces-structure.md) modello. Il *flags* parametro determina se il supporto viene generato per `IUnknown` o `IInspectable`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

| Nome        | Descrizione                               |
| ----------- | ----------------------------------------- |
| `ClassFlags`| Sinonimo di `RuntimeClassFlags<WinRt>`. |

### <a name="protected-methods"></a>Metodi protetti

| Nome                                              | Descrizione                                                                                                   |
| ------------------------------------------------- | ------------------------------------------------------------------------------------------------------------- |
| [Implements::CanCastTo](#cancastto)               | Ottiene un puntatore all'interfaccia specificata.                                                                    |
| [Implements::CastToUnknown](#casttounknown)       | Ottiene un puntatore sottostante `IUnknown` interfaccia.                                                        |
| [Implements::FillArrayWithIid](#fillarraywithiid) | Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato. |

### <a name="protected-constants"></a>Costanti protette

| Nome                              | Descrizione                                    |
| --------------------------------- | ---------------------------------------------- |
| [Implements::IidCount](#iidcount) | Contiene il numero di ID di interfaccia implementata. |

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

## <a name="cancastto"></a>Implements:: cancastto

Ottiene un puntatore all'interfaccia specificata.

```cpp
__forceinline HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
Un riferimento all'ID di interfaccia.

*ppv*<br/>
Se ha esito positivo, un puntatore all'interfaccia specificata da *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che indica l'errore, ad esempio E_NOINTERFACE.

### <a name="remarks"></a>Note

Si tratta di una funzione helper interna che esegue un'operazione QueryInterface.

## <a name="casttounknown"></a>Implements::CastToUnknown

Ottiene un puntatore sottostante `IUnknown` interfaccia.

```cpp
__forceinline IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Questa operazione ha esito positivo e restituisce sempre il `IUnknown` puntatore.

### <a name="remarks"></a>Note

Funzione di supporto interno.

## <a name="fillarraywithiid"></a>Implements::FillArrayWithIid

Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato.

```cpp
__forceinline static void FillArrayWithIid(
   unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine, questa operazione *indice* viene incrementato di 1.

*iids*<br/>
Matrice di tipo IID.

### <a name="remarks"></a>Note

Funzione di supporto interno.

## <a name="iidcount"></a>Implements:: iidcount

Contiene il numero di ID di interfaccia implementata.

```cpp
static const unsigned long IidCount;
```
