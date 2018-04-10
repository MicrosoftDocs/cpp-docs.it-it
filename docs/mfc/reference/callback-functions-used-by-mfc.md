---
title: Funzioni di callback utilizzate da MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- vc.mfc.functions
dev_langs:
- C++
helpviewer_keywords:
- callback functions [MFC], MFC
- MFC, callback functions
- functions [MFC], callback
- callback functions [MFC]
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: adcde434c12c11c1df7fc1367b658114f874b3c1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="callback-functions-used-by-mfc"></a>Funzioni di callback utilizzate da MFC
Tre funzioni di callback vengono visualizzati nella libreria di classi Microsoft Foundation. Queste funzioni di callback vengono passate a [CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects), [CDC:: graystring](../../mfc/reference/cdc-class.md#graystring), e [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc). Si noti che tutte le funzioni di callback devono intercettare le eccezioni MFC prima della restituzione di Windows, poiché non possono essere generate eccezioni attraverso i limiti di callback. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  

|nome||  
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
 Punta a un [LOGPEN](../../mfc/reference/logpen-structure.md) o [LOGBRUSH](../../mfc/reference/logbrush-structure.md) struttura di dati che contiene informazioni sugli attributi logici dell'oggetto.  
  
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
 Identifica un contesto di dispositivo di memoria con una bitmap pari almeno alla larghezza e altezza specificato da `nWidth` e `nHeight` a `GrayString`.  
  
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
 Specifica se si è verificato un errore. È 0 se non si è verificato alcun errore. È **SP_OUTOFDISK** se Print Manager è attualmente lo spazio su disco e più spazio su disco sarà disponibile se l'applicazione è in attesa. Se `code` è **SP_OUTOFDISK**, l'applicazione non è necessario interrompere il processo di stampa. In caso contrario, deve restituire per la gestione di stampa chiamando il **PeekMessage** o **GetMessage** funzione di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito della funzione del gestore di interruzione è diverso da zero se il processo di stampa per continuare e 0 se viene annullato.  
  
### <a name="remarks"></a>Note  
 Il nome effettivo deve essere esportato come descritto nella sezione Osservazioni di [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc).  
 
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](structures-styles-callbacks-and-message-maps.md) [CDC:: EnumObjects](../../mfc/reference/cdc-class.md#enumobjects) [CDC:: SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc) [CDC:: graystring](../../mfc/reference/cdc-class.md#graystring)

