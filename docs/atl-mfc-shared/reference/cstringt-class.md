---
title: "CStringT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CString"
  - "CStringT"
  - "ATL::CStringT"
  - "ATL.CStringT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStringT class"
  - "shared classes, CStringT"
  - "stringhe [C++], in ATL"
ms.assetid: 7cacc59c-425f-40f1-8f5b-6db921318ec9
caps.latest.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 34
---
# CStringT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un oggetto `CStringT`.  
  
## Sintassi  
  
```  
  
      template< typename   
      BaseType  
      , class   
      StringTraits  
       >  
class CStringT :   
public CSimpleStringT<   BaseType,   _CSTRING_IMPL_::_MFCDLLTraitsCheck<      BaseType,      StringTraits   >   ::c_bIsMFCDLLTraits>  
```  
  
#### Parametri  
 `BaseType`  
 Il tipo di carattere della classe string.  ad esempio uno dei seguenti:  
  
-   `char` \(per le stringhe di caratteri ANSI\).  
  
-   `wchar_t` \(per le stringhe di caratteri Unicode\).  
  
-   **TCHAR** \(sia per ANSI che le stringhe di caratteri Unicode\).  
  
 `StringTraits`  
 Determina se la classe stringa richiede il supporto di librerie \(CRT\) di runtime del linguaggio C e dove le risorse di tipo stringa vengono individuate.  ad esempio uno dei seguenti:  
  
