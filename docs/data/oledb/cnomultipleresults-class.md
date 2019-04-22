---
title: Classe CNoMultipleResults
ms.date: 11/04/2016
f1_keywords:
- CNoMultipleResults
- ATL.CNoMultipleResults
- ATL::CNoMultipleResults
helpviewer_keywords:
- CNoMultipleResults class
ms.assetid: 343e77c4-b319-476e-b592-901ab9b2f34e
ms.openlocfilehash: 59b7b35c350a37f13e1f253bc1430d69521e4fa8
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59026727"
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