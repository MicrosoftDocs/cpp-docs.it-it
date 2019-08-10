---
title: Classe COleVariant
ms.date: 11/04/2016
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
helpviewer_keywords:
- COleVariant [MFC], COleVariant
- COleVariant [MFC], Attach
- COleVariant [MFC], ChangeType
- COleVariant [MFC], Clear
- COleVariant [MFC], Detach
- COleVariant [MFC], GetByteArrayFromVariantArray
- COleVariant [MFC], SetString
ms.assetid: e1b5cd4a-b066-4b9b-b48b-6215ed52d998
ms.openlocfilehash: 66ff3d684dba6b876ae94699209a43aaf4db5f23
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916943"
---
# <a name="colevariant-class"></a>Classe COleVariant

Incapsula il tipo di dati [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) .

## <a name="syntax"></a>Sintassi

```
class COleVariant : public tagVARIANT
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant::COleVariant](#colevariant)|Costruisce un oggetto `COleVariant`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant:: Connetti](#attach)|Connette un oggetto VARIANT a un `COleVariant`oggetto.|
|[COleVariant::ChangeType](#changetype)|Modifica il tipo Variant di questo `COleVariant` oggetto.|
|[COleVariant:: Clear](#clear)|Cancella questo `COleVariant` oggetto.|
|[COleVariant::Detach](#detach)|Scollega un variant da un oggetto `COleVariant` e restituisce il VARIANT.|
|[COleVariant::GetByteArrayFromVariantArray](#getbytearrayfromvariantarray)|Recupera una matrice di byte da una matrice variant esistente.|
|[COleVariant::SetString](#setstring)|Imposta la stringa su un tipo particolare, in genere ANSI.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant:: operator LPCVARIANT](#operator_lpcvariant)|Converte un `COleVariant` valore in un `LPCVARIANT`oggetto.|
|[COleVariant:: operator LPVARIANT](#operator_lpvariant)|Converte un `COleVariant` oggetto in un `LPVARIANT`oggetto.|
|[COleVariant:: operator =](#operator_eq)|Copia un `COleVariant` valore.|
|[COleVariant:: operator = =](#operator_eq_eq)|Confronta due `COleVariant` valori.|
|[&lt; Operatore&lt;COleVariant::,&gt;&gt;](#operator_lt_lt__gt_gt)|Restituisce un `COleVariant` valore a `CArchive` o `CDumpContext` e immette un `COleVariant` oggetto da `CArchive`.|

## <a name="remarks"></a>Note

Questo tipo di dati viene utilizzato nell'automazione OLE. In particolare, la struttura [DISPPARAMS](/windows/desktop/api/oaidl/ns-oaidl-tagdispparams) contiene un puntatore a una matrice di strutture VARIANT. Per `DISPPARAMS` passare parametri a [IDispatch:: Invoke](/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke)viene utilizzata una struttura.

> [!NOTE]
> Questa classe è derivata dalla `VARIANT` struttura. Ciò significa che è possibile passare `COleVariant` un oggetto in un parametro che chiama `VARIANT` per un e che `VARIANT` i membri dati della struttura sono membri dati accessibili `COleVariant`di.

Le due classi MFC correlate [COleCurrency](../../mfc/reference/colecurrency-class.md) e [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) incapsulano i tipi di dati Variant `VT_CY`Currency () e `VT_DATE`date (). La `COleVariant` classe viene ampiamente utilizzata nelle classi DAO. vedere queste classi per l'utilizzo tipico di questa classe, ad esempio [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Per ulteriori informazioni, vedere le voci [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant), [Currency](/windows/desktop/api/wtypes/ns-wtypes-tagcy), [DISPPARAMS](/windows/desktop/api/oaidl/ns-oaidl-tagdispparams)e [IDispatch:: Invoke](/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke) nel Windows SDK.

Per ulteriori informazioni sulla `COleVariant` classe e sul relativo utilizzo nell'automazione OLE, vedere "passaggio di parametri in automazione OLE" nell'articolo [automazione](../../mfc/automation.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`COleVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="attach"></a>COleVariant:: Connetti

