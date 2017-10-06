---
title: _com_error::Source | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_error::Source
dev_langs:
- C++
helpviewer_keywords:
- Source method [C++]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
caps.latest.revision: 6
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 848d402e83c09ff85537115437c8a190d160f984
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comerrorsource"></a>_com_error::Source
**Sezione specifica Microsoft**  
  
 Chiamate **IErrorInfo:: getSource** (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
_bstr_t Source() const;  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della **IErrorInfo:: getSource** per il **IErrorInfo** oggetto registrati all'interno di `_com_error` oggetto. La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`. Se non **IErrorInfo** è registrato, restituisce un oggetto vuoto `_bstr_t`.  
  
## <a name="remarks"></a>Note  
 Qualsiasi errore durante la chiamata di **IErrorInfo:: getSource** metodo viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)
