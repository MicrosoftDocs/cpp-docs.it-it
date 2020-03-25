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
ms.openlocfilehash: 793b820264d001fbfbf7920fd322a55b98e90f0d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211718"
---
# <a name="cnomultipleresults-class"></a>Classe CNoMultipleResults

Usato come argomento di modello (*TMultiple*) per [CCommand](../../data/oledb/ccommand-class.md) per creare un comando ottimizzato che gestisce un singolo set di risultati.

## <a name="syntax"></a>Sintassi

```cpp
class CNoMultipleResults
```

## <a name="remarks"></a>Osservazioni

Se si desidera che un comando gestisca più set di risultati, utilizzare invece [CMultipleResults](../../data/oledb/cmultipleresults-class.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
