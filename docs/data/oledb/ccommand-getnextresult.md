---
title: 'CCommand:: GetNextResult | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CCommand::GetNextResult
- CCommand::GetNextResult
- GetNextResult
- CCommand.GetNextResult
- ATL.CCommand.GetNextResult
dev_langs:
- C++
helpviewer_keywords:
- GetNextResult method
ms.assetid: 63df9b55-9490-45c4-934a-879c5c2725d8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: fa77785373545b2c4efd2faef0a8c0a02ee26910
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ccommandgetnextresult"></a>CCommand::GetNextResult
Recupera il successivo set di risultati se ne è disponibile.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetNextResult(DBROWCOUNT* pulRowsAffected,  
   bool bBind = true) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *pulRowsAffected*  
 [in/out] Puntatore alla memoria in cui viene restituito il numero di righe interessate da un comando.  
  
 `bBind`  
 [in] Specifica se associare automaticamente il comando dopo l'esecuzione. Il valore predefinito è **true**, che fa sì che il comando da associare automaticamente. Impostazione `bBind` a **false** impedisce l'associazione automatica del comando in modo che è possibile associare manualmente. (Associazione manuale è di particolare interesse per gli utenti OLAP).  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Se un set di risultati è stato recuperato in precedenza, questa funzione rilascia il set di risultati precedente e separa le colonne. Se `bBind` è **true**, associa le nuove colonne.  
  
 È consigliabile chiamare questa funzione solo se è stato specificato più risultati impostando il `CCommand` parametro di modello *TMultiple*=`CMultipleResults`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)