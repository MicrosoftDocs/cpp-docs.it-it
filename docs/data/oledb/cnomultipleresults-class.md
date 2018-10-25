---
title: Classe CNoMultipleResults | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CNoMultipleResults
- ATL.CNoMultipleResults
- ATL::CNoMultipleResults
dev_langs:
- C++
helpviewer_keywords:
- CNoMultipleResults class
ms.assetid: 343e77c4-b319-476e-b592-901ab9b2f34e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6d68daae7bce6ca4c9ffafe7a24c80cff3a5426a
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50059857"
---
# <a name="cnomultipleresults-class"></a>Classe CNoMultipleResults

Utilizzato come argomento di modello (*TMultiple*) per [CCommand](../../data/oledb/ccommand-class.md) per creare un comando ottimizzato che gestisce un singolo risultato set.

## <a name="syntax"></a>Sintassi

```cpp
class CNoMultipleResults
```

## <a name="remarks"></a>Note

Se si vuole che un comando gestisca più set di risultati, usare [CMultipleResults](../../data/oledb/cmultipleresults-class.md) invece.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)