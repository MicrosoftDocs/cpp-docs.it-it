---
title: Classe COleCurrency | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleCurrency
- AFXDISP/COleCurrency
- AFXDISP/COleCurrency::COleCurrency
- AFXDISP/COleCurrency::Format
- AFXDISP/COleCurrency::GetStatus
- AFXDISP/COleCurrency::ParseCurrency
- AFXDISP/COleCurrency::SetCurrency
- AFXDISP/COleCurrency::SetStatus
- AFXDISP/COleCurrency::m_cur
- AFXDISP/COleCurrency::m_status
dev_langs:
- C++
helpviewer_keywords:
- COleCurrency [MFC], COleCurrency
- COleCurrency [MFC], Format
- COleCurrency [MFC], GetStatus
- COleCurrency [MFC], ParseCurrency
- COleCurrency [MFC], SetCurrency
- COleCurrency [MFC], SetStatus
- COleCurrency [MFC], m_cur
- COleCurrency [MFC], m_status
ms.assetid: 3a36e345-303f-46fb-a57c-858274378a8d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b8139047f47a1984dca9faba3ebff6b0426bb444
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33376434"
---
# <a name="colecurrency-class"></a>Classe COleCurrency
Incapsula il tipo di dati `CURRENCY` dell'automazione OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleCurrency  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCurrency::COleCurrency](#colecurrency)|Costruisce un oggetto `COleCurrency`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCurrency::Format](#format)|Genera una rappresentazione di stringa formattata di un `COleCurrency` oggetto.|  
|[COleCurrency::GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleCurrency` oggetto.|  
|[COleCurrency::ParseCurrency](#parsecurrency)|Legge un **valuta** valore da una stringa e imposta il valore di `COleCurrency`.|  
|[COleCurrency::SetCurrency](#setcurrency)|Imposta il valore di questo `COleCurrency` oggetto.|  
|[COleCurrency::SetStatus](#setstatus)|Imposta lo stato (validità) per questo `COleCurrency` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator =](#operator_eq)|Copia un `COleCurrency` valore.|  
|[operatore +, -](#operator_plus_minus)|Aggiunge e sottrae Cambia segno di `COleCurrency` valori.|  
|[operatore + =-=](#operator_plus_minus_eq)|Aggiunge e sottrae un `COleCurrency` questo valore `COleCurrency` oggetto.|  
|[operatore * /](#operator_star)|Ridimensiona un `COleCurrency` valore da un valore intero.|  
|[operatore * =, / =](#operator_star_div_eq)|Ridimensiona questo `COleCurrency` valore da un valore intero.|  
|[operatore <<](#operator_stream)|Output un `COleCurrency` valore `CArchive` o `CDumpContext`.|  
|[operatore >>](#operator_stream)|Input un `COleCurrency` oggetto `CArchive`.|  
|[operatore valuta](#operator_currency)|Converte un `COleCurrency` valore in un **valuta**.|  
|[operatore = =, <, < =, e così via.](#colecurrency_relational_operators)|Confronta due `COleCurrency` valori.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCurrency::m_cur](#m_cur)|Contiene l'oggetto sottostante **valuta** per questo `COleCurrency` oggetto.|  
|[COleCurrency::m_status](#m_status)|Contiene lo stato di questo `COleCurrency` oggetto.|  
  
## <a name="remarks"></a>Note  
 **COleCurrency** non dispone di una classe di base.  
  
 **VALUTA** viene implementato come un a 8 byte, valore intero in complemento a due ridimensionata di 10.000. In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra. Il **valuta** tipo di dati è estremamente utile per i calcoli che includono denaro o per qualsiasi calcolo a virgola fissa in cui la precisione è importante. È uno dei possibili tipi per il `VARIANT` tipo di dati di automazione OLE.  
  
 **COleCurrency** implementa inoltre alcune operazioni aritmetiche di base per questo tipo a virgola fissa. Le operazioni supportate sono state selezionate per controllare gli errori di arrotondamento che possono verificarsi durante i calcoli a virgola fissa.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `COleCurrency`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="colecurrency"></a>  COleCurrency::COleCurrency  
 Costruisce un **COleCurrency** oggetto.  
  
```  
COleCurrency();  
COleCurrency(CURRENCY cySrc);  
  COleCurrency(const COleCurrency& curSrc);  
COleCurrency(const VARIANT& varSrc);

 
COleCurrency(
    long nUnits,  
    long nFractionalUnits);
```  
  
### <a name="parameters"></a>Parametri  
 `cySrc`  
 Oggetto **valuta** valore da copiare nel nuovo **COleCurrency** oggetto.  
  
 `curSrc`  
 Un oggetto esistente **COleCurrency** oggetto da copiare nel nuovo **COleCurrency** oggetto.  
  
 *varSrc*  
 Un oggetto esistente **VARIANT** struttura di data (possibilmente una `COleVariant` oggetto) da convertire in un valore di valuta ( `VT_CY`) e copiare nel nuovo **COleCurrency** oggetto.  
  
 `nUnits`, `nFractionalUnits`  
 Indicare l'unità e la parte frazionaria (in 1/10, 000's) del valore da copiare nel nuovo **COleCurrency** oggetto.  
  
### <a name="remarks"></a>Note  
 Tutti questi costruttori creare nuovi **COleCurrency** oggetti inizializzati sul valore specificato. Di seguito una breve descrizione di ognuno di questi costruttori. Se non specificato diversamente, lo stato del nuovo **COleCurrency** voce è impostata su valido.  
  
- Costrutti COleCurrency() un **COleCurrency** oggetto inizializzato a 0 (zero).  
  
- COleCurrency (`cySrc`) Costruisce una **COleCurrency** dell'oggetto da un [valuta](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e) valore.  
  
- COleCurrency (`curSrc`) Costruisce una **COleCurrency** oggetto da un oggetto esistente **COleCurrency** oggetto. Il nuovo oggetto ha lo stesso stato dell'oggetto di origine.  
  
- COleCurrency (`varSrc`) Costruisce una **COleCurrency** oggetto. Tenta di convertire un [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) struttura o `COleVariant` oggetto da una valuta ( `VT_CY`) valore. Se la conversione ha esito positivo, il valore convertito viene copiato nel nuovo **COleCurrency** oggetto. In caso contrario, il valore di **COleCurrency** oggetto è impostato su zero (0) e il relativo stato di non valido.  
  
- `COleCurrency(`nUnits`, `nFractionalUnits') Costruisce una **COleCurrency** oggetto dai componenti numerici specificati. Se il valore assoluto della parte frazionaria è maggiore di 10.000, viene eseguito l'adattamento appropriato per le unità. Si noti che le unità e la parte frazionaria siano specificati per i valori con segno.  
  
 Per ulteriori informazioni, vedere il [valuta](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e) e [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) voci in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Gli esempi seguenti illustrano gli effetti dei costruttori di parametro da zero e due parametri:  
  
 [!code-cpp[NVC_MFCOleContainer#10](../../mfc/codesnippet/cpp/colecurrency-class_1.cpp)]  
  
##  <a name="format"></a>  COleCurrency::Format  
 Chiamare questa funzione membro per creare una rappresentazione formattata del valore della valuta.  
  
```  
CString Format(DWORD  dwFlags = 0, LCID  lcid = LANG_USER_DEFAULT) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Indica i flag per le impostazioni locali. Solo il flag seguente è relative alla valuta:  
  
- **LOCALE_NOUSEROVERRIDE** utilizzare le impostazioni locali predefinite del sistema piuttosto che le impostazioni utente personalizzate.  
  
 `lcid`  
 Indica l'ID delle impostazioni locali da utilizzare per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene il valore di formato di valuta.  
  
### <a name="remarks"></a>Note  
 Formatta il valore utilizzando le specifiche della lingua locale (ID impostazioni locali). Un simbolo di valuta non è incluso nel valore restituito. Se lo stato di questo **COleCurrency** oggetto è null, il valore restituito è una stringa vuota. Se lo stato è valido, la stringa restituita è specificata dalla risorsa stringa **IDS_INVALID_CURRENCY**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#11](../../mfc/codesnippet/cpp/colecurrency-class_2.cpp)]  
  
##  <a name="getstatus"></a>  COleCurrency::GetStatus  
 Chiamare questa funzione membro per ottenere lo stato (validità) di un determinato **COleCurrency** oggetto.  
  
```  
CurrencyStatus GetStatus() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce lo stato di questo **COleCurrency** valore.  
  
### <a name="remarks"></a>Note  
 Il valore restituito è definito per il `CurrencyStatus` tipo enumerato che viene definito all'interno di **COleCurrency** classe.  
  
```  
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };  
```  
  
 Per una breve descrizione dei valori di stato, vedere l'elenco seguente:  
  
- **COleCurrency::valid** indica che questo **COleCurrency** oggetto è valido.  
  
- **COleCurrency::invalid** indica che questo **COleCurrency** oggetto non è valido; vale a dire, il relativo valore sia corretto.  
  
- **COleCurrency::null** indica che questo **COleCurrency** oggetto è null, vale a dire che è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di C++ database **NULL**.)  
  
 Lo stato di un **COleCurrency** oggetto non è valido nei casi seguenti:  
  
-   Se il relativo valore è impostato da un **VARIANT** o `COleVariant` valore che non è stato possibile convertire un valore di valuta.  
  
-   Se questo oggetto è verificato un overflow o underflow durante un'operazione di assegnazione aritmetico, ad esempio `+=` o **\* =**.  
  
-   Se questo oggetto è stato assegnato un valore non valido.  
  
-   Se lo stato di questo oggetto è stato impostato in modo esplicito non valido tramite [SetStatus](#setstatus).  
  
 Per ulteriori informazioni sulle operazioni che è possibile impostare lo stato non valido, vedere le seguenti funzioni membro:  
  
- [COleCurrency](#colecurrency)  
  
- [operator =](#operator_eq)  
  
- [operatore + -](#operator_plus_minus)  
  
- [operatore + = e =](#operator_plus_minus_eq)  
  
- [operatore * /](#operator_star)  
  
- [operatore * = e =](#operator_star_div_eq)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#12](../../mfc/codesnippet/cpp/colecurrency-class_3.cpp)]  
  
##  <a name="m_cur"></a>  COleCurrency::m_cur  
 Sottostante [valuta](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e) struttura per questo **COleCurrency** oggetto.  
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  Modifica il valore di **valuta** struttura a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questo **COleCurrency** oggetto. Non viene modificato lo stato di questo **COleCurrency** oggetto.  
  
 Per ulteriori informazioni, vedere il [valuta](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e) voce in Windows SDK.  
  
##  <a name="m_status"></a>  COleCurrency::m_status  
 Il tipo di questo membro dati è di tipo enumerato `CurrencyStatus`, cui è definito all'interno di **COleCurrency** classe.  
  
```  
enum CurrencyStatus{  
    valid = 0,  
    invalid = 1,  
    null = 2,  
};  
```  
  
### <a name="remarks"></a>Note  
 Per una breve descrizione dei valori di stato, vedere l'elenco seguente:  
  
- **COleCurrency::valid** indica che questo **COleCurrency** oggetto è valido.  
  
- **COleCurrency::invalid** indica che questo **COleCurrency** oggetto non è valido; vale a dire, il relativo valore sia corretto.  
  
- **COleCurrency::null** indica che questo **COleCurrency** oggetto è null, vale a dire che è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di C++ database **NULL**.)  
  
 Lo stato di un **COleCurrency** oggetto non è valido nei casi seguenti:  
  
-   Se il relativo valore è impostato da un **VARIANT** o `COleVariant` valore che non è stato possibile convertire un valore di valuta.  
  
-   Se questo oggetto è verificato un overflow o underflow durante un'operazione di assegnazione aritmetico, ad esempio `+=` o **\* =**.  
  
-   Se questo oggetto è stato assegnato un valore non valido.  
  
-   Se lo stato di questo oggetto è stato impostato in modo esplicito non valido tramite [SetStatus](#setstatus).  
  
 Per ulteriori informazioni sulle operazioni che è possibile impostare lo stato non valido, vedere le seguenti funzioni membro:  
  
- [COleCurrency](#colecurrency)  
  
- [operator =](#operator_eq)  
  
- [operatore +, -](#operator_plus_minus)  
  
- [operatore + =-=](#operator_plus_minus_eq)  
  
- [operatore * /](#operator_star)  
  
- [operatore * =, / =](#operator_star_div_eq)  
  
    > [!CAUTION]
    >  Questo membro dati è per le situazioni di programmazione avanzate. È consigliabile utilizzare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Vedere `SetStatus` per ulteriore avvertenze relative in modo esplicito l'impostazione di questo membro dati.  
  
##  <a name="operator_eq"></a>  COleCurrency::operator =  
 Questi operatori di assegnazione di overload copiare il valore di valuta di origine in questo **COleCurrency** oggetto.  
  
```  
const COleCurrency& operator=(CURRENCY cySrc);  
const COleCurrency& operator=(const COleCurrency& curSrc);  
  const COleCurrency& operator=(const VARIANT& varSrc);
```  
  
### <a name="remarks"></a>Note  
 Di seguito una breve descrizione di ciascun operatore:  
  
- **operatore = (** `cySrc` **)** il `CURRENCY` valore viene copiato nel **COleCurrency** oggetto e il relativo stato è impostato su valido.  
  
- **operatore = (** `curSrc` **)** il valore e lo stato dell'operando, un oggetto esistente **COleCurrency** oggetto vengono copiati in questa **COleCurrency** oggetto .  
  
- **operatore = (** *varSrc* **)** se la conversione del `VARIANT` valore (o [COleVariant](../../mfc/reference/colevariant-class.md) oggetto) di una valuta ( `VT_CY`) è esito positivo, il valore convertito viene copiato in questo **COleCurrency** oggetto e il relativo stato è impostato su valido. Se la conversione non riesce, il valore di **COleCurrency** oggetto è impostato su 0 e il relativo stato di non valido.  
  
 Per ulteriori informazioni, vedere il [valuta](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e) e [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) voci in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#15](../../mfc/codesnippet/cpp/colecurrency-class_4.cpp)]  
  
##  <a name="operator_plus_minus"></a>  COleCurrency::operator +, -  
 Questi operatori consentono di addizione e sottrazione di due **COleCurrency** valori a e da altro e per modificare il segno di un **COleCurrency** valore.  
  
```  
COleCurrency operator+(const COleCurrency& cur) const;  
COleCurrency operator-(const COleCurrency& cur) const;  
COleCurrency operator-() const;  
```  
  
### <a name="remarks"></a>Note  
 Se uno degli operandi è null, lo stato dell'oggetto risultante **COleCurrency** valore è null.  
  
 Se l'operazione aritmetica causa un overflow, il valore risultante **COleCurrency** valore non è valido.  
  
 Se l'operando è valido e l'altro non è null, lo stato dell'oggetto risultante **COleCurrency** valore non è valido.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#16](../../mfc/codesnippet/cpp/colecurrency-class_5.cpp)]  
  
##  <a name="operator_plus_minus_eq"></a>  + = COleCurrency::operator-=  
 Consente di aggiungere e sottrarre un **COleCurrency** valore da e verso questo **COleCurrency** oggetto.  
  
```  
const COleCurrency& operator+=(const COleCurrency& cur);  
const COleCurrency& operator-=(const COleCurrency& cur);
```  
  
### <a name="remarks"></a>Note  
 Se uno degli operandi è null, lo stato di questo **COleCurrency** oggetto è impostato su null.  
  
 Se l'operazione aritmetica causa un overflow, lo stato di questo **COleCurrency** oggetto viene impostato come non valida.  
  
 Se uno degli operandi non è valido e l'altro non è null, lo stato di questo **COleCurrency** oggetto viene impostato come non valida.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#17](../../mfc/codesnippet/cpp/colecurrency-class_6.cpp)]  
  
##  <a name="operator_star"></a>  COleCurrency::operator * e /  
 Consente di adattare un **COleCurrency** valore da un valore integrale.  
  
```  
COleCurrency operator*(long nOperand) const;  
COleCurrency operator/(long nOperand) const;  
```  
  
### <a name="remarks"></a>Note  
 Se il **COleCurrency** degli operandi è null, lo stato dell'oggetto risultante **COleCurrency** valore è null.  
  
 Se l'operazione aritmetica causa un overflow o underflow, lo stato dell'oggetto risultante **COleCurrency** valore non è valido.  
  
 Se il **COleCurrency** operando non è valido, lo stato dell'oggetto risultante **COleCurrency** valore non è valido.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#18](../../mfc/codesnippet/cpp/colecurrency-class_7.cpp)]  
  
##  <a name="operator_star_div_eq"></a>  COleCurrency::operator * =, / =  
 Consente di modificare le proporzioni **COleCurrency** valore da un valore integrale.  
  
```  
const COleCurrency& operator*=(long nOperand);  
const COleCurrency& operator/=(long nOperand);
```  
  
### <a name="remarks"></a>Note  
 Se il **COleCurrency** degli operandi è null, lo stato di questo **COleCurrency** oggetto è impostato su null.  
  
 Se l'operazione aritmetica causa un overflow, lo stato di questo **COleCurrency** oggetto viene impostato come non valida.  
  
 Se il **COleCurrency** operando non è valido, lo stato di questo **COleCurrency** oggetto viene impostato come non valida.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#19](../../mfc/codesnippet/cpp/colecurrency-class_8.cpp)]  
  
##  <a name="operator_stream"></a>  COleCurrency::operator &lt; &lt;, &gt;&gt;  
 Supporta il dump di diagnostica e l'archiviazione in un archivio.  
  
```  
friend CDumpContext& operator<<(
    CDumpContext& dc,  
    COleCurrency curSrc);
 
friend CArchive& operator<<(
    CArchive& ar,  
    COleCurrency curSrc);
 
friend CArchive& operator>>(
    CArchive& ar,  
    COleCurrency& curSrc);
```  
  
### <a name="remarks"></a>Note  
 L'estrazione ( **>>**) (operatore) supporta il caricamento da un archivio.  
  
##  <a name="operator_currency"></a>  COleCurrency::operator valuta  
 Restituisce un `CURRENCY` struttura il cui valore viene copiato da questo **COleCurrency** oggetto.  
  
```  
operator CURRENCY() const; 
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="parsecurrency"></a>  COleCurrency::ParseCurrency  
 Chiamare questa funzione membro per analizzare una stringa per leggere un valore di valuta.  
  
```  
BOOL ParseCurrency(
    LPCTSTR lpszCurrency,  
    DWORD dwFlags = 0,  
    LCID lcid = LANG_USER_DEFAULT);
 
throw(CMemoryException*); 
throw(COleException*);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszCurrency*  
 Puntatore alla stringa con terminazione null che deve essere analizzato.  
  
 `dwFlags`  
 Indica i flag per impostazioni locali, probabilmente il flag seguente:  
  
- **LOCALE_NOUSEROVERRIDE** utilizzare le impostazioni locali predefinite del sistema piuttosto che le impostazioni utente personalizzate.  
  
 `lcid`  
 Indica l'ID delle impostazioni locali da utilizzare per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la stringa è stata convertita correttamente in un valore di valuta, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Specifiche del linguaggio locale (ID impostazioni locali) viene utilizzato per il significato dei caratteri non numerici nella stringa di origine.  
  
 Per una descrizione dei valori di ID delle impostazioni locali, vedere [che supporta più lingue](http://msdn.microsoft.com/en-us/47dc5add-232c-4268-b977-43e12da81ede).  
  
 Se la stringa è stata convertita correttamente in una valuta di valore, il valore di questo **COleCurrency** oggetto è impostato su tale valore e lo stato su valido.  
  
 Se non è possibile convertire la stringa di un valore di valuta o se si è verificato un overflow numerico, lo stato di questo **COleCurrency** oggetto non è valido.  
  
 Se la conversione di stringa non è riuscita a causa di errori di allocazione di memoria, questa funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md). In un altro stato di errore, questa funzione genera un [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#13](../../mfc/codesnippet/cpp/colecurrency-class_9.cpp)]  
  
##  <a name="colecurrency_relational_operators"></a>  Operatori relazionali COleCurrency  
 Confrontare due valori di valuta e restituire diverso da zero se la condizione è true. in caso contrario 0.  
  
```  
BOOL operator==(const COleCurrency& cur) const;  
BOOL operator!=(const COleCurrency& cur) const;  
BOOL operator<(const COleCurrency& cur) const;  
BOOL operator>(const COleCurrency& cur) const;  
BOOL operator<=(const COleCurrency& cur) const;  
BOOL operator>=(const COleCurrency& cur) const;  
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il valore restituito delle operazioni di ordinamento ( **<**, **\< =**, **>**, **>=**) non è definito se lo stato degli operandi è null o non valido. Gli operatori di uguaglianza ( `==`, `!=`) prendere in considerazione lo stato degli operandi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#20](../../mfc/codesnippet/cpp/colecurrency-class_10.cpp)]  
  
##  <a name="setcurrency"></a>  COleCurrency::SetCurrency  
 Chiamare questa funzione membro per impostare l'unità e la parte frazionaria di questo **COleCurrency** oggetto.  
  
```  
void SetCurrency(
    long nUnits,  
    long nFractionalUnits);
```  
  
### <a name="parameters"></a>Parametri  
 `nUnits`, `nFractionalUnits`  
 Indicare l'unità e la parte frazionaria (in 1/10, 000's) il valore deve essere copiato **COleCurrency** oggetto.  
  
