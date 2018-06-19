---
title: 'Classe platform:: WeakReference | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- Platform::WeakReference
ms.assetid: 8cfe1977-a8c7-4b7b-b539-25c77ed4c5f1
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a8db5c855b6a377a0202183d48b8fd34e93b6072
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33088378"
---
# <a name="platformweakreference-class"></a>Classe Platform::WeakReference
Rappresenta un riferimento debole a un'istanza di una classe di riferimento.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp 
class WeakReference  
```  
  
#### <a name="parameters"></a>Parametri  
  
### <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[WeakReference:: WeakReference](#ctor)|Inizializza una nuova istanza della classe WeakReference.|  
  
### <a name="methods"></a>Metodi  
  
|Member|Descrizione|  
|------------|-----------------|  
|[WeakReference:: Resolve](#resolve)|Restituisce un handle alla classe di riferimento sottostante o nullptr se l'oggetto non esiste più.|  
  
### <a name="operators"></a>Operatori  
  
|Member|Descrizione|  
|------------|-----------------|  
|[WeakReference::operator=](#operator-assign)|Assegna un nuovo valore all'oggetto WeakReference.|  
|[BoolType WeakReference::operator](#booltype)|Implementa il modello bool sicuro.|  
  
### <a name="remarks"></a>Note  
 La classe WeakReference stessa non è una classe di riferimento e pertanto non eredita da Platform::Object^ e non può essere usata nella firma di un metodo pubblico.  

## <a name="operator-assign"></a> WeakReference::operator =
Assegna un valore a WeakReference.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
WeakReference& operator=(decltype(__nullptr));    
WeakReference& operator=(const WeakReference& otherArg);   
WeakReference& operator=(WeakReference&& otherArg);    
WeakReference& operator=(const volatile ::Platform::Object^ const otherArg); 
```  
  
### <a name="remarks"></a>Note  
 L'ultimo overload nell'elenco precedente consente di assegnare una classe di riferimento a una variabile WeakReference. In questo caso la classe di riferimento è downcast a [platform:: Object](../cppcx/platform-object-class.md)^. Ripristinare il tipo originale in un secondo momento specificandolo come argomento per il parametro di tipo nel [WeakReference:: Resolve\<T >](#resolve) funzione membro.  
  
## <a name="booltype"></a> WeakReference::operator BoolType
Implementa il modello bool sicuro per la classe WeakReference. Non chiamarlo esplicitamente dal codice.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
BoolType BoolType()  
```  

## <a name="resolve"></a> Metodo WeakReference:: Resolve (spazio dei nomi Platform)
Restituisce un handle alla classe di riferimento originale o `nullptr` se l'oggetto non esiste più.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
template<typename T>  
T^ Resolve() const  
```  
  
### <a name="parameters"></a>Parametri  
  
### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito  
 Handle alla classe di riferimento a cui l'oggetto WeakReference era precedentemente associato, oppure nullptr.  
  
### <a name="example"></a>Esempio  
 Si tratta della descrizione per un Esempio di codice.  
  
```  
  
Bar^ bar = ref new Bar();  
//use bar...  
  
if (bar != nullptr)  
{  
    WeakReference wr(bar);  
    Bar^ newReference = wr.Resolve<Bar>();  
}  
```  
  
 Si noti che il parametro di tipo è T, non T^.  
  
 
## <a name="ctor"></a> Costruttore WeakReference:: WeakReference
Offre vari modi per creare un elemento WeakReference.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
WeakReference();  
WeakReference(decltype(__nullptr));  
WeakReference(const WeakReference& otherArg);  
WeakReference(WeakReference&& otherArg);  
explicit WeakReference(const volatile ::Platform::Object^ const otherArg);  
```  
### <a name="example"></a>Esempio  
  
```cpp    
MyClass^ mc = ref new MyClass();  
WeakReference wr(mc);  
MyClass^ copy2 = wr.Resolve<MyClass>();    
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)