---
description: 'Altre informazioni su: classe CFixedStringT'
title: Classe CFixedStringT
ms.date: 03/27/2019
f1_keywords:
- CFixedStringT
- CSTRINGT/ATL::CFixedStringT
- CSTRINGT/ATL::CFixedStringT::CFixedStringT
helpviewer_keywords:
- CFixedStringT class
- shared classes, CFixedStringT
ms.assetid: 6d4171ba-3104-493a-a6cc-d515f4ba9a4b
ms.openlocfilehash: a613716364318ced140709d2b33e9d9c4299af0b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166836"
---
# <a name="cfixedstringt-class"></a>Classe CFixedStringT

Questa classe rappresenta un oggetto stringa con un buffer di caratteri fisso.

## <a name="syntax"></a>Sintassi

```
template<class StringType, int t_nChars>
class CFixedStringT : private CFixedStringMgr, public StringType
```

#### <a name="parameters"></a>Parametri

*StringType*<br/>
Utilizzato come classe base per l'oggetto stringa fisso e può essere qualsiasi `CStringT` tipo in base a. Alcuni esempi sono `CString` , `CStringA` e `CStringW` .

*t_nChars*<br/>
Numero di caratteri archiviati nel buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CFixedStringT:: CFixedStringT](#cfixedstringt)|Costruttore per l'oggetto stringa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CFixedStringT:: operator =](#operator_eq)|Assegna un nuovo valore a un `CFixedStringT` oggetto.|

## <a name="remarks"></a>Commenti

Questa classe è un esempio di una classe String personalizzata basata su `CStringT` . Sebbene simili, le due classi sono diverse nell'implementazione. Le differenze principali tra `CFixedStringT` e `CStringT` sono:

- Il buffer di caratteri iniziale viene allocato come parte dell'oggetto e ha dimensioni *t_nChars*. Ciò consente all' `CFixedString` oggetto di occupare un blocco di memoria contiguo a scopo di prestazioni. Tuttavia, se il contenuto di un `CFixedStringT` oggetto cresce oltre *t_nChars*, il buffer viene allocato dinamicamente.

- Il buffer di caratteri per un `CFixedStringT` oggetto ha sempre la stessa lunghezza ( *t_nChars*). Non esistono limitazioni alle dimensioni del buffer per `CStringT` gli oggetti.

- Il gestore della memoria per `CFixedStringT` è personalizzato in modo che la condivisione di un oggetto [CStringData](../../atl-mfc-shared/reference/cstringdata-class.md) tra due o più `CFixedStringT` oggetti non sia consentita. `CStringT` gli oggetti non presentano questa limitazione.

Per ulteriori informazioni sulla personalizzazione e sulla `CFixedStringT` gestione della memoria per gli oggetti stringa in generale, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlStringMgr`

`StringType`

`CFixedStringMgr`

`CFixedStringT`

## <a name="requirements"></a>Requisiti

**Intestazione:** CStringT. h

## <a name="cfixedstringtcfixedstringt"></a><a name="cfixedstringt"></a> CFixedStringT:: CFixedStringT

Costruisce un oggetto `CFixedStringT`.

```
CFixedStringT() throw();
explicit CFixedStringT(IAtlStringMgr* pStringMgr) throw();
CFixedStringT(const CFixedStringT<StringType, t_nChars>& strSrc);
CFixedStringT(const StringType& strSrc);
CFixedStringT(const StringType::XCHAR* pszSrc);
explicit CFixedStringT(const StringType::YCHAR* pszSrc);
explicit CFixedStringT(const unsigned char* pszSrc);
```

### <a name="parameters"></a>Parametri

*pszSrc*<br/>
Stringa con terminazione null da copiare in questo `CFixedStringT` oggetto.

*strSrc*<br/>
Oggetto esistente `CFixedStringT` da copiare in questo `CFixedStringT` oggetto.

*pStringMgr*<br/>
Puntatore al gestore della memoria dell' `CFixedStringT` oggetto. Per ulteriori informazioni su `IAtlStringMgr` e sulla gestione della memoria per `CFixedStringT` , vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

### <a name="remarks"></a>Commenti

Poiché i costruttori copiano i dati di input in una nuova risorsa di archiviazione allocata, è necessario tenere presente che possono verificarsi eccezioni di memoria. Alcuni di questi costruttori fungono da funzioni di conversione.

## <a name="cfixedstringtoperator-"></a><a name="operator_eq"></a> CFixedStringT:: operator =

Reinizializza un oggetto esistente `CFixedStringT` con nuovi dati.

```
CFixedStringT<StringType, t_nChars>& operator=(
    const CFixedStringT<StringType, t_nChars>& strSrc);
CFixedStringT<StringType, t_nChars>& operator=(const char* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const wchar_t* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const unsigned char* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const StringType& strSrc);
```

### <a name="parameters"></a>Parametri

*pszSrc*<br/>
Stringa con terminazione null da copiare in questo `CFixedStringT` oggetto.

*strSrc*<br/>
Oggetto esistente `CFixedStringT` da copiare in questo `CFixedStringT` oggetto.

### <a name="remarks"></a>Commenti

È necessario tenere presente che le eccezioni di memoria possono verificarsi quando si usa l'operatore di assegnazione perché la nuova risorsa di archiviazione viene spesso allocata per contenere l' `CFixedStringT` oggetto risultante.

## <a name="see-also"></a>Vedi anche

[CStringt (classe)](../../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
