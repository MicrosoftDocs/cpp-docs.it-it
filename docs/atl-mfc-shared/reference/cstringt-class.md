---
title: '**`CStringT`** Classe'
description: Informazioni di riferimento sulle API per la classe ATL Microsoft **`CStringT`**
ms.date: 12/06/2020
f1_keywords:
- CStringT
- CSTRINGT/ATL::CStringT
- CSTRINGT/ATL::CStringT::CStringT
- CSTRINGT/ATL::CStringT::AllocSysString
- CSTRINGT/ATL::CStringT::AnsiToOem
- CSTRINGT/ATL::CStringT::AppendFormat
- CSTRINGT/ATL::CStringT::Collate
- CSTRINGT/ATL::CStringT::CollateNoCase
- CSTRINGT/ATL::CStringT::Compare
- CSTRINGT/ATL::CStringT::CompareNoCase
- CSTRINGT/ATL::CStringT::Delete
- CSTRINGT/ATL::CStringT::Find
- CSTRINGT/ATL::CStringT::FindOneOf
- CSTRINGT/ATL::CStringT::Format
- CSTRINGT/ATL::CStringT::FormatMessage
- CSTRINGT/ATL::CStringT::FormatMessageV
- CSTRINGT/ATL::CStringT::FormatV
- CSTRINGT/ATL::CStringT::GetEnvironmentVariable
- CSTRINGT/ATL::CStringT::Insert
- CSTRINGT/ATL::CStringT::Left
- CSTRINGT/ATL::CStringT::LoadString
- CSTRINGT/ATL::CStringT::MakeLower
- CSTRINGT/ATL::CStringT::MakeReverse
- CSTRINGT/ATL::CStringT::MakeUpper
- CSTRINGT/ATL::CStringT::Mid
- CSTRINGT/ATL::CStringT::OemToAnsi
- CSTRINGT/ATL::CStringT::Remove
- CSTRINGT/ATL::CStringT::Replace
- CSTRINGT/ATL::CStringT::ReverseFind
- CSTRINGT/ATL::CStringT::Right
- CSTRINGT/ATL::CStringT::SetSysString
- CSTRINGT/ATL::CStringT::SpanExcluding
- CSTRINGT/ATL::CStringT::SpanIncluding
- CSTRINGT/ATL::CStringT::Tokenize
- CSTRINGT/ATL::CStringT::Trim
- CSTRINGT/ATL::CStringT::TrimLeft
- CSTRINGT/ATL::CStringT::TrimRight
helpviewer_keywords:
- strings [C++], in ATL
- shared classes, CStringT
- CStringT class
ms.openlocfilehash: f9ec5c02aa1ed9377a38d30d9a4152af5e164d58
ms.sourcegitcommit: 7b131db4ed39bddb4a456ebea402f47c5cbd69d3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/07/2020
ms.locfileid: "96776544"
---
# <a name="cstringt-class"></a>Classe `CStringT`

Questa classe rappresenta un **`CStringT`** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
template<typename BaseType, class StringTraits>
class CStringT :
    public CSimpleStringT<BaseType,
        _CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType, StringTraits>::c_bIsMFCDLLTraits>
