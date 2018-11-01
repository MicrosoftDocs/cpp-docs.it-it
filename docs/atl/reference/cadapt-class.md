---
title: Classe CAdapt
ms.date: 11/04/2016
f1_keywords:
- CAdapt
- ATLCOMCLI/ATL::CAdapt
- ATLCOMCLI/ATL::CAdapt::CAdapt
- ATLCOMCLI/ATL::CAdapt::m_T
helpviewer_keywords:
- address-of operator
- adapter objects
- '& operator, address-of operator'
- CAdapt class
ms.assetid: 0bb695a5-72fe-43d1-8f39-7e4da6e34765
ms.openlocfilehash: ec42ab7a9dd36648b1405859cf02bc194f75a73c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614734"
---
# <a name="cadapt-class"></a>Classe CAdapt

Questo modello viene utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of per restituire un valore diverso da quello dell'indirizzo dell'oggetto.

## <a name="syntax"></a>Sintassi

```
template <class T>
class CAdapt
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo adattato.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdapt::CAdapt](#cadapt)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdapt::operator const T &](#operator_const_t_amp)|Restituisce un **const** fanno riferimento a `m_T`.|
|[CAdapt::operator T &](#operator_t_amp)|Restituisce un riferimento a `m_T`.|
|[CAdapt::operator <](#operator_lt)|Confronta un oggetto del tipo adattato con `m_T`.|
|[CAdapt::operator =](#operator_eq)|Assegna un oggetto del tipo adattato a `m_T`.|
|[CAdapt::operator = =](#operator_eq_eq)|Confronta un oggetto del tipo adattato con `m_T`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdapt::m_T](#m_t)|I dati che vengono adattati.|

## <a name="remarks"></a>Note

`CAdapt` è un modello semplice utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of (`operator &`) per restituire un valore diverso da quello dell'indirizzo dell'oggetto. Esempi di tali classi includono le classi `CComBSTR`, `CComPtr` e `CComQIPtr` di ATL e la classe di supporto COM del compilatore, `_com_ptr_t`. Tutte le classi consentono di ridefinire l'operatore address-of per restituire l'indirizzo di uno dei relativi membri dati (nel caso di BSTR `CComBSTR`e un puntatore a interfaccia nel caso di altre classi).

`CAdapt`del ruolo principale è quello di nascondere l'operatore address-of definito dalla classe *T*, mantenendo le caratteristiche della classe adattata. `CAdapt` soddisfa questo ruolo utilizzando un membro pubblico, [m_T](#m_t), di tipo *T*e definendo gli operatori di conversione, gli operatori di confronto e un costruttore di copia per consentire le specializzazioni di `CAdapt` sia considerate come se fossero oggetti di tipo *T*.

La classe `CAdapt` dell'adattatore è utile in quanto alcune classi stile contenitore si prevede siano in grado di ottenere gli indirizzi dei rispettivi oggetti contenuti utilizzando address-of. La ridefinizione dell'operatore address-of può confondere questo requisito, in genere causando errori di compilazione e impedendo l'utilizzo del tipo non adattato con le classi che si aspettano che funzioni. `CAdapt` fornisce un modo per risolvere questi problemi.

In genere, si utilizza `CAdapt` quando si desidera archiviare gli oggetti `CComBSTR`, `CComPtr`, `CComQIPtr` o `_com_ptr_t` in una classe stile contenitore. Questa operazione è normalmente necessaria per i contenitori della libreria standard di C++ precedenti al supporto per lo standard C++11, ma i contenitori della libreria standard C++11 automaticamente utilizzano i tipi che hanno eseguito l'overload di `operator&()`. La libreria Standard raggiunge ciò utilizzando internamente [std::addressof](../../standard-library/memory-functions.md#addressof) per ottenere gli indirizzi veri degli oggetti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli

##  <a name="cadapt"></a>  CAdapt::CAdapt

I costruttori consentono a un oggetto adattatore come predefinita costruito, copiati dall'oggetto del tipo adattato o copiati da un altro oggetto adattatore.

```
CAdapt();
CAdapt(const T& rSrc);
CAdapt(const CAdapt& rSrCA);
CAdapt(T&& rSrCA);  // (Visual Studio 2017)
CAdapt(CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Una variabile del tipo di cui è stata adattata per essere copiato l'oggetto scheda appena costruito.

*rSrCA*<br/>
Un oggetto adapter con dati in essi contenuti devono essere copiati (o spostati) nell'oggetto adattatore appena costruito.

##  <a name="m_t"></a>  CAdapt::m_T

Contiene i dati che vengono adattati.

```
T m_T;
```

### <a name="remarks"></a>Note

Ciò **pubbliche** membro dati è possibile accedere direttamente o indirettamente con [operator const T &](#operator_const_t_amp) e [operator T &](#operator_t_amp).

##  <a name="operator_const_t_amp"></a>  CAdapt::operator const T&amp;

Restituisce un **const** fanno riferimento a per il [m_T](#m_t) membro, consentendo l'oggetto scheda deve essere trattato come se fosse un oggetto di tipo *T*.

```
operator const T&() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** fanno riferimento a `m_T`.

##  <a name="operator_t_amp"></a>  CAdapt::operator T&amp;

Restituisce un riferimento per la [m_T](#m_t) membro, consentendo l'oggetto scheda deve essere trattato come se fosse un oggetto di tipo *T*.

```
operator T&();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a `m_T`.

##  <a name="operator_lt"></a>  CAdapt::operator &lt;

Confronta un oggetto del tipo adattato con [m_T](#m_t).

```
bool operator<(const T& rSrc) const;
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Un riferimento all'oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Il risultato del confronto tra `m_T` e *rSrc*.

##  <a name="operator_eq"></a>  CAdapt::operator =

L'operatore di assegnazione assegna l'argomento *rSrc*, e il membro dati [m_T](#m_t) e restituisce l'oggetto scheda corrente.

```
CAdapt& operator= (const T& rSrc);
CAdapt& operator= (T&& rSrCA); // (Visual Studio 2017)
CAdapt& operator= (CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Un riferimento a un oggetto del tipo adattato da copiare.

*rSrCA*<br/>
Un riferimento a un oggetto da spostare.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente.

##  <a name="operator_eq_eq"></a>  CAdapt::operator = =

Confronta un oggetto del tipo adattato con [m_T](#m_t).

```
bool operator== (const T& rSrc) const;
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Un riferimento all'oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Il risultato del confronto tra *m_T* e *rSrc*.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
