---
title: Funzioni &lt;system_error&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 57d6f15f-f0b7-4e2f-80fe-31d3c320ee33
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 43098f6f9276c9a66aaa7a30c95a6696e33f8429
ms.lasthandoff: 02/24/2017

---
# <a name="ltsystemerrorgt-functions"></a>Funzioni &lt;system_error&gt;
||||  
|-|-|-|  
|[generic_category](#generic_category)|[make_error_code](#make_error_code)|[make_error_condition](#make_error_condition)|  
|[system_category](#system_category)|  
  
##  <a name="a-namegenericcategorya--genericcategory"></a><a name="generic_category"></a>  generic_category  
 Rappresenta la categoria di errori generici.  
  
```
extern const error_category& generic_category();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto `generic_categor` è un'implementazione di [error_category](../standard-library/error-category-class.md).  
  
##  <a name="a-namemakeerrorcodea--makeerrorcode"></a><a name="make_error_code"></a>  make_error_code  
 Crea un oggetto codice di errore.  
  
```
error_code make_error_code(generic_errno _Errno);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Errno`|Valore di enumerazione da archiviare nell'oggetto codice di errore.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto codice di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemakeerrorconditiona--makeerrorcondition"></a><a name="make_error_condition"></a>  make_error_condition  
 Crea un oggetto condizione di errore.  
  
```
error_condition make_error_condition(generic_errno _Errno);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Errno`|Valore di enumerazione da archiviare nell'oggetto condizione di errore.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto condizione di errore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesystemcategorya--systemcategory"></a><a name="system_category"></a>  system_category  
 Rappresenta la categoria di errori causati da un overflow di basso livello del sistema.  
  
```
extern const error_category& system_category();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto `system_categor` è un'implementazione di [error_category](../standard-library/error-category-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [<system_error>](../standard-library/system-error.md)




