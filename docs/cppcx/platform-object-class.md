---
title: 'Classe platform:: Object | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Object::Object
- VCCORLIB/Platform::Object::Equals
- VCCORLIB/Platform::Object::GetHashCode
- VCCORLIB/Platform::Object::ReferenceEquals
- VCCORLIB/Platform::ToString
- VCCORLIB/Platform::GetType
dev_langs:
- C++
helpviewer_keywords:
- Object class
ms.assetid: 709e84a8-0bff-471b-bc14-63e424080b5a
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: aa882c22aab21fe82abb2884305bc314997f36a4
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="platformobject-class"></a>Classe Platform::Object
Fornisce il comportamento comune per le classi e struct di riferimento nelle app di Windows Runtime. Tutte le istanze delle classi e degli struct di riferimento sono implicitamente convertibili a Platform::Object^ e possono eseguire l'override del relativo metodo ToString virtuale.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class Object : Object  
```  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Object::Object](#ctor)|Inizializza una nuova istanza della classe Object.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Object:: Equals](#equals)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|  
|[Object::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|  
|[Object:: ReferenceEquals](#referenceequals)|Determina se le istanze di Object specificate rappresentano la stessa istanza.|  
|[ToString](#tostring)|Restituisce una stringa che rappresenta l'oggetto corrente. È possibile eseguirne l'override.|  
|[GetType](#gettype)|Ottiene un oggetto [Platform::Type](../cppcx/platform-type-class.md) che descrive l'istanza corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Object`  
  
 `Object`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  

  
## <a name="equals"></a> Metodo Object:: Equals
Determina se l'oggetto specificato è uguale all'oggetto corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
bool Equals(  
    Object^ obj  
)  
```  
  
### <a name="parameters"></a>Parametri  
 obj  
 Oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se gli oggetti sono uguali; in caso contrario, `false`.  
  


## <a name="gethashcode"></a>  Metodo Object:: GetHashCode
Restituisce il valore di identità `IUnknown`* per questa istanza se è un oggetto COM, oppure un valore hash calcolato se non è un oggetto COM.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:int GetHashCode()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore numerico che identifica in modo univoco l'oggetto.  
  
### <a name="remarks"></a>Note  
 Puoi usare GetHashCode per creare chiavi per gli oggetti nella mappa. È possibile confrontare i codici hash tramite [Object:: Equals](#equals). Se il percorso del codice è estremamente critico e `GetHashCode` e `Equals` non sono sufficientemente veloci, puoi passare al livello COM sottostante ed effettuare confronti tra puntatori `IUnknown` nativi.  
  


## <a name="gettype"></a>  Metodo Object:: GetType
Restituisce un [platform:: Type](../cppcx/platform-type-class.md) oggetto che descrive il tipo di runtime di un oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Object::GetType()  
```  

  
### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito  
 Oggetto [platform:: Type](../cppcx/platform-type-class.md) oggetto che descrive il tipo di runtime dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Il metodo statico [Type:: GetTypeCode](../cppcx/platform-type-class.md#gettypecode) può essere utilizzato per ottenere un [enumerazione platform:: TypeCode](../cppcx/platform-typecode-enumeration.md) valore che rappresenta il tipo corrente. Questa funzionalità è particolarmente utile per i tipi predefiniti. Il codice del tipo per qualsiasi classe di riferimento oltre a [platform:: String](../cppcx/platform-string-class.md) è Object (1).  
  
 Il [Windows::UI::Xaml::Interop::TypeName](http://msdn.microsoft.com/library/windows/apps/windows.ui.xaml.interop.typename.aspx) classe viene utilizzata nelle API Windows come modo indipendente dal linguaggio del passaggio di informazioni sul tipo tra componenti e App Windows. T[classe platform:: Type](../cppcx/platform-type-class.md) dispone di operatori per la conversione tra `Type` e `TypeName`.  
  
 Utilizzare il [typeid](../windows/typeid-cpp-component-extensions.md) operatore per restituire un `Platform::Type` oggetto per un nome di classe, ad esempio quando ti sposti tra pagine XAML:  
  
```  
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe platform:: Type](../cppcx/platform-type-class.md)   
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)   
 [Tipo System] (.. /cppcx/Type-System-c-CX.MD
  
## <a name="ctor"></a>  Costruttore Object:: Object
Inizializza una nuova istanza della classe Object.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:Object()  
```  

## <a name="referenceequals"></a>  Metodo Object:: ReferenceEquals
Determina se le istanze di Object specificate rappresentano la stessa istanza.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:static bool ReferenceEquals(  Object^ obj1,   Object^ obj2)  
```  
  
### <a name="parameters"></a>Parametri  
 obj1  
 Primo oggetto da confrontare.  
  
 obj2  
 Secondo oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se i due oggetti sono uguali; in caso contrario, `false`.  
 
## <a name="tostring"></a>  Metodo Object:: ToString (C + + CX)
Restituisce una stringa che rappresenta l'oggetto corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:  
virtual String^ ToString()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che rappresenta l'oggetto corrente. Puoi eseguire l'override di questo metodo per fornire un messaggio stringa personalizzato in ref class o struct:  
  
```cpp  
public ref class Tree sealed  
{  
public:  
    Tree(){}  
    virtual Platform::String^ ToString() override  
    {  
      return "I’m a Tree";  
    };  
};  
```  
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)