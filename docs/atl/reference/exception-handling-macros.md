---
description: 'Altre informazioni su: macro di gestione delle eccezioni'
title: Macro di gestione delle eccezioni
ms.date: 11/04/2016
f1_keywords:
- atldef/ATL::_ATLCATCH
- atldef/ATL::_ATLCATCHALL
- atldef/ATL::_ATLTRY
helpviewer_keywords:
- exception handling, macros
- C++ exception handling, macros
ms.assetid: a8385d34-3fb0-4006-a42a-de045cacf0f4
ms.openlocfilehash: 8d5e6564dec5769fb172c66b3102677e58cbd788
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139828"
---
# <a name="exception-handling-macros"></a>Macro di gestione delle eccezioni

Queste macro forniscono supporto per la gestione delle eccezioni.

|Nome|Description|
|-|-|
|[_ATLCATCH](#_atlcatch)|Istruzioni per gestire gli errori che si verificano nell'oggetto associato `_ATLTRY` .|
|[_ATLCATCHALL](#_atlcatchall)|Istruzioni per gestire gli errori che si verificano nell'oggetto associato `_ATLTRY` .|
|[_ATLTRY](#_atltry)|Contrassegna una sezione di codice sorvegliata in cui è possibile che si verifichi un errore.|

## <a name="requirements"></a>Requisiti:

**Intestazione:** atldef. h

## <a name="_atlcatch"></a><a name="_atlcatch"></a> _ATLCATCH

Istruzioni per gestire gli errori che si verificano nell'oggetto associato `_ATLTRY` .

```
_ATLCATCH(e)
```

### <a name="parameters"></a>Parametri

*e*<br/>
Eccezione da intercettare.

### <a name="remarks"></a>Commenti

Viene utilizzata insieme a `_ATLTRY`. Viene risolto in C++ [catch (CAtlException e)](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di un determinato tipo di eccezioni c++.

## <a name="_atlcatchall"></a><a name="_atlcatchall"></a> _ATLCATCHALL

Istruzioni per gestire gli errori che si verificano nell'oggetto associato `_ATLTRY` .

```
_ATLCATCHALL
```

### <a name="remarks"></a>Commenti

Viene utilizzata insieme a `_ATLTRY`. Viene risolto in C++ [catch (...)](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di tutti i tipi di eccezioni c++.

## <a name="_atltry"></a><a name="_atltry"></a> _ATLTRY

Contrassegna una sezione di codice sorvegliata in cui è possibile che si verifichi un errore.

```
_ATLTRY
```

### <a name="remarks"></a>Commenti

Utilizzato insieme a [_ATLCATCH](#_atlcatch) o [_ATLCATCHALL](#_atlcatchall). Viene risolto nel simbolo C++ [try](../../cpp/try-throw-and-catch-statements-cpp.md).

## <a name="see-also"></a>Vedi anche

[Macro](../../atl/reference/atl-macros.md)
