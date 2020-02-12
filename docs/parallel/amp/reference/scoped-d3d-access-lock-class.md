---
title: Classe scoped_d3d_access_lock
ms.date: 11/04/2016
f1_keywords:
- scoped_d3d_access_lock
- AMPRT/scoped_d3d_access_lock
- AMPRT/concurrency::direct3d::scoped_d3d_access_lock::scoped_d3d_access_lock
ms.assetid: 0ad333e6-9839-4736-a722-16d95d70c4b1
ms.openlocfilehash: b5a2d9dab9cba7b19fa0d0b1627f653f2c7fdc57
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126396"
---
# <a name="scoped_d3d_access_lock-class"></a>Classe scoped_d3d_access_lock

Wrapper RAII per un blocco di accesso D3D su un oggetto accelerator_view.

## <a name="syntax"></a>Sintassi

```cpp
class scoped_d3d_access_lock;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore scoped_d3d_access_lock](#ctor)|Di overload. Costruisce un oggetto `scoped_d3d_access_lock`. Il blocco viene rilasciato quando l'oggetto esce dall'ambito.|
|[distruttore ~ scoped_d3d_access_lock](#dtor)|Rilascia il blocco di accesso D3D sull'oggetto `accelerator_view` associato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Acquisisce la proprietà di un blocco da un altro `scoped_d3d_access_lock`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`scoped_d3d_access_lock`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency::d irect3d

## <a name="ctor"></a>scoped_d3d_access_lock

Costruisce un oggetto `scoped_d3d_access_lock`. Il blocco viene rilasciato quando l'oggetto esce dall'ambito.

```cpp
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
`accelerator_view` per il blocco da adottare.

*_T*<br/>
Oggetto `adopt_d3d_access_lock_t`.

*_Other*<br/>
Oggetto `scoped_d3d_access_lock` da cui spostare un blocco esistente.

## <a name="construction"></a>Costruzioni

[1] il costruttore acquisisce un blocco di accesso D3D sull'oggetto [accelerator_view](accelerator-view-class.md) specificato. La costruzione si blocca fino a quando non viene acquisito il blocco.

[2] il costruttore adotta un blocco di accesso D3D dall'oggetto [accelerator_view](accelerator-view-class.md) specificato.

[3] il costruttore di spostamento accetta un blocco di accesso D3D esistente da un altro oggetto `scoped_d3d_access_lock`. La costruzione non si blocca.

## <a name="dtor"></a>~ scoped_d3d_access_lock

Rilascia il blocco di accesso D3D sull'oggetto `accelerator_view` associato.

```cpp
~scoped_d3d_access_lock();
```

## <a name="operator_eq"></a>operatore =

Acquisisce la proprietà di un blocco di accesso D3D da un altro `scoped_d3d_access_lock` oggetto, rilasciando il blocco precedente.

```cpp
scoped_d3d_access_lock& operator= (scoped_d3d_access_lock&& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Accelerator_view da cui spostare il blocco di accesso D3D.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `scoped_accelerator_view_lock`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)
