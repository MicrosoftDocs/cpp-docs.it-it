---
title: 'Classe platform:: MTAThreadAttribute | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::MTAThreadAttribute::Equals
- VCCORLIB/Platform::MTAThreadAttribute::GetHashCode
- VCCORLIB/Platform::MTAThreadAttribute::ToString
dev_langs:
- C++
helpviewer_keywords:
- Platform::MTAThreadAttribute Class
ms.assetid: bfc546a7-4333-4407-85b4-4721565e1f44
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4dd035a3a11898230cb7f8a14db0b98ff1611120
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33089165"
---
# <a name="platformmtathreadattribute-class"></a>Platform::MTAThreadAttribute (classe)
Indica che il modello di threading per un'applicazione è un apartment a thread multipli (MTA).  
  
## <a name="syntax"></a>Sintassi  
  
```  
public ref class MTAThreadAttribute sealed : Attribute  
```  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[1 costruttore MTAThreadAttribute](#ctor) costruttore|Inizializza una nuova istanza della classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
 L'attributo MTAThreadAttribute eredita da [classe platform:: Object](../cppcx/platform-object-class.md). MTAThreadAttribute esegue anche l'overload o contiene i membri seguenti:  
  
|nome|Descrizione|  
|----------|-----------------|  
|[MTAThreadAttribute::Equals](#equals)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|  
|[MTAThreadAttribute::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|  
|[MTAThreadAttribute::ToString](#tostring)|Restituisce una stringa che rappresenta l'oggetto corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Platform`  
  
### <a name="requirements"></a>Requisiti  
 **Metadati:** platform.winmd  
  
 **Spazio dei nomi:** Platform  



## <a name="ctor"></a> MTAThreadAttribute (costruttore)
Inizializza una nuova istanza della classe MTAThreadAttribute.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:MTAThreadAttribute()  
```  
  


## <a name="equals"></a> MTAThreadAttribute::Equals
Determina se l'oggetto specificato è uguale all'oggetto corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:virtual override bool Equals(  Object^ obj)  
```  
  
### <a name="parameters"></a>Parametri  
 obj  
 Oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se gli oggetti sono uguali. In caso contrario, `false`.  
  


## <a name="gethashcode"></a> MTAThreadAttribute::GetHashCode
Restituisce il codice hash per l'istanza.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:int GetHashCode()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Codice hash per l'istanza.  
  


## <a name="tostring"></a> MTAThreadAttribute::ToString
Restituisce una stringa che rappresenta l'oggetto corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:String^ ToString()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che rappresenta l'oggetto corrente.  
    
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)