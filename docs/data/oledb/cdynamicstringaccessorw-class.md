---
title: Classe CDynamicStringAccessorW
ms.date: 11/04/2016
f1_keywords:
- CDynamicStringAccessorW
helpviewer_keywords:
- CDynamicStringAccessorW class
ms.assetid: 9b7fd5cc-3a9b-4b57-b907-f1e35de2c98f
ms.openlocfilehash: 20ea4a2d795108e00c4b11c3abea6cf7b9953ca7
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59025150"
---
# <a name="cdynamicstringaccessorw-class"></a>Classe CDynamicStringAccessorW

Consente di accedere a un'origine dati quando non si dispone di alcuna conoscenza dello schema del database (struttura sottostante).

## <a name="syntax"></a>Sintassi

```cpp
typedef CDynamicStringAccessorT<WCHAR, DBTYPE_WSTR> CDynamicStringAccessorW;
```

## <a name="remarks"></a>Note

Entrambi richiedono che il provider recuperi tutti i dati dall'archivio dati come dati di tipo stringa, ma `CDynamicStringAccessor` richiede i dati stringa Unicode.

`CDynamicStringAccessorW` eredita `GetString` e `SetString` da `CDynamicStringAccessor`. Quando si utilizzano questi metodi in un `CDynamicStringAccessorW` oggetto `BaseType` viene **WCHAR**.

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
