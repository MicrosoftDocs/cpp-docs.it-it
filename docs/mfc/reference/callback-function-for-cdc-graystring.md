---
title: 'Funzione di callback per CDC:: graystring | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- Callback Function for CDC::GrayString
dev_langs:
- C++
helpviewer_keywords:
- callback functions, for CDC::GrayString
ms.assetid: 5217e183-df48-426b-931b-6245022ca36f
caps.latest.revision: 11
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
ms.openlocfilehash: 3ce3afefae9618420a8a97b27994c33604745677
ms.lasthandoff: 02/24/2017

---
# <a name="callback-function-for-cdcgraystring"></a>Funzione di callback per CDC::GrayString
*OutputFunc* è un segnaposto per il nome di funzione di callback fornita dall'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
BOOL CALLBACK EXPORT OutputFunc(
    HDC hDC,  
    LPARAM lpData,  
    int nCount);
```  
  
#### <a name="parameters"></a>Parametri  
 `hDC`  
 Identifica un contesto di dispositivo di memoria con una bitmap almeno la larghezza e altezza specificato da `nWidth` e `nHeight` a `GrayString`.  
  
 `lpData`  
 Punta alla stringa di caratteri da tracciare.  
  
 `nCount`  
 Specifica il numero di caratteri da restituire.  
  
## <a name="return-value"></a>Valore restituito  
 Valore restituito della funzione di callback deve essere **TRUE** per indicare l'esito positivo; in caso contrario è **FALSE**.  
  
## <a name="remarks"></a>Note  
 La funzione di callback (*OutputFunc*) è necessario disegnare un'immagine rispetto alle coordinate (0,0) anziché (*x*, *y*).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC:: graystring](../../mfc/reference/cdc-class.md#graystring)


