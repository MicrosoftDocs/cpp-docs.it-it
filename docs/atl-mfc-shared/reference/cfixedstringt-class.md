---
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
ms.openlocfilehash: 6c7649b7131e3b1620112acf89867d0731d7265d
ms.sourcegitcommit: 309dc532f13242854b47759cef846de59bb807f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/28/2019
ms.locfileid: "58564866"
---
# <a name="cfixedstringt-class"></a>Classe CFixedStringT

Questa classe rappresenta un oggetto stringa con un buffer di caratteri predefinito.

## <a name="syntax"></a>Sintassi

```
template<class StringType, int t_nChars>
class CFixedStringT : private CFixedStringMgr, public StringType
```

#### <a name="parameters"></a>Parametri

*StringType*<br/>
Usata come classe base per l'oggetto stringa fissa e può essere qualsiasi `CStringT`-sul tipo di base. Ecco alcuni esempi `CString`, `CStringA`, e `CStringW`.

*t_nChars*<br/>
Il numero di caratteri archiviati nel buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFixedStringT::CFixedStringT](#cfixedstringt)|Il costruttore per l'oggetto stringa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFixedStringT::operator =](#operator_eq)|Assegna un nuovo valore per un `CFixedStringT` oggetto.|

## <a name="remarks"></a>Note

Questa classe è un esempio di una stringa personalizzata della classe di base `CStringT`. Pur essendo simili, le due classi diverse nell'implementazione. Le differenze principali tra `CFixedStringT` e `CStringT` sono:

- Caratteri iniziali del buffer viene allocato come parte dell'oggetto e ha dimensioni *t_nChars*. In questo modo il `CFixedString` oggetto in modo che occupi un blocco di memoria contigua ai fini delle prestazioni. Tuttavia, se il contenuto di un `CFixedStringT` oggetto dimensioni superano *t_nChars*, il buffer viene allocato in modo dinamico.

- Il buffer di caratteri per un `CFixedStringT` oggetto è sempre la stessa lunghezza ( *t_nChars*). Non sussiste alcuna limitazione alle dimensioni del buffer per `CStringT` oggetti.

- Il gestore della memoria per `CFixedStringT` personalizzato in modo che la condivisione di un [CStringData](../../atl-mfc-shared/reference/cstringdata-class.md) oggetto tra due o più `CFixedStringT` oggetti non è consentita. `CStringT` oggetti non hanno questo limite.

Per ulteriori informazioni sulla personalizzazione delle `CFixedStringT` e la gestione della memoria per oggetti stringa in generale, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlStringMgr`

`StringType`

`CFixedStringMgr`

`CFixedStringT`

## <a name="requirements"></a>Requisiti

**Intestazione:** CStringT. h

##  <a name="cfixedstringt"></a>  CFixedStringT::CFixedStringT

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
Una stringa con terminazione null deve essere copiato `CFixedStringT` oggetto.

*strSrc*<br/>
Un oggetto esistente `CFixedStringT` oggetto deve essere copiato `CFixedStringT` oggetto.

*pStringMgr*<br/>
Un puntatore al gestore della memoria del `CFixedStringT` oggetto. Per ulteriori informazioni sul `IAtlStringMgr` e la gestione della memoria per `CFixedStringT`, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

### <a name="remarks"></a>Note

Poiché i costruttori copiano i dati di input in nuova risorsa di archiviazione allocato, è necessario essere consapevoli che la memoria possono generare eccezioni. Alcuni di questi costruttori fungono da funzioni di conversione.

##  <a name="operator_eq"></a>  CFixedStringT::operator =

Reinizializza un esistente `CFixedStringT` oggetto con i nuovi dati.

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
Una stringa con terminazione null deve essere copiato `CFixedStringT` oggetto.

*strSrc*<br/>
Un oggetto esistente `CFixedStringT` deve essere copiato `CFixedStringT` oggetto.

### <a name="remarks"></a>Note

È necessario essere consapevoli che la memoria possono verificarsi eccezioni quando si usa l'operatore di assegnazione in quanto spesso viene allocata altra memoria per contenere l'oggetto risultante `CFixedStringT` oggetto.

## <a name="see-also"></a>Vedere anche

[Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