```

#### <a name="parameters"></a>Parametri

*`BaseType`*\
Tipo di carattere della classe String. Può essere uno dei valori seguenti:

- **`char`** (per le stringhe di caratteri ANSI).

- **`wchar_t`** (per le stringhe di caratteri Unicode).

- **`TCHAR`** (per le stringhe di caratteri ANSI e Unicode).

*`StringTraits`*\
Determina se la classe String necessita del supporto della libreria C Run-Time (CRT) e della posizione in cui si trovano le risorse di stringa. Può essere uno dei valori seguenti:

- **`StrTraitATL<wchar_t | char | TCHAR, ChTraitsCRT<wchar_t | char | TCHAR>>`**

   La classe richiede il supporto CRT e cerca le stringhe di risorse nel modulo specificato da `m_hInstResource` (un membro della classe del modulo dell'applicazione).

- **`StrTraitATL<wchar_t | char | TCHAR, ChTraitsOS<wchar_t | char |TCHAR>>`**

   La classe non richiede il supporto CRT e cerca le stringhe di risorse nel modulo specificato da `m_hInstResource` (un membro della classe del modulo dell'applicazione).

- **`StrTraitMFC<wchar_t | char | TCHAR, ChTraitsCRT<wchar_t | char | TCHAR>>`**

   La classe richiede il supporto CRT e cerca le stringhe di risorse usando l'algoritmo di ricerca MFC standard.

- **`StrTraitMFC<wchar_t | char | TCHAR, ChTraitsOS<wchar_t | char | TCHAR>>`**

   La classe non richiede il supporto CRT e cerca le stringhe di risorse usando l'algoritmo di ricerca MFC standard.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[`CStringT::CStringT`](#cstringt)|Costruisce un **`CStringT`** oggetto in diversi modi.|
|[`CStringT::~CStringT`](#_dtorcstringt)|Elimina definitivamente un **`CStringT`** oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[`CStringT::AllocSysString`](#allocsysstring)|Alloca un oggetto `BSTR` dai **`CStringT`** dati.|
|[`CStringT::AnsiToOem`](#ansitooem)|Esegue una conversione sul posto dal set di caratteri ANSI al set di caratteri OEM.|
|[`CStringT::AppendFormat`](#appendformat)|Accoda i dati formattati a un **`CStringT`** oggetto esistente.|
|[`CStringT::Collate`](#collate)|Confronta due stringhe (con distinzione tra maiuscole e minuscole, utilizza informazioni specifiche delle impostazioni locali).|
|[`CStringT::CollateNoCase`](#collatenocase)|Confronta due stringhe (senza distinzione tra maiuscole e minuscole, utilizza informazioni specifiche delle impostazioni locali).|
|[`CStringT::Compare`](#compare)|Confronta due stringhe (maiuscole/minuscole).|
|[`CStringT::CompareNoCase`](#comparenocase)|Confronta due stringhe (senza distinzione tra maiuscole e minuscole).|
|[`CStringT::Delete`](#delete)|Elimina un carattere o caratteri da una stringa.|
|[`CStringT::Find`](#find)|Trova un carattere o una sottostringa all'interno di una stringa più grande.|
|[`CStringT::FindOneOf`](#findoneof)|Trova il primo carattere corrispondente da un set.|
|[`CStringT::Format`](#format)|Formatta la stringa come `sprintf` .|
|[`CStringT::FormatMessage`](#formatmessage)|Formatta una stringa di messaggio.|
|[`CStringT::FormatMessageV`](#formatmessagev)|Formatta una stringa di messaggio usando un elenco di argomenti variabile.|
|[`CStringT::FormatV`](#formatv)|Formatta la stringa usando un elenco di argomenti variabile.|
|[`CStringT::GetEnvironmentVariable`](#getenvironmentvariable)|Imposta la stringa sul valore della variabile di ambiente specificata.|
|[`CStringT::Insert`](#insert)|Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.|
|[`CStringT::Left`](#left)|Estrae la parte sinistra di una stringa.|
|[`CStringT::LoadString`](#loadstring)|Carica un **`CStringT`** oggetto esistente da una risorsa di Windows.|
|[`CStringT::MakeLower`](#makelower)|Converte tutti i caratteri di questa stringa in caratteri minuscoli.|
|[`CStringT::MakeReverse`](#makereverse)|Inverte la stringa.|
|[`CStringT::MakeUpper`](#makeupper)|Converte tutti i caratteri di questa stringa in caratteri maiuscoli.|
|[`CStringT::Mid`](#mid)|Estrae la parte intermedia di una stringa.|
|[`CStringT::OemToAnsi`](#oemtoansi)|Esegue una conversione sul posto dal set di caratteri OEM al set di caratteri ANSI.|
|[`CStringT::Remove`](#remove)|Rimuove i caratteri indicati da una stringa.|
|[`CStringT::Replace`](#replace)|Sostituisce i caratteri indicati con altri caratteri.|
|[`CStringT::ReverseFind`](#reversefind)|Trova un carattere all'interno di una stringa più grande. inizia dalla fine.|
|[`CStringT::Right`](#right)|Estrae la parte destra di una stringa.|
|[`CStringT::SetSysString`](#setsysstring)|Imposta un `BSTR` oggetto esistente con i dati di un **`CStringT`** oggetto.|
|[`CStringT::SpanExcluding`](#spanexcluding)|Estrae i caratteri dalla stringa, a partire dal primo carattere, che non sono inclusi nel set di caratteri identificato da `pszCharSet` .|
|[`CStringT::SpanIncluding`](#spanincluding)|Estrae una sottostringa che contiene solo i caratteri in un set.|
|[`CStringT::Tokenize`](#tokenize)|Estrae i token specificati in una stringa di destinazione.|
|[`CStringT::Trim`](#trim)|Taglia tutti gli spazi vuoti iniziali e finali dalla stringa.|
|[`CStringT::TrimLeft`](#trimleft)|Taglia gli spazi vuoti iniziali dalla stringa.|
|[`CStringT::TrimRight`](#trimright)|Taglia gli spazi vuoti finali dalla stringa.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[`CStringT::operator =`](#operator_eq)|Assegna un nuovo valore a un **`CStringT`** oggetto.|
|[`CStringT::operator +`](#operator_add)|Concatena due stringhe, ovvero un carattere e una stringa.|
|[`CStringT::operator +=`](#operator_add_eq)|Concatena una nuova stringa alla fine di una stringa esistente.|
|[`CStringT::operator ==`](#operator_eq_eq)|Determina se due stringhe sono logicamente uguali.|
|[`CStringT::operator !=`](#operator_neq)|Determina se due stringhe non sono logicamente uguali.|
|[`CStringT::operator <`](#operator_lt)|Determina se la stringa a sinistra dell'operatore è minore della stringa sul lato destro.|
|[`CStringT::operator >`](#operator_gt)|Determina se la stringa a sinistra dell'operatore è maggiore della stringa sul lato destro.|
|[`CStringT::operator <=`](#operator_lt_eq)|Determina se la stringa a sinistra dell'operatore è minore o uguale alla stringa sul lato destro.|
|[`CStringT::operator >=`](#operator_gt_eq)|Determina se la stringa a sinistra dell'operatore è maggiore o uguale alla stringa sul lato destro.|

## <a name="remarks"></a>Commenti

**`CStringT`** eredita dalla [classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md). Le funzionalità avanzate, ad esempio la manipolazione dei caratteri, l'ordinamento e la ricerca, vengono implementate da **`CStringT`** .

> [!NOTE]
> **`CStringT`** gli oggetti sono in grado di generare eccezioni. Questo errore si verifica quando un oggetto esaurisce la **`CStringT`** memoria per qualsiasi motivo.

Un **`CStringT`** oggetto è costituito da una sequenza di caratteri a lunghezza variabile. **`CStringT`** fornisce funzioni e operatori usando una sintassi simile a quella di base. Gli operatori di concatenazione e confronto, insieme alla gestione della memoria semplificata, rendono **`CStringT`** gli oggetti più facili da utilizzare rispetto alle matrici di caratteri normali.

> [!NOTE]
> Sebbene sia possibile creare **`CStringT`** istanze che contengono caratteri null incorporati, si consiglia di utilizzarli. La chiamata di metodi e operatori su **`CStringT`** oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

Utilizzando combinazioni diverse dei `BaseType` `StringTraits` parametri e, **`CStringT`** gli oggetti possono essere inclusi nei tipi seguenti, che sono stati predefiniti dalle librerie ATL.

Se si utilizza in un'applicazione ATL:

`CString`, `CStringA` e `CStringW` vengono esportati dalla DLL MFC (MFC90.DLL), mai dalle DLL utente. Questa operazione viene eseguita per impedire **`CStringT`** che venga definito più volte.

> [!NOTE]
> Se il codice contiene la soluzione alternativa per gli errori del linker descritti in [esportazione di classi stringa con CStringT](../../atl-mfc-shared/exporting-string-classes-using-cstringt.md), è necessario rimuovere tale codice. Non è più necessario.

Nelle applicazioni basate su MFC sono disponibili i tipi di stringa seguenti:

|Tipo CStringt|Dichiarazione|
|-------------------|-----------------|
|`CStringA`|Stringa di tipo carattere ANSI con supporto CRT.|
|`CStringW`|Stringa di tipo carattere Unicode con supporto CRT.|
|`CString`|Tipi di carattere ANSI e Unicode con supporto CRT.|

I tipi di stringa seguenti sono disponibili nei progetti in cui `ATL_CSTRING_NO_CRT` è definito:

|Tipo CStringt|Dichiarazione|
|-------------------|-----------------|
|`CAtlStringA`|Stringa di tipo carattere ANSI senza supporto CRT.|
|`CAtlStringW`|Stringa di tipo carattere Unicode senza supporto CRT.|
|`CAtlString`|Tipi di carattere ANSI e Unicode senza supporto CRT.|

I tipi di stringa seguenti sono disponibili nei progetti in cui `ATL_CSTRING_NO_CRT` non è definito:

|Tipo CStringt|Dichiarazione|
|-------------------|-----------------|
|`CAtlStringA`|Stringa di tipo carattere ANSI con supporto CRT.|
|`CAtlStringW`|Stringa di tipo carattere Unicode con supporto CRT.|
|`CAtlString`|Tipi di carattere ANSI e Unicode con supporto CRT.|

`CString` gli oggetti presentano anche le caratteristiche seguenti:

- **`CStringT`** gli oggetti possono aumentare a causa di operazioni di concatenazione.

- **`CStringT`** gli oggetti seguono "semantica del valore". Un **`CStringT`** oggetto può essere considerato come una stringa effettiva, non come puntatore a una stringa.

- È possibile sostituire liberamente **`CStringT`** gli oggetti per gli `PCXSTR` argomenti della funzione.

- Gestione della memoria personalizzata per i buffer di stringa. Per ulteriori informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="cstringt-predefined-types"></a>Tipi predefiniti CStringt

Poiché **`CStringT`** utilizza un argomento di modello per definire il tipo di carattere ( [wchar_t](../../c-runtime-library/standard-types.md) o [char](../../c-runtime-library/standard-types.md)) supportato, i tipi di parametro del metodo possono essere complicati in momenti. Per semplificare questo problema, viene definito e utilizzato un set di tipi predefiniti in tutta la **`CStringT`** classe. La tabella seguente elenca i diversi tipi:

|Nome|Descrizione|
|----------|-----------------|
|`XCHAR`|Singolo carattere ( **`wchar_t`** o **`char`** ) con lo stesso tipo di carattere dell' **`CStringT`** oggetto.|
|`YCHAR`|Singolo carattere ( **`wchar_t`** o **`char`** ) con il tipo di carattere opposto come **`CStringT`** oggetto.|
|`PXSTR`|Puntatore a una stringa di caratteri ( **`wchar_t`** o **`char`** ) con lo stesso tipo di carattere dell'oggetto * * * * `CStringT` * * * *.|
|`PYSTR`|Puntatore a una stringa di caratteri ( **`wchar_t`** o **`char`** ) con il tipo di carattere opposto come **`CStringT`** oggetto.|
|`PCXSTR`|Puntatore a una **`const`** stringa di caratteri ( **`wchar_t`** o **`char`** ) con lo stesso tipo di carattere dell' **`CStringT`** oggetto.|
|`PCYSTR`|Puntatore a una **`const`** stringa di caratteri ( **`wchar_t`** o **`char`** ) con il tipo di carattere opposto come **`CStringT`** oggetto.|

> [!NOTE]
> Il codice che usava in precedenza metodi non documentati di `CString` (ad esempio `AssignCopy` ) deve essere sostituito con il codice che usa i seguenti metodi documentati di **`CStringT`** (ad esempio `GetBuffer` o `ReleaseBuffer` ). Questi metodi vengono ereditati da `CSimpleStringT` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)

**`CStringT`**

## <a name="requirements"></a>Requisiti

|Intestazione|Da usare per|
|------------|-------------|
|CStringT. h|Oggetti stringa solo MFC|
|atlstr. h|Oggetti stringa non MFC|

## <a name="cstringtallocsysstring"></a><a name="allocsysstring"></a> `CStringT::AllocSysString`

Alloca una stringa compatibile con l'automazione del tipo `BSTR` e vi copia il contenuto dell' **`CStringT`** oggetto, incluso il carattere null di terminazione.

```cpp
BSTR AllocSysString() const;
```

### <a name="return-value"></a>Valore restituito

Stringa appena allocata.

### <a name="remarks"></a>Commenti

Nei programmi MFC viene generata una [classe CMemoryException](../../mfc/reference/cmemoryexception-class.md) se esiste una memoria insufficiente. Nei programmi ATL viene generata un'eccezione [CAtlException](../../atl/reference/catlexception-class.md) . Questa funzione viene in genere utilizzata per restituire stringhe per l'automazione.

In genere, se questa stringa viene passata a una funzione COM come `[in]` parametro, è necessario che il chiamante liberi la stringa. Questa operazione può essere eseguita usando [SysFreeString](/windows/win32/api/oleauto/nf-oleauto-sysfreestring), come descritto nella Windows SDK. Per ulteriori informazioni, vedere [allocazione e rilascio di memoria per un BSTR](../../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md).

Per ulteriori informazioni sulle funzioni di allocazione OLE in Windows, vedere [SysAllocString](/windows/win32/api/oleauto/nf-oleauto-sysallocstring) nel Windows SDK.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CStringT::AllocSysString`.

