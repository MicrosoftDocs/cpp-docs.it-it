---
title: 'CManualAccessor:: CreateAccessor | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CManualAccessor::CreateAccessor
- CreateAccessor
- ATL.CManualAccessor.CreateAccessor
- CManualAccessor.CreateAccessor
- CManualAccessor::CreateAccessor
dev_langs: C++
helpviewer_keywords: CreateAccessor method
ms.assetid: 594c8d6d-b49a-4818-a9a5-81c8115d4e42
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f313e6d2b13a03a91295c75d52e4e77d5dfda22b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmanualaccessorcreateaccessor"></a>CManualAccessor::CreateAccessor
Alloca memoria per la colonna strutture di associazione e inizializza i membri dati della colonna.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT CreateAccessor(   
   int nBindEntries,   
   void* pBuffer,   
   DBLENGTH nBufferSize    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `nBindEntries`  
 [in] Numero di colonne. Questo numero deve corrispondere al numero di chiamate per il [CManualAccessor:: AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md) (funzione).  
  
 `pBuffer`  
 [in] Un puntatore al buffer in cui sono archiviate le colonne di output.  
  
 `nBufferSize`  
 [in] Le dimensioni del buffer in byte.  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 Chiamare questa funzione prima di chiamare il `CManualAccessor::AddBindEntry` (funzione).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [Esempio DBViewer](../../visual-cpp-samples.md)