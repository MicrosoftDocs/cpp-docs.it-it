---
title: Classe CAccessor | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CAccessor<T>
- ATL::CAccessor
- CAccessor
- ATL::CAccessor<T>
- ATL.CAccessor
dev_langs:
- C++
helpviewer_keywords:
- CAccessor class
ms.assetid: b2ba959f-a686-46f3-8837-176248aef748
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0ac3ad9da312ba1723fd7201b804260e11a64660
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060696"
---
# <a name="caccessor-class"></a>Classe CAccessor

Rappresenta uno dei tipi di funzione di accesso.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class CAccessor : public CAccessorBase, public T
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe di record utente.

## <a name="remarks"></a>Note

Viene usato quando un record in modo statico è associato a un'origine dati. Il record contiene il buffer. Questa classe supporta più funzioni di accesso su un set di righe.

Usare questo tipo di funzione di accesso quando si conosce la struttura e il tipo del database.

Se la funzione di accesso contiene campi che punta alla memoria (ad esempio un `BSTR` o l'interfaccia) che deve essere liberata, chiamare la funzione membro [CAccessorRowset:: Freerecordmemory](../../data/oledb/caccessorrowset-freerecordmemory.md) prima della successiva chiamata record viene letto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)