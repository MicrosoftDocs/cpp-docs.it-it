---
title: _com_error::_com_error | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_error::_com_error
dev_langs: C++
helpviewer_keywords: _com_error method [C++]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: df04357afd35b546fb43c90a102b7dc0cacdc95e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comerrorcomerror"></a>_com_error::_com_error
**Sezione specifica Microsoft**  
  
 Costruisce un oggetto `_com_error`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      _com_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = NULL,  
   bool fAddRef=false  
) throw( );  
_com_error(  
   const _com_error& that   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `hr`  
 Informazioni `HRESULT`.  
  
 `perrinfo`  
 **IErrorInfo** oggetto.  
  
 **bool fAddRef = false**  
 Fa sì che il costruttore di chiamare AddRef su un valore non null **IErrorInfo** interfaccia. Ciò consente un conteggio corretto dei riferimenti nel caso comune in cui la proprietà dell'interfaccia venga passata all'oggetto `_com_error`, ad esempio:  
  
```  
throw _com_error(hr, perrinfo);  
```  
  
 Se non si desidera trasferire la proprietà per il codice di `_com_error` oggetto e `AddRef` è necessario per compensare la **versione** nel `_com_error` distruttore, costruire l'oggetto come indicato di seguito:  
  
```  
_com_error err(hr, perrinfo, true);  
```  
  
 `that`  
 Oggetto `_com_error` esistente.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore crea un nuovo oggetto dato un `HRESULT` e facoltativi **IErrorInfo** oggetto. Il secondo crea una copia di un oggetto `_com_error` esistente.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)