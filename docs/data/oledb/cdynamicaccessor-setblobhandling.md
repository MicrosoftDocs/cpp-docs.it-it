---
title: 'CDynamicAccessor:: Setblobhandling | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDynamicAccessor::SetBlobHandling
- CDynamicAccessor.SetBlobHandling
- ATL::CDynamicAccessor::SetBlobHandling
- SetBlobHandling
- ATL.CDynamicAccessor.SetBlobHandling
dev_langs:
- C++
helpviewer_keywords:
- SetBlobHandling method
ms.assetid: fa8b0bb3-a21b-4d64-aeef-e79bf61d079c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 21a877cb3aa3d6ff96521348350857c141b8e7b0
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="cdynamicaccessorsetblobhandling"></a>CDynamicAccessor::SetBlobHandling
Imposta il BLOB di gestione di valore per la riga corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      bool SetBlobHandling(DBBLOBHANDLINGENUM eBlobHandling);  
```  
  
#### <a name="parameters"></a>Parametri  
 `eBlobHandling`  
 Specifica la modalità di gestione dei dati BLOB. Può accettare i valori seguenti:  
  
-   **DBBLOBHANDLING_DEFAULT**: gestire i dati di colonna più grandi `nBlobSize` (come impostato dalla `SetBlobSizeLimit`) come BLOB di dati e recuperare tramite una `ISequentialStream` o `IStream` oggetto. Questa opzione tenterà di associare ogni colonna che contiene dati più grandi `nBlobSize` o elencato come **DBTYPE_IUNKNOWN** come dati BLOB.  
  
-   **DBBLOBHANDLING_NOSTREAMS**: gestire i dati di colonna più grandi `nBlobSize` (secondo l'impostazione `SetBlobSizeLimit`) come BLOB di dati e recuperarlo mediante riferimento nella memoria allocata al provider, consumer di proprietà. Questa opzione è utile per le tabelle con più di una colonna BLOB e il provider supporta solo un `ISequentialStream` oggetto per ogni funzione di accesso.  
  
-   **DBBLOBHANDLING_SKIP**: Skip (non associare) risultanti come BLOB contenente colonne (la funzione di accesso non associare o recuperare il valore della colonna, ma consente ancora di recuperare lo stato di colonna e una lunghezza).  
  
## <a name="remarks"></a>Note  
 È necessario chiamare `SetBlobHandling` prima di chiamare **aprire**.  
  
 Il metodo del costruttore [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) imposta il BLOB di gestione di valore a **DBBLOBHANDLING_DEFAULT**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)