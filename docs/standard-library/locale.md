---
title: '&lt;locale&gt;'
ms.date: 11/04/2016
f1_keywords:
- <locale>
- locale/std::<locale>
- std::<locale>
helpviewer_keywords:
- locale header
ms.assetid: ca56f9d2-7128-44da-8df1-f4c78c17fbf2
ms.openlocfilehash: 71182f4a527fba0ef2c91dc84be5a8faad9fc99f
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687806"
---
# <a name="ltlocalegt"></a>&lt;locale&gt;

Definisce i modelli di classe e C++ le funzioni che i programmi possono usare per incapsulare e modificare diverse convenzioni culturali relative alla rappresentazione e alla formattazione dei dati numerici, monetari e dai, incluso il supporto per l'internazionalizzazione per la classificazione dei caratteri e le regole di confronto delle stringhe.

## <a name="syntax"></a>Sintassi

```cpp
#include <locale>
```

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[has_facet](../standard-library/locale-functions.md#has_facet)|Verifica se un facet specifico viene archiviato nelle impostazioni locali specificate.|
|[isalnum](../standard-library/locale-functions.md#isalnum)|Verifica se un elemento delle impostazioni locali è un carattere alfabetico o numerico.|
|[isalpha](../standard-library/locale-functions.md#isalpha)|Verifica se un elemento delle impostazioni locali è un carattere alfabetico.|
|[iscntrl](../standard-library/locale-functions.md#iscntrl)|Verifica se un elemento delle impostazioni locali è un carattere di controllo.|
|[isdigit](../standard-library/locale-functions.md#isdigit)|Verifica se un elemento delle impostazioni locali è un carattere numerico.|
|[isgraph](../standard-library/locale-functions.md#isgraph)|Verifica se un elemento delle impostazioni locali è un carattere alfanumerico o di punteggiatura.|
|[islower](../standard-library/locale-functions.md#islower)|Verifica se un elemento delle impostazioni locali è un carattere minuscolo.|
|[isprint](../standard-library/locale-functions.md#isprint)|Verifica se un elemento delle impostazioni locali è un carattere stampabile.|
|[ispunct](../standard-library/locale-functions.md#ispunct)|Verifica se un elemento delle impostazioni locali è un carattere di punteggiatura.|
|[isspace](../standard-library/locale-functions.md#isspace)|Verifica se un elemento delle impostazioni locali è uno spazio vuoto.|
|[isupper](../standard-library/locale-functions.md#isupper)|Verifica se un elemento delle impostazioni locali è un carattere maiuscolo.|
|[isxdigit](../standard-library/locale-functions.md#isxdigit)|Verifica se un elemento delle impostazioni locali è un carattere utilizzato per rappresentare un numero esadecimale.|
|[tolower](../standard-library/locale-functions.md#tolower)|Converte un carattere in minuscolo.|
|[toupper](../standard-library/locale-functions.md#toupper)|Converte un carattere in maiuscolo.|
|[use_facet](../standard-library/locale-functions.md#use_facet)|Restituisce un riferimento a un facet di un tipo specificato archiviato nelle impostazioni locali.|

### <a name="classes"></a>Classi

|Class|Descrizione|
|-|-|
|[codecvt](../standard-library/codecvt-class.md)|Modello di classe che fornisce un facet utilizzato per eseguire la conversione tra codifiche di caratteri interne ed esterne.|
|[codecvt_base](../standard-library/codecvt-base-class.md)|Classe base per la classe Codecvt utilizzata per definire un tipo di enumerazione denominato `result`, utilizzato come tipo restituito per le funzioni membro facet per indicare il risultato di una conversione.|
|[codecvt_byname](../standard-library/codecvt-byname-class.md)|Modello di classe derivata che descrive un oggetto che può fungere da facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni specifiche di un'area culturale relativa alle conversioni.|
|[collate](../standard-library/collate-class.md)|Modello di classe collate che fornisce un facet che gestisce le convenzioni di ordinamento delle stringhe.|
|[collate_byname](../standard-library/collate-byname-class.md)|Modello di classe derivata che descrive un oggetto che può fungere da facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni specifiche di un'area culturale relativa alle convenzioni di ordinamento delle stringhe.|
|[ctype](../standard-library/ctype-class.md)|Modello di classe che fornisce un facet utilizzato per classificare i caratteri, eseguire la conversione da lettere maiuscole e minuscole e tra il set di caratteri nativi e il set utilizzato dalle impostazioni locali.|
|[CType \<char >](../standard-library/ctype-char-class.md)|Una classe che è una specializzazione esplicita del modello di classe `ctype<CharType>` al tipo **char**, che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per caratterizzare le varie proprietà di un carattere di tipo **char**.|
|[ctype_base](../standard-library/ctype-base-class.md)|Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.|
|[ctype_byname](../standard-library/ctype-byname-class.md)|Modello di classe derivata che descrive un oggetto che può essere utilizzato come facet CType delle impostazioni locali specificate, consentendo la classificazione dei caratteri e la conversione dei caratteri tra maiuscole e minuscole e i set di caratteri nativi e locali.|
|[locale](../standard-library/locale-class.md)|Classe che descrive un oggetto delle impostazioni locali che incapsula le informazioni specifiche delle impostazioni locali come set di facet che definiscono collettivamente un ambiente localizzato specifico.|
|[messages](../standard-library/messages-class.md)|Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per recuperare i messaggi localizzati da un catalogo di messaggi internazionalizzati per le impostazioni locali specificate.|
|[messages_base](../standard-library/messages-base-class.md)|Classe di base che descrive un tipo **int** per il catalogo dei messaggi.|
|[messages_byname](../standard-library/messages-byname-class.md)|Modello di classe derivata che descrive un oggetto che può fungere da facet dei messaggi delle impostazioni locali specificate, consentendo il recupero dei messaggi localizzati.|
|[money_base](../standard-library/money-base-class.md)|Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.|
|[money_get](../standard-library/money-get-class.md)|Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori monetari.|
|[money_put](../standard-library/money-put-class.md)|Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori monetari in sequenze di tipo **CharType**.|
|[moneypunct](../standard-library/moneypunct-class.md)|Modello di classe che descrive un oggetto che può fungere da facet delle impostazioni locali per descrivere le sequenze di tipo **CharType** utilizzate per rappresentare un campo di input di tipo valuta o un campo di output di tipo valuta.|
|[moneypunct_byname](../standard-library/moneypunct-byname-class.md)|Modello di classe derivata che descrive un oggetto che può essere utilizzato come facet moneypunct delle impostazioni locali specificate abilitando la formattazione dei campi di input o di output monetari.|
|[num_get](../standard-library/num-get-class.md)|Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori numerici.|
|[num_put](../standard-library/num-put-class.md)|Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori numerici in sequenze di tipo **CharType**.|
|[numpunct](../standard-library/numpunct-class.md)|Modello di classe che descrive un oggetto che può fungere da facet locale per descrivere le sequenze di tipo **CharType** utilizzate per rappresentare le informazioni sulla formattazione e la punteggiatura delle espressioni numeriche e booleane.|
|[numpunct_byname](../standard-library/numpunct-byname-class.md)|Modello di classe derivata che descrive un oggetto che può essere utilizzato come facet moneypunct delle impostazioni locali specificate, consentendo la formattazione e la punteggiatura delle espressioni numeriche e booleane.|
|[time_base](../standard-library/time-base-class.md)|Classe che funge da classe base per i facet del modello di classe time_get, definendo solo il tipo enumerato DateOrder e diverse costanti di questo tipo.|
|[time_get](../standard-library/time-get-class.md)|Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori temporali.|
|[time_get_byname](../standard-library/time-get-byname-class.md)|Modello di classe derivata che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali di tipo time_get \<**CharType**, **InputIterator**>.|
|[time_put](../standard-library/time-put-class.md)|Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori temporali in sequenze di tipo **CharType**.|
|[time_put_byname](../standard-library/time-put-byname-class.md)|Modello di classe derivata che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali di tipo `time_put` \<**CharType**, > **OutputIterator**.|
|[Classe wbuffer_convert](../standard-library/wbuffer-convert-class.md)|Descrive un buffer del flusso che controlla la trasmissione di elementi da e verso un buffer del flusso di byte.|
|[Classe wstring_convert](../standard-library/wstring-convert-class.md)|Modello di classe che esegue le conversioni tra una stringa di caratteri "wide" e una stringa di byte.|

## <a name="see-also"></a>Vedere anche

[Tabelle codici](../c-runtime-library/code-pages.md)\
[Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
