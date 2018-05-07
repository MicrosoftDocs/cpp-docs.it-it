---
title: Classe platform::Collections::VectorIterator | Documenti Microsoft
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::VectorIterator::VectorIterator
dev_langs:
- C++
helpviewer_keywords:
- VectorIterator Class
ms.assetid: d531cb42-27e0-48a6-bf5e-c265891a18ff
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: deaab183a092a073c6681004654312485959e924
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformcollectionsvectoriterator-class"></a>Classe Platform::Collections::VectorIterator
Fornisce un iteratore STL per oggetti derivati dall'interfaccia IVector di Windows Runtime.  
  
 VectorIterator è un iteratore proxy che archivia elementi di tipo VectorProxy\<T >. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <typename T>  
class VectorIterator;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Typename della classe modello VectorIterator.  
  
### <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`difference_type`|Differenza del puntatore (ptrdiff_t).|  
|`iterator_category`|Categoria di un iteratore di accesso casuale (::std::random_access_iterator_tag).|  
|`pointer`|Un puntatore a un tipo interno, Platform::Collections::Details::VectorProxy\<T >, che è necessario per l'implementazione di VectorIterator.|  
|`reference`|Un riferimento a un tipo interno, Platform::Collections::Details::VectorProxy\<T >, che è necessario per l'implementazione di VectorIterator.|  
|`value_type`|Typename `T` .|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Vectoriterator](#ctor)|Inizializza una nuova istanza della classe VectorIterator.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore VectorIterator::operator-](#operator-minus)|Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.|  
|[Operatore VectorIterator::operator--](#operator-decrement)|Decrementa l'oggetto VectorIterator corrente.|  
|[Operatore VectorIterator::operator!=](#operator-inequality)|Indica se l'oggetto VectorIterator corrente è diverso dall'oggetto VectorIterator specificato.|  
|[Operatore VectorIterator::operator*](#operator-dereference)|Recupera un riferimento all'elemento specificato dall'oggetto VectorIterator corrente.|  
|[VectorIterator::operator\[\]](#operator-at)|Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorIterator corrente dello spostamento specificato.|  
|[Operatore VectorIterator::operator+](#operator-plus)|Restituisce un oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator specificato.|  
|[Operatore VectorIterator::operator++](#operator-increment)|Incrementa l'oggetto VectorIterator corrente.|  
|[Operatore VectorIterator::operator+=](#operator-plus-assign)|Incrementa l'oggetto VectorIterator corrente dello spostamento specificato.|  
|[Operatore VectorIterator::operator<](#operator-less-than)|Indica se l'oggetto VectorIterator corrente è minore dell'oggetto VectorIterator specificato.|  
|[Vectoriterator:: operator\<= (operatore)](#operator-less-than-or-equals)|Indica se l'oggetto VectorIterator corrente è minore o uguale all'oggetto VectorIterator specificato.|  
|[Operatore VectorIterator::operator-=](#operator-subtract-assign)|Decrementa l'oggetto VectorIterator corrente dello spostamento specificato.|  
|[Operatore VectorIterator::operator==](#operator-equality)|Indica se l'oggetto VectorIterator corrente è uguale all'oggetto VectorIterator specificato.|  
|[Operatore VectorIterator::operator>](#operator-greater-than)|Indica se l'oggetto VectorIterator corrente è maggiore dell'oggetto VectorIterator specificato.|  
|[Operatore VectorIterator::operator->](#operator-arrow)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorIterator corrente.|  
|[Operator VectorIterator::operator>=](#operator-greater-than-or-equal)|Indica se l'oggetto VectorIterator corrente è maggiore o uguale a un oggetto VectorIterator specificato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `VectorIterator`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  

## <a name="operator-arrow"></a>  Vectoriterator:: operator -&gt; (operatore)
Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorIterator corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
Detail::ArrowProxy<T> operator->() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore dell'elemento a cui fa riferimento l'oggetto VectorIterator corrente.  
  
 Il tipo di valore restituito è un tipo interno non specificato necessario per l'implementazione di questo operatore.  
  


## <a name="operator-decrement"></a>  Vectoriterator:: operator - (operatore)
Decrementa l'oggetto VectorIterator corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
VectorIterator& operator--();  
VectorIterator operator--(int);  
```  
  
### <a name="return-value"></a>Valore restituito  
 La prima sintassi decrementa e quindi restituisce l'oggetto VectorIterator corrente. La seconda sintassi restituisce una copia dell'oggetto VectorIterator corrente, quindi decrementa l'oggetto VectorIterator corrente.  
  
### <a name="remarks"></a>Note  
 La prima sintassi di VectorIterator esegue un decremento preliminare dell'oggetto VectorIterator corrente.  
  
 La seconda sintassi esegue un decremento posteriore dell'oggetto VectorIterator corrente. Il `int` tipo nella seconda sintassi indica un'operazione di decremento, non un effettivo operando integer.  
  


## <a name="operator-dereference"></a>  Vectoriterator:: operator * (operatore)
Recupera l'indirizzo dell'elemento specificato dall'oggetto VectorIterator corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
reference operator*() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Elemento specificato dall'oggetto VectorIterator corrente.  
  


## <a name="operator-equality"></a>  Vectoriterator:: operator = = (operatore)
Indica se l'oggetto VectorIterator corrente è uguale all'oggetto VectorIterator specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool operator==(const VectorIterator& other) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'oggetto VectorIterator corrente è uguale a `other`; in caso contrario, `false`.  
  


## <a name="operator-greater-than"></a>  Vectoriterator:: operator&gt; (operatore)
Indica se l'oggetto VectorIterator corrente è maggiore dell'oggetto VectorIterator specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
bool operator>(const VectorIterator& other) const   
```  
  
### <a name="parameters"></a>Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'oggetto VectorIterator corrente è maggiore di `other`; in caso contrario, `false`.  
  


## <a name="operator-greater-than-or-equals"></a>  Vectoriterator:: operator&gt;= (operatore)
Indica se l'oggetto VectorIterator corrente è maggiore o uguale all'oggetto VectorIterator specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
bool operator>=(const VectorIterator& other) const   
```  
  
### <a name="parameters"></a>Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'oggetto VectorIterator corrente è maggiore o uguale a `other`; in caso contrario, `false`.    


## <a name="operator-increment"></a>  Vectoriterator:: operator + + (operatore)
Incrementa l'oggetto VectorIterator corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```    
VectorIterator& operator++();  
VectorIterator operator++(int);  
```  
  
### <a name="return-value"></a>Valore restituito  
 Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto VectorIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto VectorIterator corrente, quindi viene applicato l'incremento all'oggetto VectorIterator corrente.  
  
### <a name="remarks"></a>Note  
 Con la prima sintassi viene applicato all'oggetto VectorIterator corrente un pre-incremento.  
  
 Con la seconda sintassi viene applicato all'oggetto VectorIterator corrente un post-incremento. Il tipo `int` nella seconda sintassi indica un'operazione di post-incremento, non un effettivo operando Integer.  
  


## <a name="operator-inequality"></a>  Vectoriterator:: operator! = (operatore)
Indica se l'oggetto VectorIterator corrente è diverso dall'oggetto VectorIterator specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool operator!=(const VectorIterator& other) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'oggetto VectorIterator corrente non è uguale a `other`; in caso contrario, `false`.  
  


## <a name="operator-less-than"></a>  Vectoriterator:: operator&lt; (operatore)
Indica se l'oggetto VectorIterator corrente è minore dell'oggetto VectorIterator specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
bool operator<(const VectorIterator& other) const   
```  
  
### <a name="parameters"></a>Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'oggetto VectorIterator corrente è minore di `other`; in caso contrario, `false`.  
  


## <a name="operator-less-than-or-equals"></a>  Vectoriterator:: operator&lt;= (operatore)
Indica se l'oggetto VectorIterator corrente è minore o uguale all'oggetto VectorIterator specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
bool operator<=(const VectorIterator& other) const   
```  
  
### <a name="parameters"></a>Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'oggetto VectorIterator corrente è minore o uguale a `other`; in caso contrario, `false`.  
  


## <a name="operator-minus"></a>  Vectoriterator:: operator-(operatore)
Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
VectorIterator operator-(difference_type n) const;  
  
difference_type operator-(const VectorIterator& other) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `n`  
 Numero di elementi.  
  
 `other`  
 Altro oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 La prima sintassi dell'operatore restituisce un oggetto VectorIterator `n` elementi in meno rispetto all'oggetto VectorIterator corrente. La seconda sintassi dell'operatore restituisce il numero di elementi tra l'oggetto corrente e `other` VectorIterator.  
  


## <a name="operator-plus-assign"></a>  Vectoriterator:: operator + = operatore
Incrementa l'oggetto VectorIterator corrente dello spostamento specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
VectorIterator& operator+=(difference_type n);  
```  
  
### <a name="parameters"></a>Parametri  
 `n`  
 Spostamento espresso come Integer.  
  
### <a name="return-value"></a>Valore restituito  
 VectorIterator aggiornato.  
  


## <a name="operator-plus"></a>  ectorIterator::operator + (operatore)
Restituisce un oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
VectorIterator operator+(difference_type n);  
  
template <typename T>  
inline VectorIterator<T> operator+(
  ptrdiff_t n, 
  const VectorIterator<T>& i);  
  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Nella seconda sintassi, typename di VectorIterator.  
  
 `n`  
 Spostamento espresso come Integer.  
  
 `i`  
 Nella seconda sintassi, oggetto VectorIterator.  
  
### <a name="return-value"></a>Valore restituito  
 Nella prima sintassi, oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator corrente.  
  
 Nella seconda sintassi, oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'inizio del parametro `i`.  
  
### <a name="remarks"></a>Note  
 Esempio della prima sintassi  
  


## <a name="operator-minus-equals"></a>  Vectoriterator:: operator-= (operatore)
Decrementa l'oggetto VectorIterator corrente dello spostamento specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
VectorIterator& operator-=(difference_type n);  
```  
  
### <a name="parameters"></a>Parametri  
 `n`  
 Spostamento espresso come Integer.  
  
### <a name="return-value"></a>Valore restituito  
 VectorIterator aggiornato.  
  


## <a name="operator-at"></a>  VectorIterator::operator\[\]
Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorIterator corrente dello spostamento specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```    
reference operator[](difference_type n) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `n`  
 Spostamento espresso come Integer.  
  
### <a name="return-value"></a>Valore restituito  
 Elemento che viene spostato di `n` elementi rispetto all'oggetto VectorIterator corrente.  
  


## <a name="ctor"></a>  Vectoriterator:: Vectoriterator costruttore
Inizializza una nuova istanza della classe VectorIterator.  
  
### <a name="syntax"></a>Sintassi  
  
```    
VectorIterator();  
  
explicit VectorIterator(  
   Windows::Foundation::Collections::IVector<T>^ v);  
```  
  
### <a name="parameters"></a>Parametri  
 `v`  
 Un IVector\<T > oggetto.  
  
### <a name="remarks"></a>Note  
 Il primo esempio di sintassi è il costruttore predefinito. Il secondo esempio di sintassi è un costruttore esplicito utilizzato per costruire un oggetto VectorIterator da un IVector\<T > oggetto.  
  


  
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)