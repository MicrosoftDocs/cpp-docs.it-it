---
title: Classe CStringT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStringT
- No header/ATL::CStringT
- No header/ATL::CStringT::CStringT
- No header/ATL::CStringT::AllocSysString
- No header/ATL::CStringT::AnsiToOem
- No header/ATL::CStringT::AppendFormat
- No header/ATL::CStringT::Collate
- No header/ATL::CStringT::CollateNoCase
- No header/ATL::CStringT::Compare
- No header/ATL::CStringT::CompareNoCase
- No header/ATL::CStringT::Delete
- No header/ATL::CStringT::Find
- No header/ATL::CStringT::FindOneOf
- No header/ATL::CStringT::Format
- No header/ATL::CStringT::FormatMessage
- No header/ATL::CStringT::FormatMessageV
- No header/ATL::CStringT::FormatV
- No header/ATL::CStringT::GetEnvironmentVariable
- No header/ATL::CStringT::Insert
- No header/ATL::CStringT::Left
- No header/ATL::CStringT::LoadString
- No header/ATL::CStringT::MakeLower
- No header/ATL::CStringT::MakeReverse
- No header/ATL::CStringT::MakeUpper
- No header/ATL::CStringT::Mid
- No header/ATL::CStringT::OemToAnsi
- No header/ATL::CStringT::Remove
- No header/ATL::CStringT::Replace
- No header/ATL::CStringT::ReverseFind
- No header/ATL::CStringT::Right
- No header/ATL::CStringT::SetSysString
- No header/ATL::CStringT::SpanExcluding
- No header/ATL::CStringT::SpanIncluding
- No header/ATL::CStringT::Tokenize
- No header/ATL::CStringT::Trim
- No header/ATL::CStringT::TrimLeft
- No header/ATL::CStringT::TrimRight
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], in ATL
- shared classes, CStringT
- CStringT class
ms.assetid: 7cacc59c-425f-40f1-8f5b-6db921318ec9
caps.latest.revision: 33
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 1a00023e4d3e31ddb6381e90a50231449b1de18d
ms.openlocfilehash: 961dc75623ec04993d118e46e1d4ba73a9aadcec
ms.lasthandoff: 02/28/2017

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
 `BaseType`  
 Il tipo di carattere della classe string. Può essere uno dei seguenti:  
  
- `char`(per stringhe di caratteri ANSI).  
  
- `wchar_t`(per stringhe di caratteri Unicode).  
  
- **TCHAR** (per le stringhe di caratteri ANSI sia Unicode).  
  
 `StringTraits`  
 Determina se la classe string necessita di supporto per la libreria di runtime C (CRT) e in cui si trovano le risorse di stringa. Può essere uno dei seguenti:  
  
