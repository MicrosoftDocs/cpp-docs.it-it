---
title: Classe CAtlFileMapping | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAtlFileMapping
- atlfile/ATL::CAtlFileMapping
dev_langs:
- C++
helpviewer_keywords:
- CAtlFileMapping class
ms.assetid: 899fc058-e05e-48b5-aca9-340403bb9e26
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ccbf3221bddf39c8069e20636c2f2a1deb597866
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116464"
---
# <a name="catlfilemapping-class"></a>Classe CAtlFileMapping

Questa classe rappresenta un file mappato alla memoria, l'aggiunta di un operatore cast per i metodi della [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <typename T = char>
class CAtlFileMapping : public CAtlFileMappingBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati usati per l'operatore cast.

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlFileMapping::operator T *](#operator_t_star)|Consente la conversione implicita dei `CAtlFileMapping` oggetti `T*`.|

## <a name="remarks"></a>Note

Questa classe aggiunge un operatore cast singolo per consentire la conversione implicita dei `CAtlFileMapping` oggetti `T*`. Gli altri membri vengono forniti dalla classe di base, [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)

`CAtlFileMapping`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlfile.h

##  <a name="operator_t_star"></a>  CAtlFileMapping::operator T *

Consente la conversione implicita dei `CAtlFileMapping` oggetti `T*`.

```
operator T*() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `T*` puntatore all'inizio del file mappato alla memoria.

### <a name="remarks"></a>Note

Le chiamate [CAtlFileMappingBase::GetData](../../atl/reference/catlfilemappingbase-class.md#getdata) e reinterpreta il puntatore restituito come una `T*` in cui *T* è il tipo utilizzato come parametro di modello di questa classe.

## <a name="see-also"></a>Vedere anche

[Classe CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
