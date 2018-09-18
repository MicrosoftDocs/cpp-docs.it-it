---
title: Macro di gestione delle eccezioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atldef/ATL::_ATLCATCH
- atldef/ATL::_ATLCATCHALL
- atldef/ATL::_ATLTRY
dev_langs:
- C++
helpviewer_keywords:
- exception handling, macros
- C++ exception handling, macros
ms.assetid: a8385d34-3fb0-4006-a42a-de045cacf0f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2473a2a66792f1bfff18086030a8898a67339e10
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024281"
---
# <a name="exception-handling-macros"></a>Macro di gestione delle eccezioni

Queste macro forniscono supporto per la gestione delle eccezioni.

|||
|-|-|
|[_ATLCATCH](#_atlcatch)|Una o più istruzioni per la gestione degli errori generati nel blocco `_ATLTRY`.|
|[_ATLCATCHALL](#_atlcatchall)|Una o più istruzioni per la gestione degli errori generati nel blocco `_ATLTRY`.|
|[_ATLTRY](#_atltry)|Contrassegna una sezione di codice protetto in cui potrebbe verificarsi un errore.|

## <a name="requirements"></a>Requisiti:

**Intestazione:** atldef.h

##  <a name="_atlcatch"></a>  _ATLCATCH

Una o più istruzioni per la gestione degli errori generati nel blocco `_ATLTRY`.

```
_ATLCATCH(e)
```

### <a name="parameters"></a>Parametri

*e*<br/>
Eccezione da intercettare.

### <a name="remarks"></a>Note

Usato in combinazione con `_ATLTRY`. Si risolve in C++ [catch (e CAtlException)](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di un determinato tipo di eccezioni di C++.

##  <a name="_atlcatchall"></a>  _ATLCATCHALL

Una o più istruzioni per la gestione degli errori generati nel blocco `_ATLTRY`.

```
_ATLCATCHALL
```

### <a name="remarks"></a>Note

Usato in combinazione con `_ATLTRY`. Si risolve in C++ [catch ](../../cpp/try-throw-and-catch-statements-cpp.md) per la gestione di tutti i tipi di eccezioni C++.

##  <a name="_atltry"></a>  _ATLTRY

Contrassegna una sezione di codice protetto in cui potrebbe verificarsi un errore.

```
_ATLTRY
```

### <a name="remarks"></a>Note

Usato in combinazione con [_ATLCATCH](#_atlcatch) oppure [_ATLCATCHALL](#_atlcatchall). Si risolve per il simbolo di C++ [provare](../../cpp/try-throw-and-catch-statements-cpp.md).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
