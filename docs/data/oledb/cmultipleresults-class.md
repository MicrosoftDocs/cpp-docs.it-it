---
title: Classe CMultipleResults | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CMultipleResults
- ATL::CMultipleResults
- CMultipleResults
dev_langs:
- C++
helpviewer_keywords:
- CMultipleResults class
ms.assetid: 6ce5bbb9-b551-483c-988a-e6aee9135a19
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0d6603a410d44608d999685f42954e4562855138
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50072980"
---
# <a name="cmultipleresults-class"></a>Classe CMultipleResults

Se si vuole che un comando gestisca più set di risultati, usare `CMultipleResults` per il `CCommand` argomento di modello *TMultiple*.

## <a name="syntax"></a>Sintassi

```cpp
class CMultipleResults
```

## <a name="remarks"></a>Note

Per gestire il risultato di più set, [CCommand](../../data/oledb/ccommand-class.md) deve ereditare da questa classe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)