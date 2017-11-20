---
title: 'CDynamicAccessor:: AddBindEntry | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CDynamicAccessor::AddBindEntry
- AddBindEntry
- CDynamicAccessor.AddBindEntry
- CDynamicAccessor::AddBindEntry
- ATL.CDynamicAccessor.AddBindEntry
dev_langs: C++
helpviewer_keywords: AddBindEntry method
ms.assetid: 8f139376-7db3-4193-ba3b-63fe938ffa79
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9b11409a7bbff2ef3f9c89f62fd361755d99f5d5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdynamicaccessoraddbindentry"></a>CDynamicAccessor::AddBindEntry
Aggiunge una voce di binding per le colonne di output.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT AddBindEntry(   
   const DBCOLUMNINFO& info    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `info`  
 [in] Oggetto **DBCOLUMNINFO** struttura contenente informazioni di colonna. Vedere la sezione "Strutture DBCOLUMNINFO" in [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 Utilizzare questo metodo quando si esegue l'override della funzione di accesso predefinito creato con `CDynamicAccessor` (vedere [ricerca per categorie di recupero dei dati?](../../data/oledb/fetching-data.md)).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)