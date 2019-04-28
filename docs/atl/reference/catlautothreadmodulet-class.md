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
ms.openlocfilehash: 63f1c8dbe3c752773fd64c6e339a9a3b67051d35
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62247173"
---
# <a name="catlautothreadmodulet-class"></a>Classe CAtlAutoThreadModuleT

Questa classe fornisce metodi per l'implementazione di un server COM in pool di thread, modello di apartment.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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

*ThreadAllocator*<br/>
La classe di gestione di selezione di thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

*dwWait*<br/>
Specifica l'intervallo di timeout, espresso in millisecondi. Il valore predefinito è INFINITE, il che significa intervallo di timeout del metodo mai allo scadere dell'intervallo.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlAutoThreadModuleT::GetDefaultThreads](#getdefaultthreads)|Questa funzione statica in modo dinamico calcola e restituisce il numero massimo di thread per il modulo di file EXE, in base al numero di processori.|

## <a name="remarks"></a>Note

La classe [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) deriva da `CAtlAutoThreadModuleT` per implementare un pool di thread di modello di apartment COM server. Sostituisce la classe obsoleta [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

> [!NOTE]
>  Questa classe non deve essere utilizzata in una DLL, come il valore predefinito *dwWait* valore infinito provocherà un deadlock quando la DLL viene scaricata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlAutoThreadModule`

`CAtlAutoThreadModuleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="getdefaultthreads"></a>  CAtlAutoThreadModuleT::GetDefaultThreads

Questa funzione statica in modo dinamico calcola e restituisce il numero massimo di thread per il modulo di file EXE, in base al numero di processori.

```
static int GetDefaultThreads();
```

### <a name="return-value"></a>Valore restituito

Il numero di thread da creare nel modulo EXE.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo se si desidera utilizzare un metodo diverso per il calcolo del numero di thread. Per impostazione predefinita, il numero di thread si basa sul numero di processori.

## <a name="see-also"></a>Vedere anche

[Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
