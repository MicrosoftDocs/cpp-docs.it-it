---
title: Classe combinable | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- combinable
- PPL/concurrency::combinable
- PPL/concurrency::combinable::combinable
- PPL/concurrency::combinable::clear
- PPL/concurrency::combinable::combine
- PPL/concurrency::combinable::combine_each
- PPL/concurrency::combinable::local
dev_langs:
- C++
helpviewer_keywords:
- combinable class
ms.assetid: fe0bfbf6-6250-47da-b8d0-f75369f0b5be
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: a491f8eef59978808608917531a5237cceacdb21
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="combinable-class"></a>Classe combinable
L'oggetto `combinable<T>` ha lo scopo di fornire copie di dati di thread privato, per eseguire calcoli secondari locali per thread senza blocco durante algoritmi paralleli. Alla fine dell'operazione parallela, è possibile unire i sub-calcoli del thread privato in un risultato finale. Questa classe può essere usata in sostituzione di una variabile condivisa e può determinare un miglioramento delle prestazioni qualora vi fosse invece molto conflitto su tale variabile condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>
class combinable;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati del risultato finale unito. Il tipo deve avere un costruttore di copia e un costruttore predefinito.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[classe combinable](#ctor)|Di overload. Costruisce un nuovo oggetto `combinable`.|  
|[~ Distruttore combinable](#dtor)|Elimina un oggetto `combinable`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[clear](#clear)|Cancella qualsiasi risultato computazionali intermedio da un utilizzo precedente.|  
|[combine](#combine)|Calcola un valore finale dal set di calcoli secondari locali del thread chiamando il funtore combinato fornito.|  
|[combine_each](#combine_each)|Calcola un valore finale dal set di calcoli secondari locali del thread chiamando il funtore combinato fornito una volta per ogni calcolo secondario locale di thread. Il risultato finale verrà accumulato dall'oggetto funzione.|  
|[locale](#local)|Di overload. Restituisce un riferimento al calcolo secondario thread privato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator=](#operator_eq)|Assegna a un `combinable` da un altro oggetto `combinable` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `combinable`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="clear"></a>deselezionare 

 Cancella qualsiasi risultato computazionali intermedio da un utilizzo precedente.  
  
```
void clear();
```  
  
##  <a name="ctor"></a>classe combinable 

 Costruisce un nuovo oggetto `combinable`.  
  
```
combinable();

template <typename _Function>
explicit combinable(_Function _FnInitialize);

combinable(const combinable& _Copy);
```  
  
### <a name="parameters"></a>Parametri  
 `_Function`  
 Il tipo dell'oggetto funtore di inizializzazione.  
  
 `_FnInitialize`  
 Una funzione che verrà chiamata per inizializzare ogni nuovo valore thread privato del tipo `T`. Deve supportare un operatore di chiamata di funzione con la firma `T ()`.  
  
 `_Copy`  
 Un oggetto esistente `combinable` da copiare in questo oggetto.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza nuovi elementi con il costruttore predefinito per il tipo `T`.  
  
 Il secondo costruttore inizializza nuovi elementi utilizzando il funtore di inizializzazione fornito come il `_FnInitialize` parametro.  
  
 Il terzo costruttore è il costruttore di copia.  
  
##  <a name="dtor"></a>~ combinable 

 Elimina un oggetto `combinable`.  
  
```
~combinable();
```  
  
##  <a name="combine"></a>combinare 

 Calcola un valore finale dal set di calcoli secondari locali del thread chiamando il funtore combinato fornito.  
  
```
template<typename _Function>
T combine(_Function _FnCombine) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Function`  
 Il tipo di oggetto funzione che sarà richiamato per combinare due calcoli secondari locali del thread.  
  
 `_FnCombine`  
 Funtore utilizzato per combinare i calcoli secondari. La firma è `T (T, T)` o `T (const T&, const T&)`, e deve essere associativa e commutativa.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato finale della combinazione di tutti i calcoli secondari thread privato.  
  
##  <a name="combine_each"></a>combine_each 

 Calcola un valore finale dal set di calcoli secondari locali del thread chiamando il funtore combinato fornito una volta per ogni calcolo secondario locale di thread. Il risultato finale verrà accumulato dall'oggetto funzione.  
  
```
template<typename _Function>
void combine_each(_Function _FnCombine) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Function`  
 Il tipo di oggetto funzione che sarà richiamato per combinare un calcolo secondario locale di thread singolo.  
  
 `_FnCombine`  
 Funtore utilizzato per combinare un calcolo secondario. La firma è `void (T)` o `void (const T&)`e deve essere associativa e commutativa.  
  
##  <a name="local"></a>locale 

 Restituisce un riferimento al calcolo secondario thread privato.  
  
```
T& local();

T& local(bool& _Exists);
```  
  
### <a name="parameters"></a>Parametri  
 `_Exists`  
 Un riferimento a un valore booleano. Il valore booleano a cui fa riferimento questo argomento verrà impostato su `true` se il calcolo secondario già esistente sul thread corrente e impostato su `false` se questo è il primo calcolo secondario sul thread corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento al calcolo secondario thread privato.  
  
##  <a name="operator_eq"></a>operatore = 

 Assegna a un `combinable` da un altro oggetto `combinable` oggetto.  
  
```
combinable& operator= (const combinable& _Copy);
```  
  
### <a name="parameters"></a>Parametri  
 `_Copy`  
 Un oggetto esistente `combinable` da copiare in questo oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `combinable` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

