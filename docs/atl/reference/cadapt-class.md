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
ms.openlocfilehash: 23544bc103de0d7b76cd73d403626ba93af6e31a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321633"
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
|[CAdattar::CAdattar](#cadapt)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdapt::operator const T&](#operator_const_t_amp)|Restituisce un riferimento `m_T` **const** a .|
|[CAdapt::operatore T&](#operator_t_amp)|Restituisce un riferimento a `m_T`.|
|[CAdapt::operatore <](#operator_lt)|Confronta un oggetto del tipo adattato con `m_T`.|
|[CAdapt::operatore](#operator_eq)|Assegna un oggetto del tipo adattato a `m_T`.|
|[CAdattar::operatore](#operator_eq_eq)|Confronta un oggetto del tipo adattato con `m_T`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdattare::m_T](#m_t)|I dati che vengono adattati.|

## <a name="remarks"></a>Osservazioni

`CAdapt` è un modello semplice utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of (`operator &`) per restituire un valore diverso da quello dell'indirizzo dell'oggetto. Esempi di tali classi includono le classi `CComBSTR`, `CComPtr` e `CComQIPtr` di ATL e la classe di supporto COM del compilatore, `_com_ptr_t`. Tutte queste classi ridefiniscono l'operatore address-of per restituire l'indirizzo di `CComBSTR`uno dei relativi membri dati (un BSTR nel caso di , e un puntatore a interfaccia nel caso delle altre classi).

`CAdapt`'s ruolo primario è quello di nascondere l'operatore address-of definito dalla classe *T*, pur mantenendo le caratteristiche della classe adattata. `CAdapt`Svolge questo ruolo svolgendo un membro pubblico, [m_T](#m_t), di tipo *T*e definendo operatori di `CAdapt` conversione, operatori di confronto e un costruttore di copia per consentire che le specializzazioni di vengano trattate come se fossero oggetti di tipo *T*.

La classe `CAdapt` dell'adattatore è utile in quanto alcune classi stile contenitore si prevede siano in grado di ottenere gli indirizzi dei rispettivi oggetti contenuti utilizzando address-of. La ridefinizione dell'operatore address-of può confondere questo requisito, in genere causando errori di compilazione e impedendo l'utilizzo del tipo non adattato con le classi che si aspettano che funzioni. `CAdapt` fornisce un modo per risolvere questi problemi.

In genere, si utilizza `CAdapt` quando si desidera archiviare gli oggetti `CComBSTR`, `CComPtr`, `CComQIPtr` o `_com_ptr_t` in una classe stile contenitore. Questa operazione è normalmente necessaria per i contenitori della libreria standard di C++ precedenti al supporto per lo standard C++11, ma i contenitori della libreria standard C++11 automaticamente utilizzano i tipi che hanno eseguito l'overload di `operator&()`. La libreria standard ottiene questo risultato internamente utilizzando [std::addressof](../../standard-library/memory-functions.md#addressof) per ottenere i veri indirizzi degli oggetti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli.h

## <a name="cadaptcadapt"></a><a name="cadapt"></a>CAdattar::CAdattar

I costruttori consentono a un oggetto adattatore di essere predefinito costruito, copiato da un oggetto del tipo adattato o copiato da un altro oggetto adattatore.

```
CAdapt();
CAdapt(const T& rSrc);
CAdapt(const CAdapt& rSrCA);
CAdapt(T&& rSrCA);  // (Visual Studio 2017)
CAdapt(CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Variabile del tipo da adattare per essere copiata nell'oggetto adattatore appena costruito.

*RSrCA*<br/>
Oggetto adattatore i cui dati contenuti devono essere copiati (o spostati) nell'oggetto adattatore appena costruito.

## <a name="cadaptm_t"></a><a name="m_t"></a>CAdattare::m_T

Contiene i dati da adattare.

```
T m_T;
```

### <a name="remarks"></a>Osservazioni

È possibile accedere direttamente o indirettamente a questo membro dati **pubblico** con [l'operatore T&](#operator_const_t_amp) e [l'operatore T&](#operator_t_amp).

## <a name="cadaptoperator-const-tamp"></a><a name="operator_const_t_amp"></a>CAdapt::operator const T&amp;

Restituisce un riferimento **const** al membro [m_T,](#m_t) consentendo all'oggetto adattatore di essere considerato come se fosse un oggetto di tipo *T*.

```
operator const T&() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento **const** a `m_T`.

## <a name="cadaptoperator-tamp"></a><a name="operator_t_amp"></a>CAdapt::operatore T&amp;

Restituisce un riferimento [all'm_T](#m_t) membro, consentendo all'oggetto adattatore di essere considerato come se fosse un oggetto di tipo *T*.

```
operator T&();
```

### <a name="return-value"></a>Valore restituito

Riferimento a `m_T`.

## <a name="cadaptoperator-lt"></a><a name="operator_lt"></a>CAdapt::operatore&lt;

Confronta un oggetto del tipo adattato con [m_T](#m_t).

```
bool operator<(const T& rSrc) const;
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento all'oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Risultato del confronto `m_T` tra e *rSrc*.

## <a name="cadaptoperator-"></a><a name="operator_eq"></a>CAdapt::operatore

L'operatore di assegnazione assegna l'argomento *rSrc*al membro dati [m_T](#m_t) e restituisce l'oggetto adattatore corrente.

```
CAdapt& operator= (const T& rSrc);
CAdapt& operator= (T&& rSrCA); // (Visual Studio 2017)
CAdapt& operator= (CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento a un oggetto del tipo adattato da copiare.

*RSrCA*<br/>
Riferimento a un oggetto da spostare.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto corrente.

## <a name="cadaptoperator-"></a><a name="operator_eq_eq"></a>CAdattar::operatore

Confronta un oggetto del tipo adattato con [m_T](#m_t).

```
bool operator== (const T& rSrc) const;
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento all'oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Risultato del confronto tra *m_T* e *rSrc*.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
