---
title: CFixedStringT (classe)
ms.date: 03/27/2019
f1_keywords:
- CFixedStringT
- CSTRINGT/ATL::CFixedStringT
- CSTRINGT/ATL::CFixedStringT::CFixedStringT
helpviewer_keywords:
- CFixedStringT class
- shared classes, CFixedStringT
ms.assetid: 6d4171ba-3104-493a-a6cc-d515f4ba9a4b
ms.openlocfilehash: fe096185f6f0b71ad45757cd0b75ab13c41e5f5b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317833"
---
# <a name="cfixedstringt-class"></a>CFixedStringT (classe)

Questa classe rappresenta un oggetto stringa con un buffer di caratteri fissi.

## <a name="syntax"></a>Sintassi

```
template<class StringType, int t_nChars>
class CFixedStringT : private CFixedStringMgr, public StringType
```

#### <a name="parameters"></a>Parametri

*TipoStringa*<br/>
Utilizzato come classe base per l'oggetto `CStringT`stringa fissa e può essere qualsiasi tipo basato su. Alcuni esempi `CString` `CStringA`includono `CStringW`, , e .

*t_nChars*<br/>
Numero di caratteri archiviati nel buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFixedStringT::CFixedStringT](#cfixedstringt)|Costruttore per l'oggetto stringa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFixedStringT::operatore](#operator_eq)|Assegna un nuovo valore `CFixedStringT` a un oggetto.|

## <a name="remarks"></a>Osservazioni

Questa classe è un esempio di `CStringT`classe stringa personalizzata basata su . Sebbene simili, le due classi differiscono nell'implementazione. Le principali `CFixedStringT` differenze tra e `CStringT` sono:

- Il buffer di caratteri iniziale viene allocato come parte dell'oggetto e ha dimensioni *t_nChars*. Ciò `CFixedString` consente all'oggetto di occupare un blocco di memoria contiguo per motivi di prestazioni. Tuttavia, se il `CFixedStringT` contenuto di un oggetto supera *t_nChars*, il buffer viene allocato in modo dinamico.

- Il buffer di `CFixedStringT` caratteri per un oggetto è sempre della stessa lunghezza ( *t_nChars*). Non esiste alcuna limitazione sulla dimensione del buffer per `CStringT` gli oggetti.

- Il gestore `CFixedStringT` della memoria per è personalizzato in modo che `CFixedStringT` la condivisione di un [CStringData](../../atl-mfc-shared/reference/cstringdata-class.md) oggetto tra due o più oggetti non è consentita. `CStringT`oggetti non hanno questa limitazione.

Per ulteriori informazioni sulla `CFixedStringT` personalizzazione e la gestione della memoria per gli oggetti stringa in generale, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlStringMgr`

`StringType`

`CFixedStringMgr`

`CFixedStringT`

## <a name="requirements"></a>Requisiti

**Intestazione:** cstringt.h

## <a name="cfixedstringtcfixedstringt"></a><a name="cfixedstringt"></a>CFixedStringT::CFixedStringT

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

*Pszsrc*<br/>
Stringa con terminazione null da `CFixedStringT` copiare in questo oggetto.

*strSrc*<br/>
Oggetto `CFixedStringT` esistente da copiare `CFixedStringT` in questo oggetto.

*pStringMgr (informazioni in stato indue)*<br/>
Puntatore al gestore `CFixedStringT` della memoria dell'oggetto. Per ulteriori `IAtlStringMgr` informazioni sulla `CFixedStringT`gestione della memoria e per , vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

### <a name="remarks"></a>Osservazioni

Poiché i costruttori copiano i dati di input in una nuova risorsa di archiviazione allocata, è necessario tenere presente che possono verificarsi eccezioni di memoria. Alcuni di questi costruttori fungono da funzioni di conversione.

## <a name="cfixedstringtoperator-"></a><a name="operator_eq"></a>CFixedStringT::operatore

Reinizializza un `CFixedStringT` oggetto esistente con nuovi dati.

```
CFixedStringT<StringType, t_nChars>& operator=(
    const CFixedStringT<StringType, t_nChars>& strSrc);
CFixedStringT<StringType, t_nChars>& operator=(const char* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const wchar_t* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const unsigned char* pszSrc);
CFixedStringT<StringType, t_nChars>& operator=(const StringType& strSrc);
```

### <a name="parameters"></a>Parametri

*Pszsrc*<br/>
Stringa con terminazione null da `CFixedStringT` copiare in questo oggetto.

*strSrc*<br/>
Esistente `CFixedStringT` da copiare `CFixedStringT` in questo oggetto.

### <a name="remarks"></a>Osservazioni

È necessario tenere presente che le eccezioni di memoria possono verificarsi ogni `CFixedStringT` volta che si utilizza l'operatore di assegnazione perché nuova risorsa di archiviazione viene spesso allocata per contenere l'oggetto risultante.

## <a name="see-also"></a>Vedere anche

[Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
