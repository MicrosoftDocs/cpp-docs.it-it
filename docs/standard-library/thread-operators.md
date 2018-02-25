---
title: Operatori &lt;thread&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- thread/std::operator!=
- thread/std::operator&gt;
- thread/std::operator&gt;=
- thread/std::operator&lt;
- thread/std::operator&lt;&lt;
- thread/std::operator&lt;=
- thread/std::operator==
dev_langs:
- C++
ms.assetid: e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac
caps.latest.revision: 
manager: ghogen
helpviewer_keywords:
- std::operator!= (thread)
- std::operator&gt; (thread)
- std::operator&gt;= (thread)
- std::operator&lt; (thread)
- std::operator&lt;&lt; (thread)
- std::operator&lt;= (thread)
- std::operator== (thread)
ms.openlocfilehash: f1a004cca5d43c22b5315c50b61cb0fcafb2cf10
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ltthreadgt-operators"></a>Operatori &lt;thread&gt;
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;&lt;](#op_lt_lt)|[operator&lt;=](#op_lt_eq)|  
|[operator==](#op_eq_eq)|  
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
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
  
##  <a name="op_gt"></a>  operator&gt;  
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
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
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
  
##  <a name="op_lt"></a>  operator&lt;  
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
  
##  <a name="op_neq"></a>  operator!=  
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
  
##  <a name="op_eq_eq"></a>  operator==  
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
  
##  <a name="op_lt_lt"></a>  operator&lt;&lt;  
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