-   **Wchar\_t di strtraitatl\<** &#124; `char` &#124; **TCHAR, wchar\_t di chtraitscrt\<** &#124; `char` &#124; **TCHAR \> \>**  
  
     La classe richiede il supporto CRT e cercare le stringhe di risorse nel modulo specificato da `m_hInstResource` \(un membro della classe del form dell'applicazione\).  
  
-   **Wchar\_t di strtraitatl\<** &#124; `char` &#124; **TCHAR, wchar\_t di chtraitsos\<** &#124; `char` &#124; **TCHAR \> \>**  
  
     La classe non richiede il supporto CRT e non nelle stringhe di risorse nel modulo specificato da `m_hInstResource` \(un membro della classe del form dell'applicazione\).  
  
-   **Wchar\_t di strtraitmfc\<** &#124; `char` &#124; **TCHAR, wchar\_t di chtraitscrt\<** &#124; `char` &#124; **TCHAR \> \>**  
  
     La classe richiede il supporto CRT e cercare le stringhe di risorsa utilizzando l'algoritmo di ricerca MFC standard.  
  
-   **Wchar\_t di strtraitmfc\<** &#124; `char` &#124; **TCHAR, wchar\_t di chtraitsos\<** &#124; `char` &#124; **TCHAR \> \>**  
  
     La classe non richiede il supporto CRT e non nelle stringhe di risorsa utilizzando l'algoritmo di ricerca MFC standard.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringT::CStringT](../Topic/CStringT::CStringT.md)|Costruisce un oggetto `CStringT` in diversi modi.|  
|[CStringT::~CStringT](../Topic/CStringT::~CStringT.md)|Elimina un oggetto `CStringT`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStringT::AllocSysString](../Topic/CStringT::AllocSysString.md)|Alloca `BSTR` i dati `CStringT`.|  
|[CStringT::AnsiToOem](../Topic/CStringT::AnsiToOem.md)|Effettua una conversione sul posto dal set di caratteri ANSI il set di caratteri OEM.|  
|[CStringT::AppendFormat](../Topic/CStringT::AppendFormat.md)|Appends formattata dati a un oggetto esistente `CStringT`.|  
|[CStringT::Collate](../Topic/CStringT::Collate.md)|Confronta due stringhe \(fatta distinzione tra maiuscole e minuscole, informazioni specifiche delle impostazioni locali di utilizzare\).|  
|[CStringT::CollateNoCase](../Topic/CStringT::CollateNoCase.md)|Confronta due stringhe \(senza distinzione tra maiuscole e minuscole, informazioni specifiche delle impostazioni locali di utilizzare\).|  
|[CStringT::Compare](../Topic/CStringT::Compare.md)|Confronta due stringhe \(fatta distinzione tra maiuscole e minuscole\).|  
|[CStringT::CompareNoCase](../Topic/CStringT::CompareNoCase.md)|Confronta due stringhe \(senza distinzione tra maiuscole e minuscole\).|  
|[CStringT::Delete](../Topic/CStringT::Delete.md)|Elimina un carattere o i caratteri da una stringa.|  
|[CStringT::Find](../Topic/CStringT::Find.md)|Trova un carattere o una sottostringa in una stringa più grande.|  
|[CStringT::FindOneOf](../Topic/CStringT::FindOneOf.md)|Trova il primo carattere corrispondente da un insieme.|  
|[CStringT::Format](../Topic/CStringT::Format.md)|Formatta la stringa come `sprintf` scegliere.|  
|[CStringT::FormatMessage](../Topic/CStringT::FormatMessage.md)|Formatta una stringa di messaggio.|  
|[CStringT::FormatMessageV](../Topic/CStringT::FormatMessageV.md)|Formatta una stringa di messaggio utilizzando un elenco di argomenti variabile.|  
|[CStringT::FormatV](../Topic/CStringT::FormatV.md)|Formatta la stringa utilizzando un elenco variabile di argomenti.|  
|[CStringT::GetEnvironmentVariable](../Topic/CStringT::GetEnvironmentVariable.md)|Imposta la stringa a valore della variabile di ambiente specificata.|  
|[CStringT::Insert](../Topic/CStringT::Insert.md)|Inserisce un singolo carattere o una sottostringa all'indice specificato nella stringa.|  
|[CStringT::Left](../Topic/CStringT::Left.md)|Estrae la parte sinistra di una stringa.|  
|[CStringT::LoadString](../Topic/CStringT::LoadString.md)|Carica un oggetto esistente `CStringT` da una risorsa di Windows.|  
|[CStringT::MakeLower](../Topic/CStringT::MakeLower.md)|Converte tutti i caratteri nella stringa in caratteri minuscoli.|  
|[CStringT::MakeReverse](../Topic/CStringT::MakeReverse.md)|Inverte la stringa.|  
|[CStringT::MakeUpper](../Topic/CStringT::MakeUpper.md)|Converte tutti i caratteri nella stringa in caratteri maiuscoli.|  
|[CStringT::Mid](../Topic/CStringT::Mid.md)|Estrae la parte centrale di una stringa.|  
|[CStringT::OemToAnsi](../Topic/CStringT::OemToAnsi.md)|Effettua una conversione sul posto il set di caratteri OEM il set di caratteri ANSI.|  
|[CStringT::Remove](../Topic/CStringT::Remove.md)|Consente di rimuovere leggere i caratteri da una stringa.|  
|[CStringT::Replace](../Topic/CStringT::Replace.md)|Replaces di leggere i caratteri con altri caratteri.|  
|[CStringT::ReverseFind](../Topic/CStringT::ReverseFind.md)|Trova un carattere in una stringa più grande, parte dalla fine.|  
|[CStringT::Right](../Topic/CStringT::Right.md)|Estrae la parte destra di una stringa.|  
|[CStringT::SetSysString](../Topic/CStringT::SetSysString.md)|Imposta un oggetto esistente `BSTR` con i dati di un oggetto `CStringT`.|  
|[CStringT::SpanExcluding](../Topic/CStringT::SpanExcluding.md)|Estrae i caratteri della stringa, a partire dal primo carattere, non presenti nel set di caratteri identificati da `pszCharSet`.|  
|[CStringT::SpanIncluding](../Topic/CStringT::SpanIncluding.md)|Estrae una sottostringa contenente solo i caratteri in un gruppo.|  
|[CStringT::Tokenize](../Topic/CStringT::Tokenize.md)|Token specificati estratti in una stringa di destinazione.|  
|[CStringT::Trim](../Topic/CStringT::Trim.md)|Elimina tutti gli spazi vuoti iniziali e finali dalla stringa.|  
|[CStringT::TrimLeft](../Topic/CStringT::TrimLeft.md)|Impostare il testo che guidano gli spazi vuoti dalla stringa.|  
|[CStringT::TrimRight](../Topic/CStringT::TrimRight.md)|Impostare il testo del trascinamento degli spazi vuoti dalla stringa.|  
  
### Operatori  
  
|||  
|-|-|  
|[CStringT::operator \=](../Topic/CStringT::operator%20=.md)|Assegna un valore a un oggetto `CStringT`.|  
|[CStringT::operator \+](../Topic/CStringT::operator%20+.md)|Concatena due stringhe o un carattere e una stringa.|  
|[CStringT::operator \+\=](../Topic/CStringT::operator%20+=.md)|Concatena una nuova stringa alla fine di una stringa esistente.|  
|[CStringT::operator \=\=](../Topic/CStringT::operator%20==.md)|Determina se due stringhe sono logicamente uguali.|  
|[CStringT::operator \!\=](../Topic/CStringT::operator%20!=.md)|Determina se due stringhe non logicamente sono uguali.|  
|[CStringT::operator \<](../Topic/CStringT::operator%20%3C.md)|Determina se la stringa a sinistra dell'operatore è minore della stringa dalla destra.|  
|[CStringT::operator \>](../Topic/CStringT::operator%20%3E.md)|Determina se la stringa a sinistra dell'operatore è maggiore della stringa dalla destra.|  
|[CStringT::operator \<\=](../Topic/CStringT::operator%20%3C=.md)|Determina se la stringa a sinistra dell'operatore è minore o uguale alla stringa dalla destra.|  
|[CStringT::operator \>\=](../Topic/CStringT::operator%20%3E=.md)|Determina se la stringa a sinistra dell'operatore è maggiore o uguale alla stringa dalla destra.|  
  
## Note  
 `CStringT` eredita da [classe di CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md).  Le funzionalità avanzate, ad esempio la modifica di carattere, ordinamento e ricerca, implementati da `CStringT`.  
  
> [!NOTE]
>  Gli oggetti di`CStringT` sono in grado di generare eccezioni.  Ciò si verifica quando un oggetto `CStringT` utilizza la memoria per il motivo.  
  
 Un oggetto `CStringT` è costituito da una sequenza di lunghezza variabile di caratteri.  `CStringT` fornisce funzioni e operatori utilizzando una sintassi simile a quella di base.  La concatenazione e gli operatori di confronto, insieme a gestione della memoria semplificata, producono gli oggetti `CStringT` più facili da utilizzare e matrici di caratteri normali.  
  
> [!NOTE]
>  Sebbene sia possibile creare istanze `CStringT` contenenti caratteri Null incorporati, è pronunciamo rispetto a.  Chiamare metodi degli operatori per gli oggetti `CStringT` contenenti caratteri Null incorporati possono produrre risultati imprevisti.  
  
 Tramite combinazioni diverse dei parametri `StringTraits` e `BaseType`, gli oggetti `CStringT` possono disporre dei seguenti tipi, ovvero sono stati predefiniti dalle librerie ATL.  
  
 Se utilizzato in un'applicazione ATL:  
  
 `CString`, `CStringA`e `CStringW` vengono esportate dalla DLL MFC \(MFC90.DLL\), mai da DLL dell'utente.  Questa operazione viene eseguita per impedire `CStringT` sia di moltiplicare definito.  
  
> [!NOTE]
>  Se incontraste gli errori del linker quando si esporta `CString`classe derivata da una DLL di estensione MFC in Visual C\+\+ .NET 2002 ed è applicato la soluzione alternativa descritta nell'articolo della Knowledge Base, "collegando gli errori quando si importa le classi Derivate CString\-" \(Q309801\), è necessario rimuovere il codice della soluzione alternativa, poiché questo è stato corretto in Visual C\+\+ .NET 2003.  disponibile nel CD della MSDN Library o all'indirizzo [http:\/\/support.microsoft.com\/default.aspx](http://support.microsoft.com/default.aspx).  
  
 I seguenti tipi di stringa sono disponibili nelle applicazioni basate su MFC:  
  
|Tipo di CStringT|Dichiarazione|  
|----------------------|-------------------|  
|`CStringA`|Una stringa di caratteri ANSI con supporto CRT.|  
|`CStringW`|Una stringa di caratteri unicode con supporto CRT.|  
|`CString`|Sia i tipi di carattere unicode in formato ANSI con supporto CRT.|  
  
 I seguenti tipi di stringa sono disponibili nei progetti **ATL\_CSTRING\_NO\_CRT** in cui viene definito:  
  
|Tipo di CStringT|Dichiarazione|  
|----------------------|-------------------|  
|**CAtlStringA**|Una stringa di caratteri ANSI senza supporto CRT.|  
|**CAtlStringW**|Una stringa di caratteri unicode senza supporto CRT.|  
|**CAtlString**|Sia i tipi di carattere unicode in formato ANSI senza supporto CRT.|  
  
 I seguenti tipi di stringa sono disponibili nei progetti in cui **ATL\_CSTRING\_NO\_CRT** non è definito:  
  
|Tipo di CStringT|Dichiarazione|  
|----------------------|-------------------|  
|**CAtlStringA**|Una stringa di caratteri ANSI con supporto CRT.|  
|**CAtlStringW**|Una stringa di caratteri unicode con supporto CRT.|  
|**CAtlString**|Sia i tipi di carattere unicode in formato ANSI con supporto CRT.|  
  
 Gli oggetti di`CString` hanno le seguenti caratteristiche:  
  
-   Gli oggetti di`CStringT` possono determinare come risultato delle operazioni di concatenazione.  
  
-   Gli oggetti di`CStringT` seguono "semantica di valore". Considerare un oggetto `CStringT` come una stringa, non come puntatore a una stringa.  
  
-   È possibile sostituire agli oggetti `CStringT` per gli argomenti della funzione `PCXSTR`.  
  
-   Gestione della memoria personalizzato per i buffer di stringa.  Per ulteriori informazioni, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## CStringT ha predefinito i tipi  
 Poiché `CStringT` utilizza un argomento di template per definire il tipo di carattere \( [wchar\_t](../../c-runtime-library/standard-types.md) o [char](../../c-runtime-library/standard-types.md)\) supportato, tipi di parametro del metodo può essere complicato talvolta.  Per semplificare questo problema, un set di tipi predefiniti è definito e utilizzato nella classe `CStringT`.  Nella tabella seguente sono elencati i diversi tipi:  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`XCHAR`|Un singolo carattere \( `wchar_t` o `char`\) con lo stesso tipo di carattere dell'oggetto `CStringT`.|  
|**YCHAR**|Un singolo carattere \( `wchar_t` o `char`\) al tipo di carattere opposto come oggetto `CStringT`.|  
|`PXSTR`|Un puntatore a una stringa di caratteri \( `wchar_t` o `char`\) con lo stesso tipo di carattere dell'oggetto `CStringT`.|  
|**PYSTR**|Un puntatore a una stringa di caratteri \( `wchar_t` o `char`\) al tipo di carattere opposto come oggetto `CStringT`.|  
|`PCXSTR`|Un puntatore a una stringa di caratteri **const** \( `wchar_t` o `char`\) con lo stesso tipo di carattere dell'oggetto `CStringT`.|  
|**PCYSTR**|Un puntatore a una stringa di caratteri **const** \( `wchar_t` o `char`\) al tipo di carattere opposto come oggetto `CStringT`.|  
  
> [!NOTE]
>  Il codice che i metodi non documentati in precedenza utilizzati `CString` \(come **AssignCopy**\) devono essere sostituiti dal codice che utilizza i seguenti metodi illustrati `CStringT` \(come `GetBuffer` o `ReleaseBuffer`\).  Questi metodi vengono ereditati da `CSimpleStringT`.  
  
## Gerarchia di ereditarietà  
 [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)  
  
 `CStringT`  
  
## Requisiti  
  
|Header|Da utilizzare per|  
|------------|-----------------------|  
|cstringt.h|Oggetti stringa solo MFC|  
|atlstr.h|Oggetti stringa Non MFC|  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)   
 [CSimpleStringT Class](../../atl-mfc-shared/reference/csimplestringt-class.md)