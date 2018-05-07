---
title: 'Classe platform:: STAThreadAttribute | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Platform
- COLLECTION/Platform::Platform::STAThreadAttribute constructor 1
- COLLECTION/Platform::Platform::STAThreadAttribute::Equals
- COLLECTION/Platform::Platform::STAThreadAttribute::GetHashCode
- COLLECTION/Platform::Platform::STAThreadAttribute::ToString
dev_langs:
- C++
helpviewer_keywords:
- Platform::STAThreadAttribute Class
ms.assetid: f97960fc-e673-4d9e-910a-54c8415411c4
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ab58409bf86af77c9b1f751b9978b5e7103bd043
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformstathreadattribute-class"></a>Platform::STAThreadAttribute (classe)
Indica che il modello di threading per un'applicazione è di tipo apartment a thread singolo (STA, Single-Threaded Apartment).  
  
## <a name="syntax"></a>Sintassi  
  
```  
public ref class STAThreadAttribute sealed : Attribute  
```  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore 1 STAThreadAttribute](#ctor)|Inizializza una nuova istanza della classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
 L'attributo STAThreadAttribute eredita da [classe platform:: Object](../cppcx/platform-object-class.md). STAThreadAttribute esegue anche l'overload o contiene i membri seguenti:  
  
|nome|Descrizione|  
|----------|-----------------|  
|[STAThreadAttribute::Equals](#equals)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|  
|[STAThreadAttribute::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|  
|[STAThreadAttribute::ToString](#tostring)|Restituisce una stringa che rappresenta l'oggetto corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Platform`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform  



## <a name="ctor"></a> STAThreadAttribute constructor
Inizializza una nuova istanza della classe STAThreadAttribute.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:STAThreadAttribute()  
```  
  


## <a name="equals"></a> STAThreadAttribute::Equals
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
  


## <a name="gethashcode"></a> STAThreadAttribute::GetHashCode
Restituisce il codice hash per l'istanza.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:int GetHashCode()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Codice hash per l'istanza.  
  


## <a name="tostring"></a> STAThreadAttribute::ToString
Restituisce una stringa che rappresenta l'oggetto corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:String^ ToString()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che rappresenta l'oggetto corrente.  
  

  
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)