---
title: _com_error::_com_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::_com_error
dev_langs:
- C++
helpviewer_keywords:
- _com_error method [C++]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c1389635c3ef026e8b3a7dfe13976cca58a15a82
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39406718"
---
# <a name="comerrorcomerror"></a>_com_error::_com_error
**Sezione specifica Microsoft**  
  
 Costruisce un **com_error** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_com_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = NULL,  
   bool fAddRef=false) throw( );  

_com_error( const _com_error& that ) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 *risorse umane*  
 Informazioni su HRESULT.  
  
 *perrinfo*  
 Oggetto `IErrorInfo`.  
  
 `bool fAddRef=false`  
 Fa sì che il costruttore di chiamare AddRef su non null `IErrorInfo` interfaccia. In questo modo corretto nel conteggio dei riferimenti nel caso comune in cui la proprietà dell'interfaccia viene passata il **com_error** dell'oggetto, ad esempio:  
  
```cpp 
throw _com_error(hr, perrinfo);  
```  
  
 Se non si desidera il codice per trasferire la proprietà per il **com_error** oggetto e il `AddRef` è necessario per compensare la `Release` nel **com_error** distruttore, costruire l'oggetto come di seguito:  
  
```cpp 
_com_error err(hr, perrinfo, true);  
```  
  
 *che*  
 Un oggetto esistente **com_error** oggetto.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore crea un nuovo oggetto dato un oggetto HRESULT e facoltative `IErrorInfo` oggetto. Il secondo crea una copia di un oggetto esistente **com_error** oggetto.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_error](../cpp/com-error-class.md)