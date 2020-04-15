---
title: Classe CAtlAutoThreadModuleT
ms.date: 11/04/2016
f1_keywords:
- CAtlAutoThreadModuleT
- ATLBASE/ATL::CAtlAutoThreadModuleT
- ATLBASE/ATL::CAtlAutoThreadModuleT::GetDefaultThreads
helpviewer_keywords:
- CAtlAutoThreadModuleT class
ms.assetid: ae1667c6-3fb8-47bc-b35d-9ea5e9896d7f
ms.openlocfilehash: e7b7a327d7c47c4472b43ed58fbe9ad0556a7620
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321548"
---
# <a name="catlautothreadmodulet-class"></a>Classe CAtlAutoThreadModuleT

Questa classe fornisce metodi per l'implementazione di un server COM con pool di thread, modello di apartment.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T,
         class ThreadAllocator = CComSimpleThreadAllocator,
         DWORD dwWait = INFINITE>
class ATL_NO_VTABLE CAtlAutoThreadModuleT : public IAtlAutoThreadModule
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe che implementerà il server COM.

*ThreadAllocatore*<br/>
Classe che gestisce la selezione dei thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

*dwAttesa*<br/>
Specifica l'intervallo di timeout, in millisecondi. Il valore predefinito è INFINITE, che significa che l'intervallo di timeout del metodo non trascorre mai.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlAutoThreadModuleT::GetDefaultThreads](#getdefaultthreads)|Questa funzione statica calcola e restituisce dinamicamente il numero massimo di thread per il modulo EXE, in base al numero di processori.|

## <a name="remarks"></a>Osservazioni

La classe [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) `CAtlAutoThreadModuleT` deriva da per implementare un server COM con pool di thread, modello apartment. Sostituisce la classe obsoleta [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

> [!NOTE]
> Questa classe non deve essere utilizzata in una DLL, poiché il valore *dwWait* predefinito di INFINITE causerà un deadlock quando la DLL viene scaricata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlAutoThreadModule`

`CAtlAutoThreadModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catlautothreadmoduletgetdefaultthreads"></a><a name="getdefaultthreads"></a>CAtlAutoThreadModuleT::GetDefaultThreads

Questa funzione statica calcola e restituisce dinamicamente il numero massimo di thread per il modulo EXE, in base al numero di processori.

```
static int GetDefaultThreads();
```

### <a name="return-value"></a>Valore restituito

Numero di thread da creare nel modulo EXE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo se si desidera utilizzare un metodo diverso per il calcolo del numero di thread. Per impostazione predefinita, il numero di thread è basato sul numero di processori.

## <a name="see-also"></a>Vedere anche

[IAtlAutoThreadModule (classe)](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[IAtlAutoThreadModule (classe)](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