### <a name="remarks"></a>Note  
 Se il valore assoluto della parte frazionaria è maggiore di 10.000, l'appropriato è regolazione per le unità, come illustrato nel terzo degli esempi seguenti.  
  
 Si noti che le unità e la parte frazionaria siano specificati per i valori con segno. Il quarto degli esempi seguenti viene illustrato cosa accade quando i parametri hanno segni diversi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#14](../../mfc/codesnippet/cpp/colecurrency-class_11.cpp)]  
  
##  <a name="setstatus"></a>  COleCurrency::SetStatus  
 Chiamare questa funzione membro per impostare lo stato (validità) di questo **COleCurrency** oggetto.  
  
```  
void SetStatus(CurrencyStatus  status  );
```  
  
### <a name="parameters"></a>Parametri  
 *status*  
 Il nuovo stato per questo **COleCurrency** oggetto.  
  
### <a name="remarks"></a>Note  
 Il *stato* consiste nel valore del parametro dal `CurrencyStatus` tipo enumerato, definito all'interno di **COleCurrency** classe.  
  
```  
enum CurrencyStatus {
    valid = 0,
    invalid = 1,
    null = 2
    };  
```  
  
 Per una breve descrizione dei valori di stato, vedere l'elenco seguente:  
  
- **COleCurrency::valid** indica che questo **COleCurrency** oggetto è valido.  
  
- **COleCurrency::invalid** indica che questo **COleCurrency** oggetto non è valido; vale a dire, il relativo valore sia corretto.  
  
- **COleCurrency::null** indica che questo **COleCurrency** oggetto è null, vale a dire che è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di C++ database **NULL**.)  
  
    > [!CAUTION]
    >  Questa funzione è per le situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. E spesso essere utilizzato per impostare lo stato su null o non valido. Si noti che l'operatore di assegnazione ( [operatore =](#operator_eq)) e [SetCurrency](#setcurrency) impostare lo stato dell'oggetto in base ai valori di origine.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleVariant](../../mfc/reference/colevariant-class.md)
