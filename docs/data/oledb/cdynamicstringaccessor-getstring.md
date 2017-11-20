---
title: 'CDynamicStringAccessor:: GetString | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDynamicStringAccessor.GetString
- CDynamicStringAccessor::GetString
dev_langs: C++
helpviewer_keywords: GetString method
ms.assetid: 4af27f27-7589-49f5-93d8-6ef05c023c8a
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5b77819f0d9314518b4e7afd4ca8769bf001c48d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdynamicstringaccessorgetstring"></a>CDynamicStringAccessor::GetString
Recupera i dati specificati di colonna come stringa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      BaseType* GetString(  
   DBORDINAL nColumn  
) const throw( );  
BaseType* GetString(  
   const CHAR* pColumnName  
) const throw( );  
BaseType* GetString(  
   const WCHAR* pColumnName  
) const throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `nColumn`  
 [in] Numero di colonna. Numeri di colonna iniziano con 1. Il valore 0 si intende la colonna del segnalibro, se presente.  
  
 `pColumnName`  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore al valore stringa recuperato dalla colonna specificata. Il valore è di tipo ***BaseType***, che sarà **CHAR** o **WCHAR** a seconda se viene definito Unicode o meno. Restituisce NULL se non è possibile trovare la colonna specificata.  
  
## <a name="remarks"></a>Note  
 Il secondo override modulo accetta il nome della colonna come una stringa ANSI. Il terzo di eseguire l'override modulo accetta il nome della colonna come stringa Unicode.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)