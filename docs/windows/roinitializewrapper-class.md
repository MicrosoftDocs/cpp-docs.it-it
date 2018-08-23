---
title: Classe RoInitializeWrapper | Microsoft Docs
ms.custom: ''
ms.date: 05/20/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper
dev_langs:
- C++
ms.assetid: 4055fbe0-63a7-4c06-b5a0-414fda5640e5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6f5c47ac34d8b159e75acf672ba57ca8c1ebac1e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592829"
---
# <a name="roinitializewrapper-class"></a>Classe RoInitializeWrapper

Inizializza il Runtime di Windows.

## <a name="syntax"></a>Sintassi

```cpp
class RoInitializeWrapper
```

## <a name="remarks"></a>Note

**RoInitializeWrapper** risulta utile in quanto Inizializza il Runtime di Windows e restituisce un HRESULT che indica se l'operazione ha avuto esito positivo. Poiché chiama il distruttore della classe `::Windows::Foundation::Uninitialize`, le istanze di **RoInitializeWrapper** deve essere dichiarata in ambito globale o di primo livello.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore RoInitializeWrapper::RoInitializeWrapper](../windows/roinitializewrapper-roinitializewrapper-constructor.md)|Inizializza una nuova istanza di **RoInitializeWrapper** classe.|
|[Distruttore RoInitializeWrapper::~RoInitializeWrapper](../windows/roinitializewrapper-tilde-roinitializewrapper-destructor.md)|Elimina l'istanza corrente del **RoInitializeWrapper** classe.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore RoInitializeWrapper::HRESULT()](../windows/roinitializewrapper-hresult-parens-operator.md)|Recupera il valore di HRESULT prodotto dal **RoInitializeWrapper** costruttore.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RoInitializeWrapper`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)