[!code-cpp[NVC_ATLMFC_Utilities#105](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_1.cpp)]

## <a name="cstringtansitooem"></a><a name="ansitooem"></a> `CStringT::AnsiToOem`

Converte tutti i caratteri in questo **`CStringT`** oggetto dal set di caratteri ANSI al set di caratteri OEM.

```cpp
void AnsiToOem();
```

### <a name="remarks"></a>Commenti

La funzione non è disponibile se `_UNICODE` è definito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#106](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_2.cpp)]

## <a name="cstringtappendformat"></a><a name="appendformat"></a> `CStringT::AppendFormat`

Accoda i dati formattati a un **`CStringT`** oggetto esistente.

```cpp
void __cdecl AppendFormat(PCXSTR pszFormat, [, argument] ...);
void __cdecl AppendFormat(UINT nFormatID, [, argument] ...);
```

### <a name="parameters"></a>Parametri

*`pszFormat`*\
Stringa di controllo del formato.

*`nFormatID`*\
Identificatore della risorsa di stringa che contiene la stringa di controllo del formato.

*`argument`*\
Argomenti facoltativi.

### <a name="remarks"></a>Commenti

Questa funzione formatta e accoda una serie di caratteri e di valori in **`CStringT`** . Ogni argomento facoltativo, se presente, viene convertito e accodato in base alla specifica di formato corrispondente in *`pszFormat`* o dalla risorsa di stringa identificata da *`nFormatID`* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#107](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_3.cpp)]

## <a name="cstringtcollate"></a><a name="collate"></a> `CStringT::Collate`

Confronta due stringhe utilizzando la funzione di testo generico `_tcscoll` .

```cpp
int Collate(PCXSTR psz) const throw();
```

### <a name="parameters"></a>Parametri

*`psz`*\
Altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se l' **`CStringT`** oggetto è minore di *`psz`* oppure > 0 se l' **`CStringT`** oggetto è maggiore di *`psz`* .

### <a name="remarks"></a>Commenti

Funzione di testo generico `_tcscoll` , definita in TCHAR. H, viene eseguito il mapping a `strcoll` , `wcscoll` o `_mbscoll` , a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto con distinzione tra maiuscole e minuscole delle stringhe in base alla tabella codici attualmente in uso. Per ulteriori informazioni, vedere [strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).

## <a name="cstringtcollatenocase"></a><a name="collatenocase"></a> `CStringT::CollateNoCase`

Confronta due stringhe utilizzando la funzione di testo generico `_tcscoll` .

```cpp
int CollateNoCase(PCXSTR psz) const throw();
```

### <a name="parameters"></a>Parametri

*`psz`*\
Altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche (si ignora la distinzione tra maiuscole e minuscole), < 0 se l' **`CStringT`** oggetto è minore *`psz`* (maiuscole/minuscole) o > 0 se l' **`CStringT`** oggetto è maggiore di *`psz`* (la distinzione tra maiuscole e minuscole).

### <a name="remarks"></a>Commenti

Funzione di testo generico `_tcscoll` , definita in TCHAR. H, viene eseguito il mapping a `stricoll` , `wcsicoll` o `_mbsicoll` , a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto senza distinzione tra maiuscole e minuscole delle stringhe in base alla tabella codici attualmente in uso. Per ulteriori informazioni, vedere [strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#109](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_4.cpp)]

## <a name="cstringtcompare"></a><a name="compare"></a> `CStringT::Compare`

Confronta due stringhe (maiuscole/minuscole).

```cpp
int Compare(PCXSTR psz) const;
```

### <a name="parameters"></a>Parametri

*`psz`*\
Altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se l' **`CStringT`** oggetto è minore di *`psz`* oppure > 0 se l' **`CStringT`** oggetto è maggiore di *`psz`* .

### <a name="remarks"></a>Commenti

Funzione di testo generico `_tcscmp` , definita in TCHAR. H, viene eseguito il mapping a `strcmp` , `wcscmp` o `_mbscmp` , a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe e non è interessata dalle impostazioni locali. Per ulteriori informazioni, vedere [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md).

Se la stringa contiene valori null incorporati, ai fini del confronto la stringa viene considerata troncata in corrispondenza del primo carattere null incorporato.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CStringT::Compare`.

[!code-cpp[NVC_ATLMFC_Utilities#110](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_5.cpp)]

## <a name="cstringtcomparenocase"></a><a name="comparenocase"></a> `CStringT::CompareNoCase`

Confronta due stringhe (senza distinzione tra maiuscole e minuscole).

```cpp
int CompareNoCase(PCXSTR psz) const throw();
```

### <a name="parameters"></a>Parametri

*`psz`*\
Altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche (si ignora la distinzione tra maiuscole e minuscole), <0 se l' **`CStringT`** oggetto è minore *`psz`* (maiuscole/minuscole) o >0 se l' **`CStringT`** oggetto è maggiore di *`psz`* (la distinzione tra maiuscole e minuscole).

### <a name="remarks"></a>Commenti

Funzione di testo generico `_tcsicmp` , definita in TCHAR. H, è associato a `_stricmp` o a, `_wcsicmp` `_mbsicmp` a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto senza distinzione tra maiuscole e minuscole delle stringhe. Il confronto dipende dall'aspetto LC_CTYPE delle impostazioni locali, ma non da LC_COLLATE. Per ulteriori informazioni, vedere [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#111](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_6.cpp)]

## <a name="cstringtcstringt"></a><a name="cstringt"></a> `CStringT::CStringT`

Costruisce un **`CStringT`** oggetto.

```cpp
CStringT() throw() :
    CThisSimpleString(StringTraits::GetDefaultManager());

explicit CStringT(IAtlStringMgr* pStringMgr) throw() :
    CThisSimpleString( pStringMgr);

CStringT(const VARIANT& varSrc);

CStringT(const VARIANT& varSrc, IAtlStringMgr* pStringMgr);

CStringT(const CStringT& strSrc) :
    CThisSimpleString( strSrc);

operator CSimpleStringT<
                    BaseType,
                    !_CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType, StringTraits>
                    :: c_bIsMFCDLLTraits> &()

template <bool bMFCDLL>
CStringT(const CSimpleStringT<BaseType, bMFCDLL>& strSrc) :
    CThisSimpleString( strSrc);

template <class SystemString>
CStringT(SystemString^ pString) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const XCHAR* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(const YCHAR* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(LPCSTR pszSrc, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);

CStringT(LPCWSTR pszSrc, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);

CSTRING_EXPLICIT CStringT(const unsigned char* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

/*CSTRING_EXPLICIT*/ CStringT(char* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(unsigned char* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(wchar_t* pszSrc) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const unsigned char* pszSrc, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);

CSTRING_EXPLICIT CStringT(char ch, int nLength = 1) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CSTRING_EXPLICIT CStringT(wchar_t ch, int nLength = 1) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const XCHAR* pch, int nLength) :
    CThisSimpleString( pch, nLength, StringTraits::GetDefaultManager());

CStringT(const YCHAR* pch, int nLength) :
    CThisSimpleString( StringTraits::GetDefaultManager());

CStringT(const XCHAR* pch, int nLength, AtlStringMgr* pStringMgr) :
    CThisSimpleString( pch, nLength, pStringMgr);

CStringT(const YCHAR* pch, int nLength, IAtlStringMgr* pStringMgr) :
    CThisSimpleString( pStringMgr);
```

### <a name="parameters"></a>Parametri

*`pch`*\
Puntatore a una matrice di caratteri di lunghezza *nLength*, senza terminazione null.

*`nLength`*\
Conteggio del numero di caratteri in *PCH*.

*`ch`*\
Un singolo carattere.

*`pszSrc`*\
Stringa con terminazione null da copiare in questo **`CStringT`** oggetto.

*`pStringMgr`*\
Puntatore al gestore della memoria per l' **`CStringT`** oggetto. Per altre informazioni su `IAtlStringMgr` e sulla gestione della memoria per **`CStringT`** , vedere [gestione della memoria con CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

*`strSrc`*\
Oggetto esistente **`CStringT`** da copiare in questo **`CStringT`** oggetto. Per ulteriori informazioni su `CThisString` e `CThisSimpleString` , vedere la sezione Osservazioni.

*`varSrc`*\
Oggetto variant da copiare in questo **`CStringT`** oggetto.

*`BaseType`*\
Tipo di carattere della classe String. Può essere uno dei valori seguenti:

**`char`** (per le stringhe di caratteri ANSI).

**`wchar_t`** (per le stringhe di caratteri Unicode).

`TCHAR` (per le stringhe di caratteri ANSI e Unicode).

*`bMFCDLL`*\
Valore booleano che specifica se il progetto è una DLL MFC ( `TRUE` ) o meno ( `FALSE` ).

*`SystemString`*\
Deve essere `System::String` e il progetto deve essere compilato con `/clr` .

*`pString`*\
Handle per un **`CStringT`** oggetto.

### <a name="remarks"></a>Commenti

Poiché i costruttori copiano i dati di input in una nuova risorsa di archiviazione allocata, possono verificarsi eccezioni di memoria. Alcuni di questi costruttori fungono da funzioni di conversione. In questo modo è possibile sostituire, ad esempio, un **`LPTSTR`** oggetto in cui **`CStringT`** è previsto un oggetto.

- **`CStringT`**( `LPCSTR` `lpsz` ): Costruisce un Unicode **`CStringT`** da una stringa ANSI. È anche possibile usare questo costruttore per caricare una risorsa di stringa, come illustrato nell'esempio riportato di seguito.

- `CStringT(``LPCWSTR` `lpsz` ): Costruisce un oggetto **`CStringT`** da una stringa Unicode.

- **`CStringT`**( `const unsigned char*` `psz` ): Consente di costruire un oggetto **`CStringT`** da un puntatore a **`unsigned char`** .

> [!NOTE]
> Definire la `_CSTRING_DISABLE_NARROW_WIDE_CONVERSION` macro per disattivare la conversione implicita di stringhe tra le stringhe ANSI e Unicode. La macro esclude dai costruttori di compilazione che supportano la conversione.

Il *`strSrc`* parametro può essere un **`CStringT`** oggetto o `CThisSimpleString` . Per **`CStringT`** , utilizzare una delle creazioni di istanze predefinite ( `CString` , `CStringA` o `CStringW` ) `CThisSimpleString` . per, utilizzare un **`this`** puntatore. `CThisSimpleString` dichiara un'istanza della [classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), che è una classe di stringhe più piccola con una funzionalità meno incorporata rispetto alla **`CStringT`** classe.

L'operatore `CSimpleStringT<>&()` di overload costruisce un **`CStringT`** oggetto da una `CSimpleStringT` dichiarazione.

> [!NOTE]
> Sebbene sia possibile creare **`CStringT`** istanze che contengono caratteri null incorporati, si consiglia di utilizzarli. La chiamata di metodi e operatori su **`CStringT`** oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#112](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_7.cpp)]

## <a name="cstringtcstringt"></a><a name="_dtorcstringt"></a> `CStringT::~CStringT`

Elimina definitivamente l' **`CStringT`** oggetto.

```cpp
~CStringT() throw();
```

### <a name="remarks"></a>Commenti

Elimina definitivamente l' **`CStringT`** oggetto.

## <a name="cstringtdelete"></a><a name="delete"></a> `CStringT::Delete`

Elimina un carattere o caratteri da una stringa che inizia con il carattere in corrispondenza dell'indice specificato.

```cpp
int Delete(int iIndex, int nCount = 1);
```

### <a name="parameters"></a>Parametri

*`iIndex`*\
Indice in base zero del primo carattere dell' **`CStringT`** oggetto da eliminare.

*`nCount`*\
Numero di caratteri da rimuovere.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa modificata.

### <a name="remarks"></a>Commenti

Se *`nCount`* è più lungo della stringa, il resto della stringa verrà rimosso.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#113](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_8.cpp)]

```Output
Before: Soccer is best,
    but hockey is quicker!
After: Soccer best,
    but hockey is quicker!
```

## <a name="cstringtfind"></a><a name="find"></a> `CStringT::Find`

Cerca nella stringa la prima corrispondenza di un carattere o di una sottostringa.

```cpp
int Find(PCXSTR pszSub, int iStart=0) const throw();
int Find(XCHAR ch, int iStart=0) const throw();
```

### <a name="parameters"></a>Parametri

*`pszSub`*\
Sottostringa da cercare.

*`iStart`*\
Indice del carattere nella stringa da cui iniziare la ricerca oppure 0 per iniziare dall'inizio.

*`ch`*\
Singolo carattere da cercare.

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo carattere in questo **`CStringT`** oggetto che corrisponde alla sottostringa o ai caratteri richiesti;-1 se la sottostringa o il carattere non viene trovato.

### <a name="remarks"></a>Commenti

La funzione è sottoposto a overload per accettare entrambi i singoli caratteri (in modo analogo alla funzione di run-time `strchr` ) e le stringhe (simile a `strstr` ).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#114](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_9.cpp)]

## <a name="cstringtfindoneof"></a><a name="findoneof"></a> `CStringT::FindOneOf`

Cerca in questa stringa il primo carattere che corrisponde a qualsiasi carattere contenuto in *`pszCharSet`* .

```cpp
int FindOneOf(PCXSTR pszCharSet) const throw();
```

### <a name="parameters"></a>Parametri

*`pszCharSet`*\
Stringa contenente i caratteri per la corrispondenza.

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo carattere in questa stringa presente anche in *`pszCharSet`* ;-1 se non è presente alcuna corrispondenza.

### <a name="remarks"></a>Commenti

Trova la prima occorrenza di uno dei caratteri in *`pszCharSet`* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#115](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_10.cpp)]

## <a name="cstringtformat"></a><a name="format"></a> `CStringT::Format`

Scrive i dati formattati **`CStringT`** in un oggetto nello stesso modo in cui [sprintf_s](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) formatta i dati in una matrice di caratteri di tipo C.

```cpp
void __cdecl Format(UINT nFormatID, [, argument]...);
void __cdecl Format(PCXSTR pszFormat,  [, argument] ...);
```

### <a name="parameters"></a>Parametri

*`nFormatID`*\
Identificatore della risorsa di stringa che contiene la stringa di controllo del formato.

*`pszFormat`*\
Stringa di controllo del formato.

*`argument`*\
Argomenti facoltativi.

### <a name="remarks"></a>Commenti

Questa funzione formatta e archivia una serie di caratteri e di valori in **`CStringT`** . Ogni argomento facoltativo, se presente, viene convertito e restituito in base alla specifica di formato corrispondente in *`pszFormat`* o dalla risorsa di stringa identificata da *`nFormatID`* .

La chiamata avrà esito negativo se l'oggetto stringa stesso viene offerto come parametro a `Format` . Il codice seguente, ad esempio, provocherà risultati imprevedibili:

[!code-cpp[NVC_ATLMFC_Utilities#116](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_11.cpp)]

Per altre informazioni, vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#117](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_12.cpp)]

## <a name="cstringtformatmessage"></a><a name="formatmessage"></a> `CStringT::FormatMessage`

Formatta una stringa di messaggio.

```cpp
void __cdecl FormatMessage(UINT nFormatID, [, argument]...);
void __cdecl FormatMessage(PCXSTR pszFormat, [, argument]...);
```

### <a name="parameters"></a>Parametri

*`nFormatID`*\
Identificatore della risorsa di stringa che contiene il testo del messaggio non formattato.

*`pszFormat`*\
Punta alla stringa di controllo del formato. Verranno analizzati gli inserimenti e formattati di conseguenza. La stringa di formato è simile alle stringhe di formato di tipo *printf* della funzione runtime, con la differenza che consente di inserire i parametri in un ordine arbitrario.

*`argument`*\
Argomenti facoltativi.

### <a name="remarks"></a>Commenti

Per la funzione è necessaria una definizione di messaggio come input. La definizione del messaggio è determinata da *`pszFormat`* o dalla risorsa di stringa identificata da *`nFormatID`* . La funzione copia il testo del messaggio formattato nell' **`CStringT`** oggetto, elaborando eventuali sequenze di inserimento incorporate, se richiesto.

> [!NOTE]
> `FormatMessage` tenta di allocare memoria di sistema per la stringa appena formattata. Se il tentativo non riesce, viene generata automaticamente un'eccezione di memoria.

Ogni inserimento deve avere un parametro corrispondente che segue *`pszFormat`* il *`nFormatID`* parametro o. All'interno del testo del messaggio sono supportate diverse sequenze di escape per la formattazione dinamica del messaggio. Per ulteriori informazioni, vedere la funzione [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) di Windows nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#118](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_13.cpp)]

## <a name="cstringtformatmessagev"></a><a name="formatmessagev"></a> `CStringT::FormatMessageV`

Formatta una stringa di messaggio usando un elenco di argomenti variabile.

```cpp
void FormatMessageV(PCXSTR pszFormat, va_list* pArgList);
```

### <a name="parameters"></a>Parametri

*`pszFormat`*\
Punta alla stringa di controllo del formato. Verranno analizzati gli inserimenti e formattati di conseguenza. La stringa di formato è simile alle stringhe di formato di tipo funzione in fase di esecuzione `printf` , con la differenza che consente di inserire i parametri in un ordine arbitrario.

*`pArgList`*\
Puntatore a un elenco di argomenti.

### <a name="remarks"></a>Commenti

La funzione richiede la definizione di un messaggio come input, determinato da *`pszFormat`* . La funzione copia il testo del messaggio formattato e un elenco di argomenti variabile nell' **`CStringT`** oggetto, elaborando eventuali sequenze di inserimento incorporate, se richiesto.

> [!NOTE]
> `FormatMessageV` chiama [CStringT:: FormatMessage](#formatmessage), che tenta di allocare memoria di sistema per la stringa appena formattata. Se il tentativo non riesce, viene generata automaticamente un'eccezione di memoria.

Per ulteriori informazioni, vedere la funzione [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) di Windows nell'Windows SDK.

## <a name="cstringtformatv"></a><a name="formatv"></a> `CStringT::FormatV`

Formatta una stringa di messaggio usando un elenco di argomenti variabile.

```cpp
void FormatV(PCXSTR pszFormat, va_list args);
```

### <a name="parameters"></a>Parametri

*`pszFormat`*\
Punta alla stringa di controllo del formato. Verranno analizzati gli inserimenti e formattati di conseguenza. La stringa di formato è simile alle stringhe di formato di tipo funzione in fase di esecuzione `printf` , con la differenza che consente di inserire i parametri in un ordine arbitrario.

*`args`*\
Puntatore a un elenco di argomenti.

### <a name="remarks"></a>Commenti

Scrive una stringa formattata e un elenco di argomenti variabile **`CStringT`** in una stringa nello stesso modo in cui `vsprintf_s` i dati vengono formattati in una matrice di caratteri di tipo C.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#119](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_14.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#120](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_15.cpp)]

## <a name="cstringtgetenvironmentvariable"></a><a name="getenvironmentvariable"></a> `CStringT::GetEnvironmentVariable`

Imposta la stringa sul valore della variabile di ambiente specificata.

```cpp
BOOL GetEnvironmentVariable(PCXSTR pszVar);
```

### <a name="parameters"></a>Parametri

*`pszVar`*\
Puntatore a una stringa con terminazione null che specifica la variabile di ambiente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Recupera il valore della variabile specificata dal blocco dell'ambiente del processo chiamante. Il valore è nel formato di una stringa di caratteri con terminazione null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#121](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_16.cpp)]

## <a name="cstringtinsert"></a><a name="insert"></a> `CStringT::Insert`

Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.

```cpp
int Insert(int iIndex, PCXSTR psz);
int Insert(int iIndex, XCHAR ch);
```

### <a name="parameters"></a>Parametri

*`iIndex`*\
Indice del carattere prima del quale verrà eseguita l'operazione di inserimento.

*`psz`*\
Puntatore alla sottostringa da inserire.

*`ch`*\
Carattere da inserire.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa modificata.

### <a name="remarks"></a>Commenti

Il *`iIndex`* parametro identifica il primo carattere che verrà spostato per creare spazio per il carattere o la sottostringa. Se *nIndex* è zero, l'inserimento verrà eseguito prima dell'intera stringa. Se *nIndex* è maggiore della lunghezza della stringa, la funzione consentirà di concatenare la stringa presente e il nuovo materiale fornito da *`ch`* o *`psz`* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#122](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_17.cpp)]

## <a name="cstringtleft"></a><a name="left"></a> `CStringT::Left`

Estrae i *`nCount`* caratteri più a sinistra da questo **`CStringT`** oggetto e restituisce una copia della sottostringa estratta.

```cpp
CStringT Left(int nCount) const;
```

### <a name="parameters"></a>Parametri

*`nCount`*\
Numero di caratteri da estrarre da questo **`CStringT`** oggetto.

### <a name="return-value"></a>Valore restituito

**`CStringT`** Oggetto che contiene una copia dell'intervallo di caratteri specificato. L' **`CStringT`** oggetto restituito può essere vuoto.

### <a name="remarks"></a>Commenti

Se *`nCount`* supera la lunghezza della stringa, l'intera stringa viene estratta. `Left` è simile alla funzione di base `Left`.

Per i set di caratteri multibyte (MBCS), *`nCount`* considera ogni sequenza a 8 bit come carattere, in modo che *`nCount`* restituisca il numero di caratteri multibyte moltiplicato per due.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#123](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_18.cpp)]

## <a name="cstringtloadstring"></a><a name="loadstring"></a> `CStringT::LoadString`

Legge una risorsa di stringa Windows, identificata da *NID*, in un **`CStringT`** oggetto esistente.

```cpp
BOOL LoadString(HINSTANCE hInstance, UINT nID, WORD wLanguageID);
BOOL LoadString(HINSTANCE hInstance, UINT nID);
BOOL LoadString(UINT nID);
```

### <a name="parameters"></a>Parametri

*`hInstance`*\
Handle per l'istanza del modulo.

*`nID`*\
ID di risorsa di stringa Windows.

*`wLanguageID`*\
Lingua della risorsa di stringa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il caricamento delle risorse ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Carica la risorsa di stringa (*NID*) dal modulo specificato (*HINSTANCE*) utilizzando il linguaggio specificato (*wLanguage*).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#124](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_19.cpp)]

## <a name="cstringtmakelower"></a><a name="makelower"></a> `CStringT::MakeLower`

Converte l' **`CStringT`** oggetto in una stringa in caratteri minuscoli.

```cpp
CStringT& MakeLower();
```

### <a name="return-value"></a>Valore restituito

Stringa minuscola risultante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#125](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_20.cpp)]

## <a name="cstringtmakereverse"></a><a name="makereverse"></a> `CStringT::MakeReverse`

Inverte l'ordine dei caratteri nell' **`CStringT`** oggetto.

```cpp
CStringT& MakeReverse();
```

### <a name="return-value"></a>Valore restituito

Stringa invertita risultante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#126](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_21.cpp)]

## <a name="cstringtmakeupper"></a><a name="makeupper"></a> `CStringT::MakeUpper`

Converte l' **`CStringT`** oggetto in una stringa in maiuscolo.

```cpp
CStringT& MakeUpper();
```

### <a name="return-value"></a>Valore restituito

Stringa maiuscola risultante.

### <a name="remarks"></a>Commenti

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#127](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_22.cpp)]

## <a name="cstringtmid"></a><a name="mid"></a> `CStringT::Mid`

Estrae una sottostringa di *`nCount`* caratteri di lunghezza da questo **`CStringT`** oggetto, a partire dalla posizione *`iFirst`* (in base zero).

```cpp
CStringT Mid(int iFirst, int nCount) const;
CStringT Mid(int iFirst) const;
```

### <a name="parameters"></a>Parametri

*`iFirst`*\
Indice in base zero del primo carattere in questo **`CStringT`** oggetto che deve essere incluso nella sottostringa estratta.

*`nCount`*\
Numero di caratteri da estrarre da questo **`CStringT`** oggetto. Se questo parametro non viene specificato, viene estratto il resto della stringa.

### <a name="return-value"></a>Valore restituito

**`CStringT`** Oggetto che contiene una copia dell'intervallo di caratteri specificato. L' **`CStringT`** oggetto restituito può essere vuoto.

### <a name="remarks"></a>Commenti

La funzione restituisce una copia della sottostringa estratta. `Mid` è simile alla funzione Mid di base (ad eccezione del fatto che gli indici di base sono basati su uno).

Per i set di caratteri multibyte (MBCS), *`nCount`* fa riferimento a ogni carattere a 8 bit, ovvero un byte iniziale e finale in un carattere multibyte vengono conteggiati come due caratteri.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#128](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_23.cpp)]

## <a name="cstringtoemtoansi"></a><a name="oemtoansi"></a> `CStringT::OemToAnsi`

Converte tutti i caratteri in questo **`CStringT`** oggetto dal set di caratteri OEM al set di caratteri ANSI.

```cppcpp
void OemToAnsi();
```

### <a name="remarks"></a>Commenti

Questa funzione non è disponibile se `_UNICODE` è definito.

### <a name="example"></a>Esempio

Vedere l'esempio per [CStringT:: AnsiToOem](#ansitooem).

## <a name="cstringtoperator-"></a><a name="operator_eq"></a> `CStringT::operator =`

Assegna un nuovo valore alla stringa.

```cpp
CStringT& operator=(const CStringT& strSrc);

template<bool bMFCDLL>
CStringT& operator=(const CSimpleStringT<BaseType, bMFCDLL>& str);
CStringT& operator=(PCXSTR pszSrc);
CStringT& operator=(PCYSTR pszSrc);
CStringT& operator=(const unsigned char* pszSrc);
CStringT& operator=(XCHAR ch);
CStringT& operator=(YCHAR ch);
CStringT& operator=(const VARIANT& var);
```

### <a name="parameters"></a>Parametri

*`strSrc`*\
Oggetto **`CStringT`** da assegnare a questa stringa.

*`str`*\
Riferimento a un oggetto `CThisSimpleString`.

*`bMFCDLL`*\
Valore booleano che specifica se il progetto è una DLL MFC.

*`BaseType`*\
Tipo di base della stringa.

*`var`*\
Oggetto variant da assegnare a questa stringa.

*`ch`*\
Carattere ANSI o Unicode da assegnare alla stringa.

*`pszSrc`*\
Puntatore alla stringa originale da assegnare.

### <a name="remarks"></a>Commenti

L'operatore di assegnazione accetta un altro **`CStringT`** oggetto, un puntatore a caratteri o un singolo carattere. Quando si usa questo operatore, è possibile che si verifichino eccezioni di memoria perché è possibile allocare nuove archiviazioni.

Per informazioni su `CThisSimpleString` , vedere la sezione Osservazioni di [CStringT:: CStringT](#cstringt).

> [!NOTE]
> Sebbene sia possibile creare **`CStringT`** istanze che contengono caratteri null incorporati, si consiglia di utilizzarli. La chiamata di metodi e operatori su **`CStringT`** oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

## <a name="cstringtoperator-"></a><a name="operator_add"></a> `CStringT::operator +`

Concatena due stringhe o un carattere e una stringa.

```cpp
friend CStringT operator+(const CStringT& str1, const CStringT& str2);
friend CStringT operator+(const CStringT& str1, PCXSTR psz2);
friend CStringT operator+(PCXSTR psz1, const CStringT& str2,);
friend CStringT operator+(char ch1, const CStringT& str2,);
friend CStringT operator+(const CStringT& str1, char ch2);
friend CStringT operator+(const CStringT& str1, wchar_t ch2);
friend CStringT operator+(wchar_t ch1, const CStringT& str2,);
```

### <a name="parameters"></a>Parametri

*`ch1`*\
Carattere ANSI o Unicode da concatenare con una stringa.

*`ch2`*\
Carattere ANSI o Unicode da concatenare con una stringa.

*`str1`*\
Oggetto **`CStringT`** da concatenare con una stringa o un carattere.

*`str2`*\
Oggetto **`CStringT`** da concatenare con una stringa o un carattere.

*`psz1`*\
Puntatore a una stringa con terminazione null da concatenare con una stringa o un carattere.

*`psz2`*\
Puntatore a una stringa da concatenare con una stringa o un carattere.

### <a name="remarks"></a>Commenti

Sono disponibili sette forme di overload della `CStringT::operator+` funzione. La prima versione concatena due oggetti esistenti **`CStringT`** . I due successivi concatenano un **`CStringT`** oggetto e una stringa con terminazione null. I due successivi concatenano un **`CStringT`** oggetto e un carattere ANSI. Le ultime due concatenano un **`CStringT`** oggetto e un carattere Unicode.

> [!NOTE]
> Sebbene sia possibile creare **`CStringT`** istanze che contengono caratteri null incorporati, si consiglia di utilizzarli. La chiamata di metodi e operatori su **`CStringT`** oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#140](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_24.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_add_eq"></a> `CStringT::operator +=`

Concatena i caratteri alla fine della stringa.

```cpp
CStringT& operator+=(const CThisSimpleString& str);

template<bool bMFCDLL>
CStringT& operator+=(const const CSimpleStringT<BaseType, bMFCDLL>& str);

template<int t_nSize>
CStringT& operator+=(const CStaticString<XCHAR, t_nSize>& strSrc);
CStringT& operator+=(PCXSTR pszSrc);
CStringT& operator+=(PCYSTR pszSrc);
CStringT& operator+=(char ch);
CStringT& operator+=(unsigned char ch);
CStringT& operator+=(wchar_t ch);
CStringT& operator+=(const VARIANT& var);
```

### <a name="parameters"></a>Parametri

*`str`*\
Riferimento a un oggetto `CThisSimpleString`.

*`bMFCDLL`*\
Valore booleano che specifica se il progetto è una DLL MFC.

*`BaseType`*\
Tipo di base della stringa.

*`var`*\
Oggetto variant da concatenare a questa stringa.

*`ch`*\
Carattere ANSI o Unicode da concatenare con una stringa.

*`pszSrc`*\
Puntatore alla stringa originale da concatenare.

*`strSrc`*\
Oggetto **`CStringT`** da concatenare a questa stringa.

### <a name="remarks"></a>Commenti

L'operatore accetta un altro **`CStringT`** oggetto, un puntatore a caratteri o un singolo carattere. Quando si usa questo operatore di concatenazione, possono verificarsi eccezioni di memoria perché è possibile allocare nuove archiviazioni per i caratteri aggiunti a questo **`CStringT`** oggetto.

Per informazioni su `CThisSimpleString` , vedere la sezione Osservazioni di [CStringT:: CStringT](#cstringt).

> [!NOTE]
> Sebbene sia possibile creare **`CStringT`** istanze che contengono caratteri null incorporati, si consiglia di utilizzarli. La chiamata di metodi e operatori su **`CStringT`** oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#141](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_25.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_eq_eq"></a> `CStringT::operator ==`

Determina se due stringhe sono logicamente uguali.

```cpp
friend bool operator==(const CStringT& str1, const CStringT& str2) throw();
friend bool operator==(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator==(const CStringT& str1, PCYSTR psz2) throw();
friend bool operator==(const CStringT& str1, XCHAR ch2) throw();
friend bool operator==(PCXSTR psz1, const CStringT& str2) throw();
friend bool operator==(PCYSTR psz1, const CStringT& str2,) throw();
friend bool operator==(XCHAR ch1, const CStringT& str2,) throw();
```

### <a name="parameters"></a>Parametri

*`ch1`*\
Un carattere ANSI o Unicode per il confronto.

*`ch2`*\
Un carattere ANSI o Unicode per il confronto.

*`str1`*\
Oggetto **`CStringT`** per il confronto.

*`str2`*\
Oggetto **`CStringT`** per il confronto.

*`psz1`*\
Puntatore a una stringa con terminazione null per il confronto.

*`psz2`*\
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Commenti

Verifica se una stringa o un carattere sul lato sinistro è uguale a una stringa o a un carattere a destra e restituisce `TRUE` o di `FALSE` conseguenza.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#142](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_26.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_neq"></a> `CStringT::operator !=`

Determina se due stringhe non sono logicamente uguali.

```cpp
friend bool operator!=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator!=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator!=(const CStringT& str1, PCYSTR psz2) throw();
friend bool operator!=(const CStringT& str1, XCHAR ch2) throw();
friend bool operator!=(PCXSTR psz1, const CStringT& str2) throw();
friend bool operator!=(PCYSTR psz1, const CStringT& str2,) throw();
friend bool operator!=(XCHAR ch1, const CStringT& str2,) throw();
```

### <a name="parameters"></a>Parametri

*`ch1`*\
Carattere ANSI o Unicode da concatenare con una stringa.

*`ch2`*\
Carattere ANSI o Unicode da concatenare con una stringa.

*`str1`*\
Oggetto **`CStringT`** per il confronto.

*`str2`*\
Oggetto **`CStringT`** per il confronto.

*`psz1`*\
Puntatore a una stringa con terminazione null per il confronto.

*`psz2`*\
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Commenti

Verifica se una stringa o un carattere sul lato sinistro non è uguale a una stringa o a un carattere a destra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#143](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_27.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_lt"></a> `CStringT::operator <`

Determina se la stringa sul lato sinistro dell'operatore è minore della stringa a destra.

```cpp
friend bool operator<(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*`str1`*\
Oggetto **`CStringT`** per il confronto.

*`str2`*\
Oggetto **`CStringT`** per il confronto.

*`psz1`*\
Puntatore a una stringa con terminazione null per il confronto.

*`psz2`*\
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Commenti

Confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#144](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_28.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_gt"></a> `CStringT::operator >`

Determina se la stringa sul lato sinistro dell'operatore è maggiore della stringa a destra.

```cpp
friend bool operator>(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*`str1`*\
Oggetto **`CStringT`** per il confronto.

*`str2`*\
Oggetto **`CStringT`** per il confronto.

*`psz1`*\
Puntatore a una stringa con terminazione null per il confronto.

*`psz2`*\
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Commenti

Confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#145](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_29.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_lt_eq"></a> `CStringT::operator <=`

Determina se la stringa a sinistra dell'operatore è minore o uguale alla stringa sul lato destro.

```cpp
friend bool operator<=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<=(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*`str1`*\
Oggetto **`CStringT`** per il confronto.

*`str2`*\
Oggetto **`CStringT`** per il confronto.

*`psz1`*\
Puntatore a una stringa con terminazione null per il confronto.

*`psz2`*\
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Commenti

Confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#146](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_30.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_gt_eq"></a> `CStringT::operator >=`

Determina se la stringa a sinistra dell'operatore è maggiore o uguale alla stringa sul lato destro.

```cpp
friend bool operator>=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>=(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*`str1`*\
Oggetto **`CStringT`** per il confronto.

*`str2`*\
Oggetto **`CStringT`** per il confronto.

*`psz1`*\
Puntatore a una stringa per il confronto.

*`psz2`*\
Puntatore a una stringa per il confronto.

### <a name="remarks"></a>Commenti

Confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#147](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_31.cpp)]

## <a name="cstringtremove"></a><a name="remove"></a> `CStringT::Remove`

Rimuove tutte le istanze del carattere specificato dalla stringa.

```cpp
int Remove(XCHAR chRemove);
```

### <a name="parameters"></a>Parametri

*`chRemove`*\
Carattere da rimuovere da una stringa.

### <a name="return-value"></a>Valore restituito

Numero di caratteri rimossi dalla stringa. Zero se la stringa non viene modificata.

### <a name="remarks"></a>Commenti

I confronti per il carattere distinguono tra maiuscole e minuscole.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#129](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_32.cpp)]

## <a name="cstringtreplace"></a><a name="replace"></a> `CStringT::Replace`

Sono disponibili due versioni di `Replace` . La prima versione sostituisce una o più copie di una sottostringa usando un'altra sottostringa. Entrambe le sottostringhe sono con terminazione null. La seconda versione sostituisce una o più copie di un carattere usando un altro carattere. Entrambe le versioni operano sui dati di tipo carattere archiviati in **`CStringT`** .

```cpp
int Replace(PCXSTR pszOld, PCXSTR pszNew);
int Replace(XCHAR chOld, XCHAR chNew);
```

### <a name="parameters"></a>Parametri

*`pszOld`*\
Puntatore a una stringa con terminazione null da sostituire *`pszNew`* .

*`pszNew`*\
Puntatore a una stringa con terminazione null che sostituisce *`pszOld`* .

*`chOld`*\
Carattere da sostituire *`chNew`* .

*`chNew`*\
Carattere sostitutivo *`chOld`* .

### <a name="return-value"></a>Valore restituito

Restituisce il numero di istanze sostituite del carattere o della sottostringa oppure zero se la stringa non viene modificata.

### <a name="remarks"></a>Commenti

`Replace` può modificare la lunghezza della stringa perché *`pszNew`* e *`pszOld`* non devono avere la stessa lunghezza e alcune copie della sottostringa precedente possono essere modificate in una nuova. La funzione esegue una corrispondenza con distinzione tra maiuscole e minuscole.

Esempi di **`CStringT`** istanze sono `CString` , `CStringA` e `CStringW` .

Per `CStringA` , `Replace` funziona con caratteri ANSI o multibyte (MBCS). Per `CStringW` , `Replace` funziona con caratteri wide.

Per `CString` , il tipo di dati character viene selezionato in fase di compilazione, a seconda che le costanti nella tabella seguente siano definite.

|Costante definita|Tipo di dati character|
|----------------------|-------------------------|
|`_UNICODE`|Caratteri wide|
|`_MBCS`|Caratteri multibyte|
|Nessuno|Caratteri a byte singolo|
|Entrambe|Non definito|

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#200](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_33.cpp)]

## <a name="cstringtreversefind"></a><a name="reversefind"></a> `CStringT::ReverseFind`

Cerca **`CStringT`** nell'oggetto l'ultima corrispondenza di un carattere.

```cpp
int ReverseFind(XCHAR ch) const throw();
```

### <a name="parameters"></a>Parametri

*`ch`*\
Carattere da cercare.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'ultimo carattere in questo **`CStringT`** oggetto che corrisponde al carattere richiesto oppure-1 se il carattere non viene trovato.

### <a name="remarks"></a>Commenti

La funzione è simile alla funzione di run-time `strrchr` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#130](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_34.cpp)]

## <a name="cstringtright"></a><a name="right"></a> `CStringT::Right`

Estrae l'ultimo carattere (ovvero più a destra) *`nCount`* da questo **`CStringT`** oggetto e restituisce una copia della sottostringa estratta.

```cpp
CStringT Right(int nCount) const;
```

### <a name="parameters"></a>Parametri

*`nCount`*\
Numero di caratteri da estrarre da questo **`CStringT`** oggetto.

### <a name="return-value"></a>Valore restituito

**`CStringT`** Oggetto che contiene una copia dell'intervallo di caratteri specificato. L' **`CStringT`** oggetto restituito può essere vuoto.

### <a name="remarks"></a>Commenti

Se *`nCount`* supera la lunghezza della stringa, l'intera stringa viene estratta. `Right` è simile alla funzione di base, `Right` ad eccezione del fatto che gli indici di base sono in base zero.

Per i set di caratteri multibyte (MBCS), *`nCount`* fa riferimento a ogni carattere a 8 bit, ovvero un byte iniziale e finale in un carattere multibyte vengono conteggiati come due caratteri.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#131](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_35.cpp)]

## <a name="cstringtsetsysstring"></a><a name="setsysstring"></a> `CStringT::SetSysString`

Rialloca l' **`BSTR`** oggetto a cui punta *`pbstr`* e ne copia il contenuto **`CStringT`** , incluso il carattere null.

```cpp
BSTR SetSysString(BSTR* pbstr) const;
```

### <a name="parameters"></a>Parametri

*`pbstr`*\
Puntatore a una stringa di caratteri.

### <a name="return-value"></a>Valore restituito

La nuova stringa.

### <a name="remarks"></a>Commenti

A seconda del contenuto dell' **`CStringT`** oggetto, è possibile modificare il valore dell'oggetto **`BSTR`** a cui fa riferimento *`pbstr`* . La funzione genera un'eccezione `CMemoryException` se esiste una memoria insufficiente.

Questa funzione viene in genere usata per modificare il valore delle stringhe passate per riferimento per l'automazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#132](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_36.cpp)]

## <a name="cstringtspanexcluding"></a><a name="spanexcluding"></a> `CStringT::SpanExcluding`

Estrae i caratteri dalla stringa, a partire dal primo carattere, che non sono inclusi nel set di caratteri identificato da *`pszCharSet`* .

```cpp
CStringT SpanExcluding(PCXSTR pszCharSet) const;
```

### <a name="parameters"></a>Parametri

*`pszCharSet`*\
Stringa interpretata come un set di caratteri.

### <a name="return-value"></a>Valore restituito

Sottostringa che contiene caratteri nella stringa che non si *`pszCharSet`* trovano in, a partire dal primo carattere della stringa e terminando con il primo carattere della stringa presente anche in *`pszCharSet`* (ovvero, a partire dal primo carattere della stringa e fino a escludere il primo carattere della stringa trovato *`pszCharSet`* ). Restituisce l'intera stringa se *`pszCharSet`* nella stringa non viene trovato alcun carattere in.

### <a name="remarks"></a>Commenti

`SpanExcluding` estrae e restituisce tutti i caratteri che precedono la prima occorrenza di un carattere da *`pszCharSet`* (in altre parole, *`pszCharSet`* non viene restituito il carattere da e tutti i caratteri che lo seguono nella stringa). Se *`pszCharSet`* nella stringa non viene trovato alcun carattere, `SpanExcluding` restituisce l'intera stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#133](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_37.cpp)]

## <a name="cstringtspanincluding"></a><a name="spanincluding"></a> `CStringT::SpanIncluding`

Estrae i caratteri dalla stringa, a partire dal primo carattere, presenti nel set di caratteri identificato da *`pszCharSet`* .

```cpp
CStringT SpanIncluding(PCXSTR pszCharSet) const;
```

### <a name="parameters"></a>Parametri

*`pszCharSet`*\
Stringa interpretata come un set di caratteri.

### <a name="return-value"></a>Valore restituito

Una sottostringa che contiene caratteri nella stringa che si trovano in *`pszCharSet`* , a partire dal primo carattere della stringa e termina quando viene trovato un carattere nella stringa che non è presente in *`pszCharSet`* . `SpanIncluding` Restituisce una sottostringa vuota se il primo carattere nella stringa non è incluso nel set specificato.

### <a name="remarks"></a>Commenti

Se il primo carattere della stringa non è incluso nel set di caratteri, `SpanIncluding` restituisce una stringa vuota. In caso contrario, restituisce una sequenza di caratteri consecutivi presenti nel set.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#134](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_38.cpp)]

## <a name="cstringttokenize"></a><a name="tokenize"></a> `CStringT::Tokenize`

Trova il token successivo in una stringa di destinazione

```cpp
CStringT Tokenize(PCXSTR pszTokens, int& iStart) const;
```

### <a name="parameters"></a>Parametri

*`pszTokens`*\
Stringa contenente delimitatori di token. L'ordine di questi delimitatori non è importante.

*`iStart`*\
Indice in base zero in corrispondenza del quale iniziare la ricerca.

### <a name="return-value"></a>Valore restituito

**`CStringT`** Oggetto contenente il valore del token corrente.

### <a name="remarks"></a>Commenti

La `Tokenize` funzione trova il token successivo nella stringa di destinazione. Il set di caratteri in *pszTokens* specifica i possibili delimitatori del token da trovare. In ogni chiamata alla `Tokenize` funzione inizia da *`iStart`* , ignora i delimitatori iniziali e restituisce un **`CStringT`** oggetto contenente il token corrente, ovvero la stringa di caratteri fino al carattere delimitatore successivo. Il valore di *`iStart`* viene aggiornato in modo che sia la posizione successiva al carattere delimitatore finale, oppure-1 se è stata raggiunta la fine della stringa. Più token possono essere suddivisi dal resto della stringa di destinazione da una serie di chiamate a `Tokenize` , usando *`iStart`* per tenere traccia della posizione nella stringa in cui deve essere letto il token successivo. Quando non sono presenti altri token, la funzione restituirà una stringa vuota e *`iStart`* verrà impostata su-1.

Diversamente dalle funzioni tokenize CRT come [`strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l`](../../c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md) , `Tokenize` non modifica la stringa di destinazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#135](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_39.cpp)]

L'output di questo esempio è il seguente:

```Output
Resulting Token: First
Resulting Token: Second
Resulting Token: Third
```

## <a name="cstringttrim"></a><a name="trim"></a> `CStringT::Trim`

Taglia i caratteri iniziali e finali dalla stringa.

```cpp
CStringT& Trim(XCHAR chTarget);
CStringT& Trim(PCXSTR pszTargets);
CStringT& Trim();
```

### <a name="parameters"></a>Parametri

*`chTarget`*\
Carattere di destinazione da tagliare.

*`pszTargets`*\
Puntatore a una stringa che contiene i caratteri di destinazione da tagliare. Tutte le occorrenze iniziali e finali dei caratteri in verranno rimosse *`pszTargets`* dall' **`CStringT`** oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce la stringa tagliata.

### <a name="remarks"></a>Commenti

Rimuove tutte le occorrenze iniziali e finali di uno dei seguenti elementi:

- Il carattere specificato da *`chTarget`* .

- Tutti i caratteri presenti nella stringa specificata da *`pszTargets`* .

- Whitespace.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#136](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_40.cpp)]

L'output di questo esempio è il seguente:

```Output
Before: "******Soccer is best, but liquor is quicker!!!!!"
After : "Soccer is best, but liquor is quicker"
```

## <a name="cstringttrimleft"></a><a name="trimleft"></a> `CStringT::TrimLeft`

Taglia i caratteri iniziali dalla stringa.

```cpp
CStringT& TrimLeft(XCHAR chTarget);
CStringT& TrimLeft(PCXSTR pszTargets);
CStringT& TrimLeft();
```

### <a name="parameters"></a>Parametri

*`chTarget`*\
Carattere di destinazione da tagliare.

*`pszTargets`*\
Puntatore a una stringa che contiene i caratteri di destinazione da tagliare. Tutte le occorrenze iniziali dei caratteri in *`pszTargets`* verranno rimosse dall' **`CStringT`** oggetto.

### <a name="return-value"></a>Valore restituito

Stringa tagliata risultante.

### <a name="remarks"></a>Commenti

Rimuove tutte le occorrenze iniziali e finali di uno dei seguenti elementi:

- Il carattere specificato da *`chTarget`* .

- Tutti i caratteri presenti nella stringa specificata da *`pszTargets`* .

- Whitespace.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#137](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_41.cpp)]

## <a name="cstringttrimright"></a><a name="trimright"></a> `CStringT::TrimRight`

Taglia i caratteri finali dalla stringa.

```cpp
CStringT& TrimRight(XCHAR chTarget);
CStringT& TrimRight(PCXSTR pszTargets);
CStringT& TrimRight();
```

### <a name="parameters"></a>Parametri

*`chTarget`*\
Carattere di destinazione da tagliare.

*`pszTargets`*\
Puntatore a una stringa che contiene i caratteri di destinazione da tagliare. Tutte le occorrenze finali dei caratteri in *`pszTargets`* verranno tagliate dall' **`CStringT`** oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce l' **`CStringT`** oggetto che contiene la stringa tagliata.

### <a name="remarks"></a>Commenti

Rimuove le occorrenze finali di uno degli elementi seguenti:

- Il carattere specificato da *`chTarget`* .

- Tutti i caratteri presenti nella stringa specificata da *`pszTargets`* .

- Whitespace.

La `CStringT& TrimRight(XCHAR chTarget)` versione accetta un parametro di tipo carattere e rimuove tutte le copie del carattere dalla fine dei dati di tipo **`CStringT`** stringa. Inizia dalla fine della stringa e lavora verso la parte anteriore. Si interrompe quando trova un carattere diverso o quando **`CStringT`** esaurisce i dati di tipo carattere.

La `CStringT& TrimRight(PCXSTR pszTargets)` versione accetta una stringa con terminazione null che contiene tutti i caratteri diversi da cercare. Vengono rimosse tutte le copie di tali caratteri nell' **`CStringT`** oggetto. Inizia alla fine della stringa e lavora verso la parte anteriore. Si interrompe quando trova un carattere che non si trova nella stringa di destinazione o quando **`CStringT`** esaurisce i dati di tipo carattere. Non tenta di trovare la corrispondenza con la stringa di destinazione intera a una sottostringa alla fine di **`CStringT`** .

La `CStringT& TrimRight()` versione non richiede parametri. Taglia tutti gli spazi vuoti finali dalla fine della **`CStringT`** stringa. Gli spazi vuoti possono essere interruzioni di riga, spazi o tabulazioni.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#138](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_42.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)\
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)\
[CSimpleStringT (classe)](../../atl-mfc-shared/reference/csimplestringt-class.md)
