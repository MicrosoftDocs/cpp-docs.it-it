---
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
ms.openlocfilehash: 2beffbbed0efee799005190bd7fd071a2087e4d9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330091"
---
# <a name="exception-handling-macros"></a>Macro di gestione delle eccezioni

Queste macro forniscono supporto per la gestione delle eccezioni.

|||
|-|-|
|[_ATLCATCH](#_atlcatch)|Istruzioni per gestire gli errori che `_ATLTRY`si verificano nell'oggetto associato.|
|[_ATLCATCHALL](#_atlcatchall)|Istruzioni per gestire gli errori che `_ATLTRY`si verificano nell'oggetto associato.|
|[_ATLTRY](#_atltry)|Contrassegna una sezione di codice sorvegliata in cui potrebbe verificarsi un errore.|

## <a name="requirements"></a>Requisiti:

**Intestazione:** atldef.h

## <a name="_atlcatch"></a><a name="_atlcatch"></a>_ATLCATCH

Istruzioni per gestire gli errori che `_ATLTRY`si verificano nell'oggetto associato.

```
_ATLCATCH(e)
```

### <a name="parameters"></a>Parametri

*e*<br/>
Eccezione a catch.

### <a name="remarks"></a>Osservazioni

Viene utilizzata insieme a `_ATLTRY`. Risolve in [c'è catch(CAtlException e)](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di un determinato tipo di eccezioni C .

## <a name="_atlcatchall"></a><a name="_atlcatchall"></a>_ATLCATCHALL

Istruzioni per gestire gli errori che `_ATLTRY`si verificano nell'oggetto associato.

```
_ATLCATCHALL
```

### <a name="remarks"></a>Osservazioni

Viene utilizzata insieme a `_ATLTRY`. Risolve in [c'è catch(...)](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di tutti i tipi di eccezioni C .

## <a name="_atltry"></a><a name="_atltry"></a>_ATLTRY

Contrassegna una sezione di codice sorvegliata in cui potrebbe verificarsi un errore.

```
_ATLTRY
```

### <a name="remarks"></a>Osservazioni

Utilizzato in combinazione con [_ATLCATCH](#_atlcatch) o [_ATLCATCHALL](#_atlcatchall). Risolve il simbolo di C, [provare](../../cpp/try-throw-and-catch-statements-cpp.md).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
