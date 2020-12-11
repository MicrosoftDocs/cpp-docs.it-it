---
description: 'Altre informazioni su: classe CAtlAutoThreadModuleT'
title: Classe CAtlAutoThreadModuleT
ms.date: 11/04/2016
f1_keywords:
- CAtlAutoThreadModuleT
- ATLBASE/ATL::CAtlAutoThreadModuleT
- ATLBASE/ATL::CAtlAutoThreadModuleT::GetDefaultThreads
helpviewer_keywords:
- CAtlAutoThreadModuleT class
ms.assetid: ae1667c6-3fb8-47bc-b35d-9ea5e9896d7f
ms.openlocfilehash: ad55c78488567c12477c427b99a527b8154ddd22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158413"
---
# <a name="catlautothreadmodulet-class"></a>Classe CAtlAutoThreadModuleT

Questa classe fornisce metodi per l'implementazione di un server COM in pool di thread e di tipo Apartment.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <class T,
         class ThreadAllocator = CComSimpleThreadAllocator,
         DWORD dwWait = INFINITE>
class ATL_NO_VTABLE CAtlAutoThreadModuleT : public IAtlAutoThreadModule
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe che implementerà il server COM.

*ThreadAllocator*<br/>
Classe che gestisce la selezione dei thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

*dwWait*<br/>
Specifica l'intervallo di timeout, in millisecondi. Il valore predefinito è infinite, il che significa che l'intervallo di timeout del metodo non è mai trascorso.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlAutoThreadModuleT:: GetDefaultThreads](#getdefaultthreads)|Questa funzione statica calcola e restituisce in modo dinamico il numero massimo di thread per il modulo EXE, in base al numero di processori.|

## <a name="remarks"></a>Commenti

La classe [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) deriva da `CAtlAutoThreadModuleT` per implementare un server com in pool di thread e un modello di Apartment. Sostituisce la classe obsoleta [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

> [!NOTE]
> Questa classe non deve essere utilizzata in una DLL, perché il valore predefinito di *DWWAIT* infinito provocherà un deadlock quando la dll viene scaricata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlAutoThreadModule`

`CAtlAutoThreadModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="catlautothreadmoduletgetdefaultthreads"></a><a name="getdefaultthreads"></a> CAtlAutoThreadModuleT:: GetDefaultThreads

Questa funzione statica calcola e restituisce in modo dinamico il numero massimo di thread per il modulo EXE, in base al numero di processori.

```cpp
static int GetDefaultThreads();
```

### <a name="return-value"></a>Valore restituito

Il numero di thread da creare nel modulo EXE.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo se si desidera utilizzare un metodo diverso per il calcolo del numero di thread. Per impostazione predefinita, il numero di thread è basato sul numero di processori.

## <a name="see-also"></a>Vedi anche

[Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
