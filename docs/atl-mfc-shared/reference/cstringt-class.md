---
title: Classe CstringT
ms.date: 03/27/2019
f1_keywords:
- CStringT
- ATLSTR/ATL::CStringT
- ATLSTR/ATL::CStringT::CStringT
- ATLSTR/ATL::CStringT::AllocSysString
- ATLSTR/ATL::CStringT::AnsiToOem
- ATLSTR/ATL::CStringT::AppendFormat
- ATLSTR/ATL::CStringT::Collate
- ATLSTR/ATL::CStringT::CollateNoCase
- ATLSTR/ATL::CStringT::Compare
- ATLSTR/ATL::CStringT::CompareNoCase
- ATLSTR/ATL::CStringT::Delete
- ATLSTR/ATL::CStringT::Find
- ATLSTR/ATL::CStringT::FindOneOf
- ATLSTR/ATL::CStringT::Format
- ATLSTR/ATL::CStringT::FormatMessage
- ATLSTR/ATL::CStringT::FormatMessageV
- ATLSTR/ATL::CStringT::FormatV
- ATLSTR/ATL::CStringT::GetEnvironmentVariable
- ATLSTR/ATL::CStringT::Insert
- ATLSTR/ATL::CStringT::Left
- ATLSTR/ATL::CStringT::LoadString
- ATLSTR/ATL::CStringT::MakeLower
- ATLSTR/ATL::CStringT::MakeReverse
- ATLSTR/ATL::CStringT::MakeUpper
- ATLSTR/ATL::CStringT::Mid
- ATLSTR/ATL::CStringT::OemToAnsi
- ATLSTR/ATL::CStringT::Remove
- ATLSTR/ATL::CStringT::Replace
- ATLSTR/ATL::CStringT::ReverseFind
- ATLSTR/ATL::CStringT::Right
- ATLSTR/ATL::CStringT::SetSysString
- ATLSTR/ATL::CStringT::SpanExcluding
- ATLSTR/ATL::CStringT::SpanIncluding
- ATLSTR/ATL::CStringT::Tokenize
- ATLSTR/ATL::CStringT::Trim
- ATLSTR/ATL::CStringT::TrimLeft
- ATLSTR/ATL::CStringT::TrimRight
- CSTRINGT/CStringT
- CSTRINGT/CStringT::CStringT
- CSTRINGT/CStringT::AllocSysString
- CSTRINGT/CStringT::AnsiToOem
- CSTRINGT/CStringT::AppendFormat
- CSTRINGT/CStringT::Collate
- CSTRINGT/CStringT::CollateNoCase
- CSTRINGT/CStringT::Compare
- CSTRINGT/CStringT::CompareNoCase
- CSTRINGT/CStringT::Delete
- CSTRINGT/CStringT::Find
- CSTRINGT/CStringT::FindOneOf
- CSTRINGT/CStringT::Format
- CSTRINGT/CStringT::FormatMessage
- CSTRINGT/CStringT::FormatMessageV
- CSTRINGT/CStringT::FormatV
- CSTRINGT/CStringT::GetEnvironmentVariable
- CSTRINGT/CStringT::Insert
- CSTRINGT/CStringT::Left
- CSTRINGT/CStringT::LoadString
- CSTRINGT/CStringT::MakeLower
- CSTRINGT/CStringT::MakeReverse
- CSTRINGT/CStringT::MakeUpper
- CSTRINGT/CStringT::Mid
- CSTRINGT/CStringT::OemToAnsi
- CSTRINGT/CStringT::Remove
- CSTRINGT/CStringT::Replace
- CSTRINGT/CStringT::ReverseFind
- CSTRINGT/CStringT::Right
- CSTRINGT/CStringT::SetSysString
- CSTRINGT/CStringT::SpanExcluding
- CSTRINGT/CStringT::SpanIncluding
- CSTRINGT/CStringT::Tokenize
- CSTRINGT/CStringT::Trim
- CSTRINGT/CStringT::TrimLeft
- CSTRINGT/CStringT::TrimRight
helpviewer_keywords:
- strings [C++], in ATL
- shared classes, CStringT
- CStringT class
ms.assetid: 7cacc59c-425f-40f1-8f5b-6db921318ec9
ms.openlocfilehash: 8fcce4c426cd99785d34dc080f238cc78cdfee36
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81746703"
---
# <a name="cstringt-class"></a>Classe CstringT

Questa classe `CStringT` rappresenta un oggetto.

## <a name="syntax"></a>Sintassi

```
template<typename BaseType, class StringTraits>
class CStringT :
    public CSimpleStringT<BaseType,
        _CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType, StringTraits>::c_bIsMFCDLLTraits>
```

#### <a name="parameters"></a>Parametri

*BaseType*<br/>
Tipo di carattere della classe stringa. Può essere uno dei valori seguenti:

- **char** (per le stringhe di caratteri ANSI).

- **wchar_t** (per le stringhe di caratteri Unicode).

- TCHAR (sia per le stringhe di caratteri ANSI che Unicode).

*Tratti stringa*<br/>
Determina se la classe di stringhe richiede il supporto della libreria di runtime c (CRT) e dove si trovano le risorse stringa. Può essere uno dei valori seguenti:

- **itATL< wchar_t wchar_t &#124;** **char** &#124; **TCHAR, ChTraitsCRT< &#124;** wchar_t wchar_t **wchar_t wchar_t** &#124; **t > >CHAR**

   La classe richiede il supporto CRT e cerca `m_hInstResource` le stringhe di risorsa nel modulo specificato da (un membro della classe module dell'applicazione).

- **TraitATL<** wchar_t **&#124;** &#124; &#124; **&#124; TCHAR, ChTraitsOS< wchar_t &#124;** **&#124;** **&#124; > >**

   La classe non richiede il supporto CRT e cerca `m_hInstResource` le stringhe di risorsa nel modulo specificato da (un membro della classe module dell'applicazione).

- **StrTraitMFC<** wchar_t &#124; **char** &#124; **TCHAR, ChTraitsCRT< wchar_t &#124;** **&#124;** **tCHAR > >**

   La classe richiede il supporto CRT e cerca stringhe di risorse utilizzando l'algoritmo di ricerca MFC standard.

- **StrTraitMFC<** wchar_t< &#124; **&#124;** **TCHAR, ChTraitsOS< wchar_t &#124;** **char** &#124; **TCHAR > >**

   La classe non richiede il supporto CRT e cerca stringhe di risorse utilizzando l'algoritmo di ricerca MFC standard.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringT::CStringT](#cstringt)|Costruisce un `CStringT` oggetto in vari modi.|
|[CStringT:: CStringT](#_dtorcstringt)|Elimina un oggetto `CStringT` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringT::AllocSysString](#allocsysstring)|Alloca un BSTR dai `CStringT` dati.|
|[CStringT::AnsiToOem](#ansitooem)|Esegue una conversione sul posto dal set di caratteri ANSI al set di caratteri OEM.|
|[CStringT::AppendFormat](#appendformat)|Aggiunge dati formattati a `CStringT` un oggetto esistente.|
|[CStringT::Collate](#collate)|Confronta due stringhe (maiuscole/minuscole, utilizza informazioni specifiche delle impostazioni locali).|
|[CStringT::CollateNoCase](#collatenocase)|Confronta due stringhe (senza distinzione tra maiuscole e minuscole, utilizza informazioni specifiche delle impostazioni locali).|
|[CStringT::Compare](#compare)|Confronta due stringhe (maiuscole/minuscole).|
|[CStringT::CompareNoCase](#comparenocase)|Confronta due stringhe (senza distinzione tra maiuscole e minuscole).|
|[CStringT::Delete](#delete)|Elimina uno o più caratteri da una stringa.|
|[CStringT::Find](#find)|Trova un carattere o una sottostringa all'interno di una stringa più grande.|
|[CStringT::FindOneOf](#findoneof)|Trova il primo carattere corrispondente da un set.|
|[CStringT::Formato](#format)|Formatta `sprintf` la stringa così come fa.|
|[CStringT::FormatMessage](#formatmessage)|Formatta una stringa di messaggio.|
|[CStringT::FormatMessageV](#formatmessagev)|Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.|
|[CStringT::FormatV](#formatv)|Formatta la stringa utilizzando un elenco di variabili di argomenti.|
|[CStringT::GetEnvironmentVariableCStringT::GetEnvironmentVariable](#getenvironmentvariable)|Imposta la stringa sul valore della variabile di ambiente specificata.|
|[CStringT::Inserire](#insert)|Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.|
|[CStringT::Sinistra](#left)|Estrae la parte sinistra di una stringa.|
|[Stringa::StringaDic::LoadString](#loadstring)|Carica un `CStringT` oggetto esistente da una risorsa di Windows.Loads an existing object from a Windows resource.|
|[CStringT::MakeLower](#makelower)|Converte tutti i caratteri di questa stringa in caratteri minuscoli.|
|[CStringT::MakeReverse](#makereverse)|Inverte la stringa.|
|[CStringT::MakeUpper](#makeupper)|Converte tutti i caratteri di questa stringa in caratteri maiuscoli.|
|[CStringT::Mid](#mid)|Estrae la parte centrale di una stringa.|
|[CStringT::OemToAnsi](#oemtoansi)|Esegue una conversione sul posto dal set di caratteri OEM al set di caratteri ANSI.|
|[CStringT::Rimuovere](#remove)|Rimuove i caratteri indicati da una stringa.|
|[CStringT::Sostituisci](#replace)|Sostituisce i caratteri indicati con altri caratteri.|
|[CStringT::ReverseFind](#reversefind)|Trova un carattere all'interno di una stringa più grande; inizia dalla fine.|
|[CStringT::Destra](#right)|Estrae la parte destra di una stringa.|
|[Stringa::SetSysString](#setsysstring)|Imposta un oggetto BSTR esistente `CStringT` con i dati di un oggetto.|
|[CStringT::SpanExcluding (Eccezione dei valori di CStringT::SpanExcluding)](#spanexcluding)|Estrae i caratteri dalla stringa, a partire dal primo carattere, che non si trovano nel set di caratteri identificato da `pszCharSet`.|
|[CStringT::SpanIncluding](#spanincluding)|Estrae una sottostringa che contiene solo i caratteri in un set.|
|[CStringT::Tokenize](#tokenize)|Estrae i token specificati in una stringa di destinazione.|
|[CStringT::Trim](#trim)|Taglia tutti gli spazi iniziali e finali dalla stringa.|
|[CStringT::TrimLeft](#trimleft)|Taglia gli spazi vuoti iniziali dalla stringa.|
|[CStringT::TrimRight](#trimright)|Taglia gli spazi vuoti finali dalla stringa.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[CStringT::operatore](#operator_eq)|Assegna un nuovo valore `CStringT` a un oggetto.|
|[Proprietà CStringT::operatore .](#operator_add)|Concatena due stringhe o un carattere e una stringa.|
|[CStringT::operatore](#operator_add_eq)|Concatena una nuova stringa alla fine di una stringa esistente.|
|[CStringT::operatore](#operator_eq_eq)|Determina se due stringhe sono logicamente uguali.|
|[CStringT::operator !](#operator_neq)|Determina se due stringhe non sono logicamente uguali.|
|[CStringT::operatore&lt;](#operator_lt)|Determina se la stringa sul lato sinistro dell'operatore è minore della stringa sul lato destro.|
|[CStringT::operatore&gt;](#operator_gt)|Determina se la stringa sul lato sinistro dell'operatore è maggiore della stringa sul lato destro.|
|[CStringT::operatore&lt;=](#operator_lt_eq)|Determina se la stringa sul lato sinistro dell'operatore è minore o uguale alla stringa sul lato destro.|
|[CStringT::operatore&gt;=](#operator_gt_eq)|Determina se la stringa sul lato sinistro dell'operatore è maggiore o uguale alla stringa sul lato destro.|

## <a name="remarks"></a>Osservazioni

`CStringT`eredita dalla [classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md). Le funzionalità avanzate, come la manipolazione dei caratteri, l'ordinamento e la ricerca, vengono implementate da `CStringT`.

> [!NOTE]
> `CStringT`gli oggetti sono in grado di generare eccezioni. Ciò si `CStringT` verifica quando un oggetto esaurisce la memoria per qualsiasi motivo.

Un `CStringT` oggetto è costituito da una sequenza di caratteri a lunghezza variabile. `CStringT`fornisce funzioni e operatori utilizzando una sintassi simile a quella di Basic. Gli operatori di concatenazione e confronto, `CStringT` insieme alla gestione semplificata della memoria, semplificano l'utilizzo degli oggetti rispetto alle normali matrici di caratteri.

> [!NOTE]
> Sebbene sia possibile `CStringT` creare istanze che contengono caratteri null incorporati, è consigliabile non farlo. La chiamata di `CStringT` metodi e operatori su oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

Utilizzando diverse combinazioni `BaseType` di `StringTraits` parametri `CStringT` e , gli oggetti possono essere disponibili nei tipi seguenti, che sono stati predefiniti dalle librerie ATL.

Se si utilizza in un'applicazione ATL:

`CString`, `CStringA`, `CStringW` e vengono esportati dalla DLL MFC (MFC90. DLL), mai dalle DLL dell'utente. Questo viene fatto `CStringT` per evitare che venga moltiplicato.

> [!NOTE]
> Se il codice contiene la soluzione alternativa per gli errori del linker descritta in [Esportazione di classi stringa mediante CStringT](../../atl-mfc-shared/exporting-string-classes-using-cstringt.md), è necessario rimuoverlo. Non è più necessario.

I seguenti tipi di stringa sono disponibili all'interno di applicazioni basate su MFC:

|Tipo CStringT|Dichiarazione|
|-------------------|-----------------|
|`CStringA`|Una stringa di tipo di carattere ANSI con supporto CRT.|
|`CStringW`|Una stringa di tipo di carattere Unicode con supporto CRT.|
|`CString`|Tipi di caratteri ANSI e Unicode con supporto CRT.|

I seguenti tipi di stringa sono disponibili nei progetti in cui è definito ATL_CSTRING_NO_CRT:

|Tipo CStringT|Dichiarazione|
|-------------------|-----------------|
|`CAtlStringA`|Una stringa di tipo di carattere ANSI senza supporto CRT.|
|`CAtlStringW`|Una stringa di tipo di carattere Unicode senza supporto CRT.|
|`CAtlString`|Tipi di caratteri ANSI e Unicode senza supporto CRT.|

I seguenti tipi di stringa sono disponibili nei progetti in cui ATL_CSTRING_NO_CRT non è definito:

|Tipo CStringT|Dichiarazione|
|-------------------|-----------------|
|`CAtlStringA`|Una stringa di tipo di carattere ANSI con supporto CRT.|
|`CAtlStringW`|Una stringa di tipo di carattere Unicode con supporto CRT.|
|`CAtlString`|Tipi di caratteri ANSI e Unicode con supporto CRT.|

`CString`anche gli oggetti hanno le seguenti caratteristiche:

- `CStringT`gli oggetti possono crescere come risultato di operazioni di concatenazione.

- `CStringT`gli oggetti seguono la "semantica dei valori". Considerare un `CStringT` oggetto come una stringa effettiva, non come un puntatore a una stringa.

- È possibile `CStringT` sostituire `PCXSTR` liberamente gli oggetti per gli argomenti della funzione.

- Gestione della memoria personalizzata per i buffer di stringa. Per ulteriori informazioni, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="cstringt-predefined-types"></a>Tipi predefiniti CStringT

Poiché `CStringT` utilizza un argomento di modello per definire il tipo di carattere [(wchar_t](../../c-runtime-library/standard-types.md) o [char](../../c-runtime-library/standard-types.md)) supportato, a volte i tipi di parametro del metodo possono essere complicati. Per semplificare questo problema, viene definito e utilizzato `CStringT` un set di tipi predefiniti in tutta la classe. Nella tabella seguente sono elencati i vari tipi:

|Nome|Descrizione|
|----------|-----------------|
|`XCHAR`|Un singolo carattere **(wchar_t** o **char**) `CStringT` con lo stesso tipo di carattere dell'oggetto.|
|`YCHAR`|Un singolo carattere **(wchar_t** o **char**) `CStringT` con il tipo di carattere opposto come oggetto.|
|`PXSTR`|Puntatore a una stringa di **char**caratteri **(wchar_t** o char `CStringT` ) con lo stesso tipo di carattere dell'oggetto.|
|`PYSTR`|Puntatore a una stringa di **char**caratteri **(wchar_t** o char `CStringT` ) con il tipo di carattere opposto come oggetto.|
|`PCXSTR`|Puntatore a una stringa di caratteri **const** **(wchar_t** o `CStringT` **char**) con lo stesso tipo di carattere dell'oggetto.|
|`PCYSTR`|Puntatore a una stringa di caratteri **const** **(wchar_t** o `CStringT` **char**) con il tipo di carattere opposto come oggetto.|

> [!NOTE]
> Il codice che in precedenza utilizzava metodi non `CString` documentati di (ad `CStringT` `GetBuffer` `ReleaseBuffer` `AssignCopy`esempio ) deve essere sostituito con codice che utilizza i seguenti metodi documentati di (ad esempio ). Questi metodi vengono `CSimpleStringT`ereditati da .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Csimplestringt](../../atl-mfc-shared/reference/csimplestringt-class.md)

`CStringT`

## <a name="requirements"></a>Requisiti

|Intestazione|Da usare per|
|------------|-------------|
|cstringt.h|Oggetti stringa solo MFC|
|atlstr.h|Oggetti stringa non MFC|

## <a name="cstringtallocsysstring"></a><a name="allocsysstring"></a>CStringT::AllocSysString

Alloca una stringa compatibile con l'automazione del tipo `CStringT` BSTR e vi copia il contenuto dell'oggetto, incluso il carattere di terminazione null.

```
BSTR AllocSysString() const;
```

### <a name="return-value"></a>Valore restituito

Stringa appena allocata.

### <a name="remarks"></a>Osservazioni

Nei programmi MFC, viene generata una [classe CMemoryException](../../mfc/reference/cmemoryexception-class.md) se non esiste memoria sufficiente. Nei programmi ATL viene generata [un'eccezione CAtlException.](../../atl/reference/catlexception-class.md) Questa funzione viene in genere utilizzata per restituire stringhe per l'automazione.

In genere, se questa stringa viene passata a una funzione COM come parametro [in], è necessario che il chiamante liberi la stringa. Questa operazione può essere eseguita utilizzando [SysFreeString](/windows/win32/api/oleauto/nf-oleauto-sysfreestring), come descritto in Windows SDK. Per ulteriori informazioni, vedere [Allocazione e rilascio di memoria per un bSTR](../../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md).

Per ulteriori informazioni sulle funzioni di allocazione OLE in Windows, vedere [SysAllocString](/windows/win32/api/oleauto/nf-oleauto-sysallocstring) in Windows SDK.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CStringT::AllocSysString`.

[!code-cpp[NVC_ATLMFC_Utilities#105](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_1.cpp)]

## <a name="cstringtansitooem"></a><a name="ansitooem"></a>CStringT::AnsiToOem

Converte tutti i `CStringT` caratteri in questo oggetto dal set di caratteri ANSI al set di caratteri OEM.

```cpp
void AnsiToOem();
```

### <a name="remarks"></a>Osservazioni

La funzione non è disponibile se è definito _UNICODE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#106](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_2.cpp)]

## <a name="cstringtappendformat"></a><a name="appendformat"></a>CStringT::AppendFormat

Aggiunge dati formattati a `CStringT` un oggetto esistente.

```cpp
void __cdecl AppendFormat(PCXSTR pszFormat, [, argument] ...);
void __cdecl AppendFormat(UINT nFormatID, [, argument] ...);
```

### <a name="parameters"></a>Parametri

*formato pszFormat*<br/>
Stringa di controllo di formato.

*nId FormatID (informazioni in questo campo)*<br/>
Identificatore di risorsa stringa che contiene la stringa di controllo del formato.

*argument*<br/>
Argomenti facoltativi.

### <a name="remarks"></a>Osservazioni

Questa funzione formatta e aggiunge una `CStringT`serie di caratteri e valori nel file . Ogni argomento facoltativo (se presente) viene convertito e aggiunto in base alla specifica di formato corrispondente in *pszFormat* o dalla risorsa stringa identificata da *nFormatID*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#107](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_3.cpp)]

## <a name="cstringtcollate"></a><a name="collate"></a>CStringT::Collate

Confronta due stringhe utilizzando la `_tcscoll`funzione di testo generico.

```
int Collate(PCXSTR psz) const throw();
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
L'altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

zero se le stringhe sono identiche, `CStringT` < 0 se l'oggetto `CStringT` è minore di *psz*o > 0 se l'oggetto è maggiore di *psz*.

### <a name="remarks"></a>Osservazioni

La funzione `_tcscoll`di testo generico , definita in TCHAR. H, esegue `strcoll`il `wcscoll`mapping `_mbscoll`a , , o , a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe in base alla tabella codici attualmente in uso. Per ulteriori informazioni, vedere [strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).

## <a name="cstringtcollatenocase"></a><a name="collatenocase"></a>CStringT::CollateNoCase

Confronta due stringhe utilizzando la `_tcscoll`funzione di testo generico.

```
int CollateNoCase(PCXSTR psz) const throw();
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
L'altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

zero se le stringhe sono identiche (ignorando la distinzione tra maiuscole e `CStringT` minuscole), < 0 se l'oggetto è minore di *psz* (ignorando la distinzione tra maiuscole e minuscole) o > 0 se l'oggetto `CStringT` è maggiore di *psz* (ignorando la distinzione tra maiuscole e minuscole).

### <a name="remarks"></a>Osservazioni

La funzione `_tcscoll`di testo generico , definita in TCHAR. H, esegue `stricoll`il `wcsicoll`mapping `_mbsicoll`a , , o , a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto senza distinzione tra maiuscole e minuscole delle stringhe, in base alla tabella codici attualmente in uso. Per ulteriori informazioni, vedere [strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#109](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_4.cpp)]

## <a name="cstringtcompare"></a><a name="compare"></a>CStringT::Compare

Confronta due stringhe (maiuscole/minuscole).

```
int Compare(PCXSTR psz) const;
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
L'altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

zero se le stringhe sono identiche, `CStringT` < 0 se l'oggetto `CStringT` è minore di *psz*o > 0 se l'oggetto è maggiore di *psz*.

### <a name="remarks"></a>Osservazioni

La funzione `_tcscmp`di testo generico , definita in TCHAR. H, esegue `strcmp`il `wcscmp`mapping `_mbscmp`a , , o , a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe e non è interessata dalle impostazioni locali. Per ulteriori informazioni, vedere [strcmp, wcscmp_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md).

Se la stringa contiene valori Null incorporati, ai fini del confronto la stringa viene considerata troncata in corrispondenza del primo carattere null incorporato.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso di `CStringT::Compare`.

[!code-cpp[NVC_ATLMFC_Utilities#110](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_5.cpp)]

## <a name="cstringtcomparenocase"></a><a name="comparenocase"></a>CStringT::CompareNoCase

Confronta due stringhe (senza distinzione tra maiuscole e minuscole).

```
int CompareNoCase(PCXSTR psz) const throw();
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
L'altra stringa utilizzata per il confronto.

### <a name="return-value"></a>Valore restituito

zero se le stringhe sono identiche (ignorando la distinzione tra maiuscole e `CStringT` minuscole), <0 se l'oggetto è minore di *psz* (ignorando la distinzione tra maiuscole e minuscole) o >0 se l'oggetto `CStringT` è maggiore di *psz* (ignorando la distinzione tra maiuscole e minuscole).

### <a name="remarks"></a>Osservazioni

La funzione `_tcsicmp`di testo generico , definita in TCHAR. H, esegue `_stricmp`il `_wcsicmp` `_mbsicmp`mapping a , o , a seconda del set di caratteri definito in fase di compilazione. Ogni funzione esegue un confronto senza distinzione tra maiuscole e minuscole delle stringhe. Il confronto dipende dall'LC_CTYPE aspetto delle impostazioni locali, ma non LC_COLLATE. Per ulteriori informazioni, vedere [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#111](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_6.cpp)]

## <a name="cstringtcstringt"></a><a name="cstringt"></a>CStringT::CStringT

Costruisce un oggetto `CStringT`.

```
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

*Pch*<br/>
Puntatore a una matrice di caratteri di lunghezza *nLength*, non con terminazione null.

*nLunghezza*<br/>
Conteggio del numero di caratteri in *pch*.

*Ch*<br/>
Un singolo carattere.

*Pszsrc*<br/>
Stringa con terminazione null da `CStringT` copiare in questo oggetto.

*pStringMgr (informazioni in stato indue)*<br/>
Puntatore al gestore `CStringT` della memoria per l'oggetto. Per ulteriori `IAtlStringMgr` informazioni sulla `CStringT`gestione della memoria per , vedere [Gestione della memoria con CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

*strSrc*<br/>
Oggetto `CStringT` esistente da copiare `CStringT` in questo oggetto. Per ulteriori `CThisString` informazioni `CThisSimpleString`su e , vedere la sezione Osservazioni.

*varSrc*<br/>
Oggetto variant da copiare `CStringT` in questo oggetto.

*BaseType*<br/>
Tipo di carattere della classe stringa. Può essere uno dei valori seguenti:

**char** (per le stringhe di caratteri ANSI).

**wchar_t** (per le stringhe di caratteri Unicode).

TCHAR (sia per le stringhe di caratteri ANSI che Unicode).

*bMFCDLL*<br/>
Boolean che specifica se il progetto è una DLL MFC (TRUE) o meno (FALSE).

*Stringa di sistema*<br/>
Deve `System::String`essere , e il progetto deve essere compilato con /clr.

*pStringa*<br/>
Handle per `CStringT` un oggetto.

### <a name="remarks"></a>Osservazioni

Poiché i costruttori copiano i dati di input in una nuova risorsa di archiviazione allocata, è necessario tenere presente che possono verificarsi eccezioni di memoria. Si noti che alcuni di questi costruttori fungono da funzioni di conversione. Ciò consente di sostituire, ad esempio, `CStringT` un LPTSTR in cui è previsto un oggetto.

- `CStringT`( `LPCSTR` `lpsz` ): costruisce `CStringT` un Unicode da una stringa ANSI. È inoltre possibile utilizzare questo costruttore per caricare una risorsa stringa, come illustrato nell'esempio seguente.

- `CStringT(`): costruisce `CStringT` a da una stringa Unicode. `LPCWSTR` `lpsz`

- `CStringT`( `const unsigned char*` `psz` ): consente di `CStringT` costruire un da un puntatore a **unsigned char**.

> [!NOTE]
> Definire la macro _CSTRING_DISABLE_NARROW_WIDE_CONVERSION per disattivare la conversione implicita delle stringhe tra stringhe ANSI e Unicode. La macro esclude dai costruttori di compilazione che supportano la conversione.

Si noti che il parametro `CStringT` `CThisSimpleString` *strSrc* può essere un oggetto o . Per `CStringT`, utilizzare una delle relative`CString`istanze predefinite ( , `CStringA`, o `CStringW`); per `CThisSimpleString`, utilizzare un puntatore **this.** `CThisSimpleString`dichiara un'istanza della [classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), che è una classe stringa `CStringT` più piccola con funzionalità meno incorporate rispetto alla classe .

L'operatore `CSimpleStringT<>&()` di `CStringT` overload `CSimpleStringT` costruisce un oggetto da una dichiarazione.

> [!NOTE]
> Sebbene sia possibile `CStringT` creare istanze che contengono caratteri null incorporati, è consigliabile non farlo. La chiamata di `CStringT` metodi e operatori su oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#112](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_7.cpp)]

## <a name="cstringtcstringt"></a><a name="_dtorcstringt"></a>CStringT:: CStringT

Distrugge l'oggetto. `CStringT`

```
~CStringT() throw();
```

### <a name="remarks"></a>Osservazioni

Distrugge l'oggetto. `CStringT`

## <a name="cstringtdelete"></a><a name="delete"></a>CStringT::Delete

Elimina uno o più caratteri da una stringa a partire dal carattere in corrispondenza dell'indice specificato.

```
int Delete(int iIndex, int nCount = 1);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
Indice in base zero del primo `CStringT` carattere nell'oggetto da eliminare.

*nConteggio*<br/>
Numero di caratteri da rimuovere.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa modificata.

### <a name="remarks"></a>Osservazioni

Se *nCount* è più lungo della stringa, il resto della stringa verrà rimosso.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#113](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_8.cpp)]

```Output
Before: Soccer is best,
    but hockey is quicker!
After: Soccer best,
    but hockey is quicker!
```

## <a name="cstringtfind"></a><a name="find"></a>CStringT::Find

Cerca in questa stringa la prima corrispondenza di un carattere o di una sottostringa.

```
int Find(PCXSTR pszSub, int iStart=0) const throw();
int Find(XCHAR ch, int iStart=0) const throw();
```

### <a name="parameters"></a>Parametri

*pszSub (informazioni in base al gruppo dei servizi*<br/>
Sottostringa da cercare.

*iStart (Avvio)*<br/>
Indice del carattere nella stringa con cui iniziare la ricerca oppure 0 per iniziare dall'inizio.

*Ch*<br/>
Un singolo carattere da cercare.

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo `CStringT` carattere in questo oggetto che corrisponde alla sottostringa o ai caratteri richiesti; -1 se la sottostringa o il carattere non viene trovato.

### <a name="remarks"></a>Osservazioni

La funzione viene sottoposta a overload per accettare sia `strchr`singoli caratteri (simile alla funzione di runtime ) che stringhe (simile a `strstr`).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#114](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_9.cpp)]

## <a name="cstringtfindoneof"></a><a name="findoneof"></a>CStringT::FindOneOf

Cerca in questa stringa il primo carattere che corrisponde a qualsiasi carattere contenuto in *pszCharSet*.

```
int FindOneOf(PCXSTR pszCharSet) const throw();
```

### <a name="parameters"></a>Parametri

*pszCharSet (gruppo pszCharSet)*<br/>
Stringa contenente i caratteri per la corrispondenza.

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo carattere in questa stringa che si trova anche in *pszCharSet*; -1 se non c'è corrispondenza.

### <a name="remarks"></a>Osservazioni

Trova la prima occorrenza di uno qualsiasi dei caratteri in *pszCharSet*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#115](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_10.cpp)]

## <a name="cstringtformat"></a><a name="format"></a>CStringT::Formato

Scrive i dati `CStringT` formattati in un nello stesso modo in cui [sprintf_s](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) formatta i dati in una matrice di caratteri di tipo C.

```cpp
void __cdecl Format(UINT nFormatID, [, argument]...);
void __cdecl Format(PCXSTR pszFormat,  [, argument] ...);
```

### <a name="parameters"></a>Parametri

*nId FormatID (informazioni in questo campo)*<br/>
Identificatore di risorsa stringa che contiene la stringa di controllo del formato.

*formato pszFormat*<br/>
Stringa di controllo di formato.

*argument*<br/>
Argomenti facoltativi.

### <a name="remarks"></a>Osservazioni

Questa funzione formatta e memorizza `CStringT`una serie di caratteri e valori nel file . Ogni argomento facoltativo (se presente) viene convertito e restituito in base alla specifica di formato corrispondente in *pszFormat* o dalla risorsa stringa identificata da *nFormatID*.

La chiamata avrà esito negativo se l'oggetto stringa stesso viene offerto come parametro a `Format`. Ad esempio, il codice seguente causerà risultati imprevisti:For example, the following code will cause unpredictable results:

[!code-cpp[NVC_ATLMFC_Utilities#116](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_11.cpp)]

Per altre informazioni, vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#117](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_12.cpp)]

## <a name="cstringtformatmessage"></a><a name="formatmessage"></a>CStringT::FormatMessage

Formatta una stringa di messaggio.

```cpp
void __cdecl FormatMessage(UINT nFormatID, [, argument]...);
void __cdecl FormatMessage(PCXSTR pszFormat, [, argument]...);
```

### <a name="parameters"></a>Parametri

*nId FormatID (informazioni in questo campo)*<br/>
Identificatore di risorsa stringa che contiene il testo del messaggio non formattato.

*formato pszFormat*<br/>
Punta alla stringa di controllo del formato. Sarà scansionato per gli inserti e formattato di conseguenza. La stringa di formato è simile alle stringhe di formato in stile *printf*della funzione di runtime, ad eccezione del fatto che consente l'inserimento dei parametri in un ordine arbitrario.

*argument*<br/>
Argomenti facoltativi.

### <a name="remarks"></a>Osservazioni

La funzione richiede una definizione di messaggio come input. La definizione del messaggio è determinata da *pszFormat* o dalla risorsa stringa identificata da *nFormatID*. La funzione copia il testo del `CStringT` messaggio formattato nell'oggetto, elaborando eventuali sequenze di inserimento incorporate, se richiesto.

> [!NOTE]
> `FormatMessage`tenta di allocare la memoria di sistema per la stringa appena formattata. Se questo tentativo non riesce, viene generata automaticamente un'eccezione di memoria.

Ogni inserimento deve avere un parametro corrispondente che segue il parametro *pszFormat* o *nFormatID.* All'interno del testo del messaggio, sono supportate diverse sequenze di escape per la formattazione dinamica del messaggio. Per ulteriori informazioni, vedere la funzione [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) di Windows in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#118](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_13.cpp)]

## <a name="cstringtformatmessagev"></a><a name="formatmessagev"></a>CStringT::FormatMessageV

Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.

```cpp
void FormatMessageV(PCXSTR pszFormat, va_list* pArgList);
```

### <a name="parameters"></a>Parametri

*formato pszFormat*<br/>
Punta alla stringa di controllo del formato. Sarà scansionato per gli inserti e formattato di conseguenza. La stringa di formato è `printf`simile alle stringhe di formato function-style di runtime, ad eccezione del fatto che consente l'inserimento dei parametri in un ordine arbitrario.

*pElencoArgList*<br/>
Puntatore a un elenco di argomenti.

### <a name="remarks"></a>Osservazioni

La funzione richiede una definizione di messaggio come input, determinata da *pszFormat*. La funzione copia il testo del messaggio formattato `CStringT` e un elenco di argomenti nell'oggetto, elaborando eventuali sequenze di inserimento incorporate, se richiesto.

> [!NOTE]
> `FormatMessageV`chiama [CStringT::FormatMessage](#formatmessage), che tenta di allocare memoria di sistema per la stringa appena formattata. Se questo tentativo non riesce, viene generata automaticamente un'eccezione di memoria.

Per ulteriori informazioni, vedere la funzione [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) di Windows in Windows SDK.

## <a name="cstringtformatv"></a><a name="formatv"></a>CStringT::FormatV

Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.

```cpp
void FormatV(PCXSTR pszFormat, va_list args);
```

### <a name="parameters"></a>Parametri

*formato pszFormat*<br/>
Punta alla stringa di controllo del formato. Sarà scansionato per gli inserti e formattato di conseguenza. La stringa di formato è `printf`simile alle stringhe di formato function-style di runtime, ad eccezione del fatto che consente l'inserimento dei parametri in un ordine arbitrario.

*Args*<br/>
Puntatore a un elenco di argomenti.

### <a name="remarks"></a>Osservazioni

Scrive una stringa formattata e un `CStringT` elenco di variabili `vsprintf_s` di argomenti in una stringa nello stesso modo in cui formatta i dati in una matrice di caratteri di tipo C.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#119](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_14.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#120](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_15.cpp)]

## <a name="cstringtgetenvironmentvariable"></a><a name="getenvironmentvariable"></a>CStringT::GetEnvironmentVariableCStringT::GetEnvironmentVariable

Imposta la stringa sul valore della variabile di ambiente specificata.

```
BOOL GetEnvironmentVariable(PCXSTR pszVar);
```

### <a name="parameters"></a>Parametri

*pszVar (informazioni in forma ppzVar)*<br/>
Puntatore a una stringa con terminazione null che specifica la variabile di ambiente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Recupera il valore della variabile specificata dal blocco di ambiente del processo chiamante. Il valore è nel formato di una stringa di caratteri con terminazione null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#121](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_16.cpp)]

## <a name="cstringtinsert"></a><a name="insert"></a>CStringT::Inserire

Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.

```
int Insert(int iIndex, PCXSTR psz);
int Insert(int iIndex, XCHAR ch);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
Indice del carattere prima del quale verrà eseguito l'inserimento.

*Psz*<br/>
Puntatore alla sottostringa da inserire.

*Ch*<br/>
Carattere da inserire.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa modificata.

### <a name="remarks"></a>Osservazioni

Il parametro *iIndex* identifica il primo carattere che verrà spostato per fare spazio al carattere o alla sottostringa. Se *nIndex* è zero, l'inserimento verrà eseguito prima dell'intera stringa. Se *nIndex* è maggiore della lunghezza della stringa, la funzione concatenerà la stringa presente e il nuovo materiale fornito da *ch* o *psz*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#122](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_17.cpp)]

## <a name="cstringtleft"></a><a name="left"></a>CStringT::Sinistra

Estrae i caratteri *nCount* più a sinistra da questo `CStringT` oggetto e restituisce una copia della sottostringa estratta.

```
CStringT Left(int nCount) const;
```

### <a name="parameters"></a>Parametri

*nConteggio*<br/>
Il numero di caratteri da estrarre da questo oggetto `CStringT`.

### <a name="return-value"></a>Valore restituito

Oggetto `CStringT` contenente una copia dell'intervallo specificato. L'oggetto `CStringT` restituito può essere vuoto.

### <a name="remarks"></a>Osservazioni

Se *nCount* supera la lunghezza della stringa, viene estratta l'intera stringa. `Left` è simile alla funzione di base `Left`.

Per i set di caratteri multibyte (MBCS), *nCount* considera ogni sequenza a 8 bit come un carattere, in modo che *nCount* restituisce il numero di caratteri multibyte moltiplicato per due.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#123](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_18.cpp)]

## <a name="cstringtloadstring"></a><a name="loadstring"></a>Stringa::StringaDic::LoadString

Legge una risorsa stringa di Windows, identificata `CStringT` da *nID*, in un oggetto esistente.

```
BOOL LoadString(HINSTANCE hInstance, UINT nID, WORD wLanguageID);
BOOL LoadString(HINSTANCE hInstance, UINT nID);
BOOL LoadString(UINT nID);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle per l'istanza del modulo.

*nID*<br/>
UN ID di risorsa stringa di Windows.A Windows string resource ID.

*wLanguageID (informazioni in lingua inlingua inlingua*<br/>
Lingua della risorsa di tipo stringa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il caricamento della risorsa ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Carica la risorsa stringa (*nID*) dal modulo specificato (*hInstance*) utilizzando la lingua specificata (*wLanguage*).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#124](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_19.cpp)]

## <a name="cstringtmakelower"></a><a name="makelower"></a>CStringT::MakeLower

Converte `CStringT` l'oggetto in una stringa minuscola.

```
CStringT& MakeLower();
```

### <a name="return-value"></a>Valore restituito

Stringa minuscola risultante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#125](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_20.cpp)]

## <a name="cstringtmakereverse"></a><a name="makereverse"></a>CStringT::MakeReverse

Inverte l'ordine dei `CStringT` caratteri nell'oggetto.

```
CStringT& MakeReverse();
```

### <a name="return-value"></a>Valore restituito

Stringa invertita risultante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#126](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_21.cpp)]

## <a name="cstringtmakeupper"></a><a name="makeupper"></a>CStringT::MakeUpper

Converte `CStringT` l'oggetto in una stringa maiuscola.

```
CStringT& MakeUpper();
```

### <a name="return-value"></a>Valore restituito

Stringa maiuscola risultante.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#127](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_22.cpp)]

## <a name="cstringtmid"></a><a name="mid"></a>CStringT::Mid

Estrae una sottostringa di `CStringT` lunghezza *nCount* caratteri da questo oggetto, a partire dalla posizione *iFirst* (in base zero).

```
CStringT Mid(int iFirst, int nCount) const;
CStringT Mid(int iFirst) const;
```

### <a name="parameters"></a>Parametri

*iPrima volta*<br/>
Indice in base zero del primo `CStringT` carattere in questo oggetto che deve essere incluso nella sottostringa estratta.

*nConteggio*<br/>
Il numero di caratteri da estrarre da questo oggetto `CStringT`. Se questo parametro non viene fornito, viene estratto il resto della stringa.

### <a name="return-value"></a>Valore restituito

Oggetto `CStringT` contenente una copia dell'intervallo specificato. Si noti `CStringT` che l'oggetto restituito potrebbe essere vuoto.

### <a name="remarks"></a>Osservazioni

La funzione restituisce una copia della sottostringa estratta. `Mid`è simile alla funzione Basic Mid (ad eccezione del fatto che gli indici in Basic sono in base uno).

Per i set di caratteri multibyte (MBCS), *nCount* si riferisce a ogni carattere a 8 bit; vale a dire, un byte iniziale e finale in un carattere multibyte vengono conteggiati come due caratteri.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#128](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_23.cpp)]

## <a name="cstringtoemtoansi"></a><a name="oemtoansi"></a>CStringT::OemToAnsi

Converte tutti i `CStringT` caratteri in questo oggetto dal set di caratteri OEM al set di caratteri ANSI.

```cpp
void OemToAnsi();
```

### <a name="remarks"></a>Osservazioni

Questa funzione non è disponibile se _UNICODE è definito.

### <a name="example"></a>Esempio

Vedere l'esempio per [CStringT::AnsiToOem](#ansitooem).

## <a name="cstringtoperator-"></a><a name="operator_eq"></a>CStringT::operatore

Assegna un nuovo valore alla stringa.

```
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

*strSrc*<br/>
Oggetto `CStringT` da assegnare a questa stringa.

*Str*<br/>
Riferimento a un oggetto `CThisSimpleString`.

*bMFCDLL*<br/>
Valore booleano che specifica se il progetto è una DLL MFC o meno.

*BaseType*<br/>
Tipo di base della stringa.

*var*<br/>
Oggetto variant da assegnare a questa stringa.

*Ch*<br/>
Un carattere ANSI o Unicode da assegnare alla stringa.

*Pszsrc*<br/>
Puntatore alla stringa originale assegnata.

### <a name="remarks"></a>Osservazioni

L'operatore di `CStringT` assegnazione accetta un altro oggetto, un puntatore a un carattere o un singolo carattere. È necessario tenere presente che le eccezioni di memoria possono verificarsi ogni volta che si utilizza questo operatore perché è possibile allocare nuova risorsa di archiviazione.

Per informazioni `CThisSimpleString`su , vedere la sezione Osservazioni di [CStringT::CStringT](#cstringt).

> [!NOTE]
> Sebbene sia possibile `CStringT` creare istanze che contengono caratteri null incorporati, è consigliabile non farlo. La chiamata di `CStringT` metodi e operatori su oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

## <a name="cstringtoperator-"></a><a name="operator_add"></a>Proprietà CStringT::operatore .

Concatena due stringhe o un carattere e una stringa.

```
friend CStringT operator+(const CStringT& str1, const CStringT& str2);
friend CStringT operator+(const CStringT& str1, PCXSTR psz2);
friend CStringT operator+(PCXSTR psz1, const CStringT& str2,);
friend CStringT operator+(char ch1, const CStringT& str2,);
friend CStringT operator+(const CStringT& str1, char ch2);
friend CStringT operator+(const CStringT& str1, wchar_t ch2);
friend CStringT operator+(wchar_t ch1, const CStringT& str2,);
```

### <a name="parameters"></a>Parametri

*ch1*<br/>
Un carattere ANSI o Unicode da concatenare con una stringa.

*ch2*<br/>
Un carattere ANSI o Unicode da concatenare con una stringa.

*str1*<br/>
Oggetto `CStringT` da concatenare con una stringa o un carattere.

*str2 (in cui*<br/>
Oggetto `CStringT` da concatenare con una stringa o un carattere.

*psz1 (in modo spz1)*<br/>
Puntatore a una stringa con terminazione null da concatenare a una stringa o a un carattere.

*psz2 (informazioni in base al*<br/>
Puntatore a una stringa da concatenare con una stringa o un carattere.

### <a name="remarks"></a>Osservazioni

Esistono sette forme di `CStringT::operator+` overload della funzione. La prima versione concatena `CStringT` due oggetti esistenti. I due successivi concatenano un `CStringT` oggetto e una stringa con terminazione null. I due successivi concatenano un `CStringT` oggetto e un carattere ANSI. Gli ultimi due concatenano un `CStringT` oggetto e un carattere Unicode.

> [!NOTE]
> Sebbene sia possibile `CStringT` creare istanze che contengono caratteri null incorporati, è consigliabile non farlo. La chiamata di `CStringT` metodi e operatori su oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#140](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_24.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_add_eq"></a>CStringT::operatore

Concatena i caratteri alla fine della stringa.

```
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

*Str*<br/>
Riferimento a un oggetto `CThisSimpleString`.

*bMFCDLL*<br/>
Valore booleano che specifica se il progetto è una DLL MFC o meno.

*BaseType*<br/>
Tipo di base della stringa.

*var*<br/>
Oggetto variant da concatenare a questa stringa.

*Ch*<br/>
Un carattere ANSI o Unicode da concatenare con una stringa.

*Pszsrc*<br/>
Puntatore alla stringa originale da concatenare.

*strSrc*<br/>
Oggetto `CStringT` da concatenare a questa stringa.

### <a name="remarks"></a>Osservazioni

L'operatore `CStringT` accetta un altro oggetto, un puntatore a un carattere o un singolo carattere. È necessario tenere presente che le eccezioni di memoria possono verificarsi ogni volta che `CStringT` si utilizza questo operatore di concatenazione perché è possibile allocare nuova risorsa di archiviazione per i caratteri aggiunti a questo oggetto.

Per informazioni `CThisSimpleString`su , vedere la sezione Osservazioni di [CStringT::CStringT](#cstringt).

> [!NOTE]
> Sebbene sia possibile `CStringT` creare istanze che contengono caratteri null incorporati, è consigliabile non farlo. La chiamata di `CStringT` metodi e operatori su oggetti che contengono caratteri null incorporati può produrre risultati imprevisti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#141](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_25.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_eq_eq"></a>CStringT::operatore

Determina se due stringhe sono logicamente uguali.

```
friend bool operator==(const CStringT& str1, const CStringT& str2) throw();
friend bool operator==(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator==(const CStringT& str1, PCYSTR psz2) throw();
friend bool operator==(const CStringT& str1, XCHAR ch2) throw();
friend bool operator==(PCXSTR psz1, const CStringT& str2) throw();
friend bool operator==(PCYSTR psz1, const CStringT& str2,) throw();
friend bool operator==(XCHAR ch1, const CStringT& str2,) throw();
```

### <a name="parameters"></a>Parametri

*ch1*<br/>
Un carattere ANSI o Unicode per il confronto.

*ch2*<br/>
Un carattere ANSI o Unicode per il confronto.

*str1*<br/>
A `CStringT` per il confronto.

*str2 (in cui*<br/>
A `CStringT` per il confronto.

*psz1 (in modo spz1)*<br/>
Puntatore a una stringa con terminazione null per il confronto.

*psz2 (informazioni in base al*<br/>
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Osservazioni

Verifica se una stringa o un carattere sul lato sinistro è uguale a una stringa o un carattere sul lato destro e restituisce TRUE o FALSE di conseguenza.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#142](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_26.cpp)]

## <a name="cstringtoperator-"></a><a name="operator_neq"></a>CStringT::operator !

Determina se due stringhe non sono logicamente uguali.

```
friend bool operator!=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator!=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator!=(const CStringT& str1, PCYSTR psz2) throw();
friend bool operator!=(const CStringT& str1, XCHAR ch2) throw();
friend bool operator!=(PCXSTR psz1, const CStringT& str2) throw();
friend bool operator!=(PCYSTR psz1, const CStringT& str2,) throw();
friend bool operator!=(XCHAR ch1, const CStringT& str2,) throw();
```

### <a name="parameters"></a>Parametri

*ch1*<br/>
Un carattere ANSI o Unicode da concatenare con una stringa.

*ch2*<br/>
Un carattere ANSI o Unicode da concatenare con una stringa.

*str1*<br/>
A `CStringT` per il confronto.

*str2 (in cui*<br/>
A `CStringT` per il confronto.

*psz1 (in modo spz1)*<br/>
Puntatore a una stringa con terminazione null per il confronto.

*psz2 (informazioni in base al*<br/>
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Osservazioni

Verifica se una stringa o un carattere sul lato sinistro non è uguale a una stringa o un carattere sul lato destro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#143](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_27.cpp)]

## <a name="cstringtoperator-lt"></a><a name="operator_lt"></a>CStringT::operatore&lt;

Determina se la stringa sul lato sinistro dell'operatore è minore della stringa sul lato destro.

```
friend bool operator<(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
A `CStringT` per il confronto.

*str2 (in cui*<br/>
A `CStringT` per il confronto.

*psz1 (in modo spz1)*<br/>
Puntatore a una stringa con terminazione null per il confronto.

*psz2 (informazioni in base al*<br/>
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Osservazioni

Un confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#144](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_28.cpp)]

## <a name="cstringtoperator-gt"></a><a name="operator_gt"></a>CStringT::operatore&gt;

Determina se la stringa sul lato sinistro dell'operatore è maggiore della stringa sul lato destro.

```
friend bool operator>(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
A `CStringT` per il confronto.

*str2 (in cui*<br/>
A `CStringT` per il confronto.

*psz1 (in modo spz1)*<br/>
Puntatore a una stringa con terminazione null per il confronto.

*psz2 (informazioni in base al*<br/>
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Osservazioni

Un confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#145](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_29.cpp)]

## <a name="cstringtoperator-lt"></a><a name="operator_lt_eq"></a>CStringT::operatore&lt;=

Determina se la stringa sul lato sinistro dell'operatore è minore o uguale alla stringa sul lato destro.

```
friend bool operator<=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<=(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
A `CStringT` per il confronto.

*str2 (in cui*<br/>
A `CStringT` per il confronto.

*psz1 (in modo spz1)*<br/>
Puntatore a una stringa con terminazione null per il confronto.

*psz2 (informazioni in base al*<br/>
Puntatore a una stringa con terminazione null per il confronto.

### <a name="remarks"></a>Osservazioni

Un confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#146](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_30.cpp)]

## <a name="cstringtoperator-gt"></a><a name="operator_gt_eq"></a>CStringT::operatore&gt;=

Determina se la stringa sul lato sinistro dell'operatore è maggiore o uguale alla stringa sul lato destro.

```
friend bool operator>=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>=(PCXSTR psz1, const CStringT& str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
A `CStringT` per il confronto.

*str2 (in cui*<br/>
A `CStringT` per il confronto.

*psz1 (in modo spz1)*<br/>
Puntatore a una stringa per il confronto.

*psz2 (informazioni in base al*<br/>
Puntatore a una stringa per il confronto.

### <a name="remarks"></a>Osservazioni

Un confronto lessicografico tra stringhe, carattere per carattere fino a:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#147](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_31.cpp)]

## <a name="cstringtremove"></a><a name="remove"></a>CStringT::Rimuovere

Rimuove tutte le istanze del carattere specificato dalla stringa.

```
int Remove(XCHAR chRemove);
```

### <a name="parameters"></a>Parametri

*chRemove*<br/>
Carattere da rimuovere da una stringa.

### <a name="return-value"></a>Valore restituito

Numero di caratteri rimossi dalla stringa. zero se la stringa non viene modificata.

### <a name="remarks"></a>Osservazioni

Per i confronti per il carattere viene fatta distinzione tra maiuscole e minuscole.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#129](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_32.cpp)]

## <a name="cstringtreplace"></a><a name="replace"></a>CStringT::Sostituisci

Esistono due versioni `Replace`di . La prima versione sostituisce una o più copie di una sottostringa utilizzando un'altra sottostringa. Entrambe le sottostringhe sono con terminazione null. La seconda versione sostituisce una o più copie di un carattere utilizzando un altro carattere. Entrambe le versioni operano `CStringT`sui dati di tipo carattere memorizzati in .

```
int Replace(PCXSTR pszOld, PCXSTR pszNew);
int Replace(XCHAR chOld, XCHAR chNew);
```

### <a name="parameters"></a>Parametri

*pszVecchio*<br/>
Puntatore a una stringa con terminazione null da sostituire con *pszNew*.

*pszNew (informazioni in base alla perla*<br/>
Puntatore a una stringa con terminazione null che sostituisce *pszOld*.

*chOld (ChOld)*<br/>
Il carattere da sostituire con *chNew*.

*chNuovo*<br/>
Il carattere che sostituisce *chOld*.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di istanze sostituite del carattere o della sottostringa oppure zero se la stringa non viene modificata.

### <a name="remarks"></a>Osservazioni

`Replace`può modificare la lunghezza della stringa perché *pszNew* e *pszOld* non devono essere della stessa lunghezza e diverse copie della vecchia sottostringa possono essere modificate in quella nuova. La funzione esegue una corrispondenza con distinzione tra maiuscole e minuscole.

Esempi `CStringT` di `CString`istanze sono , `CStringA`, e `CStringW`.

Per `CStringA` `Replace` , funziona con caratteri ANSI o multibyte (MBCS). For `CStringW` `Replace` , funziona con caratteri larghi.

Per `CString`, il tipo di dati carattere viene selezionato in fase di compilazione, a seconda che siano definite le costanti nella tabella seguente.

|Costante definita|Tipo di dati carattere|
|----------------------|-------------------------|
|_UNICODE|Caratteri wide|
|_MBCS|Caratteri multibyte|
|Nessuno|Caratteri a byte singolo|
|Entrambe|Non definito|

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#200](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_33.cpp)]

## <a name="cstringtreversefind"></a><a name="reversefind"></a>CStringT::ReverseFind

Cerca `CStringT` in questo oggetto l'ultima corrispondenza di un carattere.

```
int ReverseFind(XCHAR ch) const throw();
```

### <a name="parameters"></a>Parametri

*Ch*<br/>
Carattere da cercare.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'ultimo `CStringT` carattere in questo oggetto che corrisponde al carattere richiesto oppure -1 se il carattere non viene trovato.

### <a name="remarks"></a>Osservazioni

La funzione è simile alla `strrchr`funzione di runtime.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#130](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_34.cpp)]

## <a name="cstringtright"></a><a name="right"></a>CStringT::Destra

Estrae l'ultimo (ovvero, all'estrema `CStringT` destra) *nContare* i caratteri da questo oggetto e restituisce una copia della sottostringa estratta.

```
CStringT Right(int nCount) const;
```

### <a name="parameters"></a>Parametri

*nConteggio*<br/>
Il numero di caratteri da estrarre da questo oggetto `CStringT`.

### <a name="return-value"></a>Valore restituito

Oggetto `CStringT` contenente una copia dell'intervallo specificato. Si noti `CStringT` che l'oggetto restituito può essere vuoto.

### <a name="remarks"></a>Osservazioni

Se *nCount* supera la lunghezza della stringa, viene estratta l'intera stringa. `Right`è simile alla `Right` funzione Basic (ad eccezione del fatto che gli indici in Basic sono in base zero).

Per i set di caratteri multibyte (MBCS), *nCount* si riferisce a ogni carattere a 8 bit; vale a dire, un byte iniziale e finale in un carattere multibyte vengono conteggiati come due caratteri.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#131](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_35.cpp)]

## <a name="cstringtsetsysstring"></a><a name="setsysstring"></a>Stringa::SetSysString

Rialloca il BSTR a cui punta *pbstr* `CStringT` e vi copia il contenuto dell'oggetto, incluso il carattere NULL.

```
BSTR SetSysString(BSTR* pbstr) const;
```

### <a name="parameters"></a>Parametri

*pbstr*<br/>
Puntatore a una stringa di caratteri.

### <a name="return-value"></a>Valore restituito

La nuova stringa.

### <a name="remarks"></a>Osservazioni

A seconda del `CStringT` contenuto dell'oggetto, il valore di BSTR a cui fa riferimento *pbstr* può cambiare. La funzione genera `CMemoryException` una memoria se insufficiente.

Questa funzione viene in genere utilizzata per modificare il valore delle stringhe passate per riferimento per l'automazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#132](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_36.cpp)]

## <a name="cstringtspanexcluding"></a><a name="spanexcluding"></a>CStringT::SpanExcluding (Eccezione dei valori di CStringT::SpanExcluding)

Estrae i caratteri dalla stringa, a partire dal primo carattere, che non si trovano nel set di caratteri identificato da *pszCharSet*.

```
CStringT SpanExcluding(PCXSTR pszCharSet) const;
```

### <a name="parameters"></a>Parametri

*pszCharSet (gruppo pszCharSet)*<br/>
Stringa interpretata come un set di caratteri.

### <a name="return-value"></a>Valore restituito

Sottostringa che contiene caratteri nella stringa che non sono presenti in *pszCharSet*, che inizia con il primo carattere della stringa e termina con il primo carattere trovato nella stringa presente anche in *pszCharSet* , ovvero a partire dal primo carattere nella stringa e escludendo il primo carattere nella stringa che si trova *pszCharSet*. Restituisce l'intera stringa se non viene trovato alcun carattere in *pszCharSet* nella stringa.

### <a name="remarks"></a>Osservazioni

`SpanExcluding`estrae e restituisce tutti i caratteri che precedono la prima occorrenza di un carattere da *pszCharSet* (in altre parole, il carattere da *pszCharSet* e tutti i caratteri che lo seguono nella stringa, non vengono restituiti). Se nessun carattere da *pszCharSet* viene `SpanExcluding` trovato nella stringa, restituisce l'intera stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#133](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_37.cpp)]

## <a name="cstringtspanincluding"></a><a name="spanincluding"></a>CStringT::SpanIncluding

Estrae i caratteri dalla stringa, a partire dal primo carattere, presenti nel set di caratteri identificato da *pszCharSet*.

```
CStringT SpanIncluding(PCXSTR pszCharSet) const;
```

### <a name="parameters"></a>Parametri

*pszCharSet (gruppo pszCharSet)*<br/>
Stringa interpretata come un set di caratteri.

### <a name="return-value"></a>Valore restituito

Sottostringa che contiene caratteri nella stringa che si trovano in *pszCharSet*, che inizia con il primo carattere della stringa e termina quando viene trovato un carattere nella stringa che non si trova in *pszCharSet*. `SpanIncluding`restituisce una sottostringa vuota se il primo carattere nella stringa non è nel set specificato.

### <a name="remarks"></a>Osservazioni

Se il primo carattere della stringa non `SpanIncluding` è nel set di caratteri, restituisce una stringa vuota. In caso contrario, restituisce una sequenza di caratteri consecutivi presenti nel set.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#134](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_38.cpp)]

## <a name="cstringttokenize"></a><a name="tokenize"></a>CStringT::Tokenize

Trova il token successivo in una stringa di destinazione

```
CStringT Tokenize(PCXSTR pszTokens, int& iStart) const;
```

### <a name="parameters"></a>Parametri

*pszTokens (token)*<br/>
Stringa contenente delimitatori di token. L'ordine di questi delimitatori non è importante.

*iStart (Avvio)*<br/>
Indice in base zero per avviare la ricerca.

### <a name="return-value"></a>Valore restituito

Oggetto `CStringT` contenente il valore del token corrente.

### <a name="remarks"></a>Osservazioni

La `Tokenize` funzione trova il token successivo nella stringa di destinazione. Il set di caratteri in *pszTokens* specifica i possibili delimitatori del token da trovare. A ogni `Tokenize` chiamata alla funzione inizia *da iStart*, ignora `CStringT` i delimitatori iniziali e restituisce un oggetto contenente il token corrente, ovvero la stringa di caratteri fino al carattere delimitatore successivo. Il valore di *iStart* viene aggiornato in modo da essere la posizione successiva al carattere delimitatore finale oppure -1 se è stata raggiunta la fine della stringa. Altri token possono essere suddivisi dal resto della stringa di `Tokenize`destinazione da una serie di chiamate a , utilizzando *iStart* per tenere traccia di dove nella stringa il token successivo deve essere letto. Quando non ci sono più token la funzione restituirà una stringa vuota e *iStart* verrà impostato su -1.

A differenza delle funzioni di token CRT come [strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l](../../c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md), `Tokenize` non modifica la stringa di destinazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#135](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_39.cpp)]

### <a name="remarks"></a>Osservazioni

L'output di questo esempio è il seguente:The output from this example is as follows:

```Output
Resulting Token: First
Resulting Token: Second
Resulting Token: Third
```

## <a name="cstringttrim"></a><a name="trim"></a>CStringT::Trim

Taglia i caratteri iniziali e finali dalla stringa.

```
CStringT& Trim(XCHAR chTarget);
CStringT& Trim(PCXSTR pszTargets);
CStringT& Trim();
```

### <a name="parameters"></a>Parametri

*chTarget (destinazione inglese)*<br/>
Carattere di destinazione da tagliare.

*pszTargets (Obiettivi di psz)*<br/>
Puntatore a una stringa contenente i caratteri di destinazione da tagliare. Tutte le occorrenze iniziali e finali dei caratteri in `CStringT` *pszTarget* verranno tagliate dall'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce la stringa tagliata.

### <a name="remarks"></a>Osservazioni

Rimuove tutte le occorrenze iniziali e finali di una delle seguenti operazioni:

- Carattere specificato da *chTarget*.

- Tutti i caratteri trovati nella stringa specificata da *pszTargets*.

- Spazi vuoti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#136](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_40.cpp)]

### <a name="remarks"></a>Osservazioni

L'output di questo esempio è il seguente:The output from this example is as follows:

```Output
Before: "******Soccer is best, but liquor is quicker!!!!!"
After : "Soccer is best, but liquor is quicker"
```

## <a name="cstringttrimleft"></a><a name="trimleft"></a>CStringT::TrimLeft

Taglia i caratteri iniziali dalla stringa.

```
CStringT& TrimLeft(XCHAR chTarget);
CStringT& TrimLeft(PCXSTR pszTargets);
CStringT& TrimLeft();
```

### <a name="parameters"></a>Parametri

*chTarget (destinazione inglese)*<br/>
Carattere di destinazione da tagliare.

*pszTargets (Obiettivi di psz)*<br/>
Puntatore a una stringa contenente i caratteri di destinazione da tagliare. Tutte le occorrenze iniziali dei caratteri in *pszTarget* verranno tagliate dall'oggetto. `CStringT`

### <a name="return-value"></a>Valore restituito

Stringa tagliata risultante.

### <a name="remarks"></a>Osservazioni

Rimuove tutte le occorrenze iniziali e finali di una delle seguenti operazioni:

- Carattere specificato da *chTarget*.

- Tutti i caratteri trovati nella stringa specificata da *pszTargets*.

- Spazi vuoti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#137](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_41.cpp)]

## <a name="cstringttrimright"></a><a name="trimright"></a>CStringT::TrimRight

Taglia i caratteri finali dalla stringa.

```
CStringT& TrimRight(XCHAR chTarget);
CStringT& TrimRight(PCXSTR pszTargets);
CStringT& TrimRight();
```

### <a name="parameters"></a>Parametri

*chTarget (destinazione inglese)*<br/>
Carattere di destinazione da tagliare.

*pszTargets (Obiettivi di psz)*<br/>
Puntatore a una stringa contenente i caratteri di destinazione da tagliare. Tutte le occorrenze finali dei caratteri in *pszTarget* verranno tagliate dall'oggetto. `CStringT`

### <a name="return-value"></a>Valore restituito

Restituisce `CStringT` l'oggetto che contiene la stringa tagliata.

### <a name="remarks"></a>Osservazioni

Rimuove le occorrenze finali di uno dei seguenti elementi:

- Carattere specificato da *chTarget*.

- Tutti i caratteri trovati nella stringa specificata da *pszTargets*.

- Spazi vuoti.

La `CStringT& TrimRight(XCHAR chTarget)` versione accetta un parametro di carattere e rimuove `CStringT` tutte le copie di tale carattere dalla fine dei dati di stringa. Inizia dalla fine della corda e funziona verso la parte anteriore. Si arresta quando trova un `CSTringT` carattere diverso o quando esaurisce i dati di tipo carattere.

La `CStringT& TrimRight(PCXSTR pszTargets)` versione accetta una stringa con terminazione null che contiene tutti i diversi caratteri da cercare. Rimuove tutte le copie di `CStringT` tali caratteri nell'oggetto. Inizia alla fine della stringa e lavora verso la parte anteriore. Si arresta quando trova un carattere che non `CStringT` si trova nella stringa di destinazione o quando si esaurisce i dati di tipo carattere. Non tenta di associare l'intera stringa di destinazione `CStringT`a una sottostringa alla fine di .

La `CStringT& TrimRight()` versione non richiede parametri. Taglia tutti gli spazi finali dalla fine `CStringT` della stringa. Gli spazi vuoti possono essere interruzioni di riga, spazi o tabulazioni.

-

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#138](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_42.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)<br/>
[CSimpleStringT (classe)](../../atl-mfc-shared/reference/csimplestringt-class.md)
