---
description: 'Altre informazioni su: classe CAtlFileMapping'
title: Classe CAtlFileMapping
ms.date: 11/04/2016
f1_keywords:
- CAtlFileMapping
- atlfile/ATL::CAtlFileMapping
helpviewer_keywords:
- CAtlFileMapping class
ms.assetid: 899fc058-e05e-48b5-aca9-340403bb9e26
ms.openlocfilehash: 875979d47ad4cb5b9c59047eff1f50acd35d1251
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147420"
---
# <a name="catlfilemapping-class"></a>Classe CAtlFileMapping

Questa classe rappresenta un file mappato alla memoria, aggiungendo un operatore cast ai metodi di [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T = char>
class CAtlFileMapping : public CAtlFileMappingBase
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati utilizzati per l'operatore cast.

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlFileMapping:: operator T *](#operator_t_star)|Consente la conversione implicita di `CAtlFileMapping` oggetti in `T*` .|

## <a name="remarks"></a>Commenti

Questa classe aggiunge un singolo operatore cast per consentire la conversione implicita di `CAtlFileMapping` oggetti in `T*` . Gli altri membri vengono forniti dalla classe base, [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)

`CAtlFileMapping`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile. h

## <a name="catlfilemappingoperator-t"></a><a name="operator_t_star"></a> CAtlFileMapping:: operator T *

Consente la conversione implicita di `CAtlFileMapping` oggetti in `T*` .

```cpp
operator T*() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `T*` puntatore all'inizio del file mappato alla memoria.

### <a name="remarks"></a>Commenti

Chiama [CAtlFileMappingBase:: GetData](../../atl/reference/catlfilemappingbase-class.md#getdata) e reinterpreta il puntatore restituito come `T*` dove *T* è il tipo usato come parametro di modello di questa classe.

## <a name="see-also"></a>Vedi anche

[Classe CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
