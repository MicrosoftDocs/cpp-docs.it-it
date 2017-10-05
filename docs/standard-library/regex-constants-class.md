---
title: Classe regex_constants | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- regex/std::regex_constants
- regex/std::regex_constants::error_collate
- regex/std::regex_constants::error_ctype
- regex/std::regex_constants::error_escape
- regex/std::regex_constants::error_backref
- regex/std::regex_constants::error_brack
- regex/std::regex_constants::error_paren
- regex/std::regex_constants::error_brace
- regex/std::regex_constants::error_badbrace
- regex/std::regex_constants::error_range
- regex/std::regex_constants::error_space
- regex/std::regex_constants::error_badrepeat
- regex/std::regex_constants::error_complexity
- regex/std::regex_constants::error_stack
- regex/std::regex_constants::error_parse
- regex/std::regex_constants::error_syntax
- regex/std::regex_constants::match_default
- regex/std::regex_constants::match_not_bol
- regex/std::regex_constants::match_not_eol
- regex/std::regex_constants::match_not_bow
- regex/std::regex_constants::match_not_eow
- regex/std::regex_constants::match_any
- regex/std::regex_constants::match_not_null
- regex/std::regex_constants::match_continuous
- regex/std::regex_constants::match_prev_avail
- regex/std::regex_constants::format_default
- regex/std::regex_constants::format_sed
- regex/std::regex_constants::format_no_copy
- regex/std::regex_constants::format_first_only
- regex/std::regex_constants::ECMAScript
- regex/std::regex_constants::basic
- regex/std::regex_constants::extended
- regex/std::regex_constants::awk
- regex/std::regex_constants::grep
- regex/std::regex_constants::egrep
- regex/std::regex_constants::icase
- regex/std::regex_constants::nosubs
- regex/std::regex_constants::optimize
- regex/std::regex_constants::collate
dev_langs:
- C++
helpviewer_keywords:
- std::regex_constants [C++]
- std::regex_constants [C++], error_collate
- std::regex_constants [C++], error_ctype
- std::regex_constants [C++], error_escape
- std::regex_constants [C++], error_backref
- std::regex_constants [C++], error_brack
- std::regex_constants [C++], error_paren
- std::regex_constants [C++], error_brace
- std::regex_constants [C++], error_badbrace
- std::regex_constants [C++], error_range
- std::regex_constants [C++], error_space
- std::regex_constants [C++], error_badrepeat
- std::regex_constants [C++], error_complexity
- std::regex_constants [C++], error_stack
- std::regex_constants [C++], error_parse
- std::regex_constants [C++], error_syntax
- std::regex_constants [C++], match_default
- std::regex_constants [C++], match_not_bol
- std::regex_constants [C++], match_not_eol
- std::regex_constants [C++], match_not_bow
- std::regex_constants [C++], match_not_eow
- std::regex_constants [C++], match_any
- std::regex_constants [C++], match_not_null
- std::regex_constants [C++], match_continuous
- std::regex_constants [C++], match_prev_avail
- std::regex_constants [C++], format_default
- std::regex_constants [C++], format_sed
- std::regex_constants [C++], format_no_copy
- std::regex_constants [C++], format_first_only
- std::regex_constants [C++], ECMAScript
- std::regex_constants [C++], basic
- std::regex_constants [C++], extended
- std::regex_constants [C++], awk
- std::regex_constants [C++], grep
- std::regex_constants [C++], egrep
- std::regex_constants [C++], icase
- std::regex_constants [C++], nosubs
- std::regex_constants [C++], optimize
- std::regex_constants [C++], collate
ms.assetid: 4a69c0ba-c46d-46e4-bd29-6f4efb805f26
caps.latest.revision: 18
author: corob-msft
ms.author: corob
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 320b2c390a1220e47191dec4166170daa5537cb2
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="regexconstants-class"></a>Classe regex_constants
Spazio dei nomi per i flag dell'espressione regolare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace regex_constants {  
    enum syntax_option_type;  
    enum match_flag_type;  
    enum error_type;  
 }  
