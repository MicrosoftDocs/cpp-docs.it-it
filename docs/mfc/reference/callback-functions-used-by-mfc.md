---
title: Funzioni di callback utilizzate da MFC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.functions
dev_langs:
- C++
helpviewer_keywords:
- callback functions, MFC
- MFC, callback functions
- functions [C++], callback
- callback functions
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: d4b97ed874b145f9c6d9a9536476243bba0fd1c1
ms.openlocfilehash: 08c6f547c95adb4c6794ec71259888d390e42e92
ms.contentlocale: it-it
ms.lasthandoff: 03/06/2017

---
# <a name="callback-functions-used-by-mfc"></a>Funzioni di callback utilizzate da MFC
Tre funzioni di callback vengono visualizzati nella libreria Microsoft Foundation Class. Queste funzioni di callback vengono passate al [CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects), [CDC:: graystring](../../mfc/reference/cdc-class.md#graystring), e [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc). Si noti che tutte le funzioni di callback devono intercettare le eccezioni MFC prima della restituzione di Windows, poiché non possono essere generate eccezioni attraverso i limiti di callback. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  

|Nome||  
|----------|-----------------|  
|[Funzione di callback per CDC::EnumObjects](#enum_objects)||  
|[Funzione di callback per CDC::GrayString](#graystring)||
|[Funzione di callback per CDC::SetAbortProc](#setabortproc)|| 

## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h 

## <a name="enum_objects"></a>Funzione di callback per CDC:: EnumObjects
Il *ObjectFunc* nome è un segnaposto per il nome della funzione fornita dall'applicazione.  
  
### <a name="syntax"></a>Sintassi  
  
```  
int CALLBACK EXPORT ObjectFunc(
    LPSTR lpszLogObject,  
    LPSTR* lpData);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszLogObject*  
 Punta a un [LOGPEN](../../mfc/reference/logpen-structure.md) o [LOGBRUSH](../../mfc/reference/logbrush-structure.md) struttura dati che contiene informazioni sugli attributi logici dell'oggetto.  
  
 `lpData`  
 Punta ai dati forniti dall'applicazione passati alla funzione `EnumObjects`.  
  
### <a name="return-value"></a>Valore restituito  
 La funzione di callback restituisce un valore `int`. Il valore restituito è definito dall'utente. Se la funzione di callback restituisce 0, `EnumObjects` arresta l'enumerazione prima.  
  
### <a name="remarks"></a>Note  
 Il nome effettivo deve essere esportato.  
  
## <a name="graystring"></a>Funzione di callback per CDC:: graystring
*OutputFunc* è un segnaposto per il nome di funzione di callback fornita dall'applicazione.  
  
### <a name="syntax"></a>Sintassi  
  
```  
BOOL CALLBACK EXPORT OutputFunc(
    HDC hDC,  
    LPARAM lpData,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `hDC`  
 Identifica un contesto di dispositivo di memoria con una bitmap almeno la larghezza e altezza specificato da `nWidth` e `nHeight` a `GrayString`.  
  
 `lpData`  
 Punta alla stringa di caratteri da tracciare.  
  
 `nCount`  
 Specifica il numero di caratteri da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Valore restituito della funzione di callback deve essere **TRUE** per indicare l'esito positivo; in caso contrario è **FALSE**.  
  
### <a name="remarks"></a>Note  
 La funzione di callback (*OutputFunc*) è necessario disegnare un'immagine rispetto alle coordinate (0,0) anziché (*x*, *y*).  

## <a name="setabortproc"></a>Funzione di callback per CDC:: SETABORTPROC
Il nome *AbortFunc* è un segnaposto per il nome della funzione fornita dall'applicazione.  
  
### <a name="syntax"></a>Sintassi  
  
```  
BOOL CALLBACK EXPORT AbortFunc(
    HDC hPr,  
    int code);
```  
  
### <a name="parameters"></a>Parametri  
 *hPr*  
 Identifica il contesto di dispositivo.  
  
 `code`  
 Specifica se si è verificato un errore. È 0 se non si è verificato alcun errore. È **SP_OUTOFDISK** se la gestione stampa è attualmente spazio su disco insufficiente e diventerà disponibile se l'applicazione attende più spazio su disco. Se `code` è **SP_OUTOFDISK**, l'applicazione non è necessario interrompere il processo di stampa. In caso contrario, deve fornire al gestore di stampa tramite la chiamata di **PeekMessage** o **GetMessage** funzione di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito della funzione del gestore di interruzione è diverso da zero se il processo di stampa per continuare e 0 se viene annullata.  
  
### <a name="remarks"></a>Note  
 Il nome effettivo deve essere esportato come descritto nella sezione Osservazioni di [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc).  
 
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](structures-styles-callbacks-and-message-maps.md)
 [CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects)
 [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc)
 [CDC:: graystring](../../mfc/reference/cdc-class.md#graystring)


