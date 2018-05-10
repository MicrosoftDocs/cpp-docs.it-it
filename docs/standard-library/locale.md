---
title: '&lt;impostazioni locali&gt; | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- <locale>
- locale/std::<locale>
- std::<locale>
dev_langs:
- C++
helpviewer_keywords:
- locale header
ms.assetid: ca56f9d2-7128-44da-8df1-f4c78c17fbf2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b81483b21f42f17320cb6d7b636fe5dd1f4c5e73
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltlocalegt"></a>&lt;locale&gt;

Definisce le classi modello e le funzioni che possono essere utilizzate dai programmi C++ per incapsulare e modificare le diverse convenzioni culturali relative alla rappresentazione e alla formattazione dei dati numerici, monetari e di calendario, inclusi il supporto per l'internazionalizzazione della classificazione dei caratteri e l'ordinamento delle stringhe.

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

|Classe|Descrizione|
|-|-|
|[codecvt](../standard-library/codecvt-class.md)|Classe modello che fornisce un facet utilizzato per eseguire la conversione tra codifiche di caratteri interne ed esterne.|
|[codecvt_base](../standard-library/codecvt-base-class.md)|Classe di base per la classe codecvt usata per definire un tipo di enumerazione a cui si fa riferimento come **result**, usato come tipo restituito per le funzioni membro facet per indicare il risultato di una conversione.|
|[codecvt_byname](../standard-library/codecvt-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni relative alle conversioni specifiche di un'area culturale.|
|[collate](../standard-library/collate-class.md)|Classe modello di ordinamento che fornisce un facet che gestisce le convenzioni di ordinamento delle stringhe.|
|[collate_byname](../standard-library/collate-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet di ordinamento delle impostazioni locali specificate, consentendo il recupero di informazioni relative alle convenzioni di ordinamento delle stringhe specifiche di un'area culturale.|
|[ctype](../standard-library/ctype-class.md)|Classe modello che fornisce un facet utilizzato per classificare i caratteri, eseguire la conversione dalle lettere maiuscole e minuscole e tra il set di caratteri nativi e il set utilizzato dalle impostazioni locali.|
|[ctype\<char>](../standard-library/ctype-char-class.md)|Una classe che è una specializzazione esplicita della classe modello **ctype\<CharType**> al tipo `char`, che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per caratterizzare le varie proprietà di un carattere di tipo `char`.|
|[ctype_base](../standard-library/ctype-base-class.md)|Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.|
|[ctype_byname](../standard-library/ctype-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet ctype delle impostazioni locali specificate, consentendo la classificazione dei caratteri e la relativa conversione tra maiuscole e minuscole e tra set di caratteri nativi e set specificati dalle impostazioni locali.|
|[locale](../standard-library/locale-class.md)|Classe che descrive un oggetto delle impostazioni locali che incapsula le informazioni specifiche delle impostazioni locali come set di facet che definiscono collettivamente un ambiente localizzato specifico.|
|[messages](../standard-library/messages-class.md)|Classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per recuperare i messaggi localizzati da un catalogo di messaggi internazionalizzati per le impostazioni locali specificate.|
|[messages_base](../standard-library/messages-base-class.md)|Classe base che descrive un tipo di `int` per il catalogo dei messaggi.|
|[messages_byname](../standard-library/messages-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet dei messaggi delle impostazioni locali specificate, consentendo il recupero dei messaggi localizzati.|
|[money_base](../standard-library/money-base-class.md)|Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.|
|[money_get](../standard-library/money-get-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori monetari.|
|[money_put](../standard-library/money-put-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori monetari in sequenze di tipo **CharType**.|
|[moneypunct](../standard-library/moneypunct-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per descrivere le sequenze di tipo **CharType** utilizzata per rappresentare un campo di input o output monetario.|
|[moneypunct_byname](../standard-library/moneypunct-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet moneypunct delle impostazioni locali specificate, consentendo la formattazione dei campi di input o output monetari.|
|[num_get](../standard-library/num-get-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori numerici.|
|[num_put](../standard-library/num-put-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni di valori numerici in sequenze di tipo **CharType**.|
|[numpunct](../standard-library/numpunct-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet locale per descrivere le sequenze di tipo **CharType** utilizzato per rappresentare le informazioni sulla formattazione e la punteggiatura delle espressioni numeriche e booleane.|
|[numpunct_byname](../standard-library/numpunct-byname-class.md)|Classe modello derivata che descrive un oggetto che può essere utilizzato come facet moneypunct delle impostazioni locali specificate, consentendo la formattazione e la punteggiatura delle espressioni numeriche e booleane.|
|[time_base](../standard-library/time-base-class.md)|Classe utilizzata come classe base per i facet della classe modello time_get, la quale definisce solo l'ordine della data di tipo enumerato e diverse costanti di questo tipo.|
|[time_get](../standard-library/time-get-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo **CharType** in valori temporali.|
|[time_get_byname](../standard-library/time-get-byname-class.md)|Una classe modello derivata che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali di tipo time_get\<**CharType**, **InputIterator**>.|
|[time_put](../standard-library/time-put-class.md)|Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori temporali in sequenze di tipo **CharType**.|
|[time_put_byname](../standard-library/time-put-byname-class.md)|Una classe modello derivata che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali di tipo `time_put` \< **CharType**, **OutputIterator**>.|
|[Classe wbuffer_convert](../standard-library/wbuffer-convert-class.md)|Descrive un buffer del flusso che controlla la trasmissione di elementi da e verso un buffer del flusso di byte.|
|[Classe wstring_convert](../standard-library/wstring-convert-class.md)|Classe modello che esegue le conversioni tra una stringa di caratteri "wide" e una stringa di byte.|

## <a name="see-also"></a>Vedere anche

[Tabelle codici](../c-runtime-library/code-pages.md)<br/>
[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
