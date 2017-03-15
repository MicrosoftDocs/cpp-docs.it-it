---
title: Operatori &lt;thread&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 7e849e8585b372b5b423a6c960aa926ac7d5cfec
ms.lasthandoff: 02/24/2017

---
# <a name="ltthreadgt-operators"></a>Operatori &lt;thread&gt;
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|[operator&gt;=](#operator_gt__eq)|  
|[operator&lt;](#operator_lt_)|[operator&lt;&lt;](#operator_lt__lt_)|[operator&lt;=](#operator_lt__eq)|  
|[operator==](#operator_eq_eq)|  
  
##  <a name="a-nameoperatorgteqa--operatorgt"></a><a name="operator_gt__eq"></a>  operator&gt;=  
 Determina se un oggetto `thread::id` è maggiore o uguale a un altro.  
  
```cpp  
bool operator>= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `thread::id` a sinistra.  
  
 `Right`  
 L'oggetto `thread::id` corretto.  
  
### <a name="return-value"></a>Valore restituito  
 `!(Left < Right)`  
  
### <a name="remarks"></a>Note  
 Questa funzione non genera eccezioni.  
  
##  <a name="a-nameoperatorgta--operatorgt"></a><a name="operator_gt_"></a>  operator&gt;  
 Determina se un oggetto `thread::id` è maggiore di un altro.  
  
```cpp  
bool operator> (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `thread::id` a sinistra.  
  
 `Right`  
 L'oggetto `thread::id` corretto.  
  
### <a name="return-value"></a>Valore restituito  
 `Right < Left`  
  
### <a name="remarks"></a>Note  
 Questa funzione non genera eccezioni.  
  
##  <a name="a-nameoperatorlteqa--operatorlt"></a><a name="operator_lt__eq"></a>  operator&lt;=  
 Determina se un oggetto `thread::id` è minore o uguale a un altro.  
  
```cpp  
bool operator<= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `thread::id` a sinistra.  
  
 `Right`  
 L'oggetto `thread::id` corretto.  
  
### <a name="return-value"></a>Valore restituito  
 `!(Right < Left)`  
  
### <a name="remarks"></a>Note  
 Questa funzione non genera eccezioni.  
  
##  <a name="a-nameoperatorlta--operatorlt"></a><a name="operator_lt_"></a>  operator&lt;  
 Determina se un oggetto `thread::id` è minore di un altro.  
  
```cpp  
bool operator<(
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `thread::id` a sinistra.  
  
 `Right`  
 L'oggetto `thread::id` corretto.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se `Left` precede `Right` nell'ordinamento totale; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 L'operatore definisce un ordinamento totale per tutti gli oggetti `thread::id`. Questi oggetti possono essere usati come chiavi in contenitori associativi.  
  
 Questa funzione non genera eccezioni.  
  
##  <a name="a-nameoperatorneqa--operator"></a><a name="operator_neq"></a>  operator!=  
 Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.  
  
```cpp  
bool operator!= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `thread::id` a sinistra.  
  
 `Right`  
 L'oggetto `thread::id` corretto.  
  
### <a name="return-value"></a>Valore restituito  
 `!(Left == Right)`  
  
### <a name="remarks"></a>Note  
 Questa funzione non genera eccezioni.  
  
##  <a name="a-nameoperatoreqeqa--operator"></a><a name="operator_eq_eq"></a>  operator==  
 Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.  
  
```cpp  
bool operator== (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `thread::id` a sinistra.  
  
 `Right`  
 L'oggetto `thread::id` corretto.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se i due oggetti rappresentano lo stesso thread di esecuzione o se nessuno dei due rappresenta un thread di esecuzione; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione non genera eccezioni.  
  
##  <a name="a-nameoperatorltlta--operatorltlt"></a><a name="operator_lt__lt_"></a>  operator&lt;&lt;  
 Inserisce una rappresentazione testo di un oggetto `thread::id` in un flusso.  
  
```cpp  
template <class Elem, class Tr>
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& Ostr, thread::id Id);
```  
  
### <a name="parameters"></a>Parametri  
 `Ostr`  
 Oggetto [basic_ostream](../standard-library/basic-ostream-class.md).  
  
 `Id`  
 Oggetto `thread::id`.  
  
### <a name="return-value"></a>Valore restituito  
 `Ostr`.  
  
### <a name="remarks"></a>Note  
 Questa funzione inserisce `Id` in `Ostr`.  
  
 Se due oggetti `thread::id` risultano uguali, le relative rappresentazioni testo inserite sono uguali.  
  
## <a name="see-also"></a>Vedere anche  
 [\<thread>](../standard-library/thread.md)




