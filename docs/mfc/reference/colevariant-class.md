---
title: Classe COleVariant | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleVariant
- AFXDISP/COleVariant
- AFXDISP/COleVariant::COleVariant
- AFXDISP/COleVariant::Attach
- AFXDISP/COleVariant::ChangeType
- AFXDISP/COleVariant::Clear
- AFXDISP/COleVariant::Detach
- AFXDISP/COleVariant::GetByteArrayFromVariantArray
- AFXDISP/COleVariant::SetString
dev_langs:
- C++
helpviewer_keywords:
- COleVariant [MFC], COleVariant
- COleVariant [MFC], Attach
- COleVariant [MFC], ChangeType
- COleVariant [MFC], Clear
- COleVariant [MFC], Detach
- COleVariant [MFC], GetByteArrayFromVariantArray
- COleVariant [MFC], SetString
ms.assetid: e1b5cd4a-b066-4b9b-b48b-6215ed52d998
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e5a45152c5e9d966539cc4de22d587d717ae670
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46424094"
---
# <a name="colevariant-class"></a>Classe COleVariant

Incapsula il [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant) tipo di dati.

## <a name="syntax"></a>Sintassi

```
class COleVariant : public tagVARIANT
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant:: COleVariant](#colevariant)|Costruisce un oggetto `COleVariant`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant::Attach](#attach)|Collega una variante a un `COleVariant`.|
|[COleVariant::ChangeType](#changetype)|Il tipo di variante di questo oggetto viene modificato `COleVariant` oggetto.|
|[COleVariant::Clear](#clear)|Cancella questo `COleVariant` oggetto.|
|[COleVariant::Detach](#detach)|Scollega una variante di un `COleVariant` e restituisce la variante.|
|[COleVariant::GetByteArrayFromVariantArray](#getbytearrayfromvariantarray)|Recupera una matrice di byte da una matrice di variant esistente.|
|[COleVariant::SetString](#setstring)|Imposta la stringa a un determinato tipo, in genere ANSI.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant::operator LPCVARIANT](#operator_lpcvariant)|Converte un `COleVariant` valore in un `LPCVARIANT`.|
|[COleVariant::operator LPVARIANT](#operator_lpvariant)|Converte un `COleVariant` dell'oggetto in un `LPVARIANT`.|
|[COleVariant::operator =](#operator_eq)|Copia un `COleVariant` valore.|
|[COleVariant::operator = =](#operator_eq_eq)|Confronta due `COleVariant` valori.|
|[COleVariant::operator &lt; &lt;, &gt;&gt;](#operator_lt_lt__gt_gt)|Output una `COleVariant` valore per `CArchive` oppure `CDumpContext` e gli input una `COleVariant` dall'oggetto `CArchive`.|

## <a name="remarks"></a>Note

Questo tipo di dati viene usato nell'automazione OLE. In particolare, il [DISPPARAMS](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagdispparams) struttura contiene un puntatore a una matrice di strutture VARIANT. Oggetto `DISPPARAMS` struttura consente di passare parametri al [IDispatch:: Invoke](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke).

> [!NOTE]
> Questa classe è derivata dal `VARIANT` struttura. Ciò significa che è possibile passare un `COleVariant` in un parametro che richiede un `VARIANT` e che i membri dati della `VARIANT` struttura sono membri di dati accessibili di `COleVariant`.

I due relativi classi MFC [COleCurrency](../../mfc/reference/colecurrency-class.md) e [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) incapsulare i tipi di dati variant valuta ( `VT_CY`) e data ( `VT_DATE`). Il `COleVariant` classe è ampiamente usata nelle classi DAO, vedere queste classi per l'utilizzo tipico di questa classe, ad esempio [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Per altre informazioni, vedere la [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant), [valuta](/windows/desktop/api/wtypes/ns-wtypes-tagcy), [DISPPARAMS](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagdispparams), e [IDispatch:: Invoke](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke) voci nel SDK di Windows.

Per altre informazioni sul `COleVariant` classe e il suo utilizzo nell'automazione OLE, vedere "Passaggio di parametri nell'automazione OLE" nell'articolo [automazione](../../mfc/automation.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`COleVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="attach"></a>  COleVariant::Attach

Chiamare questa funzione per collegare il dato [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant) oggetto all'oggetto corrente `COleVariant` oggetto.

