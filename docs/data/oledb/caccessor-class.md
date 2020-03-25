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
ms.openlocfilehash: 2b30cef2baf8c13c5001e44901b984aa1293494d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212303"
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
Classe di record utente.

## <a name="remarks"></a>Osservazioni

Viene utilizzato quando un record viene associato in modo statico a un'origine dati. Il record contiene il buffer. Questa classe supporta più funzioni di accesso su un set di righe.

Utilizzare questo tipo di funzione di accesso quando si conosce la struttura e il tipo del database.

Se la funzione di accesso contiene campi che puntano a memoria, ad esempio un `BSTR` o un'interfaccia, che devono essere liberati, chiamare la funzione membro [CAccessorRowset:: FreeRecordMemory](../../data/oledb/caccessorrowset-freerecordmemory.md) prima di leggere il record successivo.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
