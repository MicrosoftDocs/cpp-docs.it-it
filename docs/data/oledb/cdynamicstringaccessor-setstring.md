---
title: ':: GetString | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDynamicStringAccessor::SetString
- CDynamicStringAccessor.SetString
dev_langs: C++
helpviewer_keywords: SetString method
ms.assetid: 94846d8b-4c1b-47fe-acdc-1752981cee25
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7c05186d8ea7f62ad07cae9a4b4689083543e485
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicstringaccessorsetstring"></a>CDynamicStringAccessor::SetString
Imposta i dati specificati di colonna come stringa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT SetString(  
   DBORDINAL nColumn,  
   BaseType* data  
) throw( );  
HRESULT SetString(  
   const CHAR* pColumnName,  
   BaseType* data  
) throw( );  
HRESULT SetString(  
   const WCHAR* pColumnName,  
   BaseType* data  
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `nColumn`  
 [in] Numero di colonna. Numeri di colonna iniziano con 1. Il valore speciale 0 si intende la colonna del segnalibro, se presente.  
  
 `pColumnName`  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
 `data`  
 [in] Puntatore a dati di tipo stringa da scrivere nella colonna specificata.  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore al valore stringa per cui impostare la colonna specificata. Il valore è di tipo `BaseType`, che sarà `CHAR` o `WCHAR` a seconda che `_UNICODE` è definito o non definito.  
  
## <a name="remarks"></a>Note  
 Il secondo eseguire l'override modulo accetta il nome della colonna come una stringa ANSI e la terza forma accetta il nome della colonna come stringa Unicode.  
  
 Se `_SECURE_ATL` è definito per un valore diverso da zero, verrà generato un errore di asserzione di runtime se l'input `data` stringa è più lunga la lunghezza massima consentita della colonna di dati di riferimento. In caso contrario, la stringa di input verrà troncata se supera la lunghezza massima consentita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)