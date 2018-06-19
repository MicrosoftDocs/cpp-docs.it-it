---
title: Classe CAccessor | Documenti Microsoft
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
ms.openlocfilehash: dffefb74faf6836b9f2fc81a7800dc34084657cf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093909"
---
# <a name="caccessor-class"></a>Classe CAccessor
Rappresenta uno dei tipi di funzione di accesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template <class T>  
class CAccessor : public CAccessorBase, public T  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe di record utente.  
  
## <a name="remarks"></a>Note  
 Viene utilizzato quando un record in modo statico è associato a un'origine dati. Il record contiene il buffer. Questa classe supporta più funzioni di accesso su un set di righe.  
  
 Utilizzare questo tipo di funzione di accesso quando si conosce la struttura e il tipo del database.  
  
 Se la funzione di accesso contiene campi che fanno riferimento alla memoria (ad esempio un `BSTR` o interfaccia) che deve essere liberata, chiamare la funzione membro [CAccessorRowset:: Freerecordmemory](../../data/oledb/caccessorrowset-freerecordmemory.md) prima della successiva lettura di record.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)