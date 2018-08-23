---
title: Classe CStringT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], in ATL
- shared classes, CStringT
- CStringT class
ms.assetid: 7cacc59c-425f-40f1-8f5b-6db921318ec9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4089b786363f6b1bcbb50d08e16821efc186539a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42609499"
---
# <a name="cstringt-class"></a>Classe CstringT
Questa classe rappresenta un `CStringT` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 
template<typename BaseType, class StringTraits>  
class CStringT :   
public CSimpleStringT<BaseType,
                      _CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType, StringTraits>
                      ::c_bIsMFCDLLTraits>  
 
```  
  
#### <a name="parameters"></a>Parametri  
 *BaseType*  
 Il tipo di carattere della classe string. Può essere uno dei seguenti:  
  
- **Char** (per le stringhe di caratteri ANSI).  
  
- **wchar_t** (per le stringhe di caratteri Unicode).  
  
- TCHAR (per le stringhe di caratteri ANSI sia Unicode).  
  
 *StringTraits*  
 Determina se la classe string è necessario il supporto della libreria Run-Time C (CRT) e in cui si trovano le risorse stringa. Può essere uno dei seguenti:  
  
- **StrTraitATL < wchar_t** &#124; `char` &#124; **TCHAR, ChTraitsCRT < wchar_t** &#124; `char` &#124; **TCHAR >>**  
  
     La classe richiede supporto CRT e cerca le stringhe di risorsa nel modulo specificato da `m_hInstResource` (un membro della classe di modulo dell'applicazione).  
  
- **StrTraitATL < wchar_t** &#124; `char` &#124; **TCHAR, ChTraitsOS < wchar_t** &#124; `char` &#124; **TCHAR >>**  
  
     La classe non richiede il supporto di CRT e cerca le stringhe di risorsa nel modulo specificato da `m_hInstResource` (un membro della classe di modulo dell'applicazione).  
  
- **StrTraitMFC < wchar_t** &#124; `char` &#124; **TCHAR, ChTraitsCRT < wchar_t** &#124; `char` &#124; **TCHAR >>**  
  
     La classe richiede supporto CRT e cerca le stringhe di risorsa usando l'algoritmo di ricerca MFC standard.  
  
- **StrTraitMFC < wchar_t** &#124; `char` &#124; **TCHAR, ChTraitsOS < wchar_t** &#124; `char` &#124; **TCHAR >>**  
  
     La classe non richiede il supporto di CRT e cerca le stringhe di risorsa usando l'algoritmo di ricerca MFC standard.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringT::CStringT](#cstringt)|Costruisce un `CStringT` oggetto in vari modi.|  
|[CStringT:: ~ CStringT](#_dtorcstringt)|Elimina un oggetto `CStringT`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringT::AllocSysString](#allocsysstring)|Alloca un oggetto BSTR da `CStringT` dei dati.|  
|[CStringT::AnsiToOem](#ansitooem)|Esegue una conversione di in-place ANSI set di caratteri per il set di caratteri OEM.|  
|[CStringT::AppendFormat](#appendformat)|Aggiunge dati formattati da un oggetto esistente `CStringT` oggetto.|  
|[CStringT::Collate](#collate)|Confronta due stringhe (maiuscole e minuscole, utilizza le informazioni specifiche delle impostazioni locali).|  
|[CStringT::CollateNoCase](#collatenocase)|Confronta due stringhe (maiuscole e minuscole, utilizza le informazioni specifiche delle impostazioni locali).|  
|[CStringT::Compare](#compare)|Confronta due stringhe (maiuscole / minuscole).|  
|[CStringT::CompareNoCase](#comparenocase)|Confronta due stringhe (maiuscole e minuscole).|  
|[CStringT::Delete](#delete)|Elimina uno o più caratteri da una stringa.|  
|[CStringT::Find](#find)|Trova un carattere o una sottostringa all'interno di una stringa più grande.|  
|[CStringT::FindOneOf](#findoneof)|Trova il primo carattere corrisponda da un set.|  
|[CStringT::Format](#format)|Formatta la stringa come `sprintf` viene.|  
|[CStringT::FormatMessage](#formatmessage)|Formatta una stringa di messaggio.|  
|[CStringT::FormatMessageV](#formatmessagev)|Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.|  
|[CStringT::FormatV](#formatv)|Formatta la stringa usando un elenco di argomenti variabile.|  
|[CStringT::GetEnvironmentVariable](#getenvironmentvariable)|Imposta la stringa per il valore della variabile di ambiente specificata.|  
|[CStringT::Insert](#insert)|Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.|  
|[CStringT::Left](#left)|Estrae la parte sinistra di una stringa.|  
|[CStringT::LoadString](#loadstring)|Carica un oggetto esistente `CStringT` oggetto da una risorsa di Windows.|  
|[CStringT::MakeLower](#makelower)|Converte tutti i caratteri in questa stringa in caratteri minuscoli.|  
|[CStringT::MakeReverse](#makereverse)|Inverte la stringa.|  
|[CStringT::MakeUpper](#makeupper)|Converte tutti i caratteri in questa stringa di caratteri maiuscoli.|  
|[CStringT::Mid](#mid)|Estrae la parte centrale di una stringa.|  
|[CStringT::OemToAnsi](#oemtoansi)|Esegue una conversione di in-place OEM set di caratteri per il set di caratteri ANSI.|  
|[CStringT::Remove](#remove)|Rimuove indicato da una stringa di caratteri.|  
|[CStringT::Replace](#replace)|Sostituisce indicato caratteri con altri caratteri.|  
|[CStringT::ReverseFind](#reversefind)|Trova un carattere all'interno di una stringa più grande; inizia dalla fine.|  
|[CStringT::Right](#right)|Estrae la parte destra di una stringa.|  
|[CStringT::SetSysString](#setsysstring)|Imposta un oggetto BSTR esistente con i dati da un `CStringT` oggetto.|  
|[CStringT::SpanExcluding](#spanexcluding)|Estrae caratteri dalla stringa, a partire dal primo carattere che non sono presenti nel set di caratteri identificato da `pszCharSet`.|  
|[CStringT::SpanIncluding](#spanincluding)|Estrae una sottostringa che contiene solo i caratteri in un set.|  
|[CStringT::Tokenize](#tokenize)|Estrae specificata i token in una stringa di destinazione.|  
|[CStringT::Trim](#trim)|Elimina tutti i caratteri spazi vuoti iniziali e finali dalla stringa.|  
|[CStringT::TrimLeft](#trimleft)|Elimina gli spazi vuoti iniziali dalla stringa.|  
|[CStringT::TrimRight](#trimright)|Elimina dalla stringa di spazi vuoti finali.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](#operator_eq)|Assegna un nuovo valore per un `CStringT` oggetto.|  
|[CStringT::operator +](#operator_add)|Concatena due stringhe o un carattere e stringa.|  
|[+ = CStringT::operator](#operator_add_eq)|Concatena una nuova stringa alla fine di una stringa esistente.|  
|[CStringT::operator = =](#operator_eq_eq)|Determina se due stringhe sono uguali.|  
|[CStringT::operator! =](#operator_neq)|Determina se due stringhe in modo logico non sono uguali.|  
|[CStringT::operator &lt;](#operator_lt)|Determina se la stringa a sinistra dell'operatore è minore di stringa a destra.|  
|[CStringT::operator &gt;](#operator_gt)|Determina se la stringa a sinistra dell'operatore è maggiore per la stringa a destra.|  
|[CStringT::operator &lt;=](#operator_lt_eq)|Determina se la stringa a sinistra dell'operatore è minore o uguale alla stringa a destra.|  
|[CStringT::operator &gt;=](#operator_gt_eq)|Determina se la stringa a sinistra dell'operatore è maggiore o uguale alla stringa a destra.|  
  
## <a name="remarks"></a>Note  
 `CStringT` eredita da [classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md). Funzionalità avanzate, ad esempio modifica di caratteri, ordinamento e ricerca, vengono implementate da `CStringT`.  
  
> [!NOTE]
> `CStringT` gli oggetti sono in grado di generare eccezioni. Questo errore si verifica quando un `CStringT` oggetto memoria insufficiente per qualsiasi motivo.  
  
 Oggetto `CStringT` oggetto è costituito da una sequenza di lunghezza variabile di caratteri. `CStringT` fornisce funzioni e operatori usando una sintassi simile a quella di base. Concatenazione e operatori di confronto, insieme a gestione della memoria semplificata, fanno `CStringT` oggetti più facili da usare rispetto a matrici di caratteri normali.  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e operatori su `CStringT` gli oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
 Utilizzando combinazioni diverse del `BaseType` e `StringTraits` i parametri, `CStringT` oggetti può tornare a questa pagina nei seguenti tipi, ovvero sono state definite dalle librerie ATL.  
  
 Se si usa un'applicazione ATL:  
  
 `CString`, `CStringA`, e `CStringW` vengono esportate dalla DLL MFC (MFC90. DLL), mai dalla DLL dell'utente. Questa operazione viene eseguita per impedire `CStringT` da viene definito più volte.  
  
> [!NOTE]
>  Se il codice contiene la soluzione alternativa per gli errori del linker che è descritti in [Linking Errors When You Import CString-Derived classi "(Q309801)](https://support.microsoft.com/help/309801/you-may-receive-an-lnk2019-error-message-when-you-build-a-visual-c-200), è necessario rimuovere tale codice. Non è più necessario.  
  
 I tipi di stringa seguenti sono disponibili nelle applicazioni basate su MFC:  
  
|Tipo di CStringT|Dichiarazione|  
|-------------------|-----------------|  
|`CStringA`|Un carattere ANSI digitare una stringa con il supporto di CRT.|  
|`CStringW`|Un carattere Unicode di tipo stringa con il supporto di CRT.|  
|`CString`|Tipi di carattere ANSI sia Unicode con il supporto di CRT.|  
  
 I tipi di stringa seguenti sono disponibili nei progetti in cui è definito ATL_CSTRING_NO_CRT:  
  
|Tipo di CStringT|Dichiarazione|  
|-------------------|-----------------|  
|`CAtlStringA`|Un carattere ANSI digitare stringa senza il supporto della libreria CRT.|  
|`CAtlStringW`|Un carattere Unicode di tipo stringa senza il supporto della libreria CRT.|  
|`CAtlString`|Tipi di carattere ANSI sia Unicode senza il supporto della libreria CRT.|  
  
 I tipi di stringa seguenti sono disponibili nei progetti in cui non è definito ATL_CSTRING_NO_CRT:  
  
|Tipo di CStringT|Dichiarazione|  
|-------------------|-----------------|  
|`CAtlStringA`|Un carattere ANSI digitare una stringa con il supporto di CRT.|  
|`CAtlStringW`|Un carattere Unicode di tipo stringa con il supporto di CRT.|  
|`CAtlString`|Tipi di carattere ANSI sia Unicode con il supporto di CRT.|  
  
 `CString` Inoltre, gli oggetti hanno le caratteristiche seguenti:  
  
- `CStringT` gli oggetti possono aumentare in seguito a operazioni di concatenazione.  
  
- `CStringT` gli oggetti seguono "semantica dei valori". Può essere considerata un `CStringT` oggetto sotto forma di stringa effettivo, non come un puntatore a una stringa.  
  
-   È possibile sostituire liberamente `CStringT` degli oggetti per `PCXSTR` gli argomenti della funzione.  
  
-   Gestione della memoria personalizzati per i buffer di stringa. Per altre informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## <a name="cstringt-predefined-types"></a>CStringT i tipi predefiniti.  
 In quanto `CStringT` utilizza un argomento di modello per definire il tipo di carattere (entrambi [wchar_t](../../c-runtime-library/standard-types.md) oppure [char](../../c-runtime-library/standard-types.md)) supportati, i tipi di parametro di metodo possono essere complicati in alcuni casi. Per semplificare questo problema, un set di tipi predefiniti è definito e usato in tutta il `CStringT` classe. La tabella seguente elenca i vari tipi:  
  
|nome|Descrizione|  
|----------|-----------------|  
|`XCHAR`|Un singolo carattere (entrambe **wchar_t** oppure **char**) con lo stesso tipo di carattere come il `CStringT` oggetto.|  
|`YCHAR`|Un singolo carattere (entrambe **wchar_t** oppure **char**) con il tipo di carattere opposto come il `CStringT` oggetto.|  
|`PXSTR`|Un puntatore a una stringa di caratteri (entrambe **wchar_t** oppure **char**) con lo stesso tipo di carattere come il `CStringT` oggetto.|  
|`PYSTR`|Un puntatore a una stringa di caratteri (entrambe **wchar_t** oppure **char**) con il tipo di carattere opposto come il `CStringT` oggetto.|  
|`PCXSTR`|Un puntatore a un **const** stringa di caratteri (entrambi **wchar_t** oppure **char**) con lo stesso tipo di carattere come il `CStringT` oggetto.|  
|`PCYSTR`|Un puntatore a un **const** stringa di caratteri (entrambi **wchar_t** oppure **char**) con il tipo di carattere opposto come il `CStringT` oggetto.|  
  
> [!NOTE]
>  Codice usato in precedenza non documentati i metodi di `CString` (ad esempio `AssignCopy`) deve essere sostituito con il codice che usa i seguenti metodi documentati di `CStringT` (ad esempio `GetBuffer` o `ReleaseBuffer`). Questi metodi vengono ereditati dal `CSimpleStringT`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)  
  
 `CStringT`  
  
## <a name="requirements"></a>Requisiti  
  
|Header|Per usare|  
|------------|-------------|  
|cstringt.h|Oggetti stringa solo MFC|  
|atlstr. h|Oggetti stringa non MFC|  
  
##  <a name="allocsysstring"></a>  CStringT::AllocSysString  
 Alloca una stringa compatibili con l'automazione del tipo BSTR e copia il contenuto del `CStringT` oggetto, incluso il carattere di terminazione null.  
  
```  
BSTR AllocSysString() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La nuova stringa allocata.  
  
### <a name="remarks"></a>Note  
 Nei programmi MFC, una [classe CMemoryException](../../mfc/reference/cmemoryexception-class.md) viene generata un'eccezione se è presente memoria insufficiente. In programmi ATL, un [CAtlException](../../atl/reference/catlexception-class.md) viene generata un'eccezione. Questa funzione viene in genere utilizzata per restituire le stringhe per l'automazione.  
  

 In genere, se questa stringa viene passata a una funzione COM come [in] parametro, tale operazione richiede che il chiamante liberare la stringa. Questa operazione può essere eseguita tramite [SysFreeString](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-sysfreestring), come descritto nel SDK di Windows. Per altre informazioni, vedere [allocazione e deallocazione della memoria per un oggetto BSTR](../../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md).  
  
 Per altre informazioni sulle funzioni di allocazione OLE in Windows, vedere [SysAllocString](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-sysallocstring) nel SDK di Windows.  

  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CStringT::AllocSysString`.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#105](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_1.cpp)]  
  
##  <a name="ansitooem"></a>  CStringT::AnsiToOem  
 Converte tutti i caratteri in questo `CStringT` oggetto ANSI set di caratteri per il set di caratteri OEM.  
  
```  
void AnsiToOem();
```  
  
### <a name="remarks"></a>Note  
 La funzione non è disponibile se è definito Unicode.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#106](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_2.cpp)]  
  
##  <a name="appendformat"></a>  CStringT::AppendFormat  
 Aggiunge dati formattati da un oggetto esistente `CStringT` oggetto.  
  
```  
void __cdecl AppendFormat(PCXSTR pszFormat, [, argument] ...);
void __cdecl AppendFormat(UINT nFormatID, [, argument] ...);
```  
  
### <a name="parameters"></a>Parametri  
 *pszFormat*  
 Una stringa di controllo del formato.  
  
 *nFormatID*  
 L'identificatore di risorsa stringa che contiene la stringa di controllo del formato.  
  
 *argomento*  
 Argomenti facoltativi.  
  
### <a name="remarks"></a>Note  
 Questa funzione formatta e aggiunge una serie di caratteri e i valori di `CStringT`. Tutti gli argomenti facoltativi (se presente) viene convertito e aggiunti in base alla specifica di formato corrispondente in *pszFormat* o dalla risorsa di stringa identificata dal *nFormatID*.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#107](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_3.cpp)]  
  
##  <a name="collate"></a>  CStringT::Collate  
 Confronta due stringhe utilizzando la funzione di testo generico `_tcscoll`.  
  
```  
int Collate(PCXSTR psz) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *psz*  
 La stringa usata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche, < 0 se l'oggetto `CStringT` oggetto è minore di *psz*, oppure > 0 se questo `CStringT` oggetto è maggiore *psz*.  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcscoll`, definito in TCHAR. H, viene eseguito il mapping a una delle due `strcoll`, `wcscoll`, o `_mbscoll`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe in base alla tabella codici correntemente in uso. Per altre informazioni, vedere [strcoll, wcscoll, mbscoll, strcoll_l, wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).  
  