```
void Attach(VARIANT& varSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Un oggetto esistente `VARIANT` oggetto da collegare all'oggetto corrente `COleVariant` oggetto.

### <a name="remarks"></a>Note

La funzione imposta VARTYPE del *varSrc* su VT_EMPTY.

Per altre informazioni, vedere la [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant) e [VARENUM](/windows/desktop/api/wtypes/ne-wtypes-varenum) voci nel SDK di Windows.

##  <a name="colevariant"></a>  COleVariant:: COleVariant

Costruisce un oggetto `COleVariant`.

```
COleVariant();
COleVariant(const VARIANT& varSrc);
COleVariant(const COleVariant& varSrc);
COleVariant(LPCVARIANT pSrc);
COleVariant(LPCTSTR lpszSrc);
COleVariant(LPCTSTR lpszSrc, VARTYPE vtSrc);
COleVariant(CString& strSrc);
COleVariant(BYTE nSrc);
COleVariant(short nSrc, VARTYPE vtSrc = VT_I2);
COleVariant(long lSrc,VARTYPE vtSrc = VT_I4);
COleVariant(const COleCurrency& curSrc);
COleVariant(float fltSrc);
COleVariant(double dblSrc);
COleVariant(const COleDateTime& timeSrc);
COleVariant(const CByteArray& arrSrc);
COleVariant(const CLongBinary& lbSrc);
COleVariant(LPCITEMIDLIST pidl);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Un oggetto esistente `COleVariant` oppure `VARIANT` oggetto da copiare nel nuovo `COleVariant` oggetto.

*pSrc*<br/>
Un puntatore a un `VARIANT` oggetti che verranno copiati nel nuovo `COleVariant` oggetto.

*lpszSrc*<br/>
Una stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
Il `VARTYPE` per il nuovo `COleVariant` oggetto.

*strSrc*<br/>
Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*nSrc*, *lSrc* un valore numerico da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
Il `VARTYPE` per il nuovo `COleVariant` oggetto.

