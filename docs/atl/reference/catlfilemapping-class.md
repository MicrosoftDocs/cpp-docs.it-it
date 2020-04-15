---
title: Classe CAtlFileMapping
ms.date: 11/04/2016
f1_keywords:
- CAtlFileMapping
- atlfile/ATL::CAtlFileMapping
helpviewer_keywords:
- CAtlFileMapping class
ms.assetid: 899fc058-e05e-48b5-aca9-340403bb9e26
ms.openlocfilehash: ca46ccdacf5ea24f1de26cdc75bf808c4ecfaa40
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318963"
---
# <a name="catlfilemapping-class"></a>Classe CAtlFileMapping

Questa classe rappresenta un file mappato alla memoria, aggiungendo un operatore cast ai metodi di [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <typename T = char>
class CAtlFileMapping : public CAtlFileMappingBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati utilizzati per l'operatore di cast.

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMapping::operatore T](#operator_t_star)|Consente la `CAtlFileMapping` conversione `T*`implicita di oggetti in .|

## <a name="remarks"></a>Osservazioni

Questa classe aggiunge un singolo operatore `CAtlFileMapping` cast `T*`per consentire la conversione implicita di oggetti in . Altri membri vengono forniti dalla classe base, [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)

`CAtlFileMapping`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

## <a name="catlfilemappingoperator-t"></a><a name="operator_t_star"></a>CAtlFileMapping::operatore T

Consente la `CAtlFileMapping` conversione `T*`implicita di oggetti in .

```
operator T*() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce `T*` un puntatore all'inizio del file mappato alla memoria.

### <a name="remarks"></a>Osservazioni

Chiama [CAtlFileMappingBase::GetData](../../atl/reference/catlfilemappingbase-class.md#getdata) e reinterpreta il puntatore restituito come un `T*` dove *T* è il tipo utilizzato come parametro di modello di questa classe.

## <a name="see-also"></a>Vedere anche

[Classe CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
