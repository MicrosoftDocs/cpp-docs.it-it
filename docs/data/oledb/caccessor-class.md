---
title: Classe CAccessor
ms.date: 11/04/2016
f1_keywords:
- ATL.CAccessor<T>
- ATL::CAccessor
- CAccessor
- ATL::CAccessor<T>
- ATL.CAccessor
helpviewer_keywords:
- CAccessor class
ms.assetid: b2ba959f-a686-46f3-8837-176248aef748
ms.openlocfilehash: cfc91f971fc975bcdd2c8ae37d798ff2f5a1cab0
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59039202"
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

[Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)