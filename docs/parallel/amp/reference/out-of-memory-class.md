---
title: Classe out_of_memory | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- out_of_memory
- AMPRT/out_of_memory
- AMPRT/Concurrency::out_of_memory::out_of_memory
dev_langs: C++
helpviewer_keywords: out_of_memory class
ms.assetid: 3aa7e682-8f13-4ae6-9188-31fb423956e4
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 95694c3566ef7700d30e40c1a89af56d1e70d05b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="outofmemory-class"></a>out_of_memory (classe)
Eccezione generata quando un metodo non riesce a causa della mancanza di memoria di sistema o un dispositivo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class out_of_memory : public runtime_exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore out_of_memory](#ctor)|Inizializza una nuova istanza della classe `out_of_memory`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
## <a name="ctor"></a>out_of_memory 

 Inizializza una nuova istanza della classe.  
  
### <a name="syntax"></a>Sintassi  
  
```  
explicit out_of_memory(  
    const char * _Message ) throw();  
  
out_of_memory () throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Descrizione dell'errore.  
  
### <a name="return-value"></a>Valore restituito  
 Nuova istanza della classe `out_of_memory`.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
