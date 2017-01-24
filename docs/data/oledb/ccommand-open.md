---
title: "CCommand::Open | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CCommand.Open"
  - "ATL::CCommand::Open"
  - "CCommand.Open"
  - "CCommand::Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open (metodo)"
ms.assetid: 4c9b8f31-faf3-452d-9a29-3d3e5f54d6f8
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::Open
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue ed eventualmente associa il comando.  
  
## Sintassi  
  
```  
  
      HRESULT Open(  
   const CSession& session,  
   LPCWSTR wszCommand,  
   DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   REFGUID guidCommand = DBGUID_DEFAULT,  
   bool bBind = true,  
   ULONG ulPropSets = 0  
) throw( );  
HRESULT Open(  
   const CSession& session,  
   LPCSTR szCommand,  
   DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   REFGUID guidCommand = DBGUID_DEFAULT,  
   bool bBind = true,  
   ULONG ulPropSets = 0  
) throw( );  
HRESULT Open(  
   const CSession& session,  
   INT szCommand = NULL,  
   DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   REFGUID guidCommand = DBGUID_DEFAULT,  
   bool bBind = true,  
   ULONG ulPropSets = 0  
) throw( );  
HRESULT Open(  
   DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   bool bBind = true,  
   ULONG ulPropSets = 0  
) throw( );  
```  
  
#### Parametri  
 `session`  
 \[in\] la sessione in cui eseguire il comando.  
  
 `wszCommand`  
 \[in\] il comando da eseguire, passato come stringhe Unicode.  Può essere **NULL** quando si utilizza `CAccessor`in questo caso, il comando verrà recuperato dal valore passato alla macro di [DEFINE\_COMMAND](../../data/oledb/define-command.md).  Vedere [ICommand::Execute](https://msdn.microsoft.com/en-us/library/ms718095.aspx)*in OLE DB Programmer's Reference* per i dettagli.  
  
 `szCommand`  
 \[in\] stesso di `wszCommand` ma di questo parametro accetta una stringa di comando ANSI.  Il quarto form di questo metodo accetta un valore null.  Vedere più avanti "commenti" in questo argomento per i dettagli.  
  
 *pPropSet*  
 \[in\] puntatore A una matrice di strutture che contengono [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) proprietà e valori da impostare.  Vedere [Insiemi di proprietà e gruppi di proprietà](https://msdn.microsoft.com/en-us/library/ms713696.aspx)*in OLE DB Programmer's Reference* in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pRowsAffected`  
 \[in\/out\] un puntatore alla memoria in cui il numero di righe interessate da un comando viene restituito.  Se *\*pRowsAffected* è **NULL**, nessun numero di righe viene restituito.  In caso contrario, set di **Apri** \*`pRowsAffected` a seconda delle condizioni seguenti:  
  
|Se il parametro|Then|  
|---------------------|----------|  
|L'elemento di **cParamSets** di `pParams` è maggiore di 1|\*`pRowsAffected` rappresenta il numero complessivo di righe interessate da qualsiasi set di parametri specificati nell'esecuzione.|  
|Il numero di righe interessate non è disponibile|\*`pRowsAffected` viene impostato a 1.|  
|Il comando non aggiorna, non elimina, oppure non vengono inserite righe|\*`pRowsAffected` è definito.|  
  
 `guidCommand`  
 \[in\] A GUID che specifica la sintassi e le regole generali per il provider utilizzare durante l'analisi del testo del comando.  Vedere [ICommandText::GetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) e [ICommandText::SetCommandText](https://msdn.microsoft.com/en-us/library/ms709757.aspx)*in OLE DB Programmer's Reference* per i dettagli.  
  
 `bBind`  
 \[in\] specifica se associare il comando automaticamente dopo l'esecuzione.  L'impostazione predefinita è **true**, che causa il comando essere associato automaticamente.  L'impostazione `bBind` a **false** impedisce l'associazione automatica di comando per associare a esso le manualmente. \(L'associazione manuale è di particolare interesse per gli utenti di OLAP.\)  
  
 `ulPropSets`  
 \[in\] numero di strutture di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) passate nell'argomento *di pPropSet*.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 I primi tre forme di **Apri** accettano una sessione, creare un comando ed eseguire il comando, l'associazione a seconda delle esigenze tutti i parametri.  
  
 Il primo form di **Apri** accetta una stringa di comando Unicode e non ha un valore predefinito.  
  
 La seconda forma di **Apri** non accetta una stringa di comando ANSI e valore predefinito \(forniti per compatibilità con le versioni precedenti di applicazioni esistenti ANSI\).  
  
 Il terzo form di **Apri** consente alla stringa di comando sia NULL, a causa di tipo `int` con un valore predefinito NULL.  Viene fornito per chiamare `Open(session, NULL);` o `Open(session);` perché il valore è di tipo `int`.  Questa versione richiede e asserisce che il parametro di `int` NULL.  
  
 Utilizzare il quarto form di **Apri** quando è già stato creato un comando e si desidera eseguire solo [Preparare](../../data/oledb/ccommand-prepare.md) e più esecuzioni.  
  
> [!NOTE]
>  **Apri** chiama **Esegui**, che a sua volta chiama `GetNextResult`.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)