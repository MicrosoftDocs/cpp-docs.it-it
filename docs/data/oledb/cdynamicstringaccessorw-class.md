---
description: 'Altre informazioni su: classe CDynamicStringAccessorW'
title: Classe CDynamicStringAccessorW
ms.date: 11/04/2016
f1_keywords:
- CDynamicStringAccessorW
helpviewer_keywords:
- CDynamicStringAccessorW class
ms.assetid: 9b7fd5cc-3a9b-4b57-b907-f1e35de2c98f
ms.openlocfilehash: 360a9592cdce3a1046eecb360a8691b1d8480caf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170672"
---
# <a name="cdynamicstringaccessorw-class"></a>Classe CDynamicStringAccessorW

Consente di accedere a un'origine dati quando non si conosce lo schema del database (struttura sottostante).

## <a name="syntax"></a>Sintassi

```cpp
typedef CDynamicStringAccessorT<WCHAR, DBTYPE_WSTR> CDynamicStringAccessorW;
```

## <a name="remarks"></a>Osservazioni

Entrambi richiedono che il provider recuperi tutti i dati a cui si accede dall'archivio dati come dati di tipo stringa, ma `CDynamicStringAccessor` richiede dati di tipo stringa Unicode.

`CDynamicStringAccessorW` eredita `GetString` e `SetString` da `CDynamicStringAccessor` . Quando si usano questi metodi in un `CDynamicStringAccessorW` oggetto, `BaseType` è **WCHAR**.

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
