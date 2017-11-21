---
title: _com_error::ErrorMessage | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_error::ErrorMessage
dev_langs: C++
helpviewer_keywords: ErrorMessage method [C++]
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0b60c0f74cd350382b6cf8669361087dee601fe4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="comerrorerrormessage"></a>_com_error::ErrorMessage
**Sezione specifica Microsoft**  
  
 Recupera il messaggio stringa per `HRESULT` archiviato nell'oggetto `_com_error`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
const TCHAR * ErrorMessage( ) const throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il messaggio stringa per `HRESULT` registrato nell'oggetto `_com_error`. Se il `HRESULT` è mappata 16 bit [wCode](../cpp/com-error-wcode.md), quindi un messaggio generico "`IDispatch error #<wCode>`" viene restituito. Se non viene trovato nessun messaggio, viene restituito un messaggio generico "`Unknown error #<hresult>`". La stringa restituita è sia una stringa Unicode o multibyte, a seconda dello stato del **Unicode** (macro).  
  
## <a name="remarks"></a>Note  
 Recupera il testo del messaggio di sistema appropriato per `HRESULT` registrato nell'oggetto `_com_error`. Il testo del messaggio di sistema viene ottenuto chiamando Win32 [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351) (funzione). La stringa restituita è allocata da `FormatMessage` API e viene rilasciata quando l'oggetto `_com_error` viene eliminato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)