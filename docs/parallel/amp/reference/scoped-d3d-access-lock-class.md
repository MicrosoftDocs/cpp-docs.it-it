---
title: Classe scoped_d3d_access_lock
ms.date: 11/04/2016
f1_keywords:
- scoped_d3d_access_lock
- AMPRT/scoped_d3d_access_lock
- AMPRT/concurrency::direct3d::scoped_d3d_access_lock::scoped_d3d_access_lock
ms.assetid: 0ad333e6-9839-4736-a722-16d95d70c4b1
ms.openlocfilehash: e36c3c2cfa9d1b617e377a7e340f98875457bdf1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62352871"
---
# <a name="scopedd3daccesslock-class"></a>Classe scoped_d3d_access_lock

Wrapper RAII per un blocco di accesso di D3D su un oggetto accelerator_view.

### <a name="syntax"></a>Sintassi

```
class scoped_d3d_access_lock;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore scoped_d3d_access_lock](#ctor)|Di overload. Costruisce un oggetto `scoped_d3d_access_lock`. Il blocco viene rilasciato quando questo oggetto esce dall'ambito.|
|[~ Distruttore scoped_d3d_access_lock](#dtor)|Rilascia il blocco di accesso di D3D sull'oggetto associato `accelerator_view` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Acquisisce la proprietà di un blocco da un'altra `scoped_d3d_access_lock`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`scoped_d3d_access_lock`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Namespace:** concurrency::direct3d

##  <a name="ctor"></a> scoped_d3d_access_lock

Costruisce un oggetto `scoped_d3d_access_lock`. Il blocco viene rilasciato quando questo oggetto esce dall'ambito.

```
explicit scoped_d3d_access_lock(// [1] constructor
    accelerator_view& _Av);

explicit scoped_d3d_access_lock(// [2] constructor
    accelerator_view& _Av,
    adopt_d3d_access_lock_t _T);

scoped_d3d_access_lock(// [3] move constructor
    scoped_d3d_access_lock&& _Other);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Il `accelerator_view` per il blocco da adottare.

*_T*<br/>
Oggetto `adopt_d3d_access_lock_t`.

*_Other*<br/>
Il `scoped_d3d_access_lock` oggetto da cui spostare un blocco esistente.

## <a name="construction"></a>Costruzione

[1] costruttore acquisisce un blocco di accesso di D3D sul dato [accelerator_view](accelerator-view-class.md) oggetto. La costruzione viene bloccata fino a quando non viene acquisito il blocco.

[2] costruttore adottare un blocco di accesso di D3D dal dato [accelerator_view](accelerator-view-class.md) oggetto.

[3] costruttore di spostamento richiede un blocco di accesso di D3D esistente da un altro `scoped_d3d_access_lock` oggetto. Costruzione non viene impedita.

##  <a name="dtor"></a> ~scoped_d3d_access_lock

Rilascia il blocco di accesso di D3D sull'oggetto associato `accelerator_view` oggetto.

```
~scoped_d3d_access_lock();
```

## <a name="operator_eq"></a> operator=

Acquisisce la proprietà di un blocco di accesso di D3D da un altro `scoped_d3d_access_lock` oggetto, rilasciando il blocco precedente.

```
scoped_d3d_access_lock& operator= (scoped_d3d_access_lock&& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
L'oggetto accelerator_view da cui spostare il blocco di accesso di D3D.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `scoped_accelerator_view_lock`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)
