---
title: DEFINE_COMMAND_EX | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: DEFINE_COMMAND_EX
dev_langs: C++
helpviewer_keywords: DEFINE_COMMAND_EX macro
ms.assetid: d3e2ef20-1455-46d2-8499-8ab84bbb90a4
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9b3386f420e3af97ab01defbe57303a8100a2965
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="definecommandex"></a>DEFINE_COMMAND_EX
Specifica il comando che verrà utilizzato per creare il set di righe quando si usa il [CCommand](../../data/oledb/ccommand-class.md) classe. Supporta le applicazioni Unicode e ANSI.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
DEFINE_COMMAND_EX(  
x  
,   
wszCommand  
 )  
  
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