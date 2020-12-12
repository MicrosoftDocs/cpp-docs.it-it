---
description: 'Altre informazioni su: Classe CDynamicStringAccessorA'
title: Classe CDynamicStringAccessorA
ms.date: 11/04/2016
f1_keywords:
- CDynamicStringAccessorA
helpviewer_keywords:
- CDynamicStringAccessorA class
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
ms.openlocfilehash: 45a4d10c8a50c4009151fa90e51172405047a21a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170724"
---
# <a name="cdynamicstringaccessora-class"></a>Classe CDynamicStringAccessorA

Consente di accedere a un'origine dati quando non si conosce lo schema del database (struttura sottostante).

## <a name="syntax"></a>Sintassi

```cpp
typedef CDynamicStringAccessorT<CHAR, DBTYPE_STR> CDynamicStringAccessorA;
```

## <a name="remarks"></a>Osservazioni

Entrambi richiedono che il provider recuperi tutti i dati a cui si accede dall'archivio dati come dati stringa, ma `CDynamicStringAccessor` richiede dati stringa ANSI.

`CDynamicStringAccessorA` eredita `GetString` e `SetString` da `CDynamicStringAccessor` . Quando si usano questi metodi in un `CDynamicStringAccessorA` oggetto, `BaseType` è **char**.

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli. h

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
