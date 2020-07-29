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
ms.openlocfilehash: 2ea8fc8a26642abf593c7f4df3928ff90e66e2b3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230000"
---
# <a name="cadapt-class"></a>Classe CAdapt

Questo modello viene utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of per restituire un valore diverso da quello dell'indirizzo dell'oggetto.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class CAdapt
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo adattato.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdapt:: CAdapt](#cadapt)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdapt:: operator const T&](#operator_const_t_amp)|Restituisce un **`const`** riferimento a `m_T` .|
|[&CAdapt:: operator T](#operator_t_amp)|Restituisce un riferimento a `m_T`.|
|[<CAdapt:: operator](#operator_lt)|Confronta un oggetto del tipo adattato con `m_T`.|
|[CAdapt:: operator =](#operator_eq)|Assegna un oggetto del tipo adattato a `m_T`.|
|[CAdapt:: operator = =](#operator_eq_eq)|Confronta un oggetto del tipo adattato con `m_T`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAdapt:: m_T](#m_t)|I dati che vengono adattati.|

## <a name="remarks"></a>Osservazioni

`CAdapt` è un modello semplice utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address-of (`operator &`) per restituire un valore diverso da quello dell'indirizzo dell'oggetto. Esempi di tali classi includono le classi `CComBSTR`, `CComPtr` e `CComQIPtr` di ATL e la classe di supporto COM del compilatore, `_com_ptr_t`. Queste classi ridefiniscono tutti l'operatore address-of per restituire l'indirizzo di uno dei relativi membri dati (un BSTR nel caso di `CComBSTR` e un puntatore di interfaccia nel caso delle altre classi).

`CAdapt`il ruolo primario di è nascondere l'operatore address-of definito dalla classe *T*, mantenendo tuttavia le caratteristiche della classe adattata. `CAdapt`soddisfa questo ruolo mantenendo un membro pubblico, [m_T](#m_t), di tipo *T*e definendo gli operatori di conversione, gli operatori di confronto e un costruttore di copia per consentire che le specializzazioni di `CAdapt` vengano considerate come se fossero oggetti di tipo *t*.

La classe `CAdapt` dell'adattatore è utile in quanto alcune classi stile contenitore si prevede siano in grado di ottenere gli indirizzi dei rispettivi oggetti contenuti utilizzando address-of. La ridefinizione dell'operatore address-of può confondere questo requisito, in genere causando errori di compilazione e impedendo l'utilizzo del tipo non adattato con le classi che si aspettano che funzioni. `CAdapt` fornisce un modo per risolvere questi problemi.

In genere, si utilizza `CAdapt` quando si desidera archiviare gli oggetti `CComBSTR`, `CComPtr`, `CComQIPtr` o `_com_ptr_t` in una classe stile contenitore. Questa operazione è normalmente necessaria per i contenitori della libreria standard di C++ precedenti al supporto per lo standard C++11, ma i contenitori della libreria standard C++11 automaticamente utilizzano i tipi che hanno eseguito l'overload di `operator&()`. La libreria standard consente di ottenere questo risultato usando internamente [std:: AddressOf](../../standard-library/memory-functions.md#addressof) per ottenere gli indirizzi reali degli oggetti.

## <a name="requirements"></a>Requisiti

**Intestazione:** Atlcomcli. h

## <a name="cadaptcadapt"></a><a name="cadapt"></a>CAdapt:: CAdapt

I costruttori consentono a un oggetto adapter di essere costruito in modo predefinito, copiato da un oggetto del tipo adattato o copiato da un altro oggetto adapter.

```cpp
CAdapt();
CAdapt(const T& rSrc);
CAdapt(const CAdapt& rSrCA);
CAdapt(T&& rSrCA);  // (Visual Studio 2017)
CAdapt(CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Variabile del tipo da adattare per essere copiato nell'oggetto adattatore appena costruito.

*rSrCA*<br/>
Oggetto adapter i cui dati contenuti devono essere copiati (o spostati) nell'oggetto adapter appena costruito.

## <a name="cadaptm_t"></a><a name="m_t"></a>CAdapt:: m_T

Include i dati da adattare.

```cpp
T m_T;
```

### <a name="remarks"></a>Osservazioni

**`public`** È possibile accedere a questo membro dati direttamente o indirettamente con [operator const t&](#operator_const_t_amp) e [operator t&](#operator_t_amp).

## <a name="cadaptoperator-const-tamp"></a><a name="operator_const_t_amp"></a>CAdapt:: operator const T&amp;

Restituisce un **`const`** riferimento al membro [m_T](#m_t) , consentendo all'oggetto adapter di essere considerato come un oggetto di tipo *T*.

```cpp
operator const T&() const;
```

### <a name="return-value"></a>Valore restituito

**`const`** Riferimento a `m_T` .

## <a name="cadaptoperator-tamp"></a><a name="operator_t_amp"></a>Operatore CAdapt:: operator T&amp;

Restituisce un riferimento al membro [m_T](#m_t) , consentendo all'oggetto adapter di essere considerato come un oggetto di tipo *T*.

```cpp
operator T&();
```

### <a name="return-value"></a>Valore restituito

Riferimento a `m_T`.

## <a name="cadaptoperator-lt"></a><a name="operator_lt"></a>Operatore CAdapt::&lt;

Confronta un oggetto del tipo adattato con [m_T](#m_t).

```cpp
bool operator<(const T& rSrc) const;
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento all'oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Risultato del confronto tra `m_T` e *rsrc*.

## <a name="cadaptoperator-"></a><a name="operator_eq"></a>CAdapt:: operator =

L'operatore di assegnazione assegna l'argomento *rsrc*al membro dati [m_T](#m_t) e restituisce l'oggetto adapter corrente.

```cpp
CAdapt& operator= (const T& rSrc);
CAdapt& operator= (T&& rSrCA); // (Visual Studio 2017)
CAdapt& operator= (CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento a un oggetto del tipo adattato da copiare.

*rSrCA*<br/>
Riferimento a un oggetto da spostare.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto corrente.

## <a name="cadaptoperator-"></a><a name="operator_eq_eq"></a>CAdapt:: operator = =

Confronta un oggetto del tipo adattato con [m_T](#m_t).

```cpp
bool operator== (const T& rSrc) const;
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento all'oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Risultato del confronto tra *m_T* e *rsrc*.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
