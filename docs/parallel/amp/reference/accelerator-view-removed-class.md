---
title: Classe accelerator_view_removed | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amprt/Concurrency::accelerator_view_removed
dev_langs:
- C++
helpviewer_keywords:
- amprt/Concurrency::accelerator_view_removed Class
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 6e7a56a3315dc38a9e7def2144f3a2f8efd363fc
ms.lasthandoff: 02/24/2017

---
# <a name="acceleratorviewremoved-class"></a>Classe accelerator_view_removed
Eccezione generata quando una chiamata DirectX sottostante ha esito negativo a causa il meccanismo di rilevamento e ripristino timeout Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class accelerator_view_removed : public runtime_exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore accelerator_view_removed](#ctor)|Inizializza una nuova istanza della classe `accelerator_view_removed`.|  

### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_view_removed_reason (metodo)](#get_view_removed_reason)|Restituisce un codice di errore HRESULT che indica la causa del `accelerator_view` rimozione dell'oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="a-namectora-acceleratorviewremoved"></a><a name="ctor"></a>accelerator_view_removed 

Inizializza una nuova istanza di [accelerator_view_removed](accelerator-view-removed-class.md) (classe).  
  
### <a name="syntax"></a>Sintassi  
  
```  
explicit accelerator_view_removed(  
    const char * _Message,  
    HRESULT _View_removed_reason ) throw();  
  
explicit accelerator_view_removed(  
    HRESULT _View_removed_reason ) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Descrizione dell'errore.  
  
 `_View_removed_reason`  
 Che indica la causa della rimozione di un codice di errore HRESULT di `accelerator_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Una nuova istanza della classe accelerator_view_removed.  
  
## <a name="a-namegetviewremovedreasonmethoda-getviewremovedreason"></a><a name="get_view_removed_reason_method"></a>get_view_removed_reason 

Restituisce un codice di errore HRESULT che indica la causa del `accelerator_view` rimozione dell'oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
HRESULT get_view_removed_reason() const throw();  
```  
  
 
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

