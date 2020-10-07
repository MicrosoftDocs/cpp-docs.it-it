---
title: Panoramica della famiglia di funzioni
description: Panoramica delle funzioni di runtime di Microsoft C per famiglia.
ms.date: 10/05/2020
ms.assetid: b05a2755-9d11-4ea9-ab97-d00a4e872e16
ms.openlocfilehash: de5192cd03c3821afc646241d75a3e8c6c8c12e3
ms.sourcegitcommit: 8caaf5e00aeb727741a273aecafa15de293426cf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2020
ms.locfileid: "91806513"
---
# <a name="function-family-overview"></a>Panoramica della famiglia di funzioni

Questa sezione elenca le routine della libreria di runtime C per famiglia di funzioni.

## <a name="crt-library-routine-families"></a>Famiglie di routine della libreria CRT

[_exec, _wexec](exec-wexec-functions.md)\
Funzioni per caricare ed eseguire un nuovo processo.

[Funzioni di ricerca filename](filename-search-functions.md)\
Funzioni per la ricerca di nomi di file specificati e per chiudere le ricerche.

[Sintassi per la specifica del formato per `printf` e `wprintf`](format-specification-syntax-printf-and-wprintf-functions.md)\
Descrive la stringa di formato e gli argomenti per `printf` e `wprintf` .

[Caratteri di campo della specifica `scanf` di formato: e `wscanf`](format-specification-fields-scanf-and-wscanf-functions.md)\
Descrive i campi di specifica del formato per l'analisi di un flusso di input per l'intera `scanf` famiglia di funzioni.

[`is`, `isw` funzioni](is-isw-routines.md)\
Funzioni per il testing dei caratteri per elementi come se fossero maiuscoli, ASCII, numerici, punteggiatura e così via.

[`_ismbb` funzioni](ismbb-routines.md)\
Funzioni per il test di un valore integer per indicare se rappresenta un carattere alfa, un carattere vuoto, un carattere di stampa e così via.

[`_ismbc` funzioni](ismbc-routines.md)\
Funzioni per il test di un carattere multibyte per indicare se rappresenta un carattere alfa, un carattere vuoto, un carattere di stampa e così via.

[operatore `delete` (CRT)](delete-operator-crt.md)\
A partire da Visual Studio 2013, il runtime C universale (UCRT) non supporta più la funzione operatore delete specifica di C++. Fa ora parte della libreria standard C++.

[operatore `new` (CRT)](new-operator-crt.md)\
A partire da Visual Studio 2013, il runtime C universale (UCRT) non supporta più la funzione operator new specifica di C++. Fa ora parte della libreria standard C++.

[`printf` funzioni di parametri posizionali](printf-p-positional-parameters.md)\
I parametri posizionali specificano in base al numero gli argomenti da sostituire in un campo in una stringa di formato.

[`scanf` digitare i caratteri del campo](scanf-type-field-characters.md)\
Il carattere tipo determina se l'argomento associato viene interpretato come un carattere, una stringa o un numero per qualsiasi `scanf` famiglia di funzioni, incluse le versioni sicure, ad esempio `scanf_s` .

[`scanf` specifica della larghezza](scanf-width-specification.md)\
Il campo Width è un intero decimale positivo che controlla il numero massimo di caratteri da leggere per il campo. Si applica a qualsiasi `scanf` famiglia di funzioni, incluse le versioni sicure, ad esempio `scanf_s` .

[_spawn, funzioni _wspawn](spawn-wspawn-functions.md)\
Funzioni per creare ed eseguire un nuovo processo.

[`strcoll` funzioni](strcoll-functions.md)\
Le `strcoll` `wcscoll` funzioni e confrontano due stringhe in base all' `LC_COLLATE` impostazione della categoria della tabella codici delle impostazioni locali.

[Funzioni da stringa a valore numerico](string-to-numeric-value-functions.md)\
La `strtod` famiglia di funzioni converte una stringa con terminazione null in un valore numerico.

[`vprintf` funzioni](vprintf-functions.md)\
Le `vprintf` funzioni accettano un puntatore a un elenco di argomenti, lo formatta e scrive il risultato nella destinazione specificata. Le funzioni differiscono per la convalida dei parametri eseguita, che accettano stringhe di caratteri wide o a byte singolo, la destinazione di output e il supporto per specificare l'ordine in cui i parametri vengono utilizzati nella stringa di formato.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria di runtime C](c-run-time-library-reference.md)