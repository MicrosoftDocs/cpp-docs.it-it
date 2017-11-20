---
title: 'Idbpropertiesimpl:: SetProperties | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IDBPropertiesImpl.SetProperties
- SetProperties
- IDBPropertiesImpl::SetProperties
dev_langs: C++
helpviewer_keywords: SetProperties method
ms.assetid: 2f9fc1de-7f35-4bca-bab3-7b427bf92c26
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 39a5bb5292d77f336bd6263693c343d3b302fb68
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="idbpropertiesimplsetproperties"></a>IDBPropertiesImpl::SetProperties
Imposta le proprietà i gruppi di proprietà origine dati e l'inizializzazione, per gli oggetti origine dati o al gruppo di proprietà di inizializzazione, per gli enumeratori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      STDMETHOD(SetProperties)(   
   ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]    
);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IDBProperties:: SetProperties](https://msdn.microsoft.com/en-us/library/ms723049.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 Se il provider viene inizializzato, questo metodo imposta i valori delle proprietà nel **DBPROPSET_DATASOURCE**, **DBPROPSET_DATASOURCEINFO**, **DBPROPSET_DBINIT** proprietà gruppi per l'oggetto origine dati. Se il provider non è inizializzato, imposta **DBPROPSET_DBINIT** solo proprietà del gruppo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)   
 [Idbpropertiesimpl:: GetProperties](../../data/oledb/idbpropertiesimpl-getproperties.md)   
 [IDBPropertiesImpl::GetPropertyInfo](../../data/oledb/idbpropertiesimpl-getpropertyinfo.md)