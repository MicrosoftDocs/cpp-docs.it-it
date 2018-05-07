---
title: 'CCommand:: Create | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CCommand.Create
- CCommand::Create
dev_langs:
- C++
helpviewer_keywords:
- Create method [C++]
ms.assetid: e4bede7a-68bd-491a-97f4-89b03d45cd24
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f85cfd9ed9938d76c28449fae01a87d3bb81a293
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ccommandcreate"></a>CCommand::Create
Chiamate [CCommand:: CreateCommand](../../data/oledb/ccommand-createcommand.md) per creare un comando per la sessione specificata, quindi chiama [ICommandText:: SetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) per specificare il testo del comando.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT CCommandBase::Create(const CSession& session,   
   LPCWSTR wszCommand,   
   REFGUID guidCommand = DBGUID_DEFAULT) throw ();  


HRESULT CCommandBase::Create(const CSession& session,   
   LPCSTR szCommand,   
   REFGUID guidCommand = DBGUID_DEFAULT) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 `session`  
 [in] Una sessione in cui creare il comando.  
  
 `wszCommand`  
 [in] Puntatore al testo Unicode della stringa di comando.  
  
 `szCommand`  
 [in] Puntatore al testo ANSI della stringa di comando.  
  
 `guidCommand`  
 [in] GUID che specifica la sintassi e regole generali per il provider da utilizzare durante l'analisi del testo del comando. Per una descrizione di sottolinguaggi, vedere [ICommandText::GetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 La prima forma del **crea** accetta una stringa di comando Unicode. La seconda forma di **crea** accetta una stringa di comando ANSI (disponibile per la compatibilità con le applicazioni esistenti ANSI).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)