```  
  
## <a name="remarks"></a>Note  
 Lo spazio dei nomi `regex_constants` incapsula molti tipi di flag e i valori dei relativi flag associati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<regex>  
  
 **Spazio dei nomi:** std  
  
##  <a name="error_type"></a>  regex_constants::error_type  
 Indicatori per segnalare errori di sintassi di espressione regolare.  
  
```  
enum error_type
    {    // identify error
    error_collate,
    error_ctype,
    error_escape,
    error_backref,
    error_brack,
    error_paren,
    error_brace,
    error_badbrace,
    error_range,
    error_space,
    error_badrepeat,
    error_complexity,
    error_stack,
    error_parse,
    error_syntax
    };  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un tipo enumerato che descrive un oggetto che può contenere flag di errore. I valori flag distinti sono:  
  
 `error_backref` -- l'espressione contiene un backreference non valido  
  
 `error_badbrace` -- l'espressione contiene un numero non valido in un'espressione { }  
  
 `error_badrepeat` -- un'espressione di ripetizione (uno tra '*', '', '+', '{' nella maggior parte dei contesti) non può essere preceduta da un'espressione  
  
 `error_brace` -- l'espressione contiene una mancata corrispondenza di '{' o '}'  
  
 `error_brack` -- l'espressione contiene una mancata corrispondenza di '[' o ']'  
  
 `error_collate` -- l'espressione contiene un nome di elemento di collazione non valido  
  
 `error_complexity` -- una corrispondenza effettuata è fallita perché era troppo complessa  
  
 `error_ctype` -- l'espressione contiene un nome della classe di carattere non valido  
  
 `error_escape` -- l'espressione contiene una sequenza di escape non valida  
  
 `error_paren` -- l'espressione contiene una mancata corrispondenza di '(' o ')'  
  
 `error_parse` -- analisi dell'espressione non riuscita  
  
 `error_range` -- l'espressione contiene un identificatore di intervallo di carattere non valido  
  
 `error_space` -- l'analisi di un'espressione regolare è fallita perché non erano disponibili risorse sufficienti  
  
 `error_stack` -- una corrispondenza effettuata è fallita perché non era disponibile memoria sufficiente  
  
 `error_syntax` -- l'analisi è fallita per un errore di sintassi  
  
 `error_backref` -- l'espressione contiene un backreference non valido  
  
##  <a name="match_flag_type"></a>  regex_constants::match_flag_type  
 Flag per opzioni di corrispondenza delle espressioni regolari.  
  
```  
enum match_flag_type 
    {    // specify matching and formatting rules
    match_default = 0x0000,
    match_not_bol = 0x0001,
    match_not_eol = 0x0002,
    match_not_bow = 0x0004,
    match_not_eow = 0x0008,
    match_any = 0x0010,
    match_not_null = 0x0020,
    match_continuous = 0x0040,
    match_prev_avail = 0x0100,
    format_default = 0x0000,
    format_sed = 0x0400,
    format_no_copy = 0x0800,
    format_first_only = 0x1000,
    _Match_not_null = 0x2000
    };  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un tipo di maschera di bit che descrive le opzioni da usare quando esiste una corrispondenza tra una sequenza di testo e un'espressione regolare e i flag di formato da usare quando si sostituisce il testo. Le opzioni possono essere usate in combinazione con `|`.  
  
 Le opzioni di corrispondenza sono:  
  
 `match_default`  
  
 `match_not_bol` -- non considerare la prima posizione nella sequenza di destinazione come inizio di una riga  
  
 `match_not_eol` -- non considerare la posizione successiva nella sequenza di destinazione come fine di una riga  
  
 `match_not_bow` -- non considerare la prima posizione nella sequenza di destinazione come inizio di una parola  
  
 `match_not_eow` -- non considerare la posizione successiva nella sequenza di destinazione come fine di una parola  
  
 `match_any` -- se più corrispondenze sono possibili, qualsiasi corrispondenza è accettabile  
  
 `match_not_null` -- non considerare una sottosequenza vuota come corrispondenza  
  
 `match_continuous` -- non cercare corrispondenze se non quelle all'inizio della sequenza di destinazione  
  
 `match_prev_avail` -- `--first` è un iteratore valido; ignorare `match_not_bol` e `match_not_bow`, se impostati  
  
 I flag di formato sono:  
  
 `format_default` -- usare le regole dei formati ECMAScript  
  
 `format_sed` -- usare le regole dei formati sed  
  
 `format_no_copy` -- non copiare testo che non corrisponde all'espressione regolare  
  
 `format_first_only` -- non cercare corrispondenze dopo la prima  
  
##  <a name="syntax_option_type"></a>  regex_constants::syntax_option_type  
 Flag per selezionare le opzioni di sintassi.  
  
```  
enum syntax_option_type
    {    // specify RE syntax rules
    ECMAScript = 0x01,
    basic = 0x02,
    extended = 0x04,
    awk = 0x08,
    grep = 0x10,
    egrep = 0x20,
    _Gmask = 0x3F,

    icase = 0x0100,
    nosubs = 0x0200,
    optimize = 0x0400,
    collate = 0x0800
    };  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un tipo di maschera di bit che descrive gli identificatori di lingua e i modificatori di sintassi da usare durante la compilazione di un'espressione regolare. Le opzioni possono essere usate in combinazione con `|`. Non deve essere usato più di un identificatore di lingua per volta.  
  
 Gli identificatori di lingua sono:  
  
 `ECMAScript` -- compilare come ECMAScript  
  
 `basic` -- compilare come BRE  
  
 `extended` -- compilare come ERE  
  
 `awk` -- compilare come awk  
  
 `grep` -- compilare come grep  
  
 `egrep` -- compilare come egrep  
  
 I modificatori di sintassi sono:  
  
 `icase` -- rendere le corrispondenze senza distinzione tra maiuscole e minuscole  
  
 `nosubs` -- l'implementazione non deve tenere traccia del contenuto dei gruppi Capture  
  
 `optimize` -- l'implementazione deve evidenziare la velocità della corrispondenza anziché la velocità di compilazione delle espressioni regolari  
  
 `collate` -- rendere le corrispondenze collegate alle impostazioni locali  
  
## <a name="see-also"></a>Vedere anche  
[\<regex>](../standard-library/regex.md)  
[Classe regex_error](../standard-library/regex-error-class.md)  
[Funzioni \<regex>](../standard-library/regex-functions.md)  
[Classe regex_iterator](../standard-library/regex-iterator-class.md)  
[Operatori \<regex>](../standard-library/regex-operators.md)  
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)  
[Classe regex_traits](../standard-library/regex-traits-class.md)  
[Typedef \<regex>](../standard-library/regex-typedefs.md)  