Chiamare questa funzione per alleghi l'oggetto [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) specificato all'oggetto `COleVariant` corrente.

```
void Attach(VARIANT& varSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto esistente `VARIANT` da collegare all'oggetto corrente `COleVariant` .

### <a name="remarks"></a>Note

Questa funzione imposta il VARTYPE di *varSrc* su VT_EMPTY.

Per ulteriori informazioni, vedere le voci [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) e [VarEnum](/windows/desktop/api/wtypes/ne-wtypes-varenum) nel Windows SDK.

##  <a name="colevariant"></a>COleVariant:: COleVariant

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
Oggetto o `COleVariant` `VARIANT` esistente da copiare nel nuovo `COleVariant` oggetto.

*pSrc*<br/>
Puntatore a un `VARIANT` oggetto che verrà copiato nel nuovo `COleVariant` oggetto.

*lpszSrc*<br/>
Stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
Per il nuovo `COleVariant`oggetto. `VARTYPE`

*strSrc*<br/>
Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) da copiare nel nuovo `COleVariant` oggetto.

*nsrc*, *lSrc* un valore numerico da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
Per il nuovo `COleVariant`oggetto. `VARTYPE`

*curSrc*<br/>
Oggetto [COleCurrency](../../mfc/reference/colecurrency-class.md) da copiare nel nuovo `COleVariant` oggetto.

*fltSrc*, *dblSrc*<br/>
Un valore numerico da copiare nel nuovo oggetto `COleVariant`.

*timeSrc*<br/>
Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) da copiare nel nuovo `COleVariant` oggetto.

*arrSrc*<br/>
Oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) da copiare nel nuovo `COleVariant` oggetto.

*lbSrc*<br/>
Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) da copiare nel nuovo `COleVariant` oggetto.

*pidl*<br/>
Puntatore a una struttura [ItemId](/windows/desktop/api/shtypes/ns-shtypes-itemidlist) da copiare nel nuovo `COleVariant` oggetto.

### <a name="remarks"></a>Note

Tutti questi costruttori creano nuovi `COleVariant` oggetti inizializzati sul valore specificato. Di seguito viene riportata una breve descrizione di ognuno di questi costruttori.

- **COleVariant ()** Crea un oggetto `COleVariant` vuoto, VT_EMPTY.

- **COleVariant (** *varSrc* **)** Copia un oggetto `VARIANT` o `COleVariant` esistente. Il tipo variant viene mantenuto.

- **COleVariant (** *pSrc* **)** Copia un oggetto `VARIANT` o `COleVariant` esistente. Il tipo variant viene mantenuto.

- **COleVariant (** *lpszSrc* **)** Copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant (** *lpszSrc* **,** *vtSrc* **)** Copia una stringa nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_BSTR (Unicode) o VT_BSTRT (ANSI).

- **COleVariant (** *strSrc* **)** Copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant (** *nsrc* **)** Copia un intero a 8 bit nel nuovo oggetto, VT_UI1.

- **COleVariant (** *nsrc* **,** *vtSrc* **)** Copia un intero a 16 bit (o un valore booleano) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I2 o VT_BOOL.

- **COleVariant (** *lSrc* **,** *vtSrc* **)** Copia un intero a 32 bit (o un valore SCODE) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I4, VT_ERROR o VT_BOOL.

- **COleVariant (** *curSrc* **)** Copia un `COleCurrency` valore nel nuovo oggetto VT_CY.

- **COleVariant (** *fltSrc* **)** Copia un valore a virgola mobile a 32 bit nel nuovo oggetto VT_R4.

- **COleVariant (** *dblSrc* **)** Copia un valore a virgola mobile a 64 bit nel nuovo oggetto VT_R8.

- **COleVariant (** *timeSrc* **)** Copia un `COleDateTime` valore nel nuovo oggetto VT_DATE.

- **COleVariant (** *arrSrc* **)** Copia un `CByteArray` oggetto nel nuovo oggetto, VT_EMPTY.

- **COleVariant (** *lbSrc* **)** Copia un `CLongBinary` oggetto nel nuovo oggetto, VT_EMPTY.

Per ulteriori informazioni su SCODE, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/desktop/com/structure-of-com-error-codes) nell'Windows SDK.

##  <a name="changetype"></a>COleVariant:: ChangeType

Converte il tipo di valore Variant in questo `COleVariant` oggetto.

```
void ChangeType(VARTYPE vartype, LPVARIANT pSrc = NULL);
```

### <a name="parameters"></a>Parametri

*vartype*<br/>
VarType per questo `COleVariant` oggetto.

*pSrc*<br/>
Puntatore all'oggetto [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) da convertire. Se questo valore è null, questo `COleVariant` oggetto viene usato come origine per la conversione.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere le voci [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant), [VarEnum](/windows/desktop/api/wtypes/ne-wtypes-varenum)e [VariantChangeType](/windows/desktop/api/oleauto/nf-oleauto-variantchangetype) nel Windows SDK.

##  <a name="clear"></a>COleVariant:: Clear

`VARIANT`Cancella.

```
void Clear();
```

### <a name="remarks"></a>Note

In questo modo, il VARTYPE per questo oggetto viene impostato su VT_EMPTY. Il `COleVariant` distruttore chiama questa funzione.

Per ulteriori informazioni, vedere le `VARIANT`voci, VARTYPE e `VariantClear` nell'Windows SDK.

##  <a name="detach"></a>COleVariant::D etach

Disconnette l'oggetto [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) sottostante da questo `COleVariant` oggetto.

```
VARIANT Detach();
```

### <a name="remarks"></a>Note

Questa funzione imposta il VarType per questo `COleVariant` oggetto su VT_EMPTY.

> [!NOTE]
>  Dopo la `Detach`chiamata a, è responsabilità del chiamante chiamare `VariantClear` sulla struttura risultante `VARIANT` .

Per ulteriori informazioni, vedere le voci [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant), [VarEnum](/windows/desktop/api/wtypes/ne-wtypes-varenum)e [VariantClear](/windows/desktop/api/oleauto/nf-oleauto-variantclear) nel Windows SDK.

##  <a name="getbytearrayfromvariantarray"></a>  COleVariant::GetByteArrayFromVariantArray

Recupera una matrice di byte da una matrice variant esistente

```
void GetByteArrayFromVariantArray(CByteArray& bytes);
```

### <a name="parameters"></a>Parametri

*byte*<br/>
Riferimento a un oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) esistente.

##  <a name="operator_lpcvariant"></a>COleVariant:: operator LPCVARIANT

Questo operatore di cast restituisce `VARIANT` una struttura il cui valore viene copiato `COleVariant` da questo oggetto.

```
operator LPCVARIANT() const;
```

### <a name="remarks"></a>Note

##  <a name="operator_lpvariant"></a>COleVariant:: operator LPVARIANT

Chiamare questo operatore di cast per accedere alla `VARIANT` struttura sottostante per `COleVariant` questo oggetto.

```
operator LPVARIANT();
```

### <a name="remarks"></a>Note

> [!CAUTION]
> La modifica del valore nella `VARIANT` struttura a cui accede il puntatore restituito da questa funzione modificherà il valore di `COleVariant` questo oggetto.

##  <a name="operator_eq"></a>COleVariant:: operator =

Questi operatori di assegnazione di overload copiano il valore di origine `COleVariant` in questo oggetto.

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

Di seguito viene riportata una breve descrizione di ogni operatore:

- **operatore = (** *varSrc* **)** Copia un oggetto Variant o `COleVariant` esistente in questo oggetto.

- **operatore = (** *pSrc* **)** Copia l'oggetto VARIANT accessibile da *pSrc* in questo oggetto.

- **operatore = (** *lpszSrc* **)** Copia una stringa con terminazione null in questo oggetto e imposta VARTYPE su VT_BSTR.

- **operatore = (** *strSrc* **)** Copia un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) in questo oggetto e imposta VARTYPE su VT_BSTR.

- **operatore = (** *nsrc* **)** Copia un valore integer a 8 o a 16 bit in questo oggetto. Se *nsrc* è un valore a 8 bit, il VarType di questo oggetto viene impostato su VT_UI1. Se *nsrc* è un valore a 16 bit e il VarType di questo oggetto è VT_BOOL, viene mantenuto; in caso contrario, viene impostato su VT_I2.

- **operatore = (** *lSrc* **)** Copia un valore integer a 32 bit in questo oggetto. Se il VARTYPE di questo oggetto è VT_ERROR, viene mantenuto; in caso contrario, viene impostato su VT_I4.

- **operatore = (** *curSrc* **)** Copia un oggetto [COleCurrency](../../mfc/reference/colecurrency-class.md) in questo oggetto e imposta VARTYPE su VT_CY.

- **operatore = (** *fltSrc* **)** Copia un valore a virgola mobile a 32 bit in questo oggetto e imposta VARTYPE su VT_R4.

- **operatore = (** *dblSrc* **)** Copia un valore a virgola mobile a 64 bit in questo oggetto e imposta VARTYPE su VT_R8.

- **operatore = (** *dateSrc* **)** Copia un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) in questo oggetto e imposta VARTYPE su VT_DATE.

- **operatore = (** *arrSrc* **)** Copia un oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) in questo `COleVariant` oggetto.

- **operatore = (** *lbSrc* **)** Copia un oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) in questo `COleVariant` oggetto.

Per ulteriori informazioni, vedere le voci [Variant](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) e [VarEnum](/windows/desktop/api/wtypes/ne-wtypes-varenum) nel Windows SDK.

##  <a name="operator_eq_eq"></a>COleVariant:: operator = =

Questo operatore confronta due valori Variant e restituisce un valore diverso da zero se sono uguali. in caso contrario, 0.

```
BOOL operator==(const VARIANT& varSrc) const;
BOOL operator==(LPCVARIANT pSrc) const;
```

##  <a name="operator_lt_lt__gt_gt"></a>&lt; Operatore&lt;COleVariant::,&gt;&gt;

Restituisce un `COleVariant` valore a `CArchive` o `CdumpContext` e immette un `COleVariant` oggetto da `CArchive`.

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

L' `COleVariant` operatore di **\<inserimento(\<** ) supporta il dump e l'archiviazione di diagnostica in un archivio. L'operatore Extraction ( **>>** ) supporta il caricamento da un archivio.

##  <a name="setstring"></a>COleVariant:: sestring

Imposta la stringa su un tipo particolare.

```
void SetString(LPCTSTR lpszSrc, VARTYPE vtSrc);
```

### <a name="parameters"></a>Parametri

*lpszSrc*<br/>
Stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*VtSrc*<br/>
VarType per il nuovo `COleVariant` oggetto.

### <a name="remarks"></a>Note

Il parametro *vtSrc* deve essere VT_BSTR (Unicode) o VT_BSTRT (ANSI). `SetString`viene in genere usato per impostare le stringhe su ANSI, poiché il valore predefinito per il costruttore [COleVariant:: COleVariant](#colevariant) con una stringa o un parametro puntatore di stringa e nessun VarType è Unicode.

Un recordset DAO in una compilazione non UNICODE prevede che le stringhe siano ANSI. Per `COleVariant` le funzioni DAO che utilizzano oggetti, pertanto, se non si crea un recordset Unicode, è necessario utilizzare il form **COleVariant:: COleVariant (** *lpszSrc* **,** *vtSrc* **)** del costruttore con *vtSrc* impostato su VT. _BSTRT (ANSI) o usare `SetString` with *vtSrc* impostato su VT_BSTRT per creare stringhe ANSI. Ad esempio, le `CDaoRecordset` funzioni [CDaoRecordset:: Seek](../../mfc/reference/cdaorecordset-class.md#seek) e [CDaoRecordset:: SetFieldValue](../../mfc/reference/cdaorecordset-class.md#setfieldvalue) utilizzano `COleVariant` oggetti come parametri. Questi oggetti devono essere ANSI se il recordset DAO non è UNICODE.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
