---
title: 'CCommand:: | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CCommand.Open
- ATL::CCommand::Open
- CCommand.Open
- CCommand::Open
dev_langs:
- C++
helpviewer_keywords:
- Open method
ms.assetid: 4c9b8f31-faf3-452d-9a29-3d3e5f54d6f8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bf4d30382224cd1fe85d12623acdcb90b0dee1bd
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ccommandopen"></a>CCommand::Open
Esegue ed eventualmente associa il comando.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Open(const CSession& session,  
   LPCWSTR wszCommand,  
   DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   REFGUID guidCommand = DBGUID_DEFAULT,  
   bool bBind = true,  
   ULONG ulPropSets = 0) throw();  


HRESULT Open(const CSession& session,  
   LPCSTR szCommand,  
   DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   REFGUID guidCommand = DBGUID_DEFAULT,  
   bool bBind = true,  
   ULONG ulPropSets = 0) throw();  


HRESULT Open(const CSession& session,  
   INT szCommand = NULL,  
   DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   REFGUID guidCommand = DBGUID_DEFAULT,  
   bool bBind = true,  
   ULONG ulPropSets = 0) throw();  


HRESULT Open(DBPROPSET *pPropSet = NULL,  
   DBROWCOUNT* pRowsAffected = NULL,  
   bool bBind = true,  
   ULONG ulPropSets = 0) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `session`  
 [in] La sessione in cui eseguire il comando.  
  
 `wszCommand`  
 [in] Il comando da eseguire, passato come stringa Unicode. Può essere **NULL** quando si utilizza `CAccessor`, nel qual caso il comando verrà recuperato dal valore passato per il [DEFINE_COMMAND](../../data/oledb/define-command.md) (macro). Vedere [ICommand:: Execute](https://msdn.microsoft.com/en-us/library/ms718095.aspx) nel *riferimento per programmatori OLE DB* per informazioni dettagliate.  
  
 `szCommand`  
 [in] Uguale a `wszCommand` ad eccezione del fatto che questo parametro accetta una stringa di comando ANSI. Il quarto form di questo metodo può accettare un valore NULL. Vedere "la sezione Osservazioni" più avanti in questo argomento per informazioni dettagliate.  
  
 *pPropSet*  
 [in] Un puntatore a una matrice di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) strutture contenenti le proprietà e valori da impostare. Vedere [set di proprietà e i gruppi di proprietà](https://msdn.microsoft.com/en-us/library/ms713696.aspx) nel *di riferimento per programmatori OLE DB* in Windows SDK.  
  
 `pRowsAffected`  
 [in/out] Puntatore alla memoria in cui viene restituito il numero di righe interessate da un comando. Se  *\*pRowsAffected* è **NULL**, non viene restituito alcun conteggio delle righe. In caso contrario, **aprire** imposta *`pRowsAffected` in base alle condizioni seguenti:  
  
|Se|Then|  
|--------|----------|  
|Il **cParamSets** elemento `pParams` è maggiore di 1|*`pRowsAffected` rappresenta il numero totale di righe interessate da tutti i set di parametri specificati nell'esecuzione.|  
|Il numero di righe interessate non è disponibile|*`pRowsAffected` è impostato su -1.|  
|Il comando non viene aggiornata, eliminare o inserire righe|*`pRowsAffected` non è definito.|  
  
 `guidCommand`  
 [in] GUID che specifica la sintassi e regole generali per il provider da utilizzare durante l'analisi del testo del comando. Vedere [ICommandText::GetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) e [ICommandText:: SetCommandText](https://msdn.microsoft.com/en-us/library/ms709757.aspx) nel *riferimento per programmatori OLE DB* per informazioni dettagliate.  
  
 `bBind`  
 [in] Specifica se associare automaticamente il comando dopo l'esecuzione. Il valore predefinito è **true**, che fa sì che il comando da associare automaticamente. Impostazione `bBind` a **false** impedisce l'associazione automatica del comando in modo che è possibile associare manualmente. (Associazione manuale è di particolare interesse per gli utenti OLAP).  
  
 `ulPropSets`  
 [in] Il numero di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) strutture passato il *pPropSet* argomento.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Le prime tre forme di **aprire** richiedere una sessione, creare un comando ed eseguire il comando, i parametri di associazione in base alle esigenze.  
  
 La prima forma del **aprire** accetta una stringa di comando di Unicode e nessun valore predefinito.  
  
 La seconda forma di **aprire** accetta una stringa di comando ANSI e nessun valore predefinito (disponibile per la compatibilità con le applicazioni esistenti ANSI).  
  
 La terza tipologia di **aprire** consente la stringa di comando deve essere NULL, a causa di tipo `int` con un valore predefinito null. Viene fornito per la chiamata `Open(session, NULL);` o `Open(session);` perché NULL è di tipo `int`. Questa versione è necessario e dichiara che il `int` parametro essere NULL.  
  
 Utilizzare la forma del quarto **aprire** quando è già stato creato un comando e si desidera eseguire una singola [Prepare](../../data/oledb/ccommand-prepare.md) e più esecuzioni.  
  
> [!NOTE]
>  **Aprire** chiamate **Execute**, che a sua volta chiama `GetNextResult`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)