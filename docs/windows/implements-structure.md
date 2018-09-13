---
title: Implementa struttura | Microsoft Docs
ms.custom: ''
ms.date: 09/11/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Implements
- implements/Microsoft::WRL::Implements::CanCastTo
- implements/Microsoft::WRL::Implements::CastToUnknown
- implements/Microsoft::WRL::Implements::FillArrayWithIid
- implements/Microsoft::WRL::Implements::IidCount
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Implements structure
- Microsoft::WRL::Implements::CanCastTo method
- Microsoft::WRL::Implements::CastToUnknown method
- Microsoft::WRL::Implements::FillArrayWithIid method
- Microsoft::WRL::Implements::IidCount method
ms.assetid: 29b13e90-34d4-4a0b-babd-5187c9eb0c36
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 18616b1010dfe6a23861c512b1113c30fe5251ce
ms.sourcegitcommit: b4432d30f255f0cb58dce69cbc8cbcb9d44bc68b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/13/2018
ms.locfileid: "45535353"
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
struct __declspec(novtable) Implements : Details::ImplementsHelper<RuntimeClassFlags<WinRt>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8, I9>::TypeT>, Details::ImplementsBase;
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
struct __declspec(novtable) Implements<RuntimeClassFlags<flags>, I0, I1, I2, I3, I4, I5, I6, I7, I8> : Details::ImplementsHelper<RuntimeClassFlags<flags>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8>::TypeT>, Details::ImplementsBase;
```

### <a name="parameters"></a>Parametri

*I0*  
L'ID di interfaccia di zero. (Obbligatorio)

*I1*  
Il primo ID di interfaccia (facoltativo)

*I2*  
Il secondo ID di interfaccia (facoltativo)

*I3*  
Il terzo ID di interfaccia (facoltativo)

*I4*  
Il quarto ID di interfaccia (facoltativo)

*I5*  
Il quinto ID di interfaccia (facoltativo)

*I6*  
Il sesto ID di interfaccia (facoltativo)

*I7*  
Il settimo ID di interfaccia (facoltativo)

*I8*  
L'ottavo ID di interfaccia (facoltativo)

*I9*  
Il nono ID di interfaccia (facoltativo)

*flags*  
Flag di configurazione per la classe. Uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumerazioni che vengono specificate in un [RuntimeClassFlags](../windows/runtimeclassflags-structure.md) struttura.

## <a name="remarks"></a>Note

Deriva dall'elenco di interfacce specificate e implementa i modelli di supporto per `QueryInterface` e `GetIid`.

Ogni *I0* attraverso *I9* parametro di interfaccia deve derivare da `IUnknown`, `IInspectable`, oppure il [ChainInterfaces](../windows/chaininterfaces-structure.md) modello. Il *flags* parametro determina se il supporto viene generato per `IUnknown` o `IInspectable`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

| Nome        | Descrizione                               |
| ----------- | ----------------------------------------- |
| `ClassFlags`| Sinonimo di `RuntimeClassFlags<WinRt>`. |

### <a name="protected-methods"></a>Metodi protetti

| Nome                                              | Descrizione                                                                                                   |
| ------------------------------------------------- | ------------------------------------------------------------------------------------------------------------- |
| [Implements:: cancastto](#cancastto)               | Ottiene un puntatore all'interfaccia specificata.                                                                    |
| [Implements:: casttounknown](#casttounknown)       | Ottiene un puntatore sottostante `IUnknown` interfaccia.                                                        |
| [Implements:: fillarraywithiid](#fillarraywithiid) | Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato. |

### <a name="protected-constants"></a>Costanti protette

| nome                              | Descrizione                                    |
| --------------------------------- | ---------------------------------------------- |
| [Implements:: iidcount](#iidcount) | Contiene il numero di ID di interfaccia implementata. |

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

*riid*  
Un riferimento all'ID di interfaccia.

*ppv*  
Se ha esito positivo, un puntatore all'interfaccia specificata da *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che indica l'errore, ad esempio E_NOINTERFACE.

### <a name="remarks"></a>Note

Si tratta di una funzione helper interna che esegue un'operazione QueryInterface.

## <a name="casttounknown"></a>Implements:: casttounknown

Ottiene un puntatore sottostante `IUnknown` interfaccia.

```cpp
__forceinline IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Questa operazione ha esito positivo e restituisce sempre il `IUnknown` puntatore.

### <a name="remarks"></a>Note

Funzione di supporto interno.

## <a name="fillarraywithiid"></a>Implements:: fillarraywithiid

Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato.

```cpp
__forceinline static void FillArrayWithIid(
   unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*  
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine, questa operazione *indice* viene incrementato di 1.

*IID*  
Matrice di tipo IID.

### <a name="remarks"></a>Note

Funzione di supporto interno.

## <a name="iidcount"></a>Implements:: iidcount

Contiene il numero di ID di interfaccia implementata.

```cpp
static const unsigned long IidCount;
```
