---
title: 'Funzione di callback per CDC:: SETABORTPROC | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- Callback Function for CDC::SetAbortProc
dev_langs:
- C++
helpviewer_keywords:
- callback functions, for CDC::SetAbortProc
ms.assetid: daa36d5d-15de-40fc-8d37-a865d06c4710
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
ms.openlocfilehash: 1ba16ea60d8b18abd1962ded2da7e11ff2ef09a1
ms.lasthandoff: 02/24/2017

---
# <a name="callback-function-for-cdcsetabortproc"></a>Funzione di callback per CDC::SetAbortProc
Il nome *AbortFunc* è un segnaposto per il nome della funzione fornita dall'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
BOOL CALLBACK EXPORT AbortFunc(
    HDC hPr,  
    int code);
```  
  
#### <a name="parameters"></a>Parametri  
 *hPr*  
 Identifica il contesto di dispositivo.  
  
 `code`  
 Specifica se si è verificato un errore. È 0 se non si è verificato alcun errore. È **SP_OUTOFDISK** se la gestione stampa è attualmente spazio su disco insufficiente e diventerà disponibile se l'applicazione attende più spazio su disco. Se `code` è **SP_OUTOFDISK**, l'applicazione non è necessario interrompere il processo di stampa. In caso contrario, deve fornire al gestore di stampa tramite la chiamata di **PeekMessage** o **GetMessage** funzione di Windows.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito della funzione del gestore di interruzione è diverso da zero se il processo di stampa per continuare e 0 se viene annullata.  
  
## <a name="remarks"></a>Note  
 Il nome effettivo deve essere esportato come descritto nella sezione Osservazioni di [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC:: SETABORTPROC](../../mfc/reference/cdc-class.md#setabortproc)


