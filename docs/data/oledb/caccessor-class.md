---
description: 'Altre informazioni su: classe CAccessor'
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
ms.openlocfilehash: 26b03bc3f464ce606194d6835953c39969bde5de
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319170"
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

## <a name="remarks"></a>Commenti

Viene utilizzato quando un record viene associato in modo statico a un'origine dati. Il record contiene il buffer. Questa classe supporta più funzioni di accesso su un set di righe.

Utilizzare questo tipo di funzione di accesso quando si conosce la struttura e il tipo del database.

Se la funzione di accesso contiene campi che puntano a memoria, ad esempio un' `BSTR` interfaccia o, che devono essere liberati, chiamare la funzione membro [CAccessorRowset:: FreeRecordMemory](./caccessorrowset-class.md#freerecordmemory) prima di leggere il record successivo.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
