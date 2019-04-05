---
title: Classe CDynamicStringAccessorA
ms.date: 11/04/2016
f1_keywords:
- CDynamicStringAccessorA
helpviewer_keywords:
- CDynamicStringAccessorA class
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
ms.openlocfilehash: 3a0da9c779230fc1bf58bfa1d685623f844012c7
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031353"
---
# <a name="cdynamicstringaccessora-class"></a>Classe CDynamicStringAccessorA

Consente di accedere a un'origine dati quando non si dispone di alcuna conoscenza dello schema del database (struttura sottostante).

## <a name="syntax"></a>Sintassi

```cpp
typedef CDynamicStringAccessorT<CHAR, DBTYPE_STR> CDynamicStringAccessorA;
```

## <a name="remarks"></a>Note

Entrambi richiedono che il provider recuperi tutti i dati dall'archivio dati come dati di tipo stringa, ma `CDynamicStringAccessor` richieste ANSI dati di tipo stringa.

`CDynamicStringAccessorA` eredita `GetString` e `SetString` da `CDynamicStringAccessor`. Quando si utilizzano questi metodi in un `CDynamicStringAccessorA` oggetto `BaseType` viene **CHAR**.

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[CDynamicParameterAccessor (classe)](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