*curSrc*<br/>
Oggetto [COleCurrency](../../mfc/reference/colecurrency-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*fltSrc*, *dblSrc*<br/>
Un valore numerico da copiare nel nuovo oggetto `COleVariant`.

*timeSrc*<br/>
Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*arrSrc*<br/>
Oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*lbSrc*<br/>
Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*PIDL*<br/>
Un puntatore a un [ITEMIDLIST](/windows/desktop/api/shtypes/ns-shtypes-_itemidlist) struttura da copiare nel nuovo `COleVariant` oggetto.

### <a name="remarks"></a>Note

Tutti questi costruttori creano nuovi `COleVariant` oggetti inizializzati sul valore specificato. Segue una breve descrizione di ognuno di questi costruttori.

- **() COleVariant** crea un oggetto vuoto `COleVariant` oggetto, VT_EMPTY.

- **COleVariant (** *varSrc* **)** copia un oggetto esistente `VARIANT` o `COleVariant` oggetto. Il tipo variant viene mantenuto.

- **COleVariant (** *pSrc* **)** copia un oggetto esistente `VARIANT` o `COleVariant` oggetto. Il tipo variant viene mantenuto.

- **COleVariant (** *lpszSrc* **)** copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant (** *lpszSrc* **,** *vtSrc* **)** copia una stringa nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_BSTR (UNICODE) o VT_BSTRT (ANSI).

- **COleVariant (** *strSrc* **)** copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant (** *nSrc* **)** copia un numero intero a 8 bit nel nuovo oggetto, VT_ARRAY|VT_UI1.

- **COleVariant (** *nSrc* **,** *vtSrc* **)** consente di copiare un intero a 16 bit (o valore booleano) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I2 o VT_BOOL.

- **COleVariant (** *lSrc* **,** *vtSrc* **)** consente di copiare un intero a 32 bit (o valore SCODE) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I4, VT_ERROR o VT_BOOL.

- **COleVariant (** *curSrc* **)** copie un `COleCurrency` valore nel nuovo oggetto, VT_CY.

- **COleVariant (** *fltSrc* **)** copia un valore a virgola mobile a 32 bit nel nuovo oggetto, VT_R4.

- **COleVariant (** *dblSrc* **)** copia un valore a virgola mobile a 64 bit nel nuovo oggetto, VT_R8.

- **COleVariant (** *timeSrc* **)** copie un `COleDateTime` valore nel nuovo oggetto, VT_DATE.

- **COleVariant (** *arrSrc* **)** copie un `CByteArray` oggetto nel nuovo oggetto, VT_EMPTY.

- **COleVariant (** *lbSrc* **)** copie un `CLongBinary` oggetto nel nuovo oggetto, VT_EMPTY.

Per altre informazioni su SCODE, vedere [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes) nel SDK di Windows.

##  <a name="changetype"></a>  COleVariant::ChangeType

Converte il tipo del valore variant in questo `COleVariant` oggetto.

```
void ChangeType(VARTYPE vartype, LPVARIANT pSrc = NULL);
```

### <a name="parameters"></a>Parametri

*VarType*<br/>
Il VARTYPE per questo `COleVariant` oggetto.

*pSrc*<br/>
Un puntatore per il [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant) oggetto da convertire. Se questo valore è NULL, questo `COleVariant` oggetto viene usato come origine per la conversione.

### <a name="remarks"></a>Note

Per altre informazioni, vedere la [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant), [VARENUM](/windows/desktop/api/wtypes/ne-wtypes-varenum), e [VariantChangeType](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-variantchangetype) voci nel SDK di Windows.

##  <a name="clear"></a>  COleVariant::Clear

Cancella il `VARIANT`.

```
void Clear();
```

### <a name="remarks"></a>Note

Questo imposta il VARTYPE per questo oggetto su VT_EMPTY. Il `COleVariant` distruttore chiama questa funzione.

Per altre informazioni, vedere la `VARIANT`, VARTYPE, e `VariantClear` voci nel SDK di Windows.

##  <a name="detach"></a>  COleVariant::Detach

Scollega sottostante [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant) da questo oggetto `COleVariant` oggetto.

```
VARIANT Detach();
```

### <a name="remarks"></a>Note

Questa funzione imposta i VARTYPE per questo `COleVariant` oggetto parametro su VT_EMPTY.

> [!NOTE]
>  Dopo avere chiamato `Detach`, è responsabilità del chiamante per chiamare `VariantClear` risultante `VARIANT` struttura.

Per altre informazioni, vedere la [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant), [VARENUM](/windows/desktop/api/wtypes/ne-wtypes-varenum), e [VariantClear](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-variantclear) voci nel SDK di Windows.

##  <a name="getbytearrayfromvariantarray"></a>  COleVariant::GetByteArrayFromVariantArray

Recupera una matrice di byte da una matrice di variant esistente

```
void GetByteArrayFromVariantArray(CByteArray& bytes);
```

### <a name="parameters"></a>Parametri

*Byte*<br/>
Un riferimento a un oggetto esistente [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto.

##  <a name="operator_lpcvariant"></a>  COleVariant::operator LPCVARIANT

Questo operatore di cast restituisce un `VARIANT` il cui valore viene copiato da questa struttura `COleVariant` oggetto.

```
operator LPCVARIANT() const;
```

### <a name="remarks"></a>Note

##  <a name="operator_lpvariant"></a>  COleVariant::operator LPVARIANT

Chiamare questo operatore di cast per accedere a sottostante `VARIANT` struttura per l'oggetto `COleVariant` oggetto.

```
operator LPVARIANT();
```

### <a name="remarks"></a>Note

> [!CAUTION]
> Modifica del valore nel `VARIANT` struttura a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questa `COleVariant` oggetto.

##  <a name="operator_eq"></a>  COleVariant::operator =

Questi operatori di assegnazione di overload copiare il valore di origine in questo `COleVariant` oggetto.

```
const COleVariant& operator=(const VARIANT& varSrc);
const COleVariant& operator=(LPCVARIANT pSrc);
const COleVariant& operator=(const COleVariant& varSrc);
const COleVariant& operator=(const LPCTSTR lpszSrc);
const COleVariant& operator=(const CString& strSrc);
const COleVariant& operator=(BYTE nSrc);
const COleVariant& operator=(short nSrc);
const COleVariant& operator=(long lSrc);
const COleVariant& operator=(const COleCurrency& curSrc);
const COleVariant& operator=(float fltSrc);
const COleVariant& operator=(double dblSrc);
const COleVariant& operator=(const COleDateTime& dateSrc);
const COleVariant& operator=(const CByteArray& arrSrc);
const COleVariant& operator=(const CLongBinary& lbSrc);
```

### <a name="remarks"></a>Note

Di seguito una breve descrizione di ogni operatore:

- **operatore = (** *varSrc* **)** copia una variante esistente o `COleVariant` oggetto in questo oggetto.

- **operatore = (** *pSrc* **)** copia l'oggetto variante a cui accede *pSrc* in questo oggetto.

- **operatore = (** *lpszSrc* **)** copia una stringa con terminazione null in questo oggetto e imposta il VARTYPE su VT_BSTR.

- **operatore = (** *strSrc* **)** copie un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto in questo oggetto e imposta il VARTYPE su VT_BSTR.

- **operatore = (** *nSrc* **)** copia un valore integer di 8 o 16 bit in questo oggetto. Se *nSrc* è un valore a 8 bit, il VARTYPE di questo oggetto è impostato su VT_ARRAY|VT_UI1. Se *nSrc* è un valore a 16 bit e il VARTYPE di questo oggetto è VT_BOOL, mantenuto in caso contrario, impostarlo su VT_I2.

- **operatore = (** *lSrc* **)** copia un valore integer a 32 bit in questo oggetto. Se il VARTYPE di questo oggetto è VT_ERROR, viene mantenuta; in caso contrario, si è impostato su VT_I4.

- **operatore = (** *curSrc* **)** copie un [COleCurrency](../../mfc/reference/colecurrency-class.md) oggetto in questo oggetto e imposta il VARTYPE a VT_CY.

- **operatore = (** *fltSrc* **)** copia un valore a virgola mobile a 32 bit in questo oggetto e imposta il VARTYPE VT_R4.

- **operatore = (** *dblSrc* **)** copia un valore a virgola mobile a 64 bit in questo oggetto e imposta il VARTYPE VT_R8.

- **operatore = (** *dateSrc* **)** copie un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto in questo oggetto e imposta il VARTYPE a VT_DATE.

- **operatore = (** *arrSrc* **)** copie un [CByteArray](../../mfc/reference/cbytearray-class.md) in questo oggetto `COleVariant` oggetto.

- **operatore = (** *lbSrc* **)** copie un [CLongBinary](../../mfc/reference/clongbinary-class.md) in questo oggetto `COleVariant` oggetto.

Per altre informazioni, vedere la [VARIANT](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant) e [VARENUM](/windows/desktop/api/wtypes/ne-wtypes-varenum) voci nel SDK di Windows.

##  <a name="operator_eq_eq"></a>  COleVariant::operator = =

Questo operatore confronta due valori varianti e restituisce diverso da zero se sono uguali. in caso contrario 0.

```
BOOL operator==(const VARIANT& varSrc) const;
BOOL operator==(LPCVARIANT pSrc) const;
```

##  <a name="operator_lt_lt__gt_gt"></a>  COleVariant::operator &lt; &lt;, &gt;&gt;

Output una `COleVariant` valore per `CArchive` oppure `CdumpContext` e gli input una `COleVariant` dall'oggetto `CArchive`.

```
friend CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,
    OleVariant varSrc);

friend CArchive& AFXAPI operator<<(
    CArchive& ar,
    COleVariant varSrc);

friend CArchive& AFXAPI operator>>(
    CArchive& ar,
    COleVariant& varSrc);
```

### <a name="remarks"></a>Note

Il `COleVariant` inserimento (**\<\<**) operatore supporta il dump di diagnostica e l'archiviazione in un archivio. L'estrazione (**>>**) operatore supporta il caricamento da un archivio.

##  <a name="setstring"></a>  COleVariant::SetString

Imposta la stringa a un determinato tipo.

```
void SetString(LPCTSTR lpszSrc, VARTYPE vtSrc);
```

### <a name="parameters"></a>Parametri

*lpszSrc*<br/>
Una stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
Il VARTYPE per il nuovo `COleVariant` oggetto.

### <a name="remarks"></a>Note

Il parametro *vtSrc* deve essere VT_BSTR (UNICODE) o VT_BSTRT (ANSI). `SetString` in genere utilizzato per impostare le stringhe in formato ANSI, poiché il valore predefinito per il [COleVariant:: COleVariant](#colevariant) costruttore con una stringa o parametro del puntatore stringa e nessun VARTYPE è UNICODE.

Un set di record DAO in una build non UNICODE si aspetta che le stringhe da ANSI. Di conseguenza, le funzioni che usano per DAO `COleVariant` oggetti, se non si sta creando un set di record UNICODE, è necessario usare il **COleVariant:: COleVariant (** *lpszSrc* **,** *vtSrc* **)** form del costruttore con *vtSrc* impostare a VT_BSTRT (ANSI) o usare `SetString` con *vtSrc* impostato su VT _BSTRT per rendere le stringhe ANSI. Ad esempio, il `CDaoRecordset` funzioni [CDaoRecordset::Seek](../../mfc/reference/cdaorecordset-class.md#seek) e [CDaoRecordset::SetFieldValue](../../mfc/reference/cdaorecordset-class.md#setfieldvalue) usare `COleVariant` oggetti come parametri. Questi oggetti devono essere ANSI se il recordset DAO non è UNICODE.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
