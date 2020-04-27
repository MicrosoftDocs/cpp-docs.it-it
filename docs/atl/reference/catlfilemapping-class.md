---
title: Classe CAtlFileMapping
ms.date: 11/04/2016
f1_keywords:
- CAtlFileMapping
- atlfile/ATL::CAtlFileMapping
helpviewer_keywords:
- CAtlFileMapping class
ms.assetid: 899fc058-e05e-48b5-aca9-340403bb9e26
ms.openlocfilehash: 7516349e4ec54d8cb90fa6ff23b0ded954aa043b
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168124"
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

## <a name="members"></a>Members

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMapping:: operator T *](#operator_t_star)|Consente la conversione implicita `CAtlFileMapping` di `T*`oggetti in.|

## <a name="remarks"></a>Osservazioni

Questa classe aggiunge un singolo operatore cast per consentire la conversione implicita `CAtlFileMapping` di `T*`oggetti in. Gli altri membri vengono forniti dalla classe base, [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)

`CAtlFileMapping`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile. h

## <a name="catlfilemappingoperator-t"></a><a name="operator_t_star"></a>CAtlFileMapping:: operator T *

Consente la conversione implicita `CAtlFileMapping` di `T*`oggetti in.

```cpp
operator T*() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `T*` puntatore all'inizio del file mappato alla memoria.

### <a name="remarks"></a>Osservazioni

Chiama [CAtlFileMappingBase:: GetData](../../atl/reference/catlfilemappingbase-class.md#getdata) e reinterpreta il puntatore restituito come `T*` dove *T* è il tipo usato come parametro di modello di questa classe.

## <a name="see-also"></a>Vedere anche

[Classe CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
