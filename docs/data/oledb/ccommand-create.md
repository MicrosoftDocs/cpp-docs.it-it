---
title: "CCommand::Create | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CCommand.Create"
  - "CCommand::Create"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Create (metodo) [C++]"
ms.assetid: e4bede7a-68bd-491a-97f4-89b03d45cd24
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::Create
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiama [CCommand::CreateCommand](../../data/oledb/ccommand-createcommand.md) per creare un comando per la sessione specificata, quindi chiama [ICommandText::SetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) per specificare il testo del comando.  
  
## Sintassi  
  
```  
  
      HRESULT CCommandBase::Create(  
   const CSession& session,   
   LPCWSTR wszCommand,   
   REFGUID guidCommand = DBGUID_DEFAULT  
) throw ( );  
HRESULT CCommandBase::Create(  
   const CSession& session,   
   LPCSTR szCommand,   
   REFGUID guidCommand = DBGUID_DEFAULT  
) throw ( );  
```  
  
#### Parametri  
 `session`  
 \[in\] di sessione Inesistente in cui creare il comando.  
  
 `wszCommand`  
 \[in\] puntatore Al testo Unicode della stringa di comando.  
  
 `szCommand`  
 \[in\] puntatore Al testo ANSI della stringa di comando.  
  
 `guidCommand`  
 \[in\] A GUID che specifica la sintassi e le regole generali per il provider utilizzare durante l'analisi del testo del comando.  Per una descrizione di sottolinguaggi, vedere [ICommandText::GetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx)*in OLE DB Programmer's Reference*.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Il primo form di **Crea** accetta una stringa di comando Unicode.  La seconda forma di **Crea** accetta una stringa di comando ANSI \(fornita per compatibilità con le versioni precedenti di applicazioni esistenti ANSI\).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)