##  <a name="collatenocase"></a>  CStringT::CollateNoCase  
 Confronta due stringhe utilizzando la funzione di testo generico `_tcscoll`.  
  
```  
int CollateNoCase(PCXSTR psz) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *psz*  
 La stringa usata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identico (caso di esclusione), < 0 se l'oggetto `CStringT` oggetto è minore di *psz* (ignorando caso), oppure > 0 se questo `CStringT` oggetto è maggiore *psz* (ignorando maiuscole e minuscole).  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcscoll`, definito in TCHAR. H, viene eseguito il mapping a una delle due `stricoll`, `wcsicoll`, o `_mbsicoll`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe, in base alla tabella codici correntemente in uso. Per altre informazioni, vedere [strcoll, wcscoll, mbscoll, strcoll_l, wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#109](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_4.cpp)]  
  
##  <a name="compare"></a>  CStringT::Compare  
 Confronta due stringhe (maiuscole / minuscole).  
  
```  
int Compare(PCXSTR psz) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *psz*  
 La stringa usata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche, < 0 se l'oggetto `CStringT` oggetto è minore di *psz*, oppure > 0 se questo `CStringT` oggetto è maggiore *psz*.  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcscmp`, definito in TCHAR. H, viene eseguito il mapping a una delle due `strcmp`, `wcscmp`, o `_mbscmp`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe e non è interessata dalle impostazioni locali. Per altre informazioni, vedere [strcmp, wcscmp, mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md).  
  
 Se la stringa contiene valori null incorporati, la stringa viene considerata per essere troncato in corrispondenza del carattere null incorporato prima ai fini del confronto.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CStringT::Compare`.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#110](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_5.cpp)]  
  
##  <a name="comparenocase"></a>  CStringT::CompareNoCase  
 Confronta due stringhe (maiuscole e minuscole).  
  
```  
int CompareNoCase(PCXSTR psz) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *psz*  
 La stringa usata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche (ignorando i casi,) < 0 se l'oggetto `CStringT` oggetto è minore di *psz* (ignorando caso), o > 0 se questo `CStringT` oggetto è maggiore *psz* (ignorando maiuscole e minuscole).  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcsicmp`, definito in TCHAR. H, viene eseguito il mapping a una delle due `_stricmp`, `_wcsicmp` o `_mbsicmp`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe. Il confronto dipende l'aspetto LC_CTYPE delle impostazioni locali, ma non LC_COLLATE. Per altre informazioni, vedere [stricmp, wcsicmp, mbsicmp, stricmp_l, wcsicmp_l, mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#111](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_6.cpp)]  
  
##  <a name="cstringt"></a>  CStringT::CStringT  
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
 *PCH*  
 Un puntatore a una matrice di caratteri di lunghezza *nLength*e non con terminazione null.  
  
 *nLength*  
 Un conteggio del numero di caratteri *pch*.  
  
 *ch*  
 Un singolo carattere.  
  
 *pszSrc*  
 Una stringa con terminazione null deve essere copiato `CStringT` oggetto.  
  
 *pStringMgr*  
 Un puntatore per il gestore della memoria per il `CStringT` oggetto. Per ulteriori informazioni sul `IAtlStringMgr` e la gestione della memoria per `CStringT`, vedere [gestione della memoria con CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
 *strSrc*  
 Un oggetto esistente `CStringT` oggetto deve essere copiato `CStringT` oggetto. Per ulteriori informazioni sul `CThisString` e `CThisSimpleString`, vedere la sezione Osservazioni.  
  
 *varSrc*  
 Un oggetto variant deve essere copiato `CStringT` oggetto.  
  
 *BaseType*  
 Il tipo di carattere della classe string. Può essere uno dei seguenti:  
  
 **Char** (per le stringhe di caratteri ANSI).  
  
 **wchar_t** (per le stringhe di caratteri Unicode).  
  
 TCHAR (per le stringhe di caratteri ANSI sia Unicode).  
  
 *bMFCDLL*  
 Valore booleano che specifica se il progetto è una DLL di MFC (TRUE) o meno (FALSE).  
  
 *SystemString*  
 Deve essere `System::String`, e il progetto deve essere compilato con /clr.  
  
 *pString*  
 Un handle per un `CStringT` oggetto.  
  
### <a name="remarks"></a>Note  
 Poiché i costruttori copiano i dati di input in nuova risorsa di archiviazione allocato, è necessario essere consapevoli che la memoria possono generare eccezioni. Si noti che alcuni di questi costruttori fungono da funzioni di conversione. In questo modo è possibile sostituire, ad esempio, LPTSTR in cui un `CStringT` oggetto previsto.  
  
- `CStringT`( `LPCSTR` `lpsz` ): Crea un Unicode `CStringT` da una stringa ANSI. È inoltre possibile utilizzare questo costruttore per caricare una risorsa di stringa, come illustrato nell'esempio seguente.  
  
- `CStringT(` `LPCWSTR` `lpsz` ): Crea un `CStringT` da una stringa Unicode.  
  
- `CStringT`( `const unsigned char*` `psz` ): Consente di costruire una `CStringT` da un puntatore a **unsigned char**.  
  
> [!NOTE]
>  Definire la macro _CSTRING_DISABLE_NARROW_WIDE_CONVERSION per disattivare la conversione delle stringhe implicita tra le stringhe ANSI e Unicode. La macro esclude dai costruttori di compilazione che supportano la conversione.  
  
 Si noti che il *strSrc* parametro può essere una `CStringT` o `CThisSimpleString` oggetto. Per la `CStringT`, usare uno dei relativi creazioni di istanze predefinito (`CString`, `CStringA`, o `CStringW`); per `CThisSimpleString`, usare un **questo** puntatore. `CThisSimpleString` dichiara un'istanza del [classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), ovvero una classe di stringa più piccola con meno funzionalità rispetto al `CStringT` classe.  
  
 L'operatore di overload `CSimpleStringT<>&()` costruisce una `CStringT` dell'oggetto da un `CSimpleStringT` dichiarazione.  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e operatori su `CStringT` gli oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#112](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_7.cpp)]  
  
##  <a name="_dtorcstringt"></a>  CStringT:: ~ CStringT  
 Elimina definitivamente il `CStringT` oggetto.  
  
```  
~CStringT() throw();
```  
  
### <a name="remarks"></a>Note  
 Elimina definitivamente il `CStringT` oggetto.  
  
##  <a name="delete"></a>  CStringT::Delete  
 Elimina uno o più caratteri da una stringa che inizia con il carattere in corrispondenza dell'indice specificato.  
  
```  
int Delete(int iIndex, int nCount = 1);
```  
  
### <a name="parameters"></a>Parametri  
 *iIndex*  
 Indice a base zero del primo carattere il `CStringT` oggetto da eliminare.  
  
 *nCount*  
 Il numero di caratteri da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza della stringa modificata.  
  
### <a name="remarks"></a>Note  
 Se *nCount* troppo lungo verrà rimossa la stringa, il resto della stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#113](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_8.cpp)]  
  
```Output  
Before: Soccer is best,
    but hockey is quicker!  
After: Soccer best,
    but hockey is quicker!  
```  
  
##  <a name="find"></a>  CStringT::Find  
 Cerca questa stringa per la prima corrispondenza di un carattere o una sottostringa.  
  
```  
int Find(PCXSTR pszSub, int iStart=0) const throw();
int Find(XCHAR ch, int iStart=0) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pszSub*  
 Una sottostringa da cercare.  
  
 *iStart*  
 L'indice del carattere nella stringa da cui iniziare la ricerca con oppure 0 per partire dall'inizio.  
  
 *ch*  
 Un singolo carattere da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 Indice a base zero del primo carattere in questo `CStringT` oggetto che corrisponde alla sottostringa richiesta o caratteri; -1 se la sottostringa o un carattere non viene trovato.  
  
### <a name="remarks"></a>Note  
 La funzione è in overload per accettare entrambi singoli caratteri (simile alla funzione runtime `strchr`) e le stringhe (simile a `strstr`).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#114](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_9.cpp)]  
  
##  <a name="findoneof"></a>  CStringT::FindOneOf  
 Cerca questa stringa per il primo carattere che corrisponde a qualsiasi carattere incluso nel *pszCharSet*.  
  
```  
int FindOneOf(PCXSTR pszCharSet) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pszCharSet*  
 Stringa contenente caratteri per la corrispondenza.  
  
### <a name="return-value"></a>Valore restituito  
 Indice a base zero del primo carattere in questa stringa è presente anche nel *pszCharSet*; -1 se non esiste alcuna corrispondenza.  
  
### <a name="remarks"></a>Note  
 Trova la prima occorrenza di uno qualsiasi dei caratteri *pszCharSet*.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#115](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_10.cpp)]  
  
##  <a name="format"></a>  CStringT::Format  
 Scrive dati formattati in una `CStringT` nello stesso modo in cui [sprintf_s](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) formatta i dati in una matrice di caratteri di tipo C.  
  
```  
void __cdecl Format(UINT nFormatID, [, argument]...);
void __cdecl Format(PCXSTR pszFormat,  [, argument] ...);
```  
  
### <a name="parameters"></a>Parametri  
 *nFormatID*  
 L'identificatore di risorsa stringa che contiene la stringa di controllo del formato.  
  
 *pszFormat*  
 Una stringa di controllo del formato.  
  
 *argomento*  
 Argomenti facoltativi.  
  
### <a name="remarks"></a>Note  
 Questa funzione formatta e archivia una serie di caratteri e i valori di `CStringT`. Tutti gli argomenti facoltativi (se presente) viene convertito e restituito in base alla specifica di formato corrispondente in *pszFormat* o dalla risorsa di stringa identificata dal *nFormatID*.  
  
 La chiamata avrà esito negativo se l'oggetto stringa stesso viene offerto come un parametro a `Format`. Ad esempio, il codice seguente causerà risultati imprevisti:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#116](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_11.cpp)]  
  
 Per altre informazioni, vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#117](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_12.cpp)]  
  
##  <a name="formatmessage"></a>  CStringT::FormatMessage  
 Formatta una stringa di messaggio.  
  
```  
void __cdecl FormatMessage(UINT nFormatID, [, argument]...);
void __cdecl FormatMessage(PCXSTR pszFormat, [, argument]...);
```  
  
### <a name="parameters"></a>Parametri  
 *nFormatID*  
 L'identificatore di risorsa stringa che contiene il testo del messaggio non formattato.  
  
 *pszFormat*  
 Punta alla stringa di controllo del formato. Verrà eseguita una scansione per gli inserimenti e un formato. La stringa di formato è simile alla funzione runtime *printf*-applicare uno stile a stringhe di formato, ad eccezione del fatto che consente i parametri da inserire in ordine arbitrario.  
  
 *argomento*  
 Argomenti facoltativi.  
  
### <a name="remarks"></a>Note  
 La funzione richiede una definizione di messaggio come input. La definizione di messaggio è determinata dalle *pszFormat* o dalla risorsa di stringa identificata dal *nFormatID*. La funzione Copia il testo del messaggio formattato il `CStringT` oggetto, l'elaborazione di qualsiasi incorporato inserisce sequenze se richiesto.  
  
> [!NOTE]
> `FormatMessage` è stato effettuato un tentativo di allocazione della memoria di sistema per il nuovo formattata stringa. Se questo tentativo non riesce, viene automaticamente generata un'eccezione di memoria.  
  
 Ogni inserimento deve avere un parametro corrispondente visualizzato dopo il *pszFormat* oppure *nFormatID* parametro. All'interno di testo del messaggio, diverse sequenze di escape sono supportate per la formattazione in modo dinamico il messaggio. Per altre informazioni, vedere il Windows [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351) funzione nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#118](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_13.cpp)]  
  
##  <a name="formatmessagev"></a>  CStringT::FormatMessageV  
 Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.  
  
```  
void FormatMessageV(PCXSTR pszFormat, va_list* pArgList);
```  
  
### <a name="parameters"></a>Parametri  
 *pszFormat*  
 Punta alla stringa di controllo del formato. Verrà eseguita una scansione per gli inserimenti e un formato. La stringa di formato è simile alla funzione runtime `printf`-applicare uno stile a stringhe di formato, ad eccezione del fatto che consente i parametri da inserire in ordine arbitrario.  
  
 *pArgList*  
 Puntatore a un elenco di argomenti.  
  
### <a name="remarks"></a>Note  
 La funzione richiede una definizione di messaggio come input, determinato dal *pszFormat*. La funzione Copia il testo del messaggio formattato e un elenco di argomenti alla variabile di `CStringT` oggetto, l'elaborazione di qualsiasi incorporato inserisce sequenze se richiesto.  
  
> [!NOTE]
> `FormatMessageV` le chiamate [CStringT::FormatMessage](#formatmessage), che tenta di allocare la memoria di sistema per il nuovo formattata stringa. Se questo tentativo non riesce, viene automaticamente generata un'eccezione di memoria.  
  
 Per altre informazioni, vedere il Windows [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351) funzione nel SDK di Windows.  
  
##  <a name="formatv"></a>  CStringT::FormatV  
 Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.  
  
```  
void FormatV(PCXSTR pszFormat, va_list args);
```  
  
### <a name="parameters"></a>Parametri  
 *pszFormat*  
 Punta alla stringa di controllo del formato. Verrà eseguita una scansione per gli inserimenti e un formato. La stringa di formato è simile alla funzione runtime `printf`-applicare uno stile a stringhe di formato, ad eccezione del fatto che consente i parametri da inserire in ordine arbitrario.  
  
 *args*  
 Puntatore a un elenco di argomenti.  
  
### <a name="remarks"></a>Note  
 Scrive una stringa formattata e un elenco di variabili di argomenti da un `CStringT` stringa nello stesso modo in cui `vsprintf_s` formatta i dati in una matrice di caratteri di tipo C.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#119](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_14.cpp)]  
  
 [!code-cpp[NVC_ATLMFC_Utilities#120](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_15.cpp)]  
  
##  <a name="getenvironmentvariable"></a>  CStringT::GetEnvironmentVariable  
 Imposta la stringa per il valore della variabile di ambiente specificata.  
  
```  
BOOL GetEnvironmentVariable(PCXSTR pszVar);
```  
  
### <a name="parameters"></a>Parametri  
 *pszVar*  
 Puntatore a una stringa con terminazione null che specifica la variabile di ambiente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Recupera il valore della variabile specificata dal blocco di ambiente del processo chiamante. Il valore è sotto forma di una stringa con terminazione null di caratteri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#121](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_16.cpp)]  
  
##  <a name="insert"></a>  CStringT::Insert  
 Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.  
  
```  
int Insert(int iIndex, PCXSTR psz);
int Insert(int iIndex, XCHAR ch);
```  
  
### <a name="parameters"></a>Parametri  
 *iIndex*  
 L'indice del carattere prima del quale l'inserimento avrà luogo.  
  
 *psz*  
 Puntatore alla sottostringa da inserire.  
  
 *ch*  
 Carattere da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza della stringa modificata.  
  
### <a name="remarks"></a>Note  
 Il *iIndex* parametro identifica il primo carattere che verrà spostato per liberare spazio per il carattere o una sottostringa. Se *nIndex* è uguale a zero, si verificherà l'inserimento prima l'intera stringa. Se *nIndex* supera la lunghezza della stringa, la funzione verrà concatenare la stringa presenta e il nuovo materiale fornito in uno dei modi *ch* oppure *psz*.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#122](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_17.cpp)]  
  
##  <a name="left"></a>  CStringT::Left  
 Consente di estrarre più a sinistra *nCount* caratteri da questo `CStringT` specificato e restituisce una copia della sottostringa estratta.  
  
```  
CStringT Left(int nCount) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *nCount*  
 Il numero di caratteri da estrarre da questo oggetto `CStringT`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` contenente una copia dell'intervallo specificato. L'oggetto `CStringT` restituito può essere vuoto.  
  
### <a name="remarks"></a>Note  
 Se *nCount* supera la lunghezza della stringa, quindi viene estratta l'intera stringa. `Left` è simile alla funzione di base `Left`.  
  
 Per i set di caratteri multibyte (MBCS), *nCount* considera ogni sequenza a 8 bit come un carattere, in modo che *nCount* restituisce il numero di caratteri multibyte moltiplicati per due.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#123](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_18.cpp)]  
  
##  <a name="loadstring"></a>  CStringT::LoadString  
 Legge una risorsa di stringa di Windows, identificata da *nID*, in un oggetto esistente `CStringT` oggetto.  
  
```  
BOOL LoadString(HINSTANCE hInstance, UINT nID, WORD wLanguageID);
BOOL LoadString(HINSTANCE hInstance, UINT nID);
BOOL LoadString(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *hInstance*  
 Handle per l'istanza del modulo.  
  
 *nID*  
 Un ID di risorsa stringa di Windows.  
  
 *wLanguageID*  
 La lingua della risorsa stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il caricamento di risorse ha avuto esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Carica la risorsa di stringa (*nID*) dal modulo specificato (*hInstance*) usando la lingua specificata (*wLanguage*).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#124](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_19.cpp)]  
  
##  <a name="makelower"></a>  CStringT::MakeLower  
 Converte il `CStringT` oggetto stringa di caratteri minuscoli.  
  
```  
CStringT& MakeLower();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di caratteri minuscola risultante.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#125](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_20.cpp)]  
  
##  <a name="makereverse"></a>  CStringT::MakeReverse  
 Inverte l'ordine dei caratteri di `CStringT` oggetto.  
  
```  
CStringT& MakeReverse();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto risultante invertito stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#126](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_21.cpp)]  
  
##  <a name="makeupper"></a>  CStringT::MakeUpper  
 Converte il `CStringT` oggetto da una stringa in caratteri maiuscoli.  
  
```  
CStringT& MakeUpper();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa in caratteri maiuscoli risulta.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#127](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_22.cpp)]  
  
##  <a name="mid"></a>  CStringT::Mid  
 Estrae una sottostringa di lunghezza *nCount* caratteri da questa `CStringT` oggetto, a partire dalla posizione *iFirst* (in base zero).  
  
```  
CStringT Mid(int iFirst, int nCount) const;
CStringT Mid(int iFirst) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *iFirst*  
 Indice a base zero del primo carattere in questo `CStringT` oggetto che deve essere incluso nella sottostringa estratta.  
  
 *nCount*  
 Il numero di caratteri da estrarre da questo oggetto `CStringT`. Se questo parametro viene omesso, viene estratto il resto della stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` contenente una copia dell'intervallo specificato. Si noti che l'oggetto restituito `CStringT` oggetto può essere vuoto.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce una copia della sottostringa estratta. `Mid` è simile alla funzione di base Mid (ad eccezione del fatto che gli indici in Basic sono in base uno).  
  
 Per i set di caratteri multibyte (MBCS), *nCount* fa riferimento a ogni byte di caratteri; vale a dire un'apertura e di chiusura a 8 bit in un set di caratteri multibyte vengono conteggiati come due caratteri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#128](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_23.cpp)]  
  
##  <a name="oemtoansi"></a>  CStringT::OemToAnsi  
 Converte tutti i caratteri in questo `CStringT` oggetto OEM set di caratteri per il set di caratteri ANSI.  
  
```  
void OemToAnsi();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione non è disponibile se è definito Unicode.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CStringT::AnsiToOem](#ansitooem).  
  
##  <a name="operator_add"></a>  CStringT::operator +  
 Concatena due stringhe o un carattere e stringa.  
  
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
 *CH1*  
 Un carattere da concatenare con una stringa ANSI o Unicode.  
  
 *Ch2*  
 Un carattere da concatenare con una stringa ANSI o Unicode.  
  
 *str1*  
 Oggetto `CStringT` da concatenare con una stringa o carattere.  
  
 *str2*  
 Oggetto `CStringT` da concatenare con una stringa o carattere.  
  
 *psz1*  
 Un puntatore a una stringa con terminazione null da concatenare con una stringa o carattere.  
  
 *psz2*  
 Un puntatore a una stringa da concatenare con una stringa o carattere.  
  
### <a name="remarks"></a>Note  
 Sono disponibili sette forme di overload del `CStringT::operator+` (funzione). La prima versione concatena due esistente `CStringT` oggetti. I successivi due concatenate un `CStringT` oggetto e una stringa con terminazione null. I successivi due concatenate un `CStringT` oggetto e un carattere ANSI. Gli ultimi due concatena un `CStringT` oggetto e un carattere Unicode.  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e operatori su `CStringT` gli oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#140](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_24.cpp)]  
  
##  <a name="operator_add_eq"></a>  + = CStringT::operator  
 Concatena i caratteri fino alla fine della stringa.  
  
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
 str  
 Riferimento a un oggetto `CThisSimpleString`.  
  
 *bMFCDLL*  
 Valore booleano che specifica se il progetto è una DLL MFC o meno.  
  
 *BaseType*  
 Il tipo di base di stringa.  
  
 *var*  
 Un oggetto variant da concatenare a questa stringa.  
  
 *ch*  
 Un carattere da concatenare con una stringa ANSI o Unicode.  
  
 *pszSrc*  
 Un puntatore alla stringa originale da concatenare.  
  
 *strSrc*  
 Oggetto `CStringT` da concatenare a questa stringa.  
  
### <a name="remarks"></a>Note  
 L'operatore accetta un altro `CStringT` oggetto, un puntatore ai caratteri o un singolo carattere. È necessario essere consapevoli che la memoria possono verificarsi eccezioni quando si usa l'operatore di concatenazione perché nuova risorsa di archiviazione può essere allocato per i caratteri aggiunti a questo `CStringT` oggetto.  
  
 Per informazioni sul `CThisSimpleString`, vedere la sezione Note del [CStringT::CStringT](#cstringt).  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e operatori su `CStringT` gli oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#141](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_25.cpp)]  
  
##  <a name="operator_eq_eq"></a>  CStringT::operator = =  
 Determina se due stringhe sono uguali.  
  
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
 *CH1*  
 Un carattere ANSI o Unicode per il confronto.  
  
 *Ch2*  
 Un carattere ANSI o Unicode per il confronto.  
  
 *str1*  
 Oggetto `CStringT` per il confronto.  
  
 *str2*  
 Oggetto `CStringT` per il confronto.  
  
 *psz1*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 *psz2*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se una stringa o un carattere a sinistra è uguale a una stringa o un carattere a destra e restituisce TRUE o FALSE di conseguenza.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#142](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_26.cpp)]  
  
##  <a name="operator_neq"></a>  CStringT::operator! =  
 Determina se due stringhe in modo logico non sono uguali.  
  
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
 *CH1*  
 Un carattere da concatenare con una stringa ANSI o Unicode.  
  
 *Ch2*  
 Un carattere da concatenare con una stringa ANSI o Unicode.  
  
 *str1*  
 Oggetto `CStringT` per il confronto.  
  
 *str2*  
 Oggetto `CStringT` per il confronto.  
  
 *psz1*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 *psz2*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se una stringa o un carattere a sinistra non è uguale a una stringa o un carattere a destra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#143](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_27.cpp)]  
  
##  <a name="operator_lt"></a>  CStringT::operator &lt;  
 Determina se la stringa a sinistra dell'operatore è minore rispetto alla stringa a destra.  
  
```  
friend bool operator<(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *str1*  
 Oggetto `CStringT` per il confronto.  
  
 *str2*  
 Oggetto `CStringT` per il confronto.  
  
 *psz1*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 *psz2*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#144](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_28.cpp)]  
  
##  <a name="operator_gt"></a>  CStringT::operator &gt;  
 Determina se la stringa a sinistra dell'operatore è maggiore della stringa a destra.  
  
```  
friend bool operator>(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *str1*  
 Oggetto `CStringT` per il confronto.  
  
 *str2*  
 Oggetto `CStringT` per il confronto.  
  
 *psz1*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 *psz2*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#145](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_29.cpp)]  
  
##  <a name="operator_lt_eq"></a>  CStringT::operator &lt;=  
 Determina se la stringa a sinistra dell'operatore è minore o uguale alla stringa a destra.  
  
```  
friend bool operator<=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<=(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *str1*  
 Oggetto `CStringT` per il confronto.  
  
 *str2*  
 Oggetto `CStringT` per il confronto.  
  
 *psz1*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 *psz2*  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#146](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_30.cpp)]  
  
##  <a name="operator_gt_eq"></a>  CStringT::operator &gt;=  
 Determina se la stringa a sinistra dell'operatore è maggiore o uguale alla stringa a destra.  
  
```  
friend bool operator>=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>=(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *str1*  
 Oggetto `CStringT` per il confronto.  
  
 *str2*  
 Oggetto `CStringT` per il confronto.  
  
 *psz1*  
 Un puntatore a una stringa per il confronto.  
  
 *psz2*  
 Un puntatore a una stringa per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#147](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_31.cpp)]  
  
##  <a name="remove"></a>  CStringT::Remove  
 Rimuove tutte le istanze del carattere specificato dalla stringa.  
  
```  
int Remove(XCHAR chRemove);
```  
  
### <a name="parameters"></a>Parametri  
 *chRemove*  
 Carattere da rimuovere da una stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Numero di caratteri dalla stringa rimossi. Zero se la stringa non viene modificata.  
  
### <a name="remarks"></a>Note  
 I confronti per il carattere viene fatta distinzione tra maiuscole e minuscole.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#129](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_32.cpp)]  
  
##  <a name="replace"></a>  CStringT::Replace  
 Esistono due versioni di `Replace`. La prima versione sostituisce uno o più copie di una sottostringa tramite un'altra sottostringa. Entrambe le sottostringhe sono con terminazione null. La seconda versione sostituisce uno o più copie di un carattere utilizzando un altro carattere. Entrambe le versioni operano su dati di tipo carattere archiviati in `CStringT`.  
  
```  
int Replace(PCXSTR pszOld, PCXSTR pszNew);
int Replace(XCHAR chOld, XCHAR chNew);
```  
  
### <a name="parameters"></a>Parametri  
 *pszOld*  
 Un puntatore a una stringa con terminazione null deve essere sostituita dal *pszNew*.  
  
 *pszNew*  
 Un puntatore a una stringa con terminazione null che sostituisce *pszOld*.  
  
 *chOld*  
 Il carattere deve essere sostituita dal *chNew*.  
  
 *chNew*  
 Il carattere sostituendo *chOld*.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di istanze sostituite di carattere o substring, oppure zero se la stringa non viene modificata.  
  
### <a name="remarks"></a>Note  
 `Replace` può modificare la lunghezza della stringa in quanto *pszNew* e *pszOld* non è necessario avere la stessa lunghezza e le copie diverse della sottostringa precedente possono essere modificate in quello nuovo. La funzione esegue una corrispondenza tra maiuscole e minuscole.  
  
 Esempi di `CStringT` sono istanze `CString`, `CStringA`, e `CStringW`.  
  
 Per la `CStringA`, `Replace` funziona con ANSI o con caratteri multibyte (MBCS). Per la `CStringW`, `Replace` funziona con caratteri "wide".  
  
 Per `CString`, viene selezionato il tipo di dati carattere in fase di compilazione basato sul fatto che le costanti nella tabella seguente sono definite.  
  
|Costante definita|Tipo di dati carattere|  
|----------------------|-------------------------|  
|_UNICODE|Caratteri "wide"|  
|_MBCS|Caratteri multibyte|  
|Né|Caratteri a byte singolo|  
|Entrambi|Undefined|  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#200](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_33.cpp)]  
  
##  <a name="reversefind"></a>  CStringT::ReverseFind  
 Cerca questo `CStringT` oggetto per l'ultima corrispondenza di un carattere.  
  
```  
int ReverseFind(XCHAR ch) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *ch*  
 Carattere da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 Indice a base zero dell'ultimo carattere in questo `CStringT` oggetto che corrisponde al carattere richiesto, oppure -1 se il carattere non viene trovato.  
  
### <a name="remarks"></a>Note  
 La funzione è simile alla funzione runtime `strrchr`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#130](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_34.cpp)]  
  
##  <a name="right"></a>  CStringT::Right  
 Estrae l'ultimo (vale a dire, più a destra) *nCount* caratteri da questo `CStringT` specificato e restituisce una copia della sottostringa estratta.  
  
```  
CStringT Right(int nCount) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *nCount*  
 Il numero di caratteri da estrarre da questo oggetto `CStringT`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` contenente una copia dell'intervallo specificato. Si noti che l'oggetto restituito `CStringT` oggetto può essere vuoto.  
  
### <a name="remarks"></a>Note  
 Se *nCount* supera la lunghezza della stringa, quindi viene estratta l'intera stringa. `Right` è simile a Basic `Right` funzione (ad eccezione del fatto che gli indici in Basic sono a base zero).  
  
 Per i set di caratteri multibyte (MBCS), *nCount* fa riferimento a ogni byte di caratteri; vale a dire un'apertura e di chiusura a 8 bit in un set di caratteri multibyte vengono conteggiati come due caratteri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#131](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_35.cpp)]  
  
##  <a name="setsysstring"></a>  CStringT::SetSysString  
 Rialloca la stringa BSTR a cui punta *pbstr* e vi copia il contenuto del `CStringT` oggetto, incluso il carattere NULL.  
  
```  
BSTR SetSysString(BSTR* pbstr) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *pbstr*  
 Puntatore a una stringa di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 La nuova stringa.  
  
### <a name="remarks"></a>Note  
 In base al contenuto del `CStringT` object, il valore di BSTR fa *pbstr* modificabili. La funzione genera un `CMemoryException` se è presente memoria insufficiente.  
  
 Questa funzione viene in genere utilizzata per modificare il valore di stringhe passata per riferimento per l'automazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#132](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_36.cpp)]  
  
##  <a name="spanexcluding"></a>  CStringT::SpanExcluding  
 Estrae caratteri dalla stringa, a partire dal primo carattere che non sono presenti nel set di caratteri identificato da *pszCharSet*.  
  
```  
CStringT SpanExcluding(PCXSTR pszCharSet) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *pszCharSet*  
 Una stringa è interpretato come un set di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Una sottostringa che contiene i caratteri nella stringa che non sono presenti *pszCharSet*, a partire dal primo carattere nella stringa e terminando con il primo carattere viene trovato nella stringa che è disponibile anche nella *pszCharSet* (vale a dire, a partire dal primo carattere nella stringa e fino a ma escludendo il primo carattere nella stringa viene trovata *pszCharSet*). Restituisce l'intera stringa se alcun carattere in *pszCharSet* viene trovato nella stringa.  
  
### <a name="remarks"></a>Note  
 `SpanExcluding` estrae e restituisce tutti i caratteri che precedono la prima occorrenza di un carattere da *pszCharSet* (in altre parole, il carattere da *pszCharSet* e non sono tutti i caratteri che lo seguono nella stringa, restituito). Se nessun carattere dal *pszCharSet* non viene trovato nella stringa, `SpanExcluding` restituisce l'intera stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#133](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_37.cpp)]  
  
##  <a name="spanincluding"></a>  CStringT::SpanIncluding  
 Estrae caratteri dalla stringa, a partire dal primo carattere in set di caratteri identificato da *pszCharSet*.  
  
```  
CStringT SpanIncluding(PCXSTR pszCharSet) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *pszCharSet*  
 Una stringa è interpretato come un set di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Una sottostringa che contiene i caratteri nella stringa presenti *pszCharSet*, a partire dal primo carattere nella stringa e termina quando viene trovato un carattere nella stringa non presente nella *pszCharSet*. `SpanIncluding` Restituisce una sottostringa vuota se il primo carattere nella stringa non è incluso nel set specificato.  
  
### <a name="remarks"></a>Note  
 Se il primo carattere della stringa non è nel set di caratteri, quindi `SpanIncluding` restituisce una stringa vuota. In caso contrario, restituisce una sequenza di caratteri consecutivi nel set.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#134](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_38.cpp)]  
  
##  <a name="tokenize"></a>  CStringT::Tokenize  
 Trova il token successivo in una stringa di destinazione  
  
```  
CStringT Tokenize(PCXSTR pszTokens, int& iStart) const; 
```  
  
### <a name="parameters"></a>Parametri  
 *pszTokens*  
 Stringa che contiene delimitatori token. L'ordine di questi delimitatori non è importante.  
  
 *iStart*  
 Indice a base zero per iniziare la ricerca.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` oggetto che contiene il valore del token corrente.  
  
### <a name="remarks"></a>Note  
 Il `Tokenize` funzione trova il token successivo nella stringa di destinazione. Il set di caratteri in *pszTokens* specifica i possibili delimitatori del token da trovare. In ogni chiamata a `Tokenize` la funzione inizia in corrispondenza *iStart*ignora i delimitatori iniziali e restituisce un `CStringT` oggetto contenente il token corrente, ovvero la stringa di caratteri fino al successivo carattere delimitatore. Il valore di *iStart* viene aggiornato per essere quella che segue il carattere delimitatore di fine, oppure -1 se è stata raggiunta la fine della stringa. Ulteriori token può essere interrotta dal resto della stringa di destinazione da una serie di chiamate a `Tokenize`, usando *iStart* per tenere traccia della posizione nella stringa è il token successivo da leggere. Quando non sono presenti più token la funzione restituirà una stringa vuota e *iStart* verrà impostato su -1.  
  
 A differenza di CRT suddividere in token funzioni, ad esempio [strtok_s, strtok_s_l, wcstok_s, wcstok_s_l, mbstok_s, mbstok_s_l](../../c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md), `Tokenize` non modifica la stringa di destinazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#135](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_39.cpp)]  
  
### <a name="remarks"></a>Note  
 Come indicato di seguito è riportato l'output di questo esempio:  
  
 `Resulting Token: First`  
  
 `Resulting Token: Second`  
  
 `Resulting Token: Third`  
  
##  <a name="trim"></a>  CStringT::Trim  
 Rimuove dalla stringa di caratteri iniziali e finali.  
  
```  
CStringT& Trim(XCHAR chTarget);
CStringT& Trim(PCXSTR pszTargets);
CStringT& Trim();
```  
  
### <a name="parameters"></a>Parametri  
 *chTarget*  
 Il carattere di destinazione da sottoporre a trimming.  
  
 *pszTargets*  
 Un puntatore a una stringa contenente i caratteri di destinazione da sottoporre a trimming. Tutte le iniziali e finali le occorrenze dei caratteri in *pszTarget* verranno rimosse dal `CStringT` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la stringa troncata.  
  
### <a name="remarks"></a>Note  
 Rimuove tutte le occorrenze iniziali e finali di uno dei seguenti:  
  
-   Il carattere specificato da *chTarget*.  
  
-   Tutti i caratteri trovati nella stringa specificata da *pszTargets*. 
  
-   Spazio vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#136](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_40.cpp)]  
  
### <a name="remarks"></a>Note  
 Come indicato di seguito è riportato l'output di questo esempio:  
  
 `Before: "******Soccer is best, but liquor is quicker!!!!!"`  
  
 `After : "Soccer is best, but liquor is quicker"`  
  
##  <a name="trimleft"></a>  CStringT::TrimLeft  
 Elimina i caratteri iniziali dalla stringa.  
  
```  
CStringT& TrimLeft(XCHAR chTarget);
CStringT& TrimLeft(PCXSTR pszTargets);
CStringT& TrimLeft();
```  
  
### <a name="parameters"></a>Parametri  
 *chTarget*  
 Il carattere di destinazione da sottoporre a trimming.  
  
 *pszTargets*  
 Un puntatore a una stringa contenente i caratteri di destinazione da sottoporre a trimming. Tutte le occorrenze iniziali di caratteri in *pszTarget* verranno rimosse dal `CStringT` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 La stringa risultante tagliata.  
  
### <a name="remarks"></a>Note  
 Rimuove tutte le occorrenze iniziali e finali di uno dei seguenti:  
  
-   Il carattere specificato da *chTarget*.  
  
-   Tutti i caratteri trovati nella stringa specificata da *pszTargets*.  
  
-   Spazio vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#137](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_41.cpp)]  
  
##  <a name="trimright"></a>  CStringT::TrimRight  
 Rimuove dalla stringa di caratteri finali.  
  
```  
CStringT& TrimRight(XCHAR chTarget);
CStringT& TrimRight(PCXSTR pszTargets);
CStringT& TrimRight();
```  
  
### <a name="parameters"></a>Parametri  
 *chTarget*  
 Il carattere di destinazione da sottoporre a trimming.  
  
 *pszTargets*  
 Un puntatore a una stringa contenente i caratteri di destinazione da sottoporre a trimming. Tutte le finali le occorrenze dei caratteri in *pszTarget* verranno rimosse dal `CStringT` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `CStringT` oggetto che contiene la stringa troncata.  
  
### <a name="remarks"></a>Note  
 Rimuove gli finali le occorrenze di uno dei seguenti:  
  
-   Il carattere specificato da *chTarget*.  
  
-   Tutti i caratteri trovati nella stringa specificata da *pszTargets*.  
  
-   Spazio vuoto.  
  
 Il `CStringT& TrimRight(XCHAR chTarget)` versione accetta un parametro di carattere e rimuove tutte le copie di tale carattere dalla fine di `CStringT` dati di tipo stringa. Inizia dalla fine della stringa e funziona verso l'inizio. Arresta quando trova un carattere diverso oppure quando `CSTringT` esaurisce i dati di tipo carattere.  
  
 Il `CStringT& TrimRight(PCXSTR pszTargets)` versione accetta una stringa con terminazione null che contiene tutti i caratteri diversi da cercare. Rimuove tutte le copie di tali caratteri nel `CStringT` oggetto. Inizia alla fine della stringa e funziona verso l'inizio. Arresta quando trova un carattere non incluso nella stringa di destinazione o quando `CStringT` esaurisce i dati di tipo carattere. Non prova a corrispondere alla stringa di destinazione intero a una sottostringa alla fine di `CStringT`.  
  
 Il `CStringT& TrimRight()` versione non richiede parametri. Riduce tutti gli spazi finali dalla fine del `CStringT` stringa. Spazi vuoti possono essere le interruzioni di riga, spazi o tabulazioni.  
  
-  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#138](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_42.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)   
 [Classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)


