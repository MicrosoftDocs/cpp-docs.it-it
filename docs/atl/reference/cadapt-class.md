---
title: Classe CAdapt | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAdapt
- ATLCOMCLI/ATL::CAdapt
- ATLCOMCLI/ATL::CAdapt::CAdapt
- ATLCOMCLI/ATL::CAdapt::m_T
dev_langs:
- C++
helpviewer_keywords:
- address-of operator
- adapter objects
- '& operator, address-of operator'
- CAdapt class
ms.assetid: 0bb695a5-72fe-43d1-8f39-7e4da6e34765
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b4e565b1e2c20abf31919774d7bc6eb34f4c5f78
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cadapt-class"></a>Classe CAdapt
Questo modello viene utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of per restituire un valore diverso da quello dell'indirizzo dell'oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CAdapt
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo adattato.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAdapt::CAdapt](#cadapt)|Costruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAdapt::operator const T &](#operator_const_t_amp)|Restituisce un riferimento `const` a `m_T`.|  
|[CAdapt::operator T &](#operator_t_amp)|Restituisce un riferimento a `m_T`.|  
|[CAdapt::operator <](#operator_lt)|Confronta un oggetto del tipo adattato con `m_T`.|  
|[CAdapt::operator =](#operator_eq)|Assegna un oggetto del tipo adattato a `m_T`.|  
|[CAdapt::operator = =](#operator_eq_eq)|Confronta un oggetto del tipo adattato con `m_T`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAdapt::m_T](#m_t)|I dati che vengono adattati.|  
  
## <a name="remarks"></a>Note  
 `CAdapt`è un modello semplice utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of ( `operator &`) per restituire un valore diverso da quello l'indirizzo dell'oggetto. Esempi di tali classi includono le classi `CComBSTR`, `CComPtr` e `CComQIPtr` di ATL e la classe di supporto COM del compilatore, `_com_ptr_t`. Tutte le classi consentono di ridefinire l'operatore address-of per restituire l'indirizzo di uno dei relativi membri dati (`BSTR` nel caso di `CComBSTR` e un puntatore a interfaccia nel caso delle altre classi).  
  
 Il ruolo primario di`CAdapt` è quello di nascondere l'operatore address-of definito dalla classe `T`, mantenendo le caratteristiche della classe adattata. `CAdapt`soddisfa questo ruolo utilizzando un membro pubblico, [m_T](#m_t), di tipo `T`e definire gli operatori di conversione, gli operatori di confronto e un costruttore di copia per consentire le specializzazioni di `CAdapt` per essere considerato come se fossero gli oggetti di tipo `T`.  
  
 La classe `CAdapt` dell'adattatore è utile in quanto alcune classi stile contenitore si prevede siano in grado di ottenere gli indirizzi dei rispettivi oggetti contenuti utilizzando address-of. La ridefinizione dell'operatore address-of può confondere questo requisito, in genere causando errori di compilazione e impedendo l'utilizzo del tipo non adattato con le classi che si aspettano che funzioni. `CAdapt` fornisce un modo per risolvere questi problemi.  
  
 In genere, si utilizza `CAdapt` quando si desidera archiviare gli oggetti `CComBSTR`, `CComPtr`, `CComQIPtr` o `_com_ptr_t` in una classe stile contenitore. Questa operazione è normalmente necessaria per i contenitori della libreria standard di C++ precedenti al supporto per lo standard C++11, ma i contenitori della libreria standard C++11 automaticamente utilizzano i tipi che hanno eseguito l'overload di `operator&()`. La libreria Standard raggiunge ciò utilizzando internamente [std::addressof](../../standard-library/memory-functions.md#addressof) per ottenere gli indirizzi veri degli oggetti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  
  
##  <a name="cadapt"></a>CAdapt::CAdapt  
 I costruttori consentono a un oggetto adattatore come predefinita costruito, copiati da un oggetto del tipo adattato o copiati da un altro oggetto adattatore.  
  
```
CAdapt();
CAdapt(const T& rSrc);
CAdapt(const CAdapt& rSrCA);
CAdapt(T&& rSrCA);  // (Visual Studio 2017)
CAdapt(CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```  
  
### <a name="parameters"></a>Parametri  
 `rSrc`  
 Una variabile del tipo vengono adattato per essere copiato l'oggetto scheda appena creata.  
  
 *rSrCA*  
 Un oggetto di adapter i cui dati contenuti devono essere copiati (o spostati) nell'oggetto scheda appena creata.  
  
##  <a name="m_t"></a>CAdapt::m_T  
 Contiene i dati vengono adattati.  
  
```
T m_T;
```  
  
### <a name="remarks"></a>Note  
 Questo **pubblica** membro dati è possibile accedere direttamente o indirettamente con [operator const T &](#operator_const_t_amp) e [operatore T &](#operator_t_amp).  
  
##  <a name="operator_const_t_amp"></a>Const T CAdapt::operator&amp;  
 Restituisce un **const** fanno riferimento al [m_T](#m_t) membro, consentendo l'oggetto adattatore venga trattata come se fosse un oggetto di tipo `T`.  
  
```  
operator const T&() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **const** fanno riferimento a `m_T`.  
  
##  <a name="operator_t_amp"></a>CAdapt::operator T&amp;  
 Restituisce un riferimento di [m_T](#m_t) membro, consentendo l'oggetto adattatore venga trattata come se fosse un oggetto di tipo `T`.  
  
```  
operator T&();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a `m_T`.  
  
##  <a name="operator_lt"></a>CAdapt::operator&lt;  
 Confronta un oggetto del tipo adattato con [m_T](#m_t).  
  
```
bool operator<(const T& rSrc) const;
```  
  
### <a name="parameters"></a>Parametri  
 `rSrc`  
 Un riferimento all'oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato del confronto tra `m_T` e `rSrc`.  
  
##  <a name="operator_eq"></a>CAdapt::operator =  
 L'operatore di assegnazione assegna l'argomento, `rSrc`, al membro dati [m_T](#m_t) e restituisce l'oggetto scheda corrente.  
  
```
CAdapt& operator= (const T& rSrc);
CAdapt& operator= (T&& rSrCA); // (Visual Studio 2017)
CAdapt& operator= (CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```  
  
### <a name="parameters"></a>Parametri  
 `rSrc`  
 Un riferimento a un oggetto del tipo adattato da copiare. 

 `rSrCA`Un riferimento a un oggetto da spostare. 
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto corrente.  
  
##  <a name="operator_eq_eq"></a>CAdapt::operator = =  
 Confronta un oggetto del tipo adattato con [m_T](#m_t).  
  
```
bool operator== (const T& rSrc) const;
```  
  
### <a name="parameters"></a>Parametri  
 `rSrc`  
 Un riferimento all'oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato del confronto tra `m_T` e `rSrc`.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