- **StrTraitATL<> </> ** | `char` | **TCHAR, ChTraitsCRT<> </> ** | `char` | **TCHAR > >**  
  
     La classe richiede supporto CRT e cerca le stringhe di risorsa nel modulo specificato da `m_hInstResource` (un membro della classe modulo dell'applicazione).  
  
- **StrTraitATL<> </> ** | `char` | **TCHAR, ChTraitsOS<> </> ** | `char` | **TCHAR > >**  
  
     La classe non richiede supporto CRT e cerca le stringhe di risorsa nel modulo specificato da `m_hInstResource` (un membro della classe modulo dell'applicazione).  
  
- **StrTraitMFC<> </> ** | `char` | **TCHAR, ChTraitsCRT<> </> ** | `char` | **TCHAR > >**  
  
     La classe richiede supporto CRT e cerca le stringhe di risorse utilizzando l'algoritmo di ricerca MFC standard.  
  
- **StrTraitMFC<> </> ** | `char` | **TCHAR, ChTraitsOS<> </> ** | `char` | **TCHAR > >**  
  
     La classe non richiede supporto CRT e cerca le stringhe di risorse utilizzando l'algoritmo di ricerca MFC standard.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringT::CStringT](#cstringt)|Costruisce un `CStringT` oggetto in vari modi.|  
|[CStringT:: ~ CStringT](#_dtorcstringt)|Elimina un oggetto `CStringT`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringT::AllocSysString](#allocsysstring)|Alloca un `BSTR` da `CStringT` dati.|  
|[CStringT::AnsiToOem](#ansitooem)|Esegue una conversione sul posto dal set per il set di caratteri OEM di caratteri ANSI.|  
|[CStringT::AppendFormat](#appendformat)|Aggiunge dati formattati esistente `CStringT` oggetto.|  
|[CStringT::Collate](#collate)|Confronta due stringhe (maiuscole e minuscole, utilizza le informazioni specifiche delle impostazioni locali).|  
|[CStringT::CollateNoCase](#collatenocase)|Confronta due stringhe (maiuscole e minuscole, utilizza le informazioni specifiche delle impostazioni locali).|  
|[CStringT::Compare](#compare)|Confronta due stringhe (maiuscole/minuscole).|  
|[CStringT::CompareNoCase](#comparenocase)|Confronta due stringhe (distinzione tra maiuscole e minuscole).|  
|[CStringT::Delete](#delete)|Elimina uno o più caratteri da una stringa.|  
|[CStringT::Find](#find)|Trova un carattere o una sottostringa all'interno di una stringa più grande.|  
|[CStringT::FindOneOf](#findoneof)|Trova il primo carattere corrispondente da un set.|  
|[CStringT::Format](#format)|Formatta la stringa come `sprintf` viene.|  
|[CStringT::FormatMessage](#formatmessage)|Formatta una stringa di messaggio.|  
|[CStringT::FormatMessageV](#formatmessagev)|Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.|  
|[CStringT::FormatV](#formatv)|Formatta la stringa utilizzando un elenco di argomenti variabili.|  
|[CStringT::GetEnvironmentVariable](#getenvironmentvariable)|Imposta la stringa per il valore della variabile di ambiente specificato.|  
|[CStringT::Insert](#insert)|Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.|  
|[CStringT::Left](#left)|Estrae la parte sinistra di una stringa.|  
|[CStringT::LoadString](#loadstring)|Carica un oggetto esistente `CStringT` oggetto da una risorsa di Windows.|  
|[CStringT::MakeLower](#makelower)|Converte tutti i caratteri in questa stringa in caratteri minuscoli.|  
|[CStringT::MakeReverse](#makereverse)|Inverte la stringa.|  
|[CStringT::MakeUpper](#makeupper)|Converte tutti i caratteri in questa stringa in caratteri maiuscoli.|  
|[CStringT::Mid](#mid)|Estrae la parte centrale di una stringa.|  
|[CStringT::OemToAnsi](#oemtoansi)|Esegue una conversione sul posto dal set di set di caratteri ANSI di caratteri OEM.|  
|[CStringT::Remove](#remove)|Rimuove indicato da una stringa di caratteri.|  
|[CStringT::Replace](#replace)|Sostituisce indicato caratteri con altri caratteri.|  
|[CStringT::ReverseFind](#reversefind)|Trova un carattere all'interno di una stringa più grande; inizia dalla fine.|  
|[CStringT::Right](#right)|Estrae la parte destra di una stringa.|  
|[CStringT::SetSysString](#setsysstring)|Imposta un oggetto esistente `BSTR` oggetto con i dati da un `CStringT` oggetto.|  
|[CStringT::SpanExcluding](#spanexcluding)|Estrae i caratteri dalla stringa, a partire dal primo carattere che non sono presenti nel set di caratteri identificato da `pszCharSet`.|  
|[CStringT::SpanIncluding](#spanincluding)|Estrae una sottostringa che contiene solo i caratteri in un set.|  
|[CStringT::Tokenize](#tokenize)|Estrae specificato i token in una stringa di destinazione.|  
|[CStringT::Trim](#trim)|Elimina tutti caratteri spazi vuoti iniziali e finali dalla stringa.|  
|[CStringT::TrimLeft](#trimleft)|Elimina gli spazi vuoti dalla stringa.|  
|[CStringT::TrimRight](#trimright)|Elimina gli spazi vuoti finali dalla stringa.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore =](#operator_eq)|Assegna un nuovo valore per un `CStringT` oggetto.|  
|[CStringT::operator +](#operator_add)|Concatena due stringhe o un carattere e una stringa.|  
|[+ = CStringT::operator](#operator_add_eq)|Concatena una nuova stringa alla fine di una stringa esistente.|  
|[CStringT::operator = =](#operator_eq_eq)|Determina se due stringhe sono uguali.|  
|[CStringT::operator! =](#operator_neq)|Determina se due stringhe logicamente non sono uguali.|  
|[CStringT::operator&lt;](#operator_lt)|Determina se la stringa a sinistra dell'operatore è minore di stringa a destra.|  
|[CStringT::operator&gt;](#operator_gt)|Determina se la stringa a sinistra dell'operatore è maggiore per la stringa a destra.|  
|[CStringT::operator&lt;=](#operator_lt_eq)|Determina se la stringa a sinistra dell'operatore è minore o uguale alla stringa sul lato destro.|  
|[CStringT::operator&gt;=](#operator_gt_eq)|Determina se la stringa a sinistra dell'operatore è maggiore o uguale alla stringa sul lato destro.|  
  
## <a name="remarks"></a>Note  
 `CStringT`eredita da [CSimpleStringT classe](../../atl-mfc-shared/reference/csimplestringt-class.md). Funzionalità avanzate, ad esempio la modifica di carattere, ordinamento e ricerca, vengono implementate da `CStringT`.  
  
> [!NOTE]
> `CStringT`gli oggetti sono in grado di generare eccezioni. Questo errore si verifica quando un `CStringT` oggetto completo esaurimento della memoria per qualsiasi motivo.  
  
 Oggetto `CStringT` oggetto è costituito da una sequenza di lunghezza variabile di caratteri. `CStringT`fornisce le funzioni e operatori utilizzando una sintassi simile a quella di base. Concatenazione e operatori di confronto, insieme a gestione della memoria semplificata, rendono `CStringT` oggetti più semplici da utilizzare rispetto a matrici di caratteri normali.  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e gli operatori su `CStringT` oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
 Utilizzando combinazioni diverse di `BaseType` e `StringTraits` parametri, `CStringT` oggetti possano sono disponibili i seguenti tipi che sono state definite dalle librerie ATL.  
  
 Se si utilizza un'applicazione ATL:  
  
 `CString`, `CStringA`, e `CStringW` vengono esportate dalla DLL MFC (MFC90. DLL), mai dalla DLL dell'utente. In questo modo si evita la `CStringT` da definito più volte.  
  
> [!NOTE]
>  Se si riscontrano errori del linker quando si esporta un `CString`-classe derivata da un'estensione MFC DLL in Visual C++ .NET 2002 e sono applicati per risolvere il problema come descritto nell'articolo della Knowledge Base, Q309801 "Linking errori quando si importa Classes" (Q309801), è necessario rimuovere il codice di soluzione, poiché questo è stato risolto in Visual C++ .NET 2003. È possibile trovare articoli della Knowledge Base nel CD di MSDN Library o all'indirizzo [http://support.microsoft.com/support/](http://support.microsoft.com/support).  
  
 I seguenti tipi di stringa sono disponibili nelle applicazioni MFC:  
  
|Tipo CStringT|Dichiarazione|  
|-------------------|-----------------|  
|`CStringA`|Un carattere ANSI digitare stringa con il supporto di CRT.|  
|`CStringW`|Un carattere Unicode di tipo stringa con il supporto.|  
|`CString`|Tipi di carattere ANSI sia Unicode con supporto di CRT.|  
  
 La stringa seguente tipi sono disponibili in progetti dove **ATL_CSTRING_NO_CRT** è definito:  
  
|Tipo CStringT|Dichiarazione|  
|-------------------|-----------------|  
|**CAtlStringA**|Un carattere ANSI digitare stringa senza il supporto.|  
|**CAtlStringW**|Un carattere Unicode di tipo stringa senza il supporto.|  
|**CAtlString**|Tipi di carattere ANSI sia Unicode senza il supporto.|  
  
 La stringa seguente tipi sono disponibili in progetti dove **ATL_CSTRING_NO_CRT** non è definito:  
  
|Tipo CStringT|Dichiarazione|  
|-------------------|-----------------|  
|**CAtlStringA**|Un carattere ANSI digitare stringa con il supporto di CRT.|  
|**CAtlStringW**|Un carattere Unicode di tipo stringa con il supporto.|  
|**CAtlString**|Tipi di carattere ANSI sia Unicode con supporto di CRT.|  
  
 `CString`Inoltre, gli oggetti hanno le seguenti caratteristiche:  
  
- `CStringT`gli oggetti possono aumentare in seguito a operazioni di concatenazione.  
  
- `CStringT`gli oggetti seguono "semantica dei valori". Si tratta di un `CStringT` oggetto come una stringa effettiva, non come un puntatore a una stringa.  
  
-   È possibile sostituire liberamente `CStringT` gli oggetti per `PCXSTR` gli argomenti della funzione.  
  
-   Gestione della memoria personalizzato per i buffer di stringa. Per ulteriori informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## <a name="cstringt-predefined-types"></a>CStringT i tipi predefiniti.  
 Poiché `CStringT` utilizza un argomento di modello per definire il tipo di carattere (entrambi [wchar_t](../../c-runtime-library/standard-types.md) o [char](../../c-runtime-library/standard-types.md)) è supportato, tipi di parametro di metodo possono essere complicati in alcuni casi. Per semplificare questo problema, un set di tipi predefiniti è definito e utilizzato in tutta la `CStringT` classe. Nella tabella seguente sono elencati i vari tipi:  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`XCHAR`|Un singolo carattere (sia `wchar_t` o `char`) con lo stesso tipo di carattere come il `CStringT` oggetto.|  
|**YCHAR**|Un singolo carattere (sia `wchar_t` o `char`) con il tipo di carattere opposto come il `CStringT` oggetto.|  
|`PXSTR`|Un puntatore a una stringa di caratteri (sia `wchar_t` o `char`) con lo stesso tipo di carattere come il `CStringT` oggetto.|  
|**PYSTR**|Un puntatore a una stringa di caratteri (sia `wchar_t` o `char`) con il tipo di carattere opposto come il `CStringT` oggetto.|  
|`PCXSTR`|Un puntatore a un **const** stringa di caratteri (sia `wchar_t` o `char`) con lo stesso tipo di carattere come il `CStringT` oggetto.|  
|**PCYSTR**|Un puntatore a un **const** stringa di caratteri (sia `wchar_t` o `char`) con il tipo di carattere opposto come il `CStringT` oggetto.|  
  
> [!NOTE]
>  Codice utilizzato in precedenza non documentate i metodi di `CString` (ad esempio **AssignCopy**) deve essere sostituito con il codice che utilizza i seguenti metodi documentati di `CStringT` (ad esempio `GetBuffer` o `ReleaseBuffer`). Questi metodi vengono ereditati da `CSimpleStringT`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)  
  
 `CStringT`  
  
## <a name="requirements"></a>Requisiti  
  
|Header|Utilizzare per|  
|------------|-------------|  
|CStringT. h|Oggetti stringa solo MFC|  
|atlstr.h|Oggetti stringa non MFC|  
  
##  <a name="allocsysstring"></a>CStringT::AllocSysString  
 Alloca una stringa compatibili con l'automazione del tipo `BSTR` e copia il contenuto di `CStringT` oggetto al suo interno, incluso il carattere di terminazione null.  
  
```  
BSTR AllocSysString() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La nuova stringa allocata.  
  
### <a name="remarks"></a>Note  
 Nei programmi MFC, un [CMemoryException classe](../../mfc/reference/cmemoryexception-class.md) viene generata se è presente memoria insufficiente. Nei programmi ATL, un [CAtlException](../../atl/reference/catlexception-class.md) viene generata un'eccezione. Questa funzione viene in genere utilizzata per restituire le stringhe per l'automazione.  
  
 In genere, se questa stringa viene passata a una funzione COM come [in] parametro, tale operazione richiede che il chiamante di liberare la stringa. Questa operazione può essere eseguita utilizzando [SysFreeString](http://msdn.microsoft.com/en-us/8f230ee3-5f6e-4cb9-a910-9c90b754dcd3), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Per ulteriori informazioni, vedere [allocazione e deallocazione della memoria per un oggetto BSTR](../../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md).  
  
 Per ulteriori informazioni sulle funzioni di allocazione OLE in Windows, vedere [SysAllocString](http://msdn.microsoft.com/en-us/9e0437a2-9b4a-4576-88b0-5cb9d08ca29b) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CStringT::AllocSysString`.  
  
 [!code-cpp[&#105; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_1.cpp)]  
  
##  <a name="ansitooem"></a>CStringT::AnsiToOem  
 Converte tutti i caratteri in questa `CStringT` oggetto dal set per il set di caratteri OEM di caratteri ANSI.  
  
```  
void AnsiToOem();
```  
  
### <a name="remarks"></a>Note  
 La funzione non è disponibile se `_UNICODE` è definito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#106; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_2.cpp)]  
  
##  <a name="appendformat"></a>CStringT::AppendFormat  
 Aggiunge dati formattati esistente `CStringT` oggetto.  
  
```  
void __cdecl AppendFormat(PCXSTR pszFormat, [, argument] ...);
void __cdecl AppendFormat(UINT nFormatID, [, argument] ...);
```  
  
### <a name="parameters"></a>Parametri  
 `pszFormat`  
 Una stringa di controllo del formato.  
  
 `nFormatID`  
 Identificatore della risorsa di stringa che contiene la stringa di controllo del formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
### <a name="remarks"></a>Note  
 Questa funzione formatta e aggiunge una serie di caratteri e i valori di `CStringT`. Ogni argomento facoltativo (se presente) viene convertito e aggiunto in base alla specifica del formato corrispondente in `pszFormat` o dalla risorsa stringa identificata da `nFormatID`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#107; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_3.cpp)]  
  
##  <a name="collate"></a>CStringT::Collate  
 Confronta due stringhe utilizzando la funzione di testo generico `_tcscoll`.  
  
```  
int Collate(PCXSTR psz) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa utilizzata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche, < 0="" if="" this=""> `CStringT` oggetto è minore di `psz`, o > 0 se l'oggetto `CStringT` oggetto è maggiore di `psz`.  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcscoll`, definito in TCHAR. H, viene eseguito il mapping a una delle due `strcoll`, `wcscoll`, o `_mbscoll`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe in base alla tabella codici correntemente in uso. Per ulteriori informazioni, vedere [strcoll, wcscoll, mbscoll, strcoll_l, wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).  
  
##  <a name="collatenocase"></a>CStringT::CollateNoCase  
 Confronta due stringhe utilizzando la funzione di testo generico `_tcscoll`.  
  
```  
int CollateNoCase(PCXSTR psz) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa utilizzata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche (ignorando caso), < 0="" if="" this=""> `CStringT` oggetto è minore di `psz` (ignorando caso), o > 0 se l'oggetto `CStringT` oggetto è maggiore di `psz` (ignorando caso).  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcscoll`, definito in TCHAR. H, viene eseguito il mapping a una delle due `stricoll`, `wcsicoll`, o `_mbsicoll`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe, in base alla tabella codice attualmente in uso. Per ulteriori informazioni, vedere [strcoll, wcscoll, mbscoll, strcoll_l, wcscoll_l, _mbscoll_l](../../c-runtime-library/reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#109;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_4.cpp)]  
  
##  <a name="compare"></a>CStringT::Compare  
 Confronta due stringhe (maiuscole/minuscole).  
  
```  
int Compare(PCXSTR psz) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa utilizzata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche, < 0="" if="" this=""> `CStringT` oggetto è minore di `psz`, o > 0 se l'oggetto `CStringT` oggetto è maggiore di `psz`.  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcscmp`, definito in TCHAR. H, viene eseguito il mapping a una delle due `strcmp`, `wcscmp`, o `_mbscmp`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe e non è influenzata dalle impostazioni locali. Per ulteriori informazioni, vedere [strcmp, wcscmp, mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md).  
  
 Se la stringa contiene caratteri null incorporati, la stringa viene considerata da troncare il primo carattere null incorporato ai fini del confronto.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CStringT::Compare`.  
  
 [!code-cpp[&#110; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_5.cpp)]  
  
##  <a name="comparenocase"></a>CStringT::CompareNoCase  
 Confronta due stringhe (distinzione tra maiuscole e minuscole).  
  
```  
int CompareNoCase(PCXSTR psz) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa utilizzata per il confronto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se le stringhe sono identiche (ignorando caso), <0 if="" this=""></0> `CStringT` oggetto è minore di `psz` (ignorando caso), o >&0; se l'oggetto `CStringT` oggetto è maggiore di `psz` (ignorando caso).  
  
### <a name="remarks"></a>Note  
 La funzione di testo generico `_tcsicmp`, definito in TCHAR. H, viene eseguito il mapping a una delle due `_stricmp`, `_wcsicmp` o `_mbsicmp`, a seconda del set di caratteri che è definito in fase di compilazione. Ogni funzione esegue un confronto tra maiuscole e minuscole delle stringhe. Il confronto dipende la `LC_CTYPE` aspetto delle impostazioni locali ma non `LC_COLLATE`. Per ulteriori informazioni, vedere [stricmp, wcsicmp, mbsicmp, stricmp_l, wcsicmp_l, mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#111;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_6.cpp)]  
  
##  <a name="cstringt"></a>CStringT::CStringT  
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
 `pch`  
 Un puntatore a una matrice di caratteri di lunghezza `nLength`, non con terminazione null.  
  
 `nLength`  
 Un conteggio del numero di caratteri in `pch`.  
  
 `ch`  
 Un singolo carattere.  
  
 `pszSrc`  
 Una stringa con terminazione null deve essere copiato `CStringT` oggetto.  
  
 `pStringMgr`  
 Un puntatore al gestore di memoria per il `CStringT` oggetto. Per ulteriori informazioni su `IAtlStringMgr` e gestione della memoria per `CStringT`, vedere [gestione della memoria con CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
 `strSrc`  
 Un oggetto esistente `CStringT` oggetto deve essere copiato `CStringT` oggetto. Per ulteriori informazioni su `CThisString` e `CThisSimpleString`, vedere la sezione Osservazioni.  
  
 `varSrc`  
 Un oggetto variant deve essere copiato `CStringT` oggetto.  
  
 `BaseType`  
 Il tipo di carattere della classe string. Può essere uno dei seguenti:  
  
 `char`(per stringhe di caratteri ANSI).  
  
 `wchar_t`(per stringhe di caratteri Unicode).  
  
 `TCHAR`(ANSI sia Unicode stringhe di caratteri).  
  
 `bMFCDLL`  
 Valore booleano che specifica se il progetto è una DLL MFC (TRUE) o meno (FALSE).  
  
 `SystemString`  
 Deve essere `System::String`, e il progetto deve essere compilato con /clr.  
  
 `pString`  
 Un handle per un `CStringT` oggetto.  
  
### <a name="remarks"></a>Note  
 Poiché i costruttori di copiano i dati di input in nuova risorsa di archiviazione allocato, è necessario essere consapevoli che la memoria possono generare eccezioni. Si noti che alcuni di questi costruttori fungere come funzioni di conversione. Ciò consente di sostituire, ad esempio, un `LPTSTR` in cui un `CStringT` è previsto un oggetto.  
  
- `CStringT`( `LPCSTR` `lpsz` ): Costruisce Unicode `CStringT` da una stringa ANSI. È inoltre possibile utilizzare questo costruttore per caricare una risorsa di stringa, come illustrato nell'esempio riportato di seguito.  
  
- `CStringT(``LPCWSTR` `lpsz` ): Crea un `CStringT` da una stringa Unicode.  
  
- `CStringT`( `const unsigned char*` `psz` ): Consente di costruire un `CStringT` da un puntatore a `unsigned char`.  
  
> [!NOTE]
>  Definire il **_CSTRING_DISABLE_NARROW_WIDE_CONVERSION** macro per disattivare la conversione di stringa implicita tra [!INCLUDE[vcpransi](../../atl-mfc-shared/reference/includes/vcpransi_md.md)] e [!INCLUDE[TLA#tla_unicode](../../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] stringhe. La macro esclude dai costruttori di compilazione che supportano la conversione.  
  
 Si noti che il `strSrc` parametro può essere un `CStringT` o `CThisSimpleString` oggetto. Per `CStringT`, utilizzare uno dei relativi creazioni di istanze predefinite ( `CString`, `CStringA`, o `CStringW`); per `CThisSimpleString`, utilizzare un `this` puntatore. `CThisSimpleString`dichiara un'istanza del [classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), che è una classe di stringhe più piccola con meno funzionalità rispetto alla `CStringT` classe.  
  
 L'operatore di overload `CSimpleStringT<>&()` costruisce un `CStringT` dell'oggetto da un `CSimpleStringT` dichiarazione.  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e gli operatori su `CStringT` oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#112;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_7.cpp)]  
  
##  <a name="_dtorcstringt"></a>CStringT:: ~ CStringT  
 Elimina il `CStringT` oggetto.  
  
```  
~CStringT() throw();
```  
  
### <a name="remarks"></a>Note  
 Elimina il `CStringT` oggetto.  
  
##  <a name="delete"></a>CStringT::Delete  
 Elimina uno o più caratteri da una stringa che inizia con il carattere in corrispondenza dell'indice specificato.  
  
```  
int Delete(int iIndex, int nCount = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `iIndex`  
 L'indice in base zero del primo carattere di `CStringT` oggetto da eliminare.  
  
 `nCount`  
 Il numero di caratteri da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza della stringa modificata.  
  
### <a name="remarks"></a>Note  
 Se `nCount` è superiore a quella di stringa, il resto della stringa verrà rimossa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#113;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_8.cpp)]  
  
```Output  
Before: Soccer is best,
    but hockey is quicker!  
After: Soccer best,
    but hockey is quicker!  
```  
  
##  <a name="find"></a>CStringT::Find  
 Cerca la prima corrispondenza di un carattere o una sottostringa di questa stringa.  
  
```  
int Find(PCXSTR pszSub, int iStart=0) const throw();
int Find(XCHAR ch, int iStart=0) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszSub`  
 Sottostringa da cercare.  
  
 `iStart`  
 L'indice del carattere per avviare la ricerca con la stringa oppure 0 per ricominciare dall'inizio.  
  
 `ch`  
 Un singolo carattere da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero del primo carattere in questa `CStringT` oggetto che corrisponde alla sottostringa di richiesta o caratteri; -1 se non viene trovato il carattere o una sottostringa.  
  
### <a name="remarks"></a>Note  
 La funzione è sottoposta a overload per accettare entrambi singoli caratteri (simile alla funzione runtime `strchr`) e le stringhe (simile a `strstr`).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#114; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_9.cpp)]  
  
##  <a name="findoneof"></a>CStringT::FindOneOf  
 Cerca questa stringa per il primo carattere che corrisponde a qualsiasi carattere incluso nel `pszCharSet`.  
  
```  
int FindOneOf(PCXSTR pszCharSet) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszCharSet`  
 Stringa contenente caratteri per la corrispondenza.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero del primo carattere in questa stringa che si trova anche nella `pszCharSet`; -1 se non esiste alcuna corrispondenza.  
  
### <a name="remarks"></a>Note  
 Trova la prima occorrenza di uno qualsiasi dei caratteri `pszCharSet`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#115;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_10.cpp)]  
  
##  <a name="format"></a>CStringT::Format  
 Scrive dati formattati in una `CStringT` nello stesso modo in cui [sprintf_s](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) formati di dati in una matrice di caratteri di tipo C.  
  
```  
void __cdecl Format(UINT nFormatID, [, argument]...);
void __cdecl Format(PCXSTR pszFormat,  [, argument] ...);
```  
  
### <a name="parameters"></a>Parametri  
 `nFormatID`  
 Identificatore della risorsa di stringa che contiene la stringa di controllo del formato.  
  
 `pszFormat`  
 Una stringa di controllo del formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
### <a name="remarks"></a>Note  
 Questa funzione formatta e archivia una serie di caratteri e i valori di `CStringT`. Ogni argomento facoltativo (se presente) viene convertita e restituita in base alla specifica del formato corrispondente in `pszFormat` o dalla risorsa stringa identificata da `nFormatID`.  
  
 La chiamata avrà esito negativo se l'oggetto stringa stesso viene offerto come parametro a `Format`. Ad esempio, il codice seguente causerà risultati imprevisti:  
  
 [!code-cpp[N.&116; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_11.cpp)]  
  
 Per altre informazioni, vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#117;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_12.cpp)]  
  
##  <a name="formatmessage"></a>CStringT::FormatMessage  
 Formatta una stringa di messaggio.  
  
```  
void __cdecl FormatMessage(UINT nFormatID, [, argument]...);
void __cdecl FormatMessage(PCXSTR pszFormat, [, argument]...);
```  
  
### <a name="parameters"></a>Parametri  
 `nFormatID`  
 Identificatore della risorsa di stringa che contiene il testo del messaggio non formattato.  
  
 `pszFormat`  
 Punta alla stringa di controllo del formato. Verrà eseguita una scansione per gli inserimenti e un formato. La stringa di formato è simile alla funzione runtime `printf`-stile stringhe di formato, ma consente per i parametri da inserire in un ordine arbitrario.  
  
 `argument`  
 Argomenti facoltativi.  
  
### <a name="remarks"></a>Note  
 La funzione richiede una definizione di messaggio come input. Definizione del messaggio è determinata da `pszFormat` o dalla risorsa stringa identificata da `nFormatID`. La funzione Copia il testo del messaggio formattato per la `CStringT` oggetto, l'elaborazione di qualsiasi incorporato inserisce sequenze se richiesto.  
  
> [!NOTE]
> `FormatMessage`tenta di allocare la memoria di sistema per la stringa appena formattata. Se questo tentativo non riesce, viene automaticamente generata un'eccezione di memoria.  
  
 Ogni inserimento deve avere un esempio di parametro corrispondente di `pszFormat` o `nFormatID` parametro. All'interno del testo del messaggio, sono supportate più sequenze di escape per la formattazione in modo dinamico il messaggio. Per ulteriori informazioni, vedere Windows [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351) in funzione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#118; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_13.cpp)]  
  
##  <a name="formatmessagev"></a>CStringT::FormatMessageV  
 Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.  
  
```  
void FormatMessageV(PCXSTR pszFormat, va_list* pArgList);
```  
  
### <a name="parameters"></a>Parametri  
 `pszFormat`  
 Punta alla stringa di controllo del formato. Verrà eseguita una scansione per gli inserimenti e un formato. La stringa di formato è simile alla funzione runtime `printf`-stile stringhe di formato, ma consente per i parametri da inserire in un ordine arbitrario.  
  
 `pArgList`  
 Puntatore a un elenco di argomenti.  
  
### <a name="remarks"></a>Note  
 La funzione richiede una definizione di messaggio come input, determinato dal `pszFormat`. La funzione Copia il testo del messaggio formattato e un elenco di argomenti variabili di `CStringT` oggetto, l'elaborazione di qualsiasi incorporato inserisce sequenze se richiesto.  
  
> [!NOTE]
> `FormatMessageV`chiamate [CStringT::FormatMessage](#formatmessage), che tenta di allocare la memoria di sistema per la stringa appena formattata. Se questo tentativo non riesce, viene automaticamente generata un'eccezione di memoria.  
  
 Per ulteriori informazioni, vedere Windows [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351) in funzione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="formatv"></a>CStringT::FormatV  
 Formatta una stringa di messaggio utilizzando un elenco di argomenti variabili.  
  
```  
void FormatV(PCXSTR pszFormat, va_list args);
```  
  
### <a name="parameters"></a>Parametri  
 `pszFormat`  
 Punta alla stringa di controllo del formato. Verrà eseguita una scansione per gli inserimenti e un formato. La stringa di formato è simile alla funzione runtime `printf`-stile stringhe di formato, ma consente per i parametri da inserire in un ordine arbitrario.  
  
 `args`  
 Puntatore a un elenco di argomenti.  
  
### <a name="remarks"></a>Note  
 Scrive una stringa formattata e un elenco di argomenti variabili un `CStringT` stringa nello stesso modo in cui `vsprintf_s` formati di dati in una matrice di caratteri di tipo C.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#119;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_14.cpp)]  
  
 [!code-cpp[&#120; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_15.cpp)]  
  
##  <a name="getenvironmentvariable"></a>CStringT::GetEnvironmentVariable  
 Imposta la stringa per il valore della variabile di ambiente specificato.  
  
```  
BOOL GetEnvironmentVariable(PCXSTR pszVar);
```  
  
### <a name="parameters"></a>Parametri  
 `pszVar`  
 Puntatore a una stringa con terminazione null che specifica la variabile di ambiente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Recupera il valore della variabile specificata dal blocco di ambiente del processo chiamante. Il valore è sotto forma di stringa con terminazione null di caratteri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#121;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_16.cpp)]  
  
##  <a name="insert"></a>CStringT::Insert  
 Inserisce un singolo carattere o una sottostringa in corrispondenza dell'indice specificato all'interno della stringa.  
  
```  
int Insert(int iIndex, PCXSTR psz);
int Insert(int iIndex, XCHAR ch);
```  
  
### <a name="parameters"></a>Parametri  
 `iIndex`  
 L'indice del carattere prima del quale l'inserimento avrà luogo.  
  
 `psz`  
 Un puntatore con la sottostringa da inserire.  
  
 `ch`  
 Carattere da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza della stringa modificata.  
  
### <a name="remarks"></a>Note  
 Il `iIndex` parametro identifica il primo carattere che verrà spostato per fare spazio per il carattere o una sottostringa. Se `nIndex` è zero, l'inserimento verrà eseguita prima l'intera stringa. Se `nIndex` supera la lunghezza della stringa, la funzione verrà concatenare la stringa presenta e il nuovo materiale fornite da `ch` o `psz`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#122;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_17.cpp)]  
  
##  <a name="left"></a>CStringT::Left  
 Estrae i caratteri più a sinistra di `nCount` da questo oggetto `CStringT` e restituisce una copia della sottostringa estratta.  
  
```  
CStringT Left(int nCount) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `nCount`  
 Il numero di caratteri da estrarre da questo oggetto `CStringT`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` contenente una copia dell'intervallo specificato. L'oggetto `CStringT` restituito può essere vuoto.  
  
### <a name="remarks"></a>Note  
 Se `nCount` supera la lunghezza della stringa, viene estratta l'intera stringa. `Left` è simile alla funzione di base `Left`.  
  
 Per i set di caratteri a più byte (MBCS), `nCount` considera ogni sequenza a 8 bit come carattere, in modo che `nCount` restituisce il numero di caratteri multibyte moltiplicati per due.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[123 NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_18.cpp)]  
  
##  <a name="loadstring"></a>CStringT::LoadString  
 Legge una risorsa di stringa di Windows, identificata da `nID`, in un oggetto esistente `CStringT` oggetto.  
  
```  
BOOL LoadString(HINSTANCE hInstance, UINT nID, WORD wLanguageID);
BOOL LoadString(HINSTANCE hInstance, UINT nID);
BOOL LoadString(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `hInstance`  
 Handle per l'istanza del modulo.  
  
 `nID`  
 Un ID di risorsa stringa di Windows.  
  
 `wLanguageID`  
 La lingua della risorsa di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il carico delle risorse è stata completata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Carica la risorsa di stringa ( `nID`) dal modulo specificato ( `hInstance`) utilizzando la lingua specificata ( `wLanguage`).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#124;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_19.cpp)]  
  
##  <a name="makelower"></a>CStringT::MakeLower  
 Converte il `CStringT` oggetto da una stringa di caratteri minuscoli.  
  
```  
CStringT& MakeLower();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di caratteri minuscola.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#125; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_20.cpp)]  
  
##  <a name="makereverse"></a>CStringT::MakeReverse  
 Inverte l'ordine dei caratteri di `CStringT` oggetto.  
  
```  
CStringT& MakeReverse();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto risultante invertito stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#126;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_21.cpp)]  
  
##  <a name="makeupper"></a>CStringT::MakeUpper  
 Converte il `CStringT` oggetto da una stringa in caratteri maiuscoli.  
  
```  
CStringT& MakeUpper();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa in caratteri maiuscoli risulta.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 [!code-cpp[127 NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_22.cpp)]  
  
##  <a name="mid"></a>CStringT::Mid  
 Estrae una sottostringa di lunghezza `nCount` caratteri da questo `CStringT` oggetto, a partire dalla posizione `iFirst` (in base zero).  
  
```  
CStringT Mid(int iFirst, int nCount) const;
CStringT Mid(int iFirst) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `iFirst`  
 L'indice in base zero del primo carattere in questa `CStringT` oggetto che deve essere incluso nella sottostringa estratta.  
  
 `nCount`  
 Il numero di caratteri da estrarre da questo oggetto `CStringT`. Se questo parametro viene omesso, viene estratto il resto della stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` contenente una copia dell'intervallo specificato. Si noti che l'oggetto restituito `CStringT` oggetto può essere vuoto.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce una copia della sottostringa estratta. `Mid`è simile alla funzione Mid base (ad eccezione del fatto che gli indici in Basic sono in base uno).  
  
 Per set di caratteri multibyte (MBCS), `nCount` fa riferimento a ogni byte di caratteri; vale a dire un lead e trail 8 bit in un set di caratteri multibyte vengono conteggiati come due caratteri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#128; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_23.cpp)]  
  
##  <a name="oemtoansi"></a>CStringT::OemToAnsi  
 Converte tutti i caratteri in questa `CStringT` oggetto dal set di set di caratteri ANSI di caratteri OEM.  
  
```  
void OemToAnsi();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione non è disponibile se `_UNICODE` è definito.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CStringT::AnsiToOem](#ansitooem).  
  
##  <a name="operator_add"></a>CStringT::operator +  
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
 `ch1`  
 Un carattere ANSI o Unicode da concatenare con una stringa.  
  
 `ch2`  
 Un carattere ANSI o Unicode da concatenare con una stringa.  
  
 `str1`  
 Oggetto `CStringT` da concatenare con una stringa o un carattere.  
  
 `str2`  
 Oggetto `CStringT` da concatenare con una stringa o un carattere.  
  
 `psz1`  
 Un puntatore a una stringa da concatenare con una stringa o un carattere con terminazione null.  
  
 `psz2`  
 Un puntatore a una stringa da concatenare con una stringa o un carattere.  
  
### <a name="remarks"></a>Note  
 Sono disponibili sette forme di overload di `CStringT::operator+` (funzione). La prima versione concatena due esistente `CStringT` oggetti. I due successivi concatena un `CStringT` oggetto e una stringa con terminazione null. I due successivi concatena un `CStringT` oggetto e un carattere ANSI. Le ultime due concatena un `CStringT` oggetto e un carattere Unicode.  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e gli operatori su `CStringT` oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#140;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_24.cpp)]  
  
##  <a name="operator_add_eq"></a>+ = CStringT::operator  
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
  
 `bMFCDLL`  
 Un valore booleano che specifica se il progetto è una DLL MFC o meno.  
  
 `BaseType`  
 Il tipo di base di stringa.  
  
 `var`  
 Un oggetto variant da concatenare alla stringa.  
  
 `ch`  
 Un carattere ANSI o Unicode da concatenare con una stringa.  
  
 `pszSrc`  
 Puntatore alla stringa originale viene concatenato.  
  
 `strSrc`  
 Oggetto `CStringT` di concatenare la stringa.  
  
### <a name="remarks"></a>Note  
 L'operatore accetta un altro `CStringT` oggetto, un puntatore ai caratteri o un singolo carattere. È necessario essere consapevoli che la memoria possono verificarsi eccezioni quando si usa l'operatore di concatenazione in quanto può essere allocata nuova archiviazione per i caratteri aggiunti a questa `CStringT` oggetto.  
  
 Per informazioni su `CThisSimpleString`, vedere la sezione Osservazioni di [CStringT::CStringT](#cstringt).  
  
> [!NOTE]
>  Sebbene sia possibile creare `CStringT` istanze che contengono caratteri null incorporati, è consigliabile su di esso. La chiamata di metodi e gli operatori su `CStringT` oggetti che contengono caratteri null incorporati possono produrre risultati imprevisti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities n.&141;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_25.cpp)]  
  
##  <a name="operator_eq_eq"></a>CStringT::operator = =  
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
 `ch1`  
 Un carattere Unicode o ANSI per il confronto.  
  
 `ch2`  
 Un carattere Unicode o ANSI per il confronto.  
  
 `str1`  
 Oggetto `CStringT` per il confronto.  
  
 `str2`  
 Oggetto `CStringT` per il confronto.  
  
 `psz1`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 `psz2`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se una stringa o un carattere a sinistra è uguale a una stringa o un carattere a destra e restituisce TRUE o FALSE di conseguenza.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#142;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_26.cpp)]  
  
##  <a name="operator_neq"></a>CStringT::operator! =  
 Determina se due stringhe logicamente non sono uguali.  
  
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
 `ch1`  
 Un carattere ANSI o Unicode da concatenare con una stringa.  
  
 `ch2`  
 Un carattere ANSI o Unicode da concatenare con una stringa.  
  
 `str1`  
 Oggetto `CStringT` per il confronto.  
  
 `str2`  
 Oggetto `CStringT` per il confronto.  
  
 `psz1`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 `psz2`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se una stringa o un carattere a sinistra non è uguale a una stringa o un carattere a destra.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#143; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_27.cpp)]  
  
##  <a name="operator_lt"></a>CStringT::operator&lt;  
 Determina se la stringa a sinistra dell'operatore è minore rispetto alla stringa sul lato destro.  
  
```  
friend bool operator<(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Oggetto `CStringT` per il confronto.  
  
 `str2`  
 Oggetto `CStringT` per il confronto.  
  
 `psz1`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 `psz2`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a quando:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#144;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_28.cpp)]  
  
##  <a name="operator_gt"></a>CStringT::operator&gt;  
 Determina se la stringa a sinistra dell'operatore è maggiore rispetto alla stringa sul lato destro.  
  
```  
friend bool operator>(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Oggetto `CStringT` per il confronto.  
  
 `str2`  
 Oggetto `CStringT` per il confronto.  
  
 `psz1`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 `psz2`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a quando:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#145; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_29.cpp)]  
  
##  <a name="operator_lt_eq"></a>CStringT::operator&lt;=  
 Determina se la stringa a sinistra dell'operatore è minore o uguale alla stringa sul lato destro.  
  
```  
friend bool operator<=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator<=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator<=(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Oggetto `CStringT` per il confronto.  
  
 `str2`  
 Oggetto `CStringT` per il confronto.  
  
 `psz1`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
 `psz2`  
 Un puntatore a una stringa con terminazione null per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a quando:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#146; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_30.cpp)]  
  
##  <a name="operator_gt_eq"></a>CStringT::operator&gt;=  
 Determina se la stringa a sinistra dell'operatore è maggiore o uguale alla stringa sul lato destro.  
  
```  
friend bool operator>=(const CStringT& str1, const CStringT& str2) throw();
friend bool operator>=(const CStringT& str1, PCXSTR psz2) throw();
friend bool operator>=(PCXSTR psz1, const CStringT& str2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Oggetto `CStringT` per il confronto.  
  
 `str2`  
 Oggetto `CStringT` per il confronto.  
  
 `psz1`  
 Un puntatore a una stringa per il confronto.  
  
 `psz2`  
 Un puntatore a una stringa per il confronto.  
  
### <a name="remarks"></a>Note  
 Un confronto lessicografico tra stringhe, carattere per carattere fino a quando:  
  
-   Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.  
  
-   Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.  
  
-   Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[Specificare&#147; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_31.cpp)]  
  
##  <a name="remove"></a>CStringT::Remove  
 Rimuove tutte le istanze del carattere specificato dalla stringa.  
  
```  
int Remove(XCHAR chRemove);
```  
  
### <a name="parameters"></a>Parametri  
 `chRemove`  
 Il carattere deve essere rimosso da una stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio di rimuovere dalla stringa di caratteri. Zero se la stringa non viene modificata.  
  
### <a name="remarks"></a>Note  
 I confronti per il carattere viene fatta distinzione tra maiuscole e minuscole.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#129;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_32.cpp)]  
  
##  <a name="replace"></a>CStringT::Replace  
 Esistono due versioni di `Replace`. La prima versione sostituisce uno o più copie di una sottostringa con un'altra sottostringa. Entrambe le sottostringhe sono con terminazione null. La seconda versione sostituisce uno o più copie di un carattere utilizzando un altro carattere. Entrambe le versioni operano sui dati di tipo carattere archiviati in `CStringT`.  
  
```  
int Replace(PCXSTR pszOld, PCXSTR pszNew);
int Replace(XCHAR chOld, XCHAR chNew);
```  
  
### <a name="parameters"></a>Parametri  
 `pszOld`  
 Un puntatore a una stringa con terminazione null deve essere sostituito dal `pszNew`.  
  
 `pszNew`  
 Un puntatore a una stringa con terminazione null che sostituisce `pszOld`.  
  
 `chOld`  
 Il carattere da sostituire con `chNew`.  
  
 `chNew`  
 Il carattere sostituendo `chOld`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di istanze sostituite il carattere o sottostringa oppure zero se la stringa non viene modificata.  
  
### <a name="remarks"></a>Note  
 `Replace`può modificare la lunghezza della stringa perché `pszNew` e `pszOld` non è necessario avere la stessa lunghezza e più copie della sottostringa precedente possono essere modificate in quello nuovo. La funzione esegue una corrispondenza tra maiuscole e minuscole.  
  
 Esempi di `CStringT` istanze sono `CString`, `CStringA`, e `CStringW`.  
  
 Per `CStringA`, `Replace` funziona con caratteri multibyte (MBCS) o ANSI. Per `CStringW`, `Replace` funziona con caratteri wide.  
  
 Per `CString`, viene selezionato il tipo di dati carattere in fase di compilazione, se le costanti nella tabella seguente sono definite in base.  
  
|Costante definita|Tipo di dati carattere|  
|----------------------|-------------------------|  
|`_UNICODE`|Caratteri Wide|  
|`_MBCS`|Caratteri multibyte|  
|Nessuna|Caratteri a byte singolo|  
|Entrambi|Non definito|  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#200;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_33.cpp)]  
  
##  <a name="reversefind"></a>CStringT::ReverseFind  
 Cerca questo `CStringT` oggetto per l'ultima corrispondenza di un carattere.  
  
```  
int ReverseFind(XCHAR ch) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `ch`  
 Carattere da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'ultimo carattere in questa `CStringT` oggetto che corrisponde al carattere di richiesto o –&1; se non viene trovato il carattere.  
  
### <a name="remarks"></a>Note  
 La funzione è simile alla funzione runtime `strrchr`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#130;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_34.cpp)]  
  
##  <a name="right"></a>CStringT::Right  
 Estrae l'ultimo (vale a dire più a destra) `nCount` caratteri da questo `CStringT` specificato e restituisce una copia della sottostringa estratta.  
  
```  
CStringT Right(int nCount) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `nCount`  
 Il numero di caratteri da estrarre da questo oggetto `CStringT`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` contenente una copia dell'intervallo specificato. Si noti che l'oggetto restituito `CStringT` oggetto può essere vuoto.  
  
### <a name="remarks"></a>Note  
 Se `nCount` supera la lunghezza della stringa, viene estratta l'intera stringa. `Right`è simile alla base `Right` (ad eccezione del fatto che gli indici in Basic sono in base zero).  
  
 Per set di caratteri multibyte (MBCS), `nCount` fa riferimento a ogni byte di caratteri; vale a dire un lead e trail 8 bit in un set di caratteri multibyte vengono conteggiati come due caratteri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#131; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_35.cpp)]  
  
##  <a name="setsysstring"></a>CStringT::SetSysString  
 Rialloca il `BSTR` a cui fa riferimento `pbstr` e copia il contenuto di `CStringT` oggetto al suo interno, incluso il `NULL` carattere.  
  
```  
BSTR SetSysString(BSTR* pbstr) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `pbstr`  
 Un puntatore a una stringa di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 La nuova stringa.  
  
### <a name="remarks"></a>Note  
 A seconda del contenuto di `CStringT` oggetto, il valore della `BSTR` cui fa riferimento `pbstr` modificabili. La funzione genera un `CMemoryException` se è presente memoria insufficiente.  
  
 Questa funzione viene in genere utilizzata per modificare il valore di stringa passato per riferimento per l'automazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#132;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_36.cpp)]  
  
##  <a name="spanexcluding"></a>CStringT::SpanExcluding  
 Estrae i caratteri dalla stringa, a partire dal primo carattere che non sono presenti nel set di caratteri identificato da `pszCharSet`.  
  
```  
CStringT SpanExcluding(PCXSTR pszCharSet) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `pszCharSet`  
 Una stringa interpretata come un set di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Una sottostringa che contiene i caratteri nella stringa che non sono disponibili in `pszCharSet`, a partire dal primo carattere nella stringa e terminando con il primo carattere trovato nella stringa di cui è presente anche nel `pszCharSet` (vale a dire, a partire dal primo carattere nella stringa e fino a tranne il primo carattere nella stringa viene trovata `pszCharSet`). Restituisce l'intera stringa se alcun carattere in `pszCharSet` viene trovato nella stringa.  
  
### <a name="remarks"></a>Note  
 `SpanExcluding`estrae e restituisce tutti i caratteri che precede la prima occorrenza di un carattere da `pszCharSet` (in altre parole, il carattere da `pszCharSet` e non vengono restituiti tutti i caratteri nella stringa seguente). Se nessun carattere da `pszCharSet` viene trovato nella stringa, quindi `SpanExcluding` restituisce l'intera stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#133; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_37.cpp)]  
  
##  <a name="spanincluding"></a>CStringT::SpanIncluding  
 Estrae i caratteri dalla stringa, a partire dal primo carattere che si trovano nel set di caratteri identificato da `pszCharSet`.  
  
```  
CStringT SpanIncluding(PCXSTR pszCharSet) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `pszCharSet`  
 Una stringa interpretata come un set di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Una sottostringa che contiene i caratteri nella stringa in `pszCharSet`, a partire dal primo carattere nella stringa e termina quando viene trovato un carattere nella stringa di cui non si trova in `pszCharSet`. `SpanIncluding`Restituisce una sottostringa vuota se il primo carattere nella stringa non è incluso nel set specificato.  
  
### <a name="remarks"></a>Note  
 Se il primo carattere della stringa non è nel set di caratteri, quindi `SpanIncluding` restituisce una stringa vuota. In caso contrario, restituisce una sequenza di caratteri consecutivi che si trovano nel set.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#134; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_38.cpp)]  
  
##  <a name="tokenize"></a>CStringT::Tokenize  
 Trova il token successivo in una stringa di destinazione  
  
```  
CStringT Tokenize(PCXSTR pszTokens, int& iStart) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `pszTokens`  
 Stringa contenente i delimitatori token. L'ordine di questi delimitatori non è importante.  
  
 `iStart`  
 Indice in base zero per avviare la ricerca.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CStringT` contenente il valore del token corrente.  
  
### <a name="remarks"></a>Note  
 Il `Tokenize` funzione Trova token successivo nella stringa di destinazione. Il set di caratteri in `pszTokens` specifica possibili delimitatori di token da trovare. In ogni chiamata a `Tokenize` inizia con una funzione in `iStart`, ignora i delimitatori iniziali e restituisce un `CStringT` oggetto contenente il token corrente, ovvero la stringa di caratteri fino al prossimo carattere delimitatore. Il valore di `iStart` verrà aggiornato a quella che segue il carattere delimitatore finale, oppure -1 se è stata raggiunta la fine della stringa. Ulteriore token può essere interrotta fuori il resto della stringa di destinazione da una serie di chiamate a `Tokenize`, usando `iStart` per tenere traccia della posizione nella stringa di token successivo da leggere. Quando non sono presenti più token la funzione restituirà una stringa vuota e `iStart` verrà impostato su -1.  
  
 A differenza della libreria CRT rappresentare funzioni come [strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, mbstok_s, mbstok_s_l](../../c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md), `Tokenize` non modifica la stringa di destinazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#135;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_39.cpp)]  
  
### <a name="remarks"></a>Note  
 L'output da questo esempio è come segue:  
  
 `Resulting Token: First`  
  
 `Resulting Token: Second`  
  
 `Resulting Token: Third`  
  
##  <a name="trim"></a>CStringT::Trim  
 Taglia iniziali e finali dalla stringa di caratteri.  
  
```  
CStringT& Trim(XCHAR chTarget);
CStringT& Trim(PCXSTR pszTargets);
CStringT& Trim();
```  
  
### <a name="parameters"></a>Parametri  
 `chTarget`  
 Il carattere di destinazione da tagliare.  
  
 `pszTargets`  
 Un puntatore a una stringa contenente i caratteri di destinazione da tagliare. Tutte iniziali e finali le occorrenze dei caratteri in `pszTarget` verrà rimosso dal `CStringT` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la stringa tagliata.  
  
### <a name="remarks"></a>Note  
 Rimuove tutte le occorrenze iniziali e finali di uno dei seguenti:  
  
-   Il carattere specificato da`chTarget.`  
  
-   Tutti i caratteri trovati nella stringa specificata da`pszTargets.`  
  
-   Spazi vuoti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#136;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_40.cpp)]  
  
### <a name="remarks"></a>Note  
 L'output da questo esempio è come segue:  
  
 `Before: "******Soccer is best, but liquor is quicker!!!!!"`  
  
 `After : "Soccer is best, but liquor is quicker"`  
  
##  <a name="trimleft"></a>CStringT::TrimLeft  
 Elimina i caratteri iniziali dalla stringa.  
  
```  
CStringT& TrimLeft(XCHAR chTarget);
CStringT& TrimLeft(PCXSTR pszTargets);
CStringT& TrimLeft();
```  
  
### <a name="parameters"></a>Parametri  
 `chTarget`  
 Il carattere di destinazione da tagliare.  
  
 `pszTargets`  
 Un puntatore a una stringa contenente i caratteri di destinazione da tagliare. Tutte le occorrenze iniziali di caratteri in `pszTarget` verrà rimosso dal `CStringT` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Stringa tagliata risulta.  
  
### <a name="remarks"></a>Note  
 Rimuove tutte le occorrenze iniziali e finali di uno dei seguenti:  
  
-   Il carattere specificato da`chTarget.`  
  
-   Tutti i caratteri trovati nella stringa specificata da`pszTargets.`  
  
-   Spazi vuoti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#137;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_41.cpp)]  
  
##  <a name="trimright"></a>CStringT::TrimRight  
 Rimuove dalla stringa di caratteri finali.  
  
```  
CStringT& TrimRight(XCHAR chTarget);
CStringT& TrimRight(PCXSTR pszTargets);
CStringT& TrimRight();
```  
  
### <a name="parameters"></a>Parametri  
 `chTarget`  
 Il carattere di destinazione da tagliare.  
  
 `pszTargets`  
 Un puntatore a una stringa contenente i caratteri di destinazione da tagliare. Tutti finali le occorrenze dei caratteri in `pszTarget` verrà rimosso dal `CStringT` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `CStringT` oggetto che contiene la stringa tagliata.  
  
### <a name="remarks"></a>Note  
 Rimuove finale le occorrenze di uno dei seguenti:  
  
-   Il carattere specificato da`chTarget.`  
  
-   Tutti i caratteri trovati nella stringa specificata da`pszTargets.`  
  
-   Spazi vuoti.  
  
 Il `CStringT& TrimRight(XCHAR chTarget)` versione accetta un parametro di tipo carattere e rimuove tutte le copie di tale carattere dalla fine della `CStringT` dati di tipo stringa. Inizia dalla fine della stringa e funziona nella parte anteriore. Si arresta quando viene trovato un carattere diverso o `CSTringT` esaurisce dati di tipo carattere.  
  
 Il `CStringT& TrimRight(PCXSTR pszTargets)` versione accetta una stringa con terminazione null che contiene tutti i caratteri diversi da cercare. Rimuove tutte le copie di tali caratteri il `CStringT` oggetto. Inizia alla fine della stringa e funziona nella parte anteriore. Si arresta quando rileva un carattere non incluso nella stringa di destinazione o `CStringT` esaurisce dati di tipo carattere. Non tenta la stringa intera destinazione di una sottostringa alla fine di `CStringT`.  
  
 Il `CStringT& TrimRight()` versione non richiede parametri. Riduce i caratteri spazi vuoti finali dalla fine del `CStringT` stringa. Spazi vuoti possono essere le interruzioni di riga, spazi o tabulazioni.  
  
-  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#138;](../../atl-mfc-shared/codesnippet/cpp/cstringt-class_42.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)   
 [Classe CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)



