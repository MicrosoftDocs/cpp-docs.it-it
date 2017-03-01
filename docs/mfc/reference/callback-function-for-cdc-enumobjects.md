---
title: 'Funzione di callback per CDC:: EnumObjects | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- Callback Function for CDC::EnumObjects
dev_langs:
- C++
helpviewer_keywords:
- callback functions, for CDC::EnumObjects
ms.assetid: 380088b1-88a5-4fb4-bbb5-dd9e8386572b
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: e4b24b5f5333d5514b9fdf69d204bca5d7947d7a
ms.lasthandoff: 02/24/2017

---
# <a name="callback-function-for-cdcenumobjects"></a>Funzione di callback per CDC::EnumObjects
Il *ObjectFunc* nome è un segnaposto per il nome della funzione fornita dall'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int CALLBACK EXPORT ObjectFunc(
    LPSTR lpszLogObject,  
    LPSTR* lpData);
```  
  
#### <a name="parameters"></a>Parametri  
 *lpszLogObject*  
 Punta a un [LOGPEN](../../mfc/reference/logpen-structure.md) o [LOGBRUSH](../../mfc/reference/logbrush-structure.md) struttura dati che contiene informazioni sugli attributi logici dell'oggetto.  
  
 `lpData`  
 Punta ai dati forniti dall'applicazione passati alla funzione `EnumObjects`.  
  
## <a name="return-value"></a>Valore restituito  
 La funzione di callback restituisce un valore `int`. Il valore restituito è definito dall'utente. Se la funzione di callback restituisce 0, `EnumObjects` arresta l'enumerazione prima.  
  
## <a name="remarks"></a>Note  
 Il nome effettivo deve essere esportato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects)


