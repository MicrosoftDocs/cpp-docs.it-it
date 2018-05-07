---
title: DEFINE_COMMAND_EX | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- DEFINE_COMMAND_EX
dev_langs:
- C++
helpviewer_keywords:
- DEFINE_COMMAND_EX macro
ms.assetid: d3e2ef20-1455-46d2-8499-8ab84bbb90a4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b2a77fa0d6655edeee88df3c7c45e1936a766b40
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="definecommandex"></a>DEFINE_COMMAND_EX
Specifica il comando che verrà utilizzato per creare il set di righe quando si usa il [CCommand](../../data/oledb/ccommand-class.md) classe. Supporta le applicazioni Unicode e ANSI.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
DEFINE_COMMAND_EX(x, wszCommand)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome della classe di record (comando) utente.  
  
 `wszCommand`  
 [in] La stringa di comando che verrà utilizzata per creare il set di righe quando si usa [CCommand](../../data/oledb/ccommand-class.md).  
  
## <a name="remarks"></a>Note  
 La stringa di comando specificato verrà utilizzata come impostazione predefinita se non si specifica il testo del comando nel [CCommand::](../../data/oledb/ccommand-open.md) metodo.  
  
 Questa macro accetta le stringhe Unicode, indipendentemente dal tipo di applicazione. Questa macro è preferibile [DEFINE_COMMAND](../../data/oledb/define-command.md) perché supporta Unicode nonché applicazioni ANSI.  
  
## <a name="example"></a>Esempio  
 Vedere [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)