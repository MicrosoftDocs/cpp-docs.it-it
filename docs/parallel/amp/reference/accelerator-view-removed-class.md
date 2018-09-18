---
title: Classe accelerator_view_removed | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- accelerator_view_removed
- AMPRT/accelerator_view_removed
- AMPRT/Concurrency::accelerator_view_removed:accelerator_view_removed
- AMPRT/Concurrency::accelerator_view_removed:get_view_removed_reason
dev_langs:
- C++
helpviewer_keywords:
- AMPRT/Concurrency::accelerator_view_removed:accelerator_view_removed Class
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f1c8963fee0fa7718c6ea8fe67904613b2dca8ad
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020257"
---
# <a name="acceleratorviewremoved-class"></a>Classe accelerator_view_removed
Eccezione generata quando una chiamata sottostante di DirectX ha esito negativo a causa il meccanismo di rilevamento e ripristino timeout Windows.  
  
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
|[get_view_removed_reason](#get_view_removed_reason)|Restituisce un codice di errore HRESULT che indica la causa del `accelerator_view` la rimozione dell'oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt. h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="ctor"></a> accelerator_view_removed 

Inizializza una nuova istanza di [accelerator_view_removed](accelerator-view-removed-class.md) classe.  
  
### <a name="syntax"></a>Sintassi  
  
```  
explicit accelerator_view_removed(  
    const char * _Message,  
    HRESULT _View_removed_reason ) throw();  
  
explicit accelerator_view_removed(  
    HRESULT _View_removed_reason ) throw();  
```  
  
### <a name="parameters"></a>Parametri  
*Messaggio*<br/>
Descrizione dell'errore.  
  
*_View_removed_reason*<br/>
Un codice di errore HRESULT che indica la causa della rimozione del `accelerator_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Una nuova istanza della classe accelerator_view_removed.  
  
## <a name="get_view_removed_reason_method"></a> get_view_removed_reason 

Restituisce un codice di errore HRESULT che indica la causa del `accelerator_view` la rimozione dell'oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
HRESULT get_view_removed_reason() const throw();  
```  
  
 
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
