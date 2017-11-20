---
title: DEFINE_COMMAND | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: DEFINE_COMMAND
dev_langs: C++
helpviewer_keywords: DEFINE_COMMAND macro
ms.assetid: 9d724968-e242-413c-9a13-e7175fccf9b1
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: db01974bcc488bfa16d6feffa4c2a0377f1b6108
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="definecommand"></a>DEFINE_COMMAND
Specifica il comando che verrà utilizzato per creare il set di righe quando si usa il [CCommand](../../data/oledb/ccommand-class.md) classe. Accetta solo i tipi di stringa che corrisponde al tipo di applicazione specificata (ANSI o Unicode).  
  
> [!NOTE]
>  È consigliabile utilizzare [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) anziché `DEFINE_COMMAND`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
DEFINE_COMMAND(  
x  
,   
szCommand  
 )  
  
```  
  
#### <a name="parameters"></a>Parametri  
 *x*  
 [in] Il nome della classe di record (comando) utente.  
  
 `szCommand`  
 [in] La stringa di comando che verrà utilizzata per creare il set di righe quando si usa [CCommand](../../data/oledb/ccommand-class.md).  
  
## <a name="remarks"></a>Note  
 La stringa di comando specificato verrà utilizzata come impostazione predefinita se non si specifica il testo del comando nel [CCommand::](../../data/oledb/ccommand-open.md) metodo.  
  
 Questa macro accetta stringhe ANSI, se si compila l'applicazione come ANSI o Unicode stringhe se si compila l'applicazione come Unicode. È consigliabile utilizzare [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) anziché `DEFINE_COMMAND`, in quanto il primo accetta le stringhe Unicode, indipendentemente dal tipo di applicazione ANSI o Unicode.  
  
## <a name="example"></a>Esempio  
 Vedere [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)