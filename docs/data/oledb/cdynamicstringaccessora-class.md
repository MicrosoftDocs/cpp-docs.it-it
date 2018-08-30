---
title: Classe CDynamicStringAccessorA | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDynamicStringAccessorA
dev_langs:
- C++
helpviewer_keywords:
- CDynamicStringAccessorA class
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 612050c74cf33d128f108962fab54ef6c0e8e5d9
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43214565"
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

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
