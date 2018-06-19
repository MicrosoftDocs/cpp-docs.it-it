---
title: Classe unsupported_feature | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- unsupported_feature
- AMPRT/unsupported_feature
- AMPRT/Concurrency::unsupported_feature
dev_langs:
- C++
helpviewer_keywords:
- unsupported_feature class
ms.assetid: 6b1ab917-df13-48c7-9648-7cb2465a0ff5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ccc811e3459fe668b6a8dbd255007cb60bf0cf1
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33696136"
---
# <a name="unsupportedfeature-class"></a>Classe unsupported_feature
Eccezione generata quando viene utilizzata una funzionalità non supportata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class unsupported_feature : public runtime_exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore unsupported_feature](#ctor)|Costruisce una nuova istanza di `unsupported_feature` eccezione.|  

  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `unsupported_feature`  
  
## <a name="unsupported_feature__ctor"></a> unsupported_feature 

  Costruisce una nuova istanza dell'eccezione unsupported_feature.  
  
### <a name="syntax"></a>Sintassi  
  
```  
explicit unsupported_feature(  
    const char * _Message ) throw();  
  
unsupported_feature() throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Descrizione dell'errore.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `unsupported_feature`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
