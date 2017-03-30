---
title: Cronologia delle modifiche di Visual C++ dal 2003 al 2015 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- breaking changes [C++]
ms.assetid: b38385a9-a483-4de9-99a6-797488bc5110
caps.latest.revision: 124
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Human Translation
ms.sourcegitcommit: aadbf7d2c6fece48ab29c1b818995464a790c38b
ms.openlocfilehash: 7ff37399842c7c8d41f8b7d15660c73b8a11f19f
ms.lasthandoff: 03/07/2017

---
# <a name="visual-c-change-history-2003---2015"></a>Cronologia delle modifiche di Visual C++ dal 2003 al 2015
Quando si esegue l'aggiornamento a una nuova versione del compilatore Visual C++, potrebbero verificarsi errori di compilazione e/o runtime nel codice precedentemente compilato ed eseguito correttamente. Le modifiche apportate alla nuova versione che provocano questi problemi sono note come *modifiche importanti*e in genere sono richieste dalle modifiche nel linguaggio C++ standard, nelle firme di funzione o nel layout degli oggetti in memoria.  
  
 Per evitare errori di runtime difficili da rilevare e diagnosticare, è consigliabile non collegarsi mai in modo statico a file binari compilati usando versioni diverse del compilatore. Inoltre, quando si esegue l'aggiornamento a un progetto EXE o DLL, assicurarsi di aggiornare anche le librerie collegate. Se si usano tipi CRT (runtime C) o C++ Standard Library (libreria di C++ standard), non passarli tra file binari (inclusi DLL) compilati usando versioni diverse del compilatore. Per altre informazioni, vedere [Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL](../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).  
  
 È inoltre consigliabile non scrivere mai codice che dipende da un layout specifico per un oggetto diverso da un'interfaccia COM o un oggetto POD. Se si scrive codice di questo tipo, è necessario assicurarsi che funzioni dopo l'aggiornamento. Per altre informazioni, vedere [Portabilità in base ai limiti ABI](../cpp/portability-at-abi-boundaries-modern-cpp.md).  
  
 I miglioramenti apportati in modo costante alla conformità del compilatore possono talvolta modificare il modo in cui il compilatore riconosce il codice sorgente esistente. In questo caso, si possono riscontrare errori nuovi o diversi durante la compilazione o addirittura differenze di comportamento nel codice che apparentemente in precedenza veniva compilato ed eseguito correttamente. Anche se queste modifiche non sono importanti come quelle descritte in questo documento, è possibile che sia necessario modificare il codice sorgente per risolvere questi problemi.  
  
 Questo articolo descrive tutte le modifiche di rilievo apportate in Visual Studio dalla versione 2003 alla 2015, in ordine cronologico inverso. I termini "nuovo comportamento" o "ora" fanno riferimento a Visual Studio 2015 e versioni successive. I termini "vecchio comportamento" e "prima" fanno riferimento a Visual Studio 2013 e alle versioni precedenti. 
 
 Per informazioni su Visual Studio 2017, vedere [Novità di Visual C++ in Visual Studio 2017](../what-s-new-for-visual-cpp-in-visual-studio.md) e [Miglioramenti della conformità di Visual C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md).
  
1.  [Modifiche importanti apportate alla libreria di runtime C (CRT)](#BK_CRT)  
  
2.  [Modifiche importanti apportate a C++ standard e alla libreria di C++ standard](#BK_STL)  
  
3.  [Modifiche importanti apportate a MFC e ATL](#BK_MFC)  
  
4.  [Modifiche importanti apportate al runtime di concorrenza](#BK_ConcRT)  
  
## <a name="VC_2015"></a>Modifiche della conformità di Visual C++ 2015  
  
###  <a name="BK_CRT"></a> Libreria di runtime C (CRT)  
  
#### <a name="general-changes"></a>Modifiche generali  
  
-   **File binari di refactoring** La libreria CRT è stata sottoposta a refactoring in un due diversi file binari, CRT universale (ucrtbase), che contiene la maggior parte delle funzionalità standard, e una libreria di Runtime VC (vcruntime140), che contiene le funzionalità relative al compilatore, ad esempio la gestione delle eccezioni e le funzioni intrinseche. Se si usano le impostazioni di progetto predefinite, questa modifica non influisce in alcun modo poiché il linker userà le nuove librerie predefinite. Se è stata impostata la proprietà **Linker** del progetto **Ignora tutte le librerie predefinite** su **Sì** o si usa l'opzione del linker /NODEFAULTLIB nella riga di comando, è necessario aggiornare l'elenco delle librerie (nella proprietà **Dipendenze aggiuntive** ) per includere le nuove librerie di refactoring. Sostituire la libreria CRT precedente (libcmt.lib, libcmtd.lib, msvcrt.lib, msvcrtd.lib) con le librerie di refactoring equivalenti. Per ognuna delle due librerie di refactoring, esistono versioni statiche (con estensione lib) e dinamiche (con estensione dll) e versioni di rilascio (senza alcun suffisso) e di debug (con il suffisso "d"). Le versioni dinamiche hanno una libreria di importazione con cui collegarsi. Due librerie di refactoring sono CRT universali, in particolare ucrtbase.dll o .lib, ucrtbased.dll o .lib e la libreria di runtime VC,libvcruntime.lib, libvcruntime.dll, libvcruntimed.lib e libvcruntimed.dll. Vedere [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md).  
  
#### <a name="localeh"></a>\<locale.h>  
  
-   **localeconv** La funzione [localeconv](../c-runtime-library/reference/localeconv.md) dichiarata in locale.h ora funziona correttamente quando sono abilitate le [impostazioni locali dei singoli thread](../parallel/multithreading-and-locales.md). Nelle versioni precedenti della libreria, questa funzione restituisce i dati lconv per le impostazioni locali globali, non per le impostazioni locali del thread.  
  
     Se si usano le impostazioni locali per thread, è necessario controllare l'uso di localeconv per vedere se il codice suppone che i dati lconv restituiti siano per le impostazioni locali globali e modificarli in modo appropriato.  
  
#### <a name="mathh"></a>\<math.h>  
  
-   **Overload di C++ di funzioni della libreria matematica** Nelle versioni precedenti \<math.h> definiva alcuni, ma non tutti, overload di C++ per le funzioni della libreria matematica. \<cmath> definiva gli overload rimanenti, in modo da ottenere tutti gli overload, di cui uno necessario per includere l'intestazione \<cmath>. Ciò causava problemi con la risoluzione di overload della funzione nel codice che includeva solo \<math.h>. Ora, tutti gli overload di C++ sono stati rimossi da \<math.h> e ora sono presenti solo in \<cmath>.  
  
     Per risolvere gli errori, includere <cmath> per ottenere le dichiarazioni delle funzioni che sono state rimosse da \<math.h>. La tabella seguente elenca le funzioni che sono state spostate.  
  
     Funzioni che sono state spostate:  
  
    1.  double abs(double) e float abs(float)  
  
    2.  double pow (double, int), float pow (float, float) float pow (float, int) long double pow (long double, long double), long double pow (long double, int)  
  
    3.  versioni float e long double di funzioni a virgola mobile acos, acosh, asin, asinh, atan, atanh, atan2, cbrt, ceil, copysign, cos, cosh, erf, erfc, exp, exp2, expm1, fabs, fdim, floor, fma, fmax, fmin, fmod, frexp, hypot, ilogb, ldexp, lgamma, llrint, llround, log, log10, log1p, log2, lrint, lround, modf, nearbyint, nextafter, nexttoward, remainder, remquo, rint, round, scalbln, scalbn, sin, sinh, sqrt, tan, tanh, tgamma, trunc  
  
     Se si dispone di codice che usa abs con un tipo a virgola mobile che include solo l'intestazione math.h, le versioni a virgola mobile non saranno più disponibili, pertanto la chiamata, anche con un argomento a virgola mobile, a questo punto si risolve in abs(int). In questo modo si produce l'errore:  
  
    ```Output  
    warning C4244: 'argument' : conversion from 'float' to 'int', possible loss of data  
    ```  
  
     La correzione per questo avviso consiste nel sostituire la chiamata a abs con una versione a virgola mobile di abs, ad esempio fabs per un argomento double o fabsf per un argomento float o includere l'intestazione cmath e continuare a usare abs.  
  
-   **Conformità del punto a virgola mobile** Sono state apportate numerose modifiche alla libreria matematica per migliorare la conformità alle specifiche IEEE&754; e C11 allegato F rispetto all'input per casi speciali, ad esempio NaN e infiniti. Ad esempio, gli input NaN non interattivi, che spesso venivano considerati errori nelle versioni precedenti della libreria, non vengono più considerati errori. Vedere [Standard IEEE 754](http://grouper.ieee.org/groups/754) e l'allegato F dello [Standard C11](http://www.iso-9899.info/wiki/The_Standard).  
  
     Queste modifiche non provocheranno errori in fase di compilazione, ma potrebbero causare un comportamento diverso da parte dei programmi, sebbene più corretto in base allo standard.  
  
-   **FLT_ROUNDS** In Visual Studio 2013 la macro FLT_ROUNDS veniva espansa in un'espressione costante, che non era corretta perché la modalità di arrotondamento è configurabile al runtime, ad esempio chiamando fesetround. La macro FLT_ROUNDS è ora dinamica e riflette in modo corretto la modalità di arrotondamento corrente.  
  
#### <a name="new-and-newh"></a>\<new> e \<new.h>  
  
-   **new e delete** In previous versions of the library, the implementation-defined operator new e delete functions were exported from the runtime library DLL (for example, msvcr120.dll). Queste funzioni operatore ora sono sempre collegate staticamente nei file binari, anche quando si usano le DLL della libreria di runtime.  
  
     Non si tratta di una modifica rilevante per il codice misto o nativo (/clr), tuttavia per il codice compilato come [/clr:pure](../build/reference/clr-common-language-runtime-compilation.md) potrebbe causare un errore di compilazione da parte del codice. Se si compila codice come /clr:pure, può essere necessario aggiungere #include \<new> o #include \<new.h> per risolvere errori di compilazione dovuti a questa modifica. Si noti che /clr:pure è deprecato in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] e potrebbe essere rimosso nelle versioni future.  
  
#### <a name="processh"></a>\<process.h>  
  
-   **_beginthread e _beginthreadex** Le funzioni [_beginthread](../c-runtime-library/reference/beginthread-beginthreadex.md) e [_beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md) ora contengono un riferimento al modulo in cui è definita la procedura del thread per la durata del thread. Ciò contribuisce ad assicurare che i moduli non vengono scaricati fino a quando un thread non viene eseguito fino al completamento.  
  
#### <a name="stdargh"></a>\<stdarg.h>  
  
-   **va_start e tipi riferimento** Quando compila il codice C++, [va_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) verifica ora in fase di compilazione che l'argomento passato non sia di tipo riferimento. Gli argomenti di tipo riferimento non sono consentiti dallo Standard C++.  
  
#### <a name="stdioh-and-conioh"></a>\<stdio.h> e \<conio.h>  
  
-   **La famiglia di funzioni di printf e scanf ora viene definita inline.** Le definizioni di tutte le funzioni printf e scanf sono state spostate inline in \<stdio.h>, \<conio.h> e altre intestazioni CRT. Si tratta di una modifica che comporta un errore del linker (LNK2019, simbolo esterno non risolto) per tutti i programmi che hanno dichiarato localmente queste funzioni senza includere le intestazioni CRT appropriate. Se possibile, aggiornare il codice per includere le intestazioni CRT, ovvero aggiungere #include \<stdio.h>, e le funzioni inline, ma se non si intende modificare il codice per includere questi file di intestazione, una soluzione alternativa consiste nell'aggiungere una libreria aggiuntiva all'input del linker legacy_stdio_definitions.lib.  
  
     Per aggiungere questa libreria all'input del linker nell'IDE, aprire il menu di scelta rapida per il nodo del progetto, scegliere **Proprietà**, quindi nella finestra di dialogo **Proprietà del progetto** scegliere **Linker**e modificare **Input del Linker** per aggiungere legacy_stdio_definitions.lib all'elenco di valori delimitati da punto e virgola.  
  
     Se il progetto è collegato con librerie statiche compilate con una versione di Visual C++ precedente al 2015, il linker potrebbe segnalare un simbolo esterno non risolto. Questi errori potrebbero fare riferimento a definizioni stdio interne per_iob, _iob_func o importazioni correlate per determinate funzioni stdio nel formato _imp\_*. Microsoft consiglia di ricompilare tutte le librerie statiche con la versione più recente del compilatore e delle librerie di Visual C++ quando si aggiorna un progetto. Se la raccolta è una libreria di terze parti per cui l'origine non è disponibile, è consigliabile richiedere un aggiornamento binario da terze parti o incapsulare l'utilizzo di quella libreria in una DLL separata che deve essere compilata con la versione precedente del compilatore e delle librerie di Visual C++.  
  
    > [!WARNING]
    >  Se ci si collega con Windows SDK 8.1 o versione precedente, potrebbero verificarsi errori di simbolo esterno non risolto. In tal caso, è necessario risolvere l'errore aggiungendo legacy_stdio_definitions.lib all'input del linker come descritto in precedenza.  
  
     Per risolvere gli errori di simbolo non risolto, provare a usare [dumpbin.exe](../build/reference/dumpbin-reference.md) per esaminare i simboli definiti in un file binario. Provare la riga di comando seguente per visualizzare i simboli definiti in una libreria.  
  
    ```cpp  
    dumpbin.exe /LINKERMEMBER somelibrary.lib  
    ```  
  
-   **gets e _getws** Le funzioni [gets](../c-runtime-library/gets-getws.md) e [_getws](../c-runtime-library/gets-getws.md) sono state rimosse. La funzione gets è stata rimossa dalla libreria C Standard in C11 perché non può essere usata in modo sicuro. La funzione _getws era un'estensione di Microsoft che era equivalente a gets ma per stringhe wide. In alternativa a queste funzioni, provare a usare [fgets](../c-runtime-library/reference/fgets-fgetws.md), [fgetws](../c-runtime-library/reference/fgets-fgetws.md), [gets_s](../c-runtime-library/reference/gets-s-getws-s.md)e [_getws_s](../c-runtime-library/reference/gets-s-getws-s.md).  
  
-   **_cgets e _cgetws** Le funzioni [_cgets](../c-runtime-library/cgets-cgetws.md) e [_cgetws](../c-runtime-library/cgets-cgetws.md) sono state rimosse. In alternativa a queste funzioni, provare a usare [_cgets_s](../c-runtime-library/reference/cgets-s-cgetws-s.md) e [_cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md).  
  
-   **Formattazione di valori infiniti e NaN** Nelle versioni precedenti, valori infiniti e NaN potrebbero essere formattati usando un set di stringhe sentinella di Visual C++ specifiche.  
  
    -   Valori infiniti: 1.#INF  
  
    -   NaN non interattivo: 1.#QNAN  
  
    -   Segnalazione NaN: 1.#SNAN  
  
    -   NaN indefinito: 1.#IND  
  
     Ognuno di questi elementi potrebbe essere preceduto da un segno e potrebbe essere stato formattato in modo leggermente diverso a seconda della larghezza e della precisione del campo (talvolta con effetti insoliti, ad esempio, printf ("%.2f\n", INFINITY) visualizzerà 1. #J perché #INF potrebbe essere "arrotondato" a una precisione di 2 cifre). C99 ha introdotto nuovi requisiti relativi a come devono essere formattati valori infiniti e NaN. A questo punto l'implementazione di Visual C++ è conforme a tali requisiti. Sono disponibili le nuove stringhe seguenti:  
  
    -   Valori infiniti: inf  
  
    -   NaN non interattivo: nan  
  
    -   Segnalazione NaN: nan(snan)  
  
    -   NaN indefinito:nan(ind)  
  
     Uno di questi può essere preceduto da un segno. Se si usa un identificatore di formato lettere maiuscole (%F anziché %f), le stringhe vengono visualizzate in lettere maiuscole (INF anziché inf), così come richiesto.  
  
     Le funzioni [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) sono state modificate per l'analisi di queste nuove stringhe in modo che venga eseguito il roundtrip con printf e scanf.  
  
-   **Formattazione e analisi a virgola mobile** Sono stati introdotti nuovi algoritmi di analisi e formattazione a virgola mobile per migliorare la correttezza. Questa modifica interessa le famiglie di funzioni [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) e [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md), nonché funzioni come [strtod](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
     Gli algoritmi di formattazione precedenti genererebbero solo un numero limitato di cifre, riempiendo le posizioni decimali rimanenti con zero. Ciò è sufficiente per generare stringhe che eseguiranno il round trip al valore a virgola mobile originale, ma non è ideale se si vuole il valore esatto (o la rappresentazione decimale più vicina). I nuovi algoritmi di formattazione generano tante cifre quante sono necessarie per rappresentare il valore (o per riempire la precisione specificata). Un esempio del miglioramento è rappresentato dai risultati che si ottengono quando si calcola una potenza molto elevata di due:  
  
    ```cpp  
    printf("%.0f\n", pow(2.0, 80))  
  
    ```  
  
    ```Output  
        Old:  1208925819614629200000000    New:  1208925819614629174706176  
    ```  
  
     Gli algoritmi di analisi precedenti considererebbero solo fino a 17 cifre significative dalla stringa di input ed eliminerebbero le restanti cifre. Ciò è sufficiente per generare un'approssimazione molto vicina del valore rappresentato dalla stringa e il risultato è in genere molto vicino al risultato arrotondato correttamente. La nuova implementazione considera tutte le cifre presenti e produce il risultato arrotondato correttamente per tutti gli input (fino a 768 cifre). Queste funzioni inoltre rispettano a questo punto la modalità di arrotondamento (controllabile tramite fesetround).  Si tratta di una modifica potenziale del comportamento poiché queste funzioni potrebbero restituire risultati diversi. I nuovi risultati sono sempre più corretti di quelli precedenti.  
  
-   **Analisi a virgola mobile esadecimale e valori infiniti o NaN** Gli algoritmi di analisi a virgola mobile a questo punto analizzeranno le stringhe a virgola mobile (ad esempio quelle generate dagli identificatori di formato printf %A e %a) e tutti i valori infiniti e NaN generati dalle funzioni printf, come descritto in precedenza.  
  
-   **Aggiunta di zero prima del numero %A e %a** Gli identificatori di formato %A e %a formattano un numero a virgola mobile come una mantissa esadecimale e un esponente binario. Nelle versioni precedenti le funzioni printf aggiungerebbero uno zero prima del numero in modo non corretto nelle stringhe. Ad esempio, printf("%07.0a\n", 1.0) visualizzerebbe 00x1p+0, mentre dovrebbe visualizzare 0x01p+0. Questo problema è stato risolto.  
  
-   **Precisione %A e %a** La precisione predefinita degli identificatori di formato %A e %a era 6 nelle versioni precedenti della libreria. La precisione predefinita è ora 13 per conformità agli standard C.  
  
     Si tratta di una modifica del comportamento di runtime nell'output di qualsiasi funzione che usa una stringa di formato con %A o %a. Nel comportamento precedente l'output che usava l'identificatore %A potrebbe essere "1.1A2B3Cp+111". A questo punto l'output per lo stesso valore è "1.1A2B3C4D5E6F7p +&111;". Per ottenere il comportamento precedente, è possibile specificare la precisione, ad esempio, %.6A. Vedere [Specifica precisione](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md#precision).  
  
-   **Identificatore %F** L'identificatore di conversione o di formato %F è ora supportato. È funzionalmente equivalente all'identificatore di formato %f, ad eccezione del fatto che valori infiniti e NaN vengono formattati con lettere maiuscole.  
  
     Nelle versioni precedenti l'implementazione era usata per analizzare F e N come modificatori di lunghezza. Questo comportamento risaliva all'età degli spazi degli indirizzi segmentati: questi modificatori di lunghezza erano usati per indicare puntatori far e near, rispettivamente, come in Ns % o % Fp. Questo comportamento è stato rimosso. Se viene rilevato %F, a questo punto viene considerato come l'identificatore di formato %F. Se viene rilevato %N, a questo punto viene considerato come un parametro non valido.  
  
-   **Formattazione esponente** Gli identificatori di formato %e e %E formattano un numero a virgola mobile come una mantissa esadecimale e un esponente binario. Anche gli identificatori di formato %g e %G formattano i numeri in questo modo in alcuni casi. Nelle versioni precedenti CRT genererebbe sempre stringhe con esponenti a tre cifre. Ad esempio, printf("%e\n", 1.0) visualizzerebbe 1.000000e+000. Ciò non è corretto: C richiede che se l'esponente può essere rappresentato usando solo una o due cifre, devono essere visualizzate solo due cifre.  
  
     In Visual Studio 2005 è stata aggiunta un'opzione di conformità globale: [_set_output_format](../c-runtime-library/set-output-format.md). Un programma può chiamare questa funzione con l'argomento _TWO_DIGIT_EXPONENT, per consentire la visualizzazione di esponenti conformi. È stato modificato il comportamento predefinito per la modalità di visualizzazione degli esponenti conformi agli standard.  
  
-   **Convalida del formato di stringa** Nelle versioni precedenti le funzioni printf e scanf accetterebbero automaticamente molte stringhe di formato non valido, talvolta con effetti insoliti. Ad esempio, %hlhlhld verrebbe considerato come %d. Tutte le stringhe di formato non valido a questo punto vengono considerate parametri non validi.  
  
-   **Convalida delle stringhe in modalità fopen**  
  
     Nelle versioni precedenti la famiglia fopen di funzioni accettava automaticamente alcune stringhe di modalità non valida (ad esempio r+b+). Le stringhe di modalità non valida vengono ora rilevate e considerate come parametri non validi.  
  
-   **Modalità _O_U8TEXT**  
  
     La funzione [_setmode](../c-runtime-library/reference/setmode.md) ora segnala correttamente la modalità per i flussi aperti nella modalità _O_U8TEXT. Nelle versioni precedenti della libreria segnalerebbe tali flussi come aperti in _O_WTEXT.  
  
     Si tratta di una modifica importante se il codice interpreta la modalità _O_WTEXT per i flussi in cui la codifica è UTF-8. Se l'applicazione non supporta UTF_8, prendere in considerazione l'aggiunta del supporto per questa codifica sempre più comune.  
  
-   **snprintf e vsnprintf** Le funzioni [snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) e [vsnprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) ora sono implementate. Il codice precedente spesso forniva le definizioni delle versioni macro di queste funzioni perché non erano implementate dalla libreria CRT, ma queste non sono più necessarie nelle versioni più recenti. Se [snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) o [vsnprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) viene definita come macro prima di includere \<stdio.h>, ora la compilazione ha esito negativo con un errore che indica dove la macro è stata definita.  
  
     In genere, la correzione per questo problema consiste nell'eliminare tutte le dichiarazioni di snprintf o vsnprintf nel codice utente.  
  
-   **tmpnam genera nomi dei file utilizzabili** Nelle versioni precedenti le funzioni tmpnam e tmpnam_s generavano nomi di file nella directory radice dell'unità (ad esempio \sd3c.). Queste funzioni ora generano percorsi di nome file utilizzabili in una directory temporanea.  
  
-   **Incapsulamento FILE** Nelle versioni precedenti il tipo di FILE era completamente definito in \<stdio.h>, pertanto era possibile per il codice utente accedere a un FILE e modificarne gli elementi interni. La libreria stdio è stata modificata per nascondere i dettagli di implementazione. Nell'ambito di questa operazione, FILE come definito in \<stdio.h> ora è un tipo opaco e i relativi membri non sono accessibili di fuori di CRT stesso.  
  
-   **_outp e _inp** Le funzioni [_outp](../c-runtime-library/outp-outpw-outpd.md), [_outpw](../c-runtime-library/outp-outpw-outpd.md), [_outpd](../c-runtime-library/outp-outpw-outpd.md), [_inp](../c-runtime-library/inp-inpw-inpd.md), [_inpw](../c-runtime-library/inp-inpw-inpd.md)e [_inpd](../c-runtime-library/inp-inpw-inpd.md) sono state rimosse.  
  
#### <a name="stdlibh-malloch-and-sysstath"></a>\<stdlib.h>, \<malloc.h> e \<sys/stat.h>  
  
-   **strtof e wcstof** The strtof e wcstof functions failed to set errno to ERANGE when the value was not representable as a float. Questo problema è stato risolto. Si noti che questo errore era specifico per queste due funzioni; le funzioni strtod, wcstod, strtold e wcstold non erano interessate. Si tratta di una importante modifica di runtime.  
  
-   **Funzioni di allocazione allineata** Nelle versioni precedenti le funzioni di allocazione allineata (_aligned_malloc, _aligned_offset_malloc e così via) accetterebbero automaticamente le richieste di un blocco con un allineamento pari a 0. L'allineamento richiesto deve essere una potenza di due, per cui non è pari a zero. Questo problema è stato risolto e un allineamento richiesto pari a 0 a questo punto viene considerato come un parametro non valido. Si tratta di una importante modifica di runtime.  
  
-   **Funzioni heap** Le funzioni _heapadd, _heapset e _heapused sono state rimosse. Queste funzioni hanno smesso di funzionare da quando CRT è stato aggiornato in modo da usare l'heap di Windows.  
  
-   **smallheap** L'opzione di collegamento smalheap è stata rimossa. Vedere [Opzioni collegamento](../c-runtime-library/link-options.md).  
  
#### <a name="stringh"></a>\<string.h>  
  
-   **wcstok** La firma della funzione wcstok è stata modificata in modo da corrispondere alle richieste dello standard C. Nelle versioni precedenti della libreria la firma di questa funzione era:  
  
    ```cpp  
    wchar_t* wcstok(wchar_t*, wchar_t const*)  
    ```  
  
     Viene usato un contesto interno per ogni thread per tenere traccia dello stato tra chiamate, come avviene per strtok. Ora la funzione ha la firma wchar_t * wcstok(wchar_t\*, wchar_t const\*, wchar_t\*\*) e il chiamante deve passare il contesto come terzo argomento della funzione.  
  
     È stata aggiunta una nuova funzione _wcstok con la firma precedente per facilitare la portabilità. Quando si compila codice C++, esiste anche un overload inline di wcstok con la firma precedente. Questo overload è dichiarato come deprecato. Nel codice C è possibile definire _CRT_NON_CONFORMING_WCSTOK affinché venga usato _wcstok al posto di wcstok.  
  
#### <a name="timeh"></a>\<time.h>  
  
-   **clock** Nelle versioni precedenti, la funzione [clock](../c-runtime-library/reference/clock.md) veniva implementata usando l'API Windows [GetSystemTimeAsFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724397.aspx). Con questa implementazione la funzione clock era sensibile all'ora di sistema e pertanto non era necessariamente monotonica. La funzione clock è stata reimplementata in termini di [QueryPerformanceCounter](https://msdn.microsoft.com/library/windows/desktop/ms644904.aspx) ed è ora monotonica.  
  
-   **fstat e _utime** Nelle versioni precedenti, le funzioni [_stat](../c-runtime-library/reference/stat-functions.md), [fstat](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md) e [_utime](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) gestiscono in modo non corretto l'ora legale. Prima di Visual Studio 2013 tutte queste funzioni regolavano gli orari dell'ora solare in modo non corretto come se fossero nell'ora legale.  
  
     In Visual Studio 2013 il problema è stato corretto nella famiglia di funzioni _stat, ma non sono stati risolti problemi simili nelle famiglie delle funzioni fstat e _utime. Ciò ha comportato problemi a causa di un'incoerenza tra le funzioni. Le famiglie delle funzioni fstat e _utime ora sono state corrette in modo che tutte le funzioni ora gestiscono l'ora legale in modo corretto e coerente.  
  
-   **asctime** Nelle versioni precedenti la funzione [asctime](../c-runtime-library/reference/asctime-wasctime.md) avrebbe riempito i giorni a una cifra con uno zero iniziale, ad esempio: venerdì 06 giugno 08.00.00 2014. La specifica richiede che tali giorni vengano riempiti con uno spazio iniziale, ad esempio Ven  6 giugno venerdì 08.00.00 2014. Questo problema è stato risolto.  
  
-   **strftime e wcsftime** The strftime e wcsftime functions now support the %C, %D, %e, %F, %g, %G, %h, %n, %r, %R, %t, %T, %u, and %V format specifiers. I modificatori E e O inoltre vengono analizzati, ma ignorati.  
  
     L'identificatore di formato %c viene specificato poiché produce una "rappresentazione appropriata di data e ora" per le impostazioni locali correnti. Nelle impostazioni locali C questa rappresentazione deve corrispondere a %a %b %e %T %Y. Si tratta dello stesso formato che viene prodotto da asctime. Nelle versioni precedenti l'identificatore di formato %c formattava non correttamente le ore usando una rappresentazione MM/GG/AA HH:MM:SS. Questo problema è stato risolto.  
  
-   **timespec e TIME_UTC** L'intestazione \<time.h> ora definisce il tipo timespec e la funzione timespec_get in base allo standard C11. La macro TIME_UTC inoltre è ora definita per essere usata con la funzione timespec_get. Si tratta di una modifica per il codice che ha una definizione in conflitto per ognuno di questi elementi.  
  
-   **CLOCKS_PER_SEC** La macro CLOCKS_PER_SEC ora si espande in un numero intero di tipo clock_t, come richiesto dal linguaggio C.  
  
####  <a name="BK_STL"></a> Libreria standard C++  
 Per attivare nuove ottimizzazioni e controlli di debug, l'implementazione di Visual Studio della libreria standard C++ interrompe intenzionalmente la compatibilità binaria da una versione a quella successiva. Pertanto, se si usa la libreria standard C++, i file oggetto e le librerie statiche compilati usando versioni diverse non possono essere combinati in un file binario (EXE o DLL) e gli oggetti della libreria standard C++ non possono essere passati tra i file binari compilati usando versioni diverse. Tale combinazione genera errori del linker relativi a mancate corrispondenze di _MSC_VER. _MSC_VER è la macro che contiene il numero di versione principale del compilatore, ad esempio 1800 per Visual Studio 2013. Questo controllo non consente di rilevare la combinazione DLL e altre combinazioni inerenti a Visual C++ 2008 o versioni precedenti.  
  
-   **File di inclusione della libreria standard C++** Sono state apportate alcune modifiche alla struttura di inclusione nelle intestazioni della libreria standard C++. Le intestazioni della libreria standard C++ possono ora includersi reciprocamente in modi non specificati. In generale, è consigliabile scrivere il codice in modo che includa accuratamente tutte le intestazioni necessarie in base allo standard C++ e non si basi su quali intestazioni della libreria standard C++ includono altre intestazioni della libreria standard C++. In questo modo il codice diventa portabile tra versioni e piattaforme. Almeno due modifiche di intestazione in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] influiscono sul codice utente. Per prima cosa \<string> non include più \<iterator>. Secondo, \<tuple> ora dichiara std::array senza includere tutti i valori \<array>, cosa che può interrompere il codice attraverso la seguente combinazione di costrutti di codice: il codice include una variabile denominata "array", si ha una direttiva using "using namespace std;" e si include un'intestazione della libreria standard C++ (ad esempio \<functional>) che include \<tuple>, che ora dichiara std::array.  
  
-   **steady_clock** L'implementazione di \<chrono> di [steady_clock](../standard-library/steady-clock-struct.md) è stata modificata per soddisfare i requisiti standard C++ per tenuta e monotonicità. steady_clock ora è basato su [QueryPerformanceCounter](https://msdn.microsoft.com/library/windows/desktop/ms644904.aspx) e high_resolution_clock è ora un typedef per steady_clock. Di conseguenza in Visual C++ steady_clock::time_point è ora un typedef per chrono::time_point <steady_clock>; tuttavia, ciò non vale necessariamente per altre implementazioni.  
  
-   **allocatori e const** Sono ora necessari confronti di uguaglianza/disuguaglianza di allocatori per accettare argomenti const su entrambi i lati.  Se gli allocatori definiscono questi operatori come segue:  
  
    ```cpp  
    bool operator==(const MyAlloc& other)  
    ```  
  
     È necessario aggiornare questi strumenti per dichiararli membri const.  
  
    ```cpp  
    bool operator==(const MyAlloc& other) const  
    ```  
  
-   **Elementi const** Lo standard C++ ha sempre rifiutato i contenitori di elementi const (ad esempio vector\<const T> o set\<const T>). In Visual C++ 2013 e versioni precedenti tali contenitori erano accettati. Nella versione corrente tali contenitori causano errori di compilazione.  
  
-   **std::allocator::deallocate** In Visual C++ 2013 e versioni precedenti, std::allocator::deallocate(p, n) ignorava l'argomento passato per n.  Lo standard C++ ha sempre richiesto che n sia uguale al valore passato come primo argomento alla chiamata di allocare che ha restituito p. Tuttavia, nella versione corrente il valore di n viene controllato. Il codice che passa gli argomenti per n che differiscono da ciò che richiede lo standard potrebbe arrestarsi in modo anomalo in fase di esecuzione.  
  
-   **hash_map e hash_set** I file di intestazione non standard hash_map e hash_set sono deprecati in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] e verranno rimossi in una versione futura. Usare invece unordered_map e unordered_set.  
  
-   **comparators e operator()** I contenitori associativi (la famiglia \<map>) ora richiedono che i loro comparatori abbiano operatori di chiamata di funzioni in grado di chiamare const. Il codice seguente in una dichiarazione di classe comparatore ora causa errori di compilazione:  
  
    ```cpp  
    bool operator()(const X& a, const X& b)  
    ```  
  
     Per risolvere questo errore, modificare la dichiarazione di funzione in:  
  
    ```cpp  
    bool operator()(const X& a, const X& b) const  
    ```  
  
-   **tratti di tipo** The old names for tratti di tipo from an earlier version of the C++ draft standard have been removed. Sono stati modificati in C++11 e sono stati aggiornati ai valori C++11 in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)]. La tabella seguente illustra i nomi precedenti e nuovi:  
  
    |Nome precedente|Nuovo nome|  
    |--------------|--------------|  
    |add_reference|add_lvalue_reference|  
    |has_default_constructor|is_default_constructible|  
    |has_copy_constructor|is_copy_constructible|  
    |has_move_constructor|is_move_constructible|  
    |has_nothrow_constructor|is_nothrow_default_constructible|  
    |has_nothrow_default_constructor|is_nothrow_default_constructible|  
    |has_nothrow_copy|is_nothrow_copy_constructible|  
    |has_nothrow_copy_constructor|is_nothrow_copy_constructible|  
    |has_nothrow_move_constructor|is_nothrow_move_constructible|  
    |has_nothrow_assign|is_nothrow_copy_assignable|  
    |has_nothrow_copy_assign|is_nothrow_copy_assignable|  
    |has_nothrow_move_assign|is_nothrow_move_assignable|  
    |has_trivial_constructor|is_trivially_default_constructible|  
    |has_trivial_default_constructor|is_trivially_default_constructible|  
    |has_trivial_copy|is_trivially_copy_constructible|  
    |has_trivial_move_constructor|is_trivially_move_constructible|  
    |has_trivial_assign|is_trivially_copy_assignable|  
    |has_trivial_move_assign|is_trivially_move_assignable|  
    |has_trivial_destructor|is_trivially_destructible|  
  
-   **launch::any e launch::sync policies** The nonstandard launch::any e launch::sync policies were removed. Per launch::any, usare invece launch:async &#124; launch:deferred. Per launch::sync, usare launch::deferred. Vedere [Enumerazione launch](../standard-library/future-enums.md#launch_enumeration).  
  
####  <a name="BK_MFC"></a> MFC e ATL  
  
-   **Microsoft Foundation Classes (MFC)** non è più incluso in un'installazione "Tipica" di Visual Studio per le grandi dimensioni. Per installare MFC, scegliere l'opzione di installazione personalizzata nel programma di installazione di Visual Studio 2015. Se Visual Studio 2015 è già installato, è possibile installare MFC, eseguendo nuovamente l'installazione di Visual Studio, scegliendo l'opzione di installazione personalizzata e scegliendo Microsoft Foundation Classes. È possibile eseguire nuovamente il programma di installazione di Visual Studio dal Pannello di controllo, Programmi e funzionalità o dai supporti di installazione.  
  
     Il pacchetto ridistribuibile di Visual C++ include ancora questa libreria.  
  
####  <a name="BK_ConcRT"></a> Runtime di concorrenza  
  
-   **Macro Yield di Windows.h in conflitto con concurrency::Context::Yield** Il runtime di concorrenza in precedenza usava #undef per rimuovere la definizione della macro Yield in modo da evitare conflitti tra la macro Yield definita in Windows.h e la funzione concurrency::Context::Yield. Il runtime #undef è stato rimosso ed è stata aggiunta una nuova chiamata API equivalente non in conflitto [concurrency::Context::YieldExecution](../parallel/concrt/reference/context-class.md#yieldexecution) . Per risolvere i conflitti con Yield, è possibile aggiornare il codice per chiamare la funzione YieldExecution o per racchiudere il nome della funzione Yield tra parentesi nei siti di chiamata, come nell'esempio seguente:  
  
    ```cpp  
    (concurrency::Context::Yield)();  
    ```  
  
## <a name="compiler-conformance-improvements-in-visual-c-2015"></a>Miglioramenti della conformità del compilatore in Visual C++ 2015  
 Quando si aggiorna il codice rispetto alle versioni precedenti, potrebbero verificarsi anche errori del compilatore dovuti ai miglioramenti apportati alla conformità in Visual C++ 2015. Tali miglioramenti non interrompono la compatibilità binaria dalle versioni precedenti di Visual C++, ma possono generare errori di compilazione mai riscontrati in precedenza. Per altre informazioni, vedere [Visual C++: novità dalla versione 2003 alla 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).  
  
 In Visual C++ 2015 i miglioramenti apportati in modo costante alla conformità del compilatore possono talvolta modificare il modo in cui il compilatore riconosce il codice sorgente esistente. In questo caso, si possono riscontrare errori nuovi o diversi durante la compilazione o addirittura differenze di comportamento nel codice che apparentemente in precedenza veniva compilato ed eseguito correttamente.  
  
 Fortunatamente, queste differenze hanno poco o nessun impatto sulla maggior parte del codice sorgente e quando è necessario usare codice sorgente o altre modifiche per risolvere queste differenze, le correzioni sono in genere minime e semplici. Sono stati inclusi numerosi esempi di codice sorgente in precedenza accettabile per cui potevano essere necessarie modifiche *(prima)* e di correzioni da apportare per risolvere i problemi *(dopo)*.  
  
 Benché queste differenze possano influire sul codice sorgente o altri elementi di compilazione, non influiscono sulla compatibilità binaria tra gli aggiornamenti alle versioni di Visual C++. Una *modifica sostanziale*, molto più drastica, può influire sulla compatibilità binaria, ma le interruzioni della compatibilità binaria si verificano solo tra le versioni principali di Visual C++. Ad esempio tra Visual C++ 2013 e Visual C++ 2015. Per informazioni sulle modifiche sostanziali apportate tra Visual C++ 2013 e Visual C++ 2015, vedere [Modifiche della conformità di Visual C++ 2015](#VC_2015).  
  
-   [Miglioramenti della conformità in Visual C++ 2015](#VS_RTM)  
  
-   [Miglioramenti della conformità in Update 1](#VS_Update1)  
  
-   [Miglioramenti della conformità in Update 2](#VS_Update2)  
  
-   [Miglioramenti della conformità in Update 3](#VS_Update3)  
  
###  <a name="VS_RTM"></a>Miglioramenti della conformità in Visual C++ 2015  
  
-   /Zc:forScope- option  
  
     L'opzione del compilatore **/Zc:forScope-** è deprecata e verrà rimossa in una versione futura.  
  
    ```cpp  
    Command line warning  D9035: option 'Zc:forScope-' has been deprecated and will be removed in a future release  
    ```  
  
     L'opzione in genere è stata usata per consentire codice non standard che usa variabili di ciclo dopo il punto in cui, in base allo standard, dovrebbero essere uscite dall'ambito. È necessaria solo quando si esegue la compilazione con l'opzione /Za, poiché è sempre consentito l'utilizzo di una variabile di ciclo dopo la fine del ciclo senza /Za. Se non è rilevante la conformità agli standard (ad esempio, se il codice non è destinato a essere portabile in altri compilatori), è possibile disattivare l'opzione /Za (o impostare la proprietà Disabilita estensioni linguaggio su No). Se si vuole scrivere codice portabile, conforme agli standard, è necessario riscrivere il codice affinché sia conforme allo standard spostando la dichiarazione di tali variabili in un punto esterno al ciclo.  
  
    ```cpp  
    // C2065 expected  
    int main() {  
        // Uncomment the following line to resolve.  
        // int i;  
        for (int i = 0; i < 1; i++);  
        i = 20;   // i has already gone out of scope under /Za  
    }  
  
    ```  
  
-   **/Zg (opzione del compilatore)**  
  
     L'opzione del compilatore /Zg (Genera i prototipi delle funzioni) non è più disponibile. Questa opzione del compilatore è stata precedentemente deprecata.  
  
-   Non è più possibile eseguire unit test con C++/CLI dalla riga di comando con mstest.exe. Usare invece vstest.console.exe. Vedere [Opzioni della riga di comando di VSTest.Console.exe](/devops-test-docs/test/vstest-console-exe-command-line-options).  
  
-   **mutable (parola chiave)**  
  
     L'identificatore di classi di archiviazione `mutable` non è più consentito in posizioni dove in precedenza eseguiva compilazioni senza errori. Ora il compilatore genera l'errore C2071 (classe di archiviazione non valida). In base allo standard, l'identificatore modificabile può essere applicato solo ai nomi dei membri di dati della classe, non può essere applicato ai nomi dichiarati const o statici e non può essere applicato ai membri di riferimento.  
  
     Si consideri il codice di esempio seguente:  
  
    ```cpp  
    struct S   
    {  
        mutable int &r;  
    };  
  
    ```  
  
     Nelle versioni precedenti del compilatore Visual C++ questa situazione è accettabile, ma ora il compilatore genera l'errore seguente:  
  
    ```Output  
    error C2071: 'S::r': illegal storage class  
    ```  
  
     Per correggere l'errore, rimuovere semplicemente la parola chiave mutable ridondante.  
  
-   **char_16_t e char32_t**  
  
     Non è possibile usare `char16_t` o `char32_t` come alias di un typedef, poiché questi tipi ora vengono considerati come incorporati. Per gli utenti e gli autori di libreria era comune definire char16_t e char32_t come alias rispettivamente di uint16_t e uint32_t.  
  
    ```cpp  
    #include <cstdint>  
  
    typedef uint16_t char16_t; //C2628  
    typedef uint32_t char32_t; //C2628  
  
    int main(int argc, char* argv[])  
    {  
        uint16_t x = 1; uint32_t y = 2;  
        char16_t a = x;  
        char32_t b = y;  
        return 0;  
    }  
  
    ```  
  
     Per aggiornare il codice, rimuovere le dichiarazioni typedef e rinominare tutti gli identificatori che sono in conflitto con questi nomi.  
  
-   **Parametri di modello non di tipo**  
  
     Determinato codice che prevede parametri di modello non di tipo viene ora verificato correttamente per la compatibilità del tipo quando vengono forniti gli argomenti di modello espliciti. Ad esempio, il seguente codice veniva compilato senza errori nelle versioni precedenti di Visual C++.  
  
    ```cpp  
    struct S1  
    {  
        void f(int);  
        void f(int, int);  
    };  
  
    struct S2  
    {  
        template <class C, void (C::*Function)(int) const> void f() {}  
    };  
  
    void f()  
    {  
        S2 s2;  
        s2.f<S1, &S1::f>();  
    }  
  
    ```  
  
     Il compilatore corrente restituisce correttamente un errore, perché il tipo di parametro di modello non corrisponde all'argomento di modello (il parametro è un puntatore a un membro const, ma la funzione f è non const):  
  
    ```Output  
    error C2893: Failed to specialize function template 'void S2::f(void)'note: With the following template arguments:note: 'C=S1'note: 'Function=S1::f'  
    ```  
  
     Per risolvere questo errore nel codice, verificare che il tipo di argomento del modello usato corrisponda al tipo dichiarato del parametro di modello.  
  
-   **__declspec(align)**  
  
     Il compilatore non accetta più `__declspec(align)` sulle funzioni. È sempre stato ignorato, ma ora genera un errore del compilatore.  
  
    ```cpp  
    error C3323: 'alignas' and '__declspec(align)' are not allowed on function declarations  
    ```  
  
     Per risolvere questo problema, rimuovere `__declspec(align)` dalla dichiarazione di funzione. Dal momento che non ha avuto effetto, la rimozione non comporta alcuna modifica.  
  
-   **Gestione delle eccezioni**  
  
     Sono state apportate alcune modifiche alla gestione delle eccezioni. In primo luogo, gli oggetti eccezione devono poter essere copiati o spostati. Il codice seguente veniva compilato in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma non viene compilato in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```cpp  
    struct S  
    {  
    public:  
        S();  
    private:  
        S(const S &);  
    };  
  
    int main()  
    {  
        throw S(); // error  
    }  
  
    ```  
  
     Il problema è che il costruttore di copia è privato e quindi l'oggetto non può essere copiato, come accade durante il normale funzionamento di gestione di un'eccezione. Lo stesso vale quando il costruttore di copia viene dichiarato `explicit`.  
  
    ```cpp  
    struct S  
    {  
        S();  
        explicit S(const S &);  
    };  
  
    int main()  
    {  
        throw S(); // error  
    }  
  
    ```  
  
     Per aggiornare il codice, verificare che il costruttore di copia per l'oggetto eccezione sia pubblico e non sia contrassegnato come `explicit`.  
  
     L'individuazione di un'eccezione in base al valore richiede anche che sia possibile copiare l'oggetto eccezione. Il codice seguente veniva compilato in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma non viene compilato in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```cpp  
    struct B  
    {  
    public:  
        B();  
    private:  
        B(const B &);  
    };  
  
    struct D : public B {};  
  
    int main()  
    {  
        try  
        {  
        }  
        catch (D d) // error  
        {  
        }  
    }  
  
    ```  
  
     Per risolvere questo problema, è possibile modificare il tipo di parametro per `catch` in un riferimento.  
  
    ```cpp  
    catch (D& d)  
    {  
    }  
  
    ```  
  
-   **Valori letterali stringa seguiti da macro**  
  
     Il compilatore supporta ora i valori letterali definiti dall'utente. Di conseguenza, i valori letterali stringa seguiti da macro senza eventuali spazi intermedi vengono interpretati come valori letterali definiti dall'utente, che potrebbero produrre errori o risultati imprevisti. Nei compilatori precedenti, ad esempio, il codice seguente veniva compilato correttamente:  
  
    ```cpp  
    #define _x "there"  
    char* func() {  
        return "hello"_x;  
    }  
    int main()  
    {  
        char * p = func();  
        return 0;  
    }  
  
    ```  
  
     Il compilatore lo interpretava come un valore letterale stringa "hello" seguito da una macro, espansa in "there", e quindi i due valori letterali stringa venivano concatenati in uno. In [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] il compilatore lo interpreta come un valore letterale definito dall'utente, ma poiché non esiste alcun valore letterale _x corrispondente definito dall'utente, viene restituito un errore.  
  
    ```Output  
    error C3688: invalid literal suffix '_x'; literal operator or literal operator template 'operator ""_x' not found  
    note: Did you forget a space between the string literal and the prefix of the following string literal?  
    ```  
  
     Per risolvere questo problema, aggiungere uno spazio tra il valore letterale stringa e la macro.  
  
-   **Valori letterali stringa adiacenti**  
  
     Analogamente al precedente esempio, a causa di modifiche correlate nell'analisi delle stringhe, i valori letterali stringa adiacenti (uno dei valori letterali stringa di carattere wide o narrow) senza gli spazi vuoti sono stati interpretati come una singola stringa concatenata nelle versioni precedenti di Visual C++. In [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] è necessario aggiungere spazi vuoti tra le due stringhe. Ad esempio, il codice seguente deve essere modificato:  
  
    ```cpp  
    char * str = "abc""def";  
    ```  
  
     Aggiungere semplicemente uno spazio tra le due stringhe.  
  
    ```cpp  
    char * str = "abc" "def";  
    ```  
  
-   **Operatore new e delete di posizionamento**  
  
     È stata apportata una modifica all'operatore delete per fare in modo che sia conforme con lo standard C++14. Per informazioni dettagliate sulla modifica agli standard, vedere [Deallocazione con dimensione C++](http://isocpp.org/files/papers/n3778.html). Le modifiche aggiungono un modulo dell'operatore delete globale che accetta un parametro di dimensione. La differenza sostanziale è che se in precedenza si usava un operatore delete con la stessa firma (per la corrispondenza con un operatore new di posizionamento), ora si riceve un errore del compilatore (C2956, che si verifica nel punto in cui viene usato l'operatore new di posizionamento, poiché è la posizione nel codice in cui il compilatore tenta di identificare un operatore delete corrispondente appropriato).  
  
     La funzione `void operator delete(void *, size_t)` è un operatore delete di posizionamento corrispondente alla nuova funzione di posizionamento "void \* operator new (size_t, size_t)" in C++11. Con la deallocazione con dimensione C++14, questa funzione delete è ora una *funzione di deallocazione consueta* (operatore delete globale). Lo standard richiede che, se l'uso di un operatore new cerca una funzione delete corrispondente e trova una funzione di deallocazione consueta, il programma non ha un formato corretto.  
  
     Si supponga, ad esempio, che il codice definisca un operatore new e delete di posizionamento:  
  
    ```cpp  
    void * operator new(std::size_t, std::size_t);  
    void operator delete(void*, std::size_t) noexcept;  
  
    ```  
  
     Il problema si verifica a causa della corrispondenza delle firme funzione tra un operatore delete di posizionamento che è stato definito e il nuovo operatore delete con dimensione globale. Stabilire se è possibile usare un tipo diverso da size_t per qualsiasi operatore new e delete di posizionamento.  Si noti che il tipo di size_t typedef è dipendente dal compilatore; è un typedef per int senza segno in Visual C++. Una buona soluzione consiste nell'usare un tipo enumerato simile al seguente:  
  
    ```cpp  
    enum class my_type : size_t {};  
  
    ```  
  
     Modificare quindi la definizione dell'operatore new e delete di posizionamento per usare questo tipo come secondo argomento anziché size_t. È necessario anche aggiornare le chiamate all'operatore new di posizionamento per passare al nuovo tipo (ad esempio, usando `static_cast<my_type>` per convertire il valore integer) e aggiornare la definizione di new e delete per eseguire il cast di tipo integer. Non è necessario usare un enum per questo oggetto; funzionerebbe anche un tipo classe con un membro size_t.  
  
     Una soluzione alternativa è che si potrebbe eliminare completamente la nuova posizione. Se il codice usa l'operatore new di posizionamento per implementare un pool di memoria dove l'argomento di posizione è la dimensione dell'oggetto allocato o eliminato, la funzionalità di deallocazione con dimensione potrebbe essere adatta a sostituire il codice del pool di memoria personalizzato ed è possibile eliminare le funzioni di posizionamento e usare semplicemente il proprio operatore delete a due argomenti anziché le funzioni di posizionamento.  
  
     Se non si intende aggiornare immediatamente il codice, è possibile ripristinare il comportamento precedente usando l'opzione del compilatore /Zc:sizedDealloc-. Se si usa questa opzione, le funzioni di eliminazione a due argomenti non esistono e non provocheranno un conflitto con l'operatore delete di posizionamento.  
  
-   **Membri dati di unioni**  
  
     I membri dati di unioni non possono avere tipi di riferimento. Il codice seguente veniva compilato correttamente in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], ma produce un errore in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  
  
    ```cpp  
    union U1   
    {  
        const int i;  
    };  
    union U2  
    {  
        int & i;  
    };  
    union U3  
    {  
        struct { int & i; };  
    };  
  
    ```  
  
     Il codice precedente produce gli errori seguenti:  
  
    ```Output  
  
    test.cpp(67): error C2625: 'U2::i': illegal union member; type 'int &' is reference type  
    test.cpp(70): error C2625: 'U3::i': illegal union member; type 'int &' is reference type  
  
    ```  
  
     Per risolvere questo problema, modificare i tipi di riferimento in un puntatore o un valore. La modifica del tipo in un puntatore richiede modifiche al codice che usa il campo di unione. La modifica del codice in un valore modificherebbe i dati archiviati nell'unione, che influiscono su altri campi, poiché i campi in tipi di unione condividono la stessa memoria. A seconda delle dimensioni del valore, è possibile anche modificare le dimensioni dell'unione.  
  
-   Unioni anonime sono ora più conformi allo standard. Le versioni precedenti del compilatore hanno generato un costruttore e distruttore esplicito per unioni anonime. Questi vengono eliminati in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  
  
    ```cpp  
    struct S   
    {  
        S();  
    };  
  
    union   
    {  
        struct   
        {  
            S s;  
        };  
    } u; // C2280  
  
    ```  
  
     Il codice precedente produce gli errori seguenti in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)]:  
  
    ```cpp  
    error C2280: '<unnamed-type-u>::<unnamed-type-u>(void)': attempting to reference a deleted function  
    note: compiler has generated '<unnamed-type-u>::<unnamed-type-u>' here  
  
    ```  
  
     Per risolvere questo problema, specificare definizioni personalizzate del costruttore e/o del distruttore.  
  
    ```cpp  
    struct S   
    {  
        // Provide a default constructor by adding an empty function body.  
        S() {}  
    };  
  
    union   
    {  
        struct   
        {  
            S s;  
        };  
    } u;  
  
    ```  
  
-   **Unioni con strutture anonime**  
  
     Per la conformità allo standard, il comportamento di runtime è stato modificato per i membri di strutture anonime nelle unioni. Il costruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando viene creato questo tipo di unione. Il distruttore per i membri di strutture anonime in un'unione non viene più chiamato in modo implicito quando l'unione è esterna all'ambito. Si consideri il codice seguente, in cui un'unione U contiene una struttura anonima con un membro che è una struttura S denominata con un distruttore.  
  
    ```cpp  
    #include <stdio.h>  
    struct S   
    {  
        S() { printf("Creating S\n"); }  
        ~S() { printf("Destroying S\n"); }  
    };  
    union U   
    {  
        struct {  
            S s;  
        };  
        U() {}  
        ~U() {}  
    };  
  
    void f()  
    {  
        U u;  
        // Destructor implicitly called here.  
    }  
  
    int main()  
    {  
        f();  
  
        char s[1024];  
        printf("Press any key.\n");  
        gets_s(s);  
        return 0;  
    }  
  
    ```  
  
     In [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] il costruttore per S viene chiamato quando viene creata l'unione e il distruttore per S viene chiamato durante la pulitura dello stack per la funzione f. Tuttavia in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] il costruttore e distruttore non vengono chiamati. Il compilatore visualizza un avviso relativo a questa modifica del comportamento.  
  
    ```Output  
    warning C4587: 'U::s': behavior change: constructor is no longer implicitly calledwarning C4588: 'U::s': behavior change: destructor is no longer implicitly called  
    ```  
  
     Per ripristinare il comportamento originale, assegnare alla struttura anonima un nome. Il comportamento di runtime di strutture non anonime è lo stesso, indipendentemente dalla versione del compilatore.  
  
    ```cpp  
    #include <stdio.h>  
  
    struct S   
    {  
        S() { printf("Creating S.\n"); }  
        ~S() { printf("Destroying S\n"); }  
    };  
    union U   
    {  
        struct   
        {  
            S s;  
        } namedStruct;  
        U() {}  
        ~U() {}  
    };  
  
    void f()  
    {  
        U u;  
    }  
  
    int main()  
    {  
        f();  
  
        char s[1024];  
        printf("Press any key.\n");  
        gets_s(s);  
        return 0;  
    }  
  
    ```  
  
     In alternativa, provare a spostare il codice del costruttore e del distruttore in nuove funzioni e aggiungere chiamate a queste funzioni provenienti dal costruttore e distruttore per l'unione.  
  
    ```cpp  
    #include <stdio.h>  
  
    struct S   
    {  
        void Create() { printf("Creating S.\n"); }  
        void Destroy() { printf("Destroying S\n"); }  
    };  
    union U   
    {  
        struct   
        {  
            S s;  
        };  
        U() { s.Create(); }  
        ~U() { s.Destroy(); }  
    };  
  
    void f()  
    {  
        U u;  
    }  
  
    int main()  
    {  
        f();  
  
        char s[1024];  
        printf("Press any key.\n");  
        gets_s(s);  
        return 0;  
    }  
  
    ```  
  
-   **Risoluzione per il modello**  
  
     Sono state apportate modifiche alla risoluzione dei nomi per i modelli. In C++, quando si considerano i candidati per la risoluzione di un nome, può accadere che uno o più nomi presi in considerazione come corrispondenze potenziali producano un'istanza del modello non valida. Queste istanze non valide in genere non provocano errori del compilatore, un principio che è noto come SFINAE (Substitution Failure Is Not An Error).  
  
     A questo punto, se SFINAE richiede al compilatore di creare un'istanza di specializzazione del modello di classe, eventuali errori verificatisi durante questo processo sono errori del compilatore. Nelle versioni precedenti il compilatore potrebbe ignorare tali errori. Si consideri il codice di esempio seguente:  
  
    ```cpp  
    #include <type_traits>  
  
    template< typename T>  
    struct S  
    {  
        S() = default;  
        S(const S&);  
        S(S& &);  
  
        template< typename U, typename = typename std::enable_if< std::is_base_of< T, U> ::value> ::type>  
        S(S< U> & &);  
    };  
  
    struct D;  
  
    void f1()  
    {  
        S< D> s1;  
        S< D> s2(s1);  
    }  
  
    struct B  
    {  
    };  
  
    struct D : public B  
    {  
    };  
  
    void f2()  
    {  
        S< D> s1;  
        S< D> s2(s1);  
    }  
  
    ```  
  
     Se si compila con il compilatore corrente, viene visualizzato l'errore seguente:  
  
    ```Output  
  
    type_traits(1110): error C2139: 'D': an undefined class is not allowed as an argument to compiler intrinsic type trait '__is_base_of'  
    ..\t331.cpp(14): note: see declaration of 'D'  
    ..\t331.cpp(10): note: see reference to class template instantiation 'std::is_base_of<T,U>' being compiled  
    with  
    [  
        T=D,  
        U=D  
    ]  
  
    ```  
  
     Ciò accade perché al momento della prima chiamata di is_base_of la classe 'D' non è stata definita.  
  
     In questo caso, la correzione non deve usare tale tratti di tipo fino a quando non è stata definita la classe. Se si spostano le definizioni di B e D all'inizio del file di codice, l'errore viene risolto. Se le definizioni sono nei file di intestazione, controllare l'ordine delle istruzioni include per i file di intestazione per verificare che tutte le definizioni di classe vengano compilate prima di usare modelli problematici.  
  
-   **Costruttori di copia**  
  
     Sia in [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] che in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] il compilatore genera un costruttore di copia per una classe se tale classe ha un costruttore di spostamento definito dall'utente, ma nessun costruttore di copia definito dall'utente. In Dev14, questo costruttore di copia generato in modo implicito è contrassegnato come "= delete".  
  
###  <a name="VS_Update1"></a> Miglioramenti della conformità in Update 1  
  
-   **Classi base virtuali private ed ereditarietà indiretta**  
  
     Le versioni precedenti del compilatore consentivano a una classe derivata di chiamare le funzioni di membro relative alle classi base *indirettamente derivate*`private virtual`. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Il compilatore non accetta più il codice scritto in questo modo e genera l'errore del compilatore C2280 di conseguenza.  
  
    ```Output  
  
    error C2280: 'void *S3::__delDtor(unsigned int)': attempting to reference a deleted function  
  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    class base  
    {  
    protected:  
        base();  
        ~base();  
    };  
  
    class middle : private virtual base {}; class top : public virtual middle {};   
  
    void destroy(top *p)  
    {  
        delete p;  //  
    }  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    class base;  // as above  
  
    class middle : protected virtual base {};  
    class top : public virtual middle {};  
  
    void destroy(top *p)  
    {  
        delete p;  
    }  
  
    ```  
  
     -oppure-  
  
    ```cpp  
    class base;  // as above  
  
    class middle : private virtual base {};  
    class top : public virtual middle, private virtual bottom {};  
  
    void destroy(top *p)  
    {  
        delete p;  
    }  
  
    ```  
  
-   **Funzioni operator new e operator delete in overload**  
  
     Le versioni precedenti del compilatore consentivano di dichiarare static le funzioni non membro `operator new` e non membro `operator delete` negli spazi dei nomi diversi dallo spazio dei nomi globale.  Questo comportamento precedente creava il rischio che il programma non chiamasse l'implementazione dell'operator `new` o `delete` prevista dal programmatore, determinando un comportamento errato in fase di esecuzione senza avvisare. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2323.  
  
    ```Output  
  
    error C2323: 'operator new': non-member operator new or delete functions may not be declared static or in a namespace other than the global namespace.  
  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    static inline void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // error C2323  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // removed 'static inline'  
  
    ```  
  
     Inoltre, nonostante il compilatore non fornisca una diagnostica specifica, il formato dell'operatore new inline viene considerato non valido.  
  
-   **Chiamata di 'operator*type*()' (conversione definita dall'utente) in tipi non classe**  
  
     Le versioni precedenti del compilatore consentivano di chiamare 'operator *type*()' su tipi non classe ignorandolo senza avvisare. Questo comportamento precedente creava un rischio di generazione di codice errato senza avvisare, determinando un comportamento imprevedibile in fase di esecuzione. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2228.  
  
    ```Output  
  
    error C2228: left of '.operator type' must have class/struct/union  
  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    typedef int index_t;  
    void bounds_check(index_t index);  
    void login(int column)  
    {  
        bounds_check(column.operator index_t());  // error C2228  
    }  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    typedef int index_t;  
    void bounds_check(index_t index);  
    void login(int column)  
    {  
        bounds_check(column);  // removed cast to 'index_t', 'index_t' is an alias of 'int'  
    }  
  
    ```  
  
-   **Typename ridondante negli identificatori di tipi elaborati**  
  
     Le versioni precedenti del compilatore consentivano `typename` negli identificatori di tipi elaborati; il codice scritto in questo modo non è semanticamente corretto. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C3406.  
  
    ```Output  
    error C3406: 'typename' cannot be used in an elaborated type specifier  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    template <typename class T>  
    class container;  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    template <class T>  // alternatively, could be 'template <typename T>'; 'typename' is not elaborating a type specifier in this case  
    class container;  
  
    ```  
  
-   **Deduzione del tipo di matrici da un elenco di inizializzatori**  
  
     Le versioni precedenti del compilatore non supportavano la deduzione del tipo di matrici da un elenco di inizializzatori. Il compilatore supporta ora questa forma di deduzione del tipo e, di conseguenza, le chiamate a modelli di funzione con gli elenchi di inizializzatori potrebbero essere ambigue o potrebbe essere scelto un altro overload rispetto alle versioni precedenti del compilatore. Per risolvere questi problemi, il programma deve ora specificare in modo esplicito l'overload previsto dal programmatore.  
  
     Quando questo nuovo comportamento fa sì che la risoluzione dell'overload consideri un candidato aggiuntivo che sia altrettanto efficace del candidato storico, la chiamata diventa ambigua e il compilatore genera l'errore del compilatore C2668 di conseguenza.  
  
    ```Output  
  
    error C2668: 'function' : ambiguous call to overloaded function.  
  
    ```  
  
     Esempio 1: chiamata ambigua a funzione in overload (prima)  
  
    ```cpp  
    // In previous versions of the compiler, code written in this way would unambiguously call f(int, Args...)  
    template < typename... Args>  
    void f(int, Args...);  //  
  
    template < int N, typename... Args>  
    void f(const int(&)[N], Args...);  
  
    int main()  
    {  
        // The compiler now considers this call ambiguous, and issues a compiler error  
         f({ 3 });   error C2668 : 'f' ambiguous call to overloaded function  
    }  
  
    ```  
  
     Esempio 1: chiamata ambigua a funzione in overload (dopo)  
  
    ```cpp  
    template < typename... Args>  
    void f(int, Args...);  //  
  
    template < int N, typename... Args>  
    void f(const int(&)[N], Args...);  
  
    int main()  
    {  
        // To call f(int, Args...) when there is just one expression in the initializer list, remove the braces from it.  
        f(3);   
    }  
  
    ```  
  
     Quando questo nuovo comportamento fa sì che la risoluzione dell'overload consideri un candidato aggiuntivo che sia una corrispondenza migliore rispetto al candidato storico, la chiamata viene risolta senza ambiguità nel nuovo candidato, causando una modifica nel comportamento del programma che è probabilmente diverso da quello previsto dal programmatore.  
  
     Esempio 2: modifica nella risoluzione dell'overload (prima)  
  
    ```cpp  
    // In previous versions of the compiler, code written in this way would unambiguously call f(S, Args...)  
    struct S  
    {  
        int i;  
        int j;  
    };  
  
    template < typename... Args>  
    void f(S, Args...);  
  
    template < int N, typename... Args>  
    void f(const int *&)[N], Args...);  
  
    int main()  
    {  
        // The compiler now resolves this call to f(const int (&)[N], Args...) instead  
         f({ 1, 2 });   
    }  
  
    ```  
  
     Esempio 2: modifica nella risoluzione dell'overload (dopo)  
  
    ```cpp  
    struct S;  // as before  
  
    template < typename... Args>  
    void f(S, Args...);  
  
    template < int N, typename... Args>  
    void f(const int *&)[N], Args...);  
  
    int main()  
    {  
        // To call f(S, Args...), perform an explicit cast to S on the initializer list.  
        f(S{ 1, 2 });   
    }  
  
    ```  
  
-   **Ripristino di avvisi di istruzione switch**  
  
     Una versione precedente del compilatore rimuoveva gli avvisi preesistenti correlati alle istruzioni `switch` ; questi avvisi sono ora stati ripristinati. Il compilatore genera ora gli avvisi ripristinati e gli avvisi correlati a casi specifici (incluso il caso predefinito) sono ora rilasciati sulla riga contenente il caso che causa l'errore, anziché l'ultima riga dell'istruzione switch. Dal momento che gli avvisi vengono ora emessi su diverse righe rispetto al passato, di conseguenza gli avvisi precedentemente eliminato con `#pragma warning(disable:####)` non potranno più essere eliminati come previsto. Per eliminare questi avvisi come previsto, potrebbe essere necessario spostare la direttiva `#pragma warning(disable:####)` a una riga sopra il primo caso potenzialmente danneggiato. Di seguito sono elencati gli avvisi ripristinati.  
  
    ```Output  
    warning C4060: switch statement contains no 'case' or 'default' labels  
    ```  
  
    ```Output  
  
    warning C4061: enumerator 'bit1' in switch of enum 'flags' is not explicitly handled by a case label  
  
    ```  
  
    ```Output  
  
    warning C4062: enumerator 'bit1' in switch of enum 'flags' is not handled  
  
    ```  
  
    ```Output  
  
    warning C4063: case 'bit32' is not a valid value for switch of enum 'flags'  
  
    ```  
  
    ```Output  
  
    warning C4064: switch of incomplete enum 'flags'  
  
    ```  
  
    ```Output  
    warning C4065: switch statement contains 'default' but no 'case' labels  
    ```  
  
    ```Output  
  
    warning C4808: case 'value' is not a valid value for switch condition of type 'bool'  
  
    ```  
  
    ```Output  
    Warning C4809: switch statement has redundant 'default' label; all possible 'case' labels are given  
    ```  
  
     Esempio di C4063 (prima)  
  
    ```cpp  
    class settings  
    {  
    public:  
        enum flags  
        {  
            bit0 = 0x1,  
            bit1 = 0x2,  
            ...  
        };  
        ...  
    };  
  
    int main()  
    {  
        auto val = settings::bit1;  
  
        switch (val)  
        {  
        case settings::bit0:  
            break;  
  
        case settings::bit1:  
            break;  
  
             case settings::bit0 | settings::bit1:  // warning C4063  
                break;  
        }  
    };  
  
    ```  
  
     Esempio di C4063 (dopo)  
  
    ```cpp  
    class settings { ... };  // as above  
    int main()  
    {  
        // since C++11, use std::underlying_type to determine the underlying type of an enum  
        typedef std::underlying_type< settings::flags> ::type flags_t;   
  
            auto val = settings::bit1;  
  
        switch (static_cast< flags_t> (val))  
        {  
        case settings::bit0:  
            break;  
  
        case settings::bit1:  
            break;  
  
        case settings::bit0 | settings::bit1:  // ok  
            break;  
        }  
    };  
  
    ```  
  
     Gli esempi di altri avvisi ripristinati vengono forniti nella relativa documentazione.  
  
-   **#include: usare l'identificatore di directory padre '..' nel percorso** (influisce solo su /Wall /WX)  
  
     Le versioni precedenti del compilatore non è stato rilevato l’utilizzo dell’identificatore di directory padre ‘... ‘ nel percorso del  `#include` direttive. Il codice scritto in questo modo è in genere usato in modo da includere le intestazioni che esistono di fuori del progetto usando in modo non corretto percorsi relativi al progetto. Questo comportamento precedente creava il rischio che il programma potesse essere compilato con l'inclusione di un file di origine diversa rispetto a quello previsto dal programmatore, o che i percorsi relativi non sarebbero stati portabili in altri ambienti di compilazione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C4464 facoltativo, se abilitato.  
  
    ```Output  
    warning C4464: relative include path contains '..'  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    #include "..\headers\C4426.h"  // emits warning C4464  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    #include "C4426.h"  // add absolute path to 'headers\' to your project's include directories  
  
    ```  
  
     Inoltre, nonostante il compilatore non offra una diagnostica specifica, è anche consigliabile che l'identificatore di directory padre ".." non venga usato per specificare le directory include del progetto.  
  
-   **#pragma optimize() estende oltre la fine del file di intestazione** (influisce solo su /Wall /WX)  
  
     Le versioni precedenti del compilatore non rilevavano le modifiche alle impostazioni del flag di ottimizzazione non incluse in un file di intestazione all'interno di un'unità di conversione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C4426 facoltativo nella posizione della direttiva `#include`danneggiata, se abilitata. Questo avviso viene generato solo se le modifiche sono in conflitto con i flag di ottimizzazione impostati dagli argomenti della riga di comando nel compilatore.  
  
    ```Output  
    warning C4426: optimization flags changed after including header, may be due to #pragma optimize()  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    // C4426.h  
    #pragma optimize("g", off)  
    ...  
    // C4426.h ends  
  
    // C4426.cpp  
    #include "C4426.h"  // warning C4426  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    // C4426.h  
    #pragma optimize("g", off)  
                ...  
    #pragma optimize("", on)  // restores optimization flags set via command-line arguments  
    // C4426.h ends  
  
    // C4426.cpp  
    #include "C4426.h"  
  
    ```  
  
-   **Stati #pragma warning(push)** e **#pragma warning(pop)** (influisce solo su /Wall /WX)  
  
     Le versioni precedenti del compilatore non rilevavano l'abbinamento delle modifiche di stato `#pragma warning(push)` con le modifiche di stato `#pragma warning(pop)` in un file di origine differente e questo raramente rappresenta lo scopo previsto. Questo comportamento precedente creava il rischio che il programma fosse compilato con un set di avvisi abilitato diverso da quello previsto dal programmatore, determinando un probabile comportamento errato in fase di esecuzione senza avvisare. Il compilatore ora rileva e invia una notifica al programmatore riguardo al codice scritto in questo modo e genera un avviso del compilatore C5031 facoltativo nella posizione della direttiva `#pragma warning(pop)` corrispondente, se abilitata. Questo avviso include una nota che fa riferimento alla posizione della direttiva #pragma warning(push) corrispondente.  
  
    ```Output  
    warning C5031: #pragma warning(pop): likely mismatch, popping warning state pushed in different file  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    // C5031_part1.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    // C5031_part1.h ends without #pragma warning(pop)  
  
    // C5031_part2.h  
    ...  
    #pragma warning(pop)  // pops a warning state not pushed in this source file  
    ...  
    // C5031_part1.h ends  
  
    // C5031.cpp  
    #include "C5031_part1.h" // leaves #pragma warning(push) 'dangling'  
    ...  
    #include "C5031_part2.h" // matches 'dangling' #pragma warning(push), resulting in warning C5031  
    ...  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    // C5031_part1.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    #pragma warning(pop)  // pops the warning state pushed in this source file  
    // C5031_part1.h ends without #pragma warning(pop)  
  
    // C5031_part2.h  
    #pragma warning(push)  // pushes the warning state pushed in this source file  
    #pragma warning(disable:####)  
    ...  
    #pragma warning(pop)  
    // C5031_part1.h ends  
  
    // C5031.cpp  
    #include "C5031_part1.h" // #pragma warning state changes are self-contained and independent of other source files or their #include order.  
    ...  
    #include "C5031_part2.h"  
    ...  
  
    ```  
  
     Benché sia un fatto insolito, a volte il codice scritto in questo modo è intenzionale. Il codice scritto in questo modo è sensibile alle modifiche nell'ordine `#include`. Se possibile, è consigliabile che i file del codice sorgente gestiscano lo stato di avviso in modo autonomo.  
  
-   **Stato #pragma warning(push) senza corrispondenza** (influisce solo su /Wall /WX)  
  
     Le versioni precedenti del compilatore non rilevavano modifiche di stato `#pragma warning(push)` senza corrispondenza alla fine di un'unità di conversione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C5032 nella posizione della direttiva #pragma warning(push) senza corrispondenza, se abilitata. Questo avviso viene generato solo se non sono presenti errori di compilazione nell'unità di conversione.  
  
    ```Output  
    warning C5032: detected #pragma warning(push) with no corresponding #pragma warning(pop)  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    // C5032.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    // C5032.h ends without #pragma warning(pop)  
  
    // C5032.cpp  
    #include "C5032.h"  
    ...  
    // C5032.cpp ends -- the translation unit is completed without #pragma warning(pop), resulting in warning C5032 on line 1 of C5032.h  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    // C5032.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    #pragma warning(pop) // matches #pragma warning (push) on line 1  
    // C5032.h ends  
  
    // C5032.cpp  
    #include "C5032.h"  
    ...  
    // C5032.cpp ends -- the translation unit is completed without unmatched #pragma warning(push)  
  
    ```  
  
-   **Potrebbero essere generati avvisi aggiuntivi in seguito al migliorato rilevamento dello stato della direttiva #pragma warning**  
  
     Le versioni precedenti del compilatore rilevavano le modifiche di stato della direttiva #pragma warning in maniera non sufficiente a generare tutti gli avvisi previsti. Questo comportamento comportava il rischio che alcuni avvisi sarebbero stati eliminati in modo efficace in circostanze diverse rispetto a quelle previste dal programmatore. Il compilatore ora tiene traccia dello stato della direttiva #pragma warning in modo più affidabile, specialmente per quanto riguarda le modifiche dello stato della direttiva #pragma warning all'interno dei modelli, e facoltativamente rilascia nuovi avvisi C5031 e C5032 che aiutano il programmatore a trovare gli usi imprevisti di `#pragma warning(push)` e `#pragma warning(pop)`.  
  
     In seguito al migliorato rilevamento delle modifiche di stato della direttiva #pragma warning, è ora possibile generare gli avvisi in precedenza eliminati in modo errato oppure gli avvisi relativi ai problemi in precedenza diagnosticati in modo errato.  
  
-   **Identificazione del codice non eseguibile migliorata**  
  
     Le modifiche della Libreria standard C++ e la migliorata capacità di incorporare le chiamate di funzione inline rispetto alle versioni precedenti del compilatore potrebbero consentire al compilatore di dimostrare che determinato codice è ora non eseguibile. Questo nuovo comportamento può comportare nuove e più frequenti visualizzazioni dell'avviso C4720.  
  
    ```Output  
    warning C4720: unreachable code  
    ```  
  
     In molti casi, l'avviso potrebbe essere generato solo durante la compilazione con ottimizzazioni abilitate, dal momento che le ottimizzazioni potrebbero incorporare più chiamate di funzione, eliminare il codice ridondante o altrimenti consentire di determinare che determinato codice non è eseguibile. Si è osservato che le nuove istanze dell'avviso C4720 si sono verificate di frequente nei blocchi try/catch, in special modo in relazione all'uso di [std::find](assetId:///std::find?qualifyHint=False&autoUpgrade=True).  
  
     Esempio (prima)  
  
    ```cpp  
    try  
    {  
        auto iter = std::find(v.begin(), v.end(), 5);  
    }  
    catch (…)  
    {  
        do_something();   // ok  
    }  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    try  
    {  
        auto iter = std::find(v.begin(), v.end(), 5);  
    }  
    catch (…)  
    {  
        do_something();   // warning C4702: unreachable code  
    }  
  
    ```  
  
###  <a name="VS_Update2"></a> Miglioramenti della conformità in Update 2  
  
-   **Errori e avvisi aggiuntivi potrebbero essere generati in seguito a un supporto parziale per l'espressione SFINAE**  
  
     Le versioni precedenti del compilatore non analizzavano alcuni tipi di espressioni negli identificatori `decltype` a causa della mancanza di supporto per l'espressione SFINAE. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Grazie ai costanti miglioramenti alla conformità, ora il compilatore analizza le espressioni e ha un supporto parziale per l'espressione SFINAE. Di conseguenza, ora vengono visualizzati avvisi ed errori rilevati nelle espressioni non analizzati dalle versioni precedenti del compilatore.  
  
     Quando questo nuovo comportamento analizza un'espressione `decltype` che include un tipo non ancora dichiarato, il compilatore genera l'errore C2039.  
  
    ```Output  
  
    error C2039: 'type': is not a member of '`global namespace''  
    ```  
  
     Esempio 1: uso di un tipo non dichiarato (prima)  
  
    ```cpp  
    struct s1  
    {  
        template < typename T>  
        auto f() - > decltype(s2< T> ::type::f());  // error C2039  
  
        template< typename>  
        struct s2 {};  
    }  
  
    ```  
  
     Esempio 1 (dopo)  
  
    ```cpp  
    struct s1  
    {  
        template < typename>  // forward declare s2struct s2;   
  
            template < typename T>  
        auto f() - > decltype(s2< T> ::type::f());  
  
        template< typename>  
        struct s2 {};  
    }  
  
    ```  
  
     Quando questo nuovo comportamento analizza un'espressione `decltype` in cui non è presente un utilizzo necessario della parola chiave `typename` per specificare che il nome dipendente è un tipo, il compilatore genera l'avviso C4346 e l'errore C2923.  
  
    ```Output  
  
    warning C4346: 'S2<T>::Type': dependent name is not a type  
  
    ```  
  
    ```Output  
  
    error C2923: 's1': 'S2<T>::Type' is not a valid template type argument for parameter 'T'  
    ```  
  
     Esempio 2: il nome dipendente non è un tipo (prima)  
  
    ```cpp  
    template < typename T>  
    struct s1  
    {  
        typedef T type;  
    };  
  
    template < typename T>  
    struct s2  
    {  
        typedef T type;  
    };  
  
    template < typename T>  
    T declval();  
  
    struct s  
    {  
        template < typename T>  
        auto f(T t) - > decltype(t(declval< S1< S2< T> ::type> ::type> ()));  // warning C4346, error C2923  
    };  
  
    ```  
  
     Esempio 2 (dopo)  
  
    ```cpp  
    template < typename T> struct s1 { ... };  // as above  
    template < typename T> struct s2 { ... };  // as above  
  
    template < typename T>  
    T declval();  
  
    struct s  
    {  
        template < typename T>  
        auto f(T t) - > decltype(t(declval< S1< typename S2< T> ::type> ::type> ()));  
    };  
  
    ```  
  
-   `volatile` Le variabili membro **impediscono i costruttori e gli operatori di assegnazione definiti in modo implicito**  
  
     Le versioni precedenti del compilatore consentivano a una classe con variabili membro `volatile` di generare automaticamente costruttori di copia/spostamento predefiniti e operatori di assegnazione di copia/spostamento predefiniti. Questo comportamento precedente non era corretto e non è conforme allo standard C++. Ora il compilatore presuppone che una classe con variabili membro volatili includa operatori di costruzione e di assegnazione non semplici e, di conseguenza, impedisce la generazione automatica delle implementazioni predefinite di questi operatori.  Quando questa classe è un membro di un'unione (o un'unione anonima all'interno di una classe), i costruttori di copia/spostamento e gli operatori di assegnazione di copia/spostamento dell'unione (o della classe che contiene l'unione anonima) vengono definiti in modo implicito come eliminati. Il tentativo di costruire o copiare l'unione (o la classe che contiene l'unione anonima) senza definirli in modo esplicito è un errore e, di conseguenza, il compilatore genera l'errore C2280.  
  
    ```Output  
  
    error C2280: 'B::B(const B &)': attempting to reference a deleted function  
  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    struct A  
    {  
        volatile int i;  
        volatile int j;  
    };  
  
    extern A* pa;  
  
    struct B  
    {  
        union  
        {  
            A a;  
            int i;  
        };  
    };  
  
    B b1{ *pa };  
    B b2(b1);  // error C2280  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    struct A  
    {  
        int i; int j;   
    };  
  
    extern volatile A* pa;  
  
    A getA()  // returns an A instance copied from contents of pa  
    {  
        A a;  
        a.i = pa - > i;  
        a.j = pa - > j;  
        return a;  
    }  
  
    struct B;  // as above  
  
    B b1{ GetA() };  
    B b2(b1);  // error C2280  
    ```  
  
-   **Le funzioni membro statiche non supportano i qualificatori CV.**  
  
     Le versioni precedenti di Visual C++ 2015 consentivano alle funzioni membro statiche di avere qualificatori CV. Questo comportamento è dovuto a una regressione in Visual C++ 2015 e Visual C++ 2015 Update 1. Visual C++ 2013 e le versioni precedenti di Visual C++ non accettano il codice scritto in questo modo. Il comportamento di Visual C++ 2015 e Visual C++ 2015 Update 1 non è corretto e non è conforme allo standard C++.  Visual Studio 2015 Update 2 non accetta il codice scritto in questo modo e genera l'errore del compilatore C2511.  
  
    ```Output  
    error C2511: 'void A::func(void) const': overloaded member function not found in 'A'  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    struct A  
    {  
        static void func();  
    };  
  
    void A::func() const {}  // C2511  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    struct A  
    {  
        static void func();  
    };  
  
    void A::func() {}  // removed const  
  
    ```  
  
-   **La dichiarazione con prototipo di tipo enum non è consentita nel codice WinRT** (interessa solo /ZW)  
  
     Il codice compilato per Windows Runtime (WinRT) non consente la dichiarazione con prototipo dei tipi `enum`, analogamente a quanto accade quando il codice C++ gestito viene compilato per .NET Framework usando l'opzione /clr del compilatore. Questo comportamento garantisce che le dimensioni di un'enumerazione siano sempre note e possano essere proiettate correttamente nel sistema di tipi WinRT. Il compilatore non accetta il codice scritto in questo modo e genera gli errori C2599 e C3197.  
  
    ```Output  
  
    error C2599: 'CustomEnum': the forward declaration of a WinRT enum is not allowed  
  
    ```  
  
    ```Output  
  
    error C3197: 'public': can only be used in definitions  
  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    namespace A {  
        public enum class CustomEnum : int32;  // forward declaration; error C2599, error C3197  
    }  
  
    namespace A {  
        public enum class CustomEnum : int32  
        {  
            Value1  
        };  
    }  
  
    public ref class Component sealed  
    {  
    public:  
        CustomEnum f()  
        {  
            return CustomEnum::Value1;  
        }  
    };  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
              // forward declaration of CustomEnum removed  
  
    namespace A {  
        public enum class CustomEnum : int32  
        {  
            Value1  
        };  
    }  
  
    public ref class Component sealed  
    {  
    public:  
        CustomEnum f()  
        {  
            return CustomEnum::Value1;  
        }  
    };  
  
    ```  
  
-   **È possibile che le funzioni new o delete dell'operatore non membro in overload non siano dichiarate come inline** (livello 1 (/W1) attivato per impostazione predefinita)  
  
     Le versioni precedenti del compilatore non generano un avviso quando le funzioni new e delete di un operatore non membro vengono dichiarate inline. Il codice scritto in questo modo non è valido (diagnostica non necessaria) e può causare problemi di memoria difficili da diagnosticare derivanti dalla mancata corrispondenza degli operatori new e delete (in particolare quando sono usati insieme con la deallocazione dimensionata).   Ora il compilatore genera l'avviso C4595 per identificare il codice scritto in questo modo.  
  
    ```Output  
  
    warning C4595: 'operator new': non-member operator new or delete functions may not be declared inline  
  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
              inline void* operator new(size_t sz)  // warning C4595  
    {  
        ...  
    }  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
              void* operator new(size_t sz)  // removed inline  
    {  
        ...  
    }  
  
    ```  
  
     La correzione del codice scritto in questo modo potrebbe richiedere lo spostamento delle definizioni dell'operatore da un file di intestazione a un file di origine corrispondente.  
  
###  <a name="VS_Update3"></a> Miglioramenti della conformità in Update 3  
  
-   **std::is_convertable ora rileva l'assegnazione automatica** (libreria standard)  
  
     Le versioni precedenti del tratto di tipo `std::is_convertable` non rilevano correttamente l'assegnazione automatica di un tipo di classe quando il relativo costruttore di copia è eliminato o privato. Ora `std::is_convertable<>::value` è impostato correttamente su `false` quando è applicato a un tipo di classe con costruttore di copia privato o eliminato.  
  
     A questa modifica non è associata alcuna diagnostica del compilatore.  
  
     Esempio  
  
    ```cpp  
    #include <type_traits>  
  
                class X1  
    {  
                public:  
                X1(const X1&) = delete;  
                };  
  
                class X2  
    {  
                private:  
                X2(const X2&);  
                };  
  
    static_assert(std::is_convertible<X1&, X1>::value, "BOOM");static_assert(std::is_convertible<X2&, X2>::value, "BOOM");  
    ```  
  
     Nelle versioni precedenti di Visual C++, le asserzioni statiche nella parte inferiore di questo esempio passano perché `std::is_convertable<>::value` è stato impostato erroneamente su `true`. Ora `std::is_convertable<>::value` è impostato correttamente su `false` causando l'esito negativo delle asserzioni statiche.  
  
-   **I costruttori di copia e di spostamento semplici impostati come predefiniti o eliminati rispettano gli identificatori di accesso**  
  
     Le versioni precedenti del compilatore non verificavano l'identificatore di accesso dei costruttori di copia o spostamento semplici impostati come predefiniti o eliminati prima di consentirne la chiamata. Questo comportamento precedente non era corretto e non è conforme allo standard C++. In alcuni casi questo comportamento creava un rischio di generazione di codice errato senza avvisare, determinando un comportamento imprevedibile in fase di esecuzione. Il compilatore ora controlla l'identificatore di accesso dei costruttori di copia e spostamento semplici impostati come predefiniti o eliminati per determinare se può essere effettuata la chiamata e, se non è possibile, genera un avviso del compilatore C2248 di conseguenza.  
  
    ```Output  
  
    error C2248: 'S::S' cannot access private member declared in class 'S'  
    ```  
  
     Esempio (prima)  
  
    ```cpp  
    class S {  
    public:  
        S() = default;  
    private:  
        S(const S&) = default;  
    };  
  
    void f(S);  // pass S by value  
  
    int main()  
    {  
        S s;  
        f(s);  // error C2248, can't invoke private copy constructor  
    }  
  
    ```  
  
     Esempio (dopo)  
  
    ```cpp  
    class S {  
    public:  
        S() = default;  
    private:  
        S(const S&) = default;  
    };  
  
    void f(const S&);  // pass S by reference  
  
    int main()  
    {  
        S s;  
        f(s);   
    }  
  
    ```  
  
-   **Deprecazione del supporto per il codice ATL con attributi** (livello 1 (/W1) attivo per impostazione predefinita)  
  
     Le versioni precedenti del compilatore supportavano il codice ATL con attributi. Come fase successiva della rimozione del supporto per il codice ATL con attributi [avviata in Visual C++ 2008](https://msdn.microsoft.com/library/bb384632\(v=vs.90\).aspx), il codice ATL con attributi è stato deprecato. Ora il compilatore genera l'avviso C4467 per consentire l'identificazione di questo tipo di codice deprecato.  
  
    ```Output  
    warning C4467: Usage of ATL attributes is deprecated  
    ```  
  
     Per continuare a usare codice ATL con attributi finché il supporto viene rimosso dal compilatore, è possibile disabilitare questo avviso passando gli argomenti `/Wv:18` o `/wd:4467` della riga di comando al compilatore o aggiungendo `#pragma warning(disable:4467)` nel codice sorgente.  
  
     Esempio 1 (prima)  
  
    ```cpp  
              [uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")]  
    class A {};  
  
    ```  
  
     Esempio 1 (dopo)  
  
    ```cpp  
    __declspec(uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")) A {};  
  
    ```  
  
     In alcuni casi potrebbe essere necessario o preferibile creare un file IDL file per evitare l'uso degli attributi ATL deprecati, come nell'esempio di codice riportato di seguito  
  
     Esempio 2 (prima)  
  
    ```cpp  
    [emitidl];  
    [module(name = "Foo")];  
  
    [object, local, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]  
    __interface ICustom {  
        HRESULT Custom([in] long l, [out, retval] long *pLong);  
        [local] HRESULT CustomLocal([in] long l, [out, retval] long *pLong);  
    };  
  
    [coclass, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]  
    class CFoo : public ICustom  
    {  
        // ...  
    };  
  
    ```  
  
     Per prima cosa creare il file *.idl. Il file vc140.idl generato può essere usato per ottenere un file \*.idl contenente le interfacce e le annotazioni.  
  
     Quindi, aggiungere una fase MIDL alla compilazione per assicurarsi che le definizioni dell'interfaccia di C++ vengano generate.  
  
     Esempio 2 IDL (dopo)  
  
    ```cpp  
    import "docobj.idl";  
  
    [  
        object, local, uuid(9e66a290 - 4365 - 11d2 - a997 - 00c04fa37ddb)  
    ]  
  
    interface ICustom : IUnknown {  
        HRESULT  Custom([in] long l, [out, retval] long *pLong);  
        [local] HRESULT  CustomLocal([in] long l, [out, retval] long *pLong);  
    };  
  
    [version(1.0), uuid(29079a2c - 5f3f - 3325 - 99a1 - 3ec9c40988bb)]  
    library Foo  
    {  
        importlib("stdole2.tlb");  
    importlib("olepro32.dll");  
    [  
        version(1.0),  
        appobject,uuid(9e66a294 - 4365 - 11d2 - a997 - 00c04fa37ddb)  
    ]  
  
    coclass CFoo {  
        interface ICustom;  
    };  
    }  
  
    ```  
  
     Usare quindi ATL direttamente nel file di implementazione, come illustrato nell'esempio di codice che segue.  
  
     Esempio 2 Implementazione (dopo)  
  
    ```cpp  
    #include <idl.header.h>  
    #include <atlbase.h>  
  
    class ATL_NO_VTABLE CFooImpl :  
        public ICustom,  
        public ATL::CComObjectRootEx< CComMultiThreadModel>  
    {  
    public:  
        BEGIN_COM_MAP(CFooImpl)  
            COM_INTERFACE_ENTRY(ICustom)  
        END_COM_MAP()  
    };  
  
    ```  
  
-   **File di intestazione precompilata (PCH) e direttive #include non corrispondenti** (interessa solo /Wall /WX)  
  
     Le versioni precedenti del compilatore accettavano le direttive `#include` non corrispondenti nei file di origine tra le compilazioni `-Yc` e `-Yu` quando venivano usati file di intestazione precompilata (PCH). Il codice scritto in questo modo non è più accettato dal compilatore.   Il compilatore ora genera un avviso CC4598 per consentire l'identificazione delle direttive `#include` non corrispondenti quando si usano i file PCH.  
  
    ```Output  
  
    warning C4598: 'b.h': included header file specified for Ycc.h at position 2 does not match Yuc.h at that position  
  
    ```  
  
     Esempio (prima):  
  
     X.cpp (-Ycc.h)  
  
    ```cpp  
    #include "a.h"  
    #include "b.h"  
    #include "c.h"  
  
    ```  
  
     Z.cpp (-Yuc.h)  
  
    ```cpp  
    #include "b.h"  
    #include "a.h"  // mismatched order relative to X.cpp  
    #include "c.h"  
  
    ```  
  
     Esempio (dopo)  
  
     X.cpp (-Ycc.h)  
  
    ```cpp  
    #include "a.h"  
    #include "b.h"   
    #include "c.h"  
  
    ```  
  
     Z.cpp (-Yuc.h)  
  
    ```cpp  
    #include "a.h"  
    #include "b.h" // matched order relative to X.cpp  
    #include "c.h"  
  
    ```  
  
-   **File di intestazione precompilata (PCH) e directory di inclusione non corrispondenti** (interessa solo /Wall /WX)  
  
     Le versioni precedenti del compilatore accettavano gli argomenti della riga di comando delle directory di inclusione non corrispondenti (`-I`) per il compilatore tra le compilazioni `-Yc` e `-Yu` quando venivano usati file di intestazione precompilata (PCH). Il codice scritto in questo modo non è più accettato dal compilatore.   Il compilatore ora genera un avviso CC4599 per consentire l'identificazione degli argomenti della riga di comando delle directory di inclusione non corrispondenti (`-I`) quando si usano i file PCH.  
  
    ```Output  
  
    warning C4599: '-I..' : specified for Ycc.h at position 1 does not match Yuc.h at that position  
  
    ```  
  
     Esempio (prima)  
  
    ```ms-dos  
  
    cl /c /Wall /Ycc.h -I.. X.cpp  
    cl /c /Wall /Yuc.h Z.cpp  
  
    ```  
  
     Esempio (dopo)  
  
    ```ms-dos  
  
    cl /c /Wall /Ycc.h -I.. X.cpp  
    cl /c /Wall /Yuc.h -I.. Z.cpp  
  
    ```  
  
## <a name="visual-c-2013-conformance-changes"></a>Modifiche della conformità di Visual C++ 2013  
  
### <a name="compiler"></a>Compilatore  
  
-   La parola chiave final genera ora un errore di simbolo non risolto laddove in precedenza sarebbe stato compilato:  
  
    ```cpp  
    struct S1 {  
        virtual void f() = 0;  
    };  
  
    struct S2 final : public S1 {  
        virtual void f();  
    };  
  
    int main(S2 *p)  
    {  
        p->f();  
    }  
  
    ```  
  
     Nelle versioni precedenti non viene generato alcun errore perché la chiamata è una chiamata virtuale. Tuttavia, il programma viene arrestato in modo anomalo in fase di esecuzione. Ora viene generato un errore del linker perché la classe è finale. In questo esempio, per correggere l'errore, si esegue il collegamento all'oggetto che contiene la definizione di S2::f.  
  
-   Quando si usano funzioni friend negli spazi dei nomi è necessario dichiarare di nuovo la funzione friend prima di farvi riferimento. In caso contrario, verrà generato un errore perché il compilatore ora è conforme allo standard ISO C++. Nell'esempio seguente la compilazione non viene più eseguita.  
  
    ```cpp  
    namespace NS {  
        class C {  
            void func(int);  
            friend void func(C* const) {}  
        };  
  
        void C::func(int) {  
            NS::func(this);  // error  
        }  
    }  
  
    ```  
  
     Per correggere questo codice, dichiarare la funzione friend:  
  
    ```cpp  
    namespace NS {  
        class C {  
            void func(int);  
            friend void func(C* const) {}  
        };  
  
        void func(C* const);  // conforming fix  
  
        void C::func(int) {  
            NS::func(this);  
        }  
  
    ```  
  
-   Il linguaggio C++ standard non consente la specializzazione esplicita in una classe. Sebbene sia consentita da Visual C++ in alcune situazioni, nei casi come quello citato nell'esempio seguente viene generato un errore, poiché il compilatore non considera la seconda funzione come una specializzazione della prima.  
  
    ```cpp  
    template < int N>  
    class S {  
    public:  
        template  void f(T& val);  
        template < > void f(char val);  
    };  
  
    template class S< 1>;  
  
    ```  
  
     Per correggere questo codice, modificare la seconda funzione:  
  
    ```cpp  
    template <> void f(char& val);  
  
    ```  
  
-   Visual C++ non tenta più di risolvere l'ambiguità delle due funzioni riportate nell'esempio seguente e ora restituisce un errore:  
  
    ```cpp  
    template< typename T> void Func(T* t = nullptr);  
    template< typename T> void Func(...);  
  
    int main() {  
        Func< int>(); // error  
    }  
  
    ```  
  
     Per correggere questo codice, definire la chiamata:  
  
    ```cpp  
    template< typename T> void Func(T* t = nullptr);  
    template< typename T> void Func(...);  
  
    int main() {  
        Func< int>(nullptr); // ok  
    }  
  
    ```  
  
-   Prima che il compilatore fosse reso conforme a C++11 ISO, il codice seguente sarebbe stato compilato e avrebbe risolto x nel tipo int:  
  
    ```cpp  
    auto x = {0};  
    int y = x;  
  
    ```  
  
     Ora il codice risolve x in un tipo di std::initializer_list\<int> e genera un errore nella riga successiva che tenta di assegnare x al tipo int. Non viene eseguita alcuna conversione per impostazione predefinita. Per correggere questo codice, usare int per sostituire auto:  
  
    ```cpp  
    int x = {0};  
    int y = x;  
  
    ```  
  
-   Non è più consentita un'inizializzazione aggregata quando il tipo del valore a destra non corrisponde al tipo del valore a sinistra inizializzato e viene generato un errore poiché lo standard ISO C++11 richiede l'inizializzazione uniforme per funzionare senza conversioni verso un tipo di dati più piccolo. In precedenza, se fosse stata disponibile una conversione verso un tipo di dati più piccolo, sarebbe stato generato un [avviso del compilatore C4242 (livello 4)](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md) anziché un errore.  
  
    ```cpp  
    int i = 0;  
    char c = {i}; // error  
  
    ```  
  
     Per correggere questo codice, aggiungere una conversione esplicita verso un tipo di dati più piccolo:  
  
    ```cpp  
    int i = 0;  
    char c = {static_cast<char>(i)};  
  
    ```  
  
-   La seguente inizializzazione non è più consentita:  
  
    ```cpp  
    void *p = {{0}};  
  
    ```  
  
     Per correggere questo codice, utilizzare uno di questi formati:  
  
    ```cpp  
    void *p = 0;  
    // or  
    void *p = {0};  
  
    ```  
  
-   È stata modificata la ricerca del nome. Il codice seguente viene risolto in modo diverso in Visual C++ in Visual Studio 2012 e Visual C++ in Visual Studio 2013:  
  
    ```cpp  
    enum class E1 { a };  
    enum class E2 { b };  
  
    int main()  
    {  
        typedef E2 E1;  
        E1::b;  
    }  
  
    ```  
  
     In Visual C++ in Visual Studio 2012 E1 nell'espressione E1::b veniva risolto in :: E1 nell'ambito globale. In Visual C++ in Visual Studio 2013 E1 nell'espressione E1::b viene risolto nella definizione typedef E2 in main() con tipo:: E2.  
  
-   Il layout degli oggetti è stato modificato. In x64, il layout degli oggetti di una classe può cambiare rispetto alle versioni precedenti. Se dispone di una funzione virtuale, ma non di una classe base con una funzione virtuale, il modello a oggetti del compilatore inserisce un puntatore a una tabella di funzioni virtuali dopo il layout dei membri dati. Ciò significa che il layout potrebbe non essere ottimale in tutti i casi. Nelle versioni precedenti, un'ottimizzazione per x64 tentava di migliorare automaticamente il layout, ma poiché non funzionava correttamente in situazioni di codice complesse, è stata rimossa in Visual C++ in Visual Studio 2013. Si consideri, ad esempio, il seguente codice:  
  
    ```cpp  
    __declspec(align(16)) struct S1 {  
    };  
  
    struct S2 {  
        virtual ~S2();  
        void *p;  
        S1 s;  
    };  
  
    ```  
  
-   In Visual C++ in Visual Studio 2013 il risultato di sizeof(S2) su x64 è 48, ma nelle versioni precedenti restituisce 32. Per fare in modo che restituisca 32 in Visual C++ in Visual Studio 2013 per x64, aggiungere una classe di base fittizia con una funzione virtuale:  
  
    ```cpp  
    __declspec(align(16)) struct S1 {  
    };  
  
    struct dummy {  
        virtual ~dummy() {}  
    };  
    struct S2 : public dummy {  
        virtual ~S2();  
        void *p;  
        S1 s;  
    };  
  
    ```  
  
     Per individuare i punti del codice che una versione precedente avrebbe cercato di ottimizzare, usare un compilatore di tale versione insieme all'opzione /W3 del compilatore e attivare l'avviso 4370. Ad esempio:  
  
    ```cpp  
    #pragma warning(default:4370)  
  
    __declspec(align(16)) struct S1 {  
    };  
  
    struct S2 {  
        virtual ~S2();  
        void *p;  
        S1 s;  
    };  
  
    ```  
  
     Nei compilatori Visual C++ prima di Visual C++ in Visual Studio 2013, questo codice genera questo messaggio con avviso C4370: 'S2': il layout della classe è stato modificato rispetto alla precedente versione del compilatore per migliorare la compressione  
  
     Il compilatore x86 ha lo stesso problema di layout inferiore al livello ottimale in tutte le versioni di Visual C++. Ad esempio, se questo codice viene compilato per x86:  
  
    ```cpp  
    struct S {  
        virtual ~S();  
        int i;  
        double d;  
    };  
  
    ```  
  
     Il risultato di sizeof(S) è 24. Può tuttavia essere ridotto a 16 se si utilizza la soluzione alternativa indicata per x64:  
  
    ```cpp  
    struct dummy {  
        virtual ~dummy() {}  
    };  
  
    struct S : public dummy {  
        virtual ~S();  
        int i;  
        double d;  
    };  
  
    ```  
  
### <a name="standard-library"></a>Libreria standard  
 Visual C++ in Visual Studio 2013 rileva le mancate corrispondenze in _ITERATOR_DEBUG_LEVEL, implementato in Visual C++ 2010, e RuntimeLibrary. Queste si verificano combinando le opzioni del compilatore /MT (versione statica), /MTd (debug statico), /MD (versione dinamica) e /MDd (debug dinamico).  
  
-   Se il codice riconosce i modelli simulati dell'alias della versione precedente, è necessario modificarlo. Ad esempio, anziché allocator_traits\<A>::rebind_alloc\<U>::other ora si deve impostare allocator_traits\<A>::rebind_alloc\<U>. Anche se ratio_add\<R1, R2>::type non è più necessario ed è ora consigliabile impostare ratio_add\<R1, R2>, il primo verrà comunque compilato, poiché ratio\<N, D> richiede un "tipo" typedef per un rapporto ridotto, che sarà dello stesso tipo se è già ridotto.  
  
-   È necessario usare #include \<algorithm> quando si chiama std::min() o std::max().  
  
-   Se il codice esistente usa le enumerazioni con ambito simulate della versione precedente (enumerazioni tradizionali senza ambito contenute negli spazi dei nomi), è necessario modificarle. Ad esempio, se prima si faceva riferimento al tipo std::future_status::future_status, ora si deve indicare std::future_status. Tuttavia, la maggior parte del codice non è interessato, ad esempio std::future_status::ready viene compilato.  
  
-   explicit operator bool() è più restrittivo rispetto a operator unspecified-bool-type(). explicit operator bool() consente conversioni esplicite a bool, ad esempio con shared_ptr\<X> sp, sono validi sia both static_cast\<bool>(sp) che bool b(sp), e "conversioni contestuali" verificabili in modo booleano a bool, ad esempio uno qualsiasi tra if (sp), !sp, sp &&. explicit operator bool() tuttavia impedisce la conversione implicita a bool, quindi non è possibile specificare bool b = sp; e dato un tipo restituito bool,non è possibile specificare return sp.  
  
-   Ora che i modelli variadic reali sono implementati, _VARIADIC_MAX e le macro correlate non hanno alcun effetto. Se si definisce ancora _VARIADIC_MAX, esso viene ignorato. Se si è riconosciuto il sistema di macro con lo scopo di supportare i modelli variadic simulati in qualsiasi altro modo, è necessario modificare il codice.  
  
-   Oltre alle parole chiave comuni, le intestazioni della libreria standard C++ ora impediscono l'impostazione delle macro delle parole chiave sensibili al contesto "override" e "final".  
  
-   reference_wrapper/ref()/cref() ora impedisce l'associazione agli oggetti temporanei.  
  
-   \<random> ora applica rigorosamente le precondizioni in fase di compilazione.  
  
-   Vari tratti di tipo della libreria standard C++ hanno la precondizione "T deve essere un tipo completo". Sebbene il compilatore applichi ora tale regola in modo più rigido, questa non può essere applicata in tutte le situazioni. Poiché le violazioni di precondizione della libreria standard C++ attivano un comportamento non definito, lo standard non garantisce l'applicazione.  
  
-   La libreria standard C++ non supporta /clr:oldSyntax.  
  
-   La specifica C++11 per common_type presenta delle conseguenze impreviste e indesiderate, in particolare induce common_type\<int, int>::type a restituire int&&. Visual C++ implementa quindi la Proposta per risolvere il problema 2141 del gruppo di lavoro di libreria, che fa sì che common_type\<int, int="">::type restituisca int.  
  
     Come effetto collaterale di questa modifica, il case di identità non funziona più (common_type\<T> non restituisce sempre il tipo T). Ciò è conforme alla Proposta, ma interrompe il codice basato sul comportamento precedente.  
  
     Se è necessario un tratto di tipo identità, non usare l'elemento std::identity non standard definito in <type_traits> perché non funzionerà con \<void>. Diversamente, implementare un tratto di tipo di identità per le proprie esigenze. Di seguito è riportato un esempio:  
  
    ```cpp  
    template < typename T> struct Identity {  
        typedef T type;  
    };  
  
    ```  
  
### <a name="mfc-and-atl"></a>MFC e ATL  
  
-   La libreria MFC per MBCS non è più inclusa in Visual Studio perché il formato Unicode è estremamente diffuso e l'utilizzo di MBCS si è ridotto significativamente. Questa modifica mantiene inoltre MFC più allineato a Windows SDK stesso, poiché molti dei nuovi controlli e messaggi sono solo Unicode. Tuttavia, se è necessario continuare a usare la libreria MFC per MBCS, è possibile scaricarla dall'Area download di MSDN. Il pacchetto ridistribuibile di Visual C++ include ancora questa libreria.  
  
-   L'accessibilità per la barra multifunzione MFC è stata modificata.  Anziché un'architettura a un livello ora viene usata un'architettura gerarchica. È possibile continuare a usare il vecchio comportamento chiamando CRibbonBar::EnableSingleLevelAccessibilityMode().  
  
-   Il metodo CDatabase::GetConnect è stato rimosso. Per migliorare la sicurezza, la stringa di connessione viene ora archiviata crittografata e viene decrittografata solo se necessario; non può essere restituita come testo normale.  È possibile ottenere la stringa usando il metodo CDatabase::Dump.  
  
-   La firma di CWnd::OnPowerBroadcast è stata modificata. La firma di questo gestore messaggi è stata modificata per accettare un LPARAM come secondo parametro.  
  
-   Le firme sono state modificate per includere i gestori di messaggi. Gli elenchi di parametri delle seguenti funzioni sono stati modificati per utilizzare i gestori di messaggi ON_WM_* aggiunti recentemente:  
  
    -   CWnd::OnDisplayChange è stato modificato in (UINT, int, int) anziché (WPARAM, LPARAM) in modo tale che la nuova macro ON_WM_DISPLAYCHANGE possa essere usata nella mappa messaggi.  
  
    -   CFrameWnd::OnDDEInitiate è stato modificato in (CWnd*, UINT, UNIT) anziché (WPARAM, LPARAM) in modo tale che la nuova macro ON_WM_DDE_INITIATE possa essere usata nella mappa messaggi.  
  
    -   CFrameWnd::OnDDEExecute è stato modificato in (CWnd*, HANDLE) anziché (WPARAM, LPARAM) in mod tale che la nuova macro ON_WM_DDE_EXECUTE possa essere usata nella mappa messaggi.  
  
    -   CFrameWnd::OnDDETerminate è stato modificato in (CWnd*) come parametro anziché (WPARAM, LPARAM) in modo tale che la nuova macro ON_WM_DDE_TERMINATE possa essere usata nella mappa messaggi.  
  
    -   CMFCMaskedEdit::OnCut è stato modificato e non ha parametri anziché avere (WPARAM, LPARAM) in modo tale che la nuova macro ON_WM_CUT possa essere usata nella mappa messaggi.  
  
    -   CMFCMaskedEdit::OnClear è stato modificato e non ha parametri anziché avere (WPARAM, LPARAM) in modo tale che la nuova macr ON_WM_CLEAR possa essere usata nella mappa messaggi.  
  
    -   CMFCMaskedEdit::OnPaste è stato modificato e non ha parametri anziché avere (WPARAM, LPARAM) in modo tale che la nuova macro ON_WM_PASTE possa essere usata nella mappa messaggi.  
  
-   Gli oggetti \#ifdef nei file di intestazione MFC sono stati rimossi. Numerosi oggetti #ifdef nei file di intestazione MFC correlati a versioni non supportate di Windows (WINVER &lt; 0x0501) sono stati rimossi.  
  
-   La DLL ATL (atl120.dll) è stata rimossa. La DLL ATL viene ora fornita come intestazioni e come libreria statica (atls.lib).  
  
-   Atlsd.lib, atlsn.lib e atlsnd.lib sono stati rimossi. Atls.lib non include più dipendenze o codice con set di caratteri specifici per il debug/rilascio. Poiché funziona esattamente come per Unicode/ANSI e per il debug/rilascio, è richiesta una sola versione della libreria.  
  
-   Lo strumento di analisi ATL/MFC è stato rimosso contestualmente alla DLL ATL e il meccanismo di analisi è stato semplificato. Il costruttore CTraceCategory ora accetta un parametro (il nome della categoria) e le macro TRACE chiamano le funzioni CRT di report di debug.  
  
## <a name="visual-c-2012-breaking-changes"></a>Modifiche importanti in Visual C++ 2012  
  
### <a name="compiler"></a>Compilatore  
  
-   L'opzione /Yl del compilatore è stata modificata. Per impostazione predefinita, il compilatore usa questa opzione, che può provocare errori LNK2011 in determinate condizioni. Per altre informazioni, vedere [/Yl (Inserisce il riferimento PCH per la libreria di debug)](../build/reference/yl-inject-pch-reference-for-debug-library.md).  
  
-   Nel codice compilato con /clr, la parola chiave enum class definisce un enum C++&11;, non un enum Common Language Runtime (CLR). Per definire un enum CLR, è necessario essere espliciti riguardo all'accessibilità.  
  
-   Usare la parola chiave template per evitare in modo esplicito ambiguità di un nome di dipendente (conformità con lo standard del linguaggio C++). Nell'esempio seguente la parola chiave template evidenziata è obbligatoria per risolvere l'ambiguità. Per altre informazioni, vedere [Risoluzione dei nomi per tipi dipendenti](../cpp/name-resolution-for-dependent-types.md).  
  
    ```cpp  
    template < typename X = "", typename = "" AY = "">  
    struct Container { typedef typename AY::template Rebind< X> ::Other AX; };  
  
    ```  
  
-   L'espressione costante di tipo float non è più consentita come argomento di modello, come illustrato nell'esempio seguente.  
  
    ```cpp  
    template<float n=3.14>  
    struct B {};  // error C2993: 'float': illegal type for non-type template parameter 'n'  
  
    ```  
  
-   Un codice compilato usando l'opzione della riga di comando /GS e che ha una vulnerabilità off-by-one può determinare la chiusura del processo in fase di esecuzione, come illustrato nell'esempio di pseudocodice seguente.  
  
    ```cpp  
    char buf[MAX]; int cch; ManipulateString(buf, &cch); // ... buf[cch] = '\0'; // if cch >= MAX, process will terminate  
    ```  
  
-   L'architettura predefinita per le compilazioni x86 viene modificata in SSE2, quindi il compilatore può generare istruzioni SSE e userà i registri XMM per eseguire i calcoli a virgola mobile. Per ripristinare il comportamento precedente, usare il flag del compilatore /arch:IA32 per specificare l'architettura come IA32.  
  
-   Il compilatore può generare [avvisi del compilatore (livello 4) C4703](../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md) e C4701 mentre prima non ne generava. Il compilatore applica controlli più avanzati per l'utilizzo di variabili locali non inizializzate di tipo puntatore.  
  
-   Quando si specifica il nuovo flag del linker /HIGHENTROPYVA Windows 8 in genere induce le allocazioni di memoria a restituire un indirizzo a 64 bit.                 Prima di Windows 8 tali allocazioni restituivano più spesso indirizzi inferiori a 2 GB.  Questo può esporre bug di troncamento del puntatore nel codice esistente. Per impostazione predefinita, questa opzione è attivata.  Per disabilitare questo comportamento, specificare /HIGHENTROPYVA:NO.  
  
-   Il compilatore gestito (Visual Basic/C#) supporta anche /HIGHENTROPYVA per le build gestite.  Tuttavia, in questo caso, l'opzione /HIGHENTROPYVA è disattivata per impostazione predefinita.  
  
### <a name="ide"></a>IDE  
  
-   Sebbene sia consigliabile non creare applicazioni Windows Form in C++/CLI, la manutenzione di applicazioni di interfaccia utente C++/CLI già esistenti è supportata. Se è necessario creare un'applicazione Windows Form o qualsiasi altra applicazione di interfaccia utente .NET, usare C# o Visual Basic. Usare C++/CLI solo a fini di interoperabilità.  
  
### <a name="parallel-patterns-library-and-concurrency-runtime-library"></a>Parallel Patterns Library e libreria di runtime di concorrenza  
 L'enumerazione SchedulerType di UmsThreadDefault è deprecata. Specificare UmsThreadDefault causa la generazione di un avviso deprecato e l'esecuzione interna del mapping a ThreadScheduler.  
  
### <a name="standard-library"></a>Libreria standard  
  
-   A seguito di una modifica importante tra gli standard C++98/03 e C++11, usando argomenti di modello espliciti per la chiamata a make_pair(), come inmake_pair\<int, int>(x, y), in genere non viene eseguita la compilazione in Visual C++ in Visual Studio 2012. La soluzione consiste nel chiamare sempre make_pair() senza argomenti di modello espliciti, come in make_pair(x, y). Se si indicano argomenti di modello espliciti, viene vanificato lo scopo della funzione. Se è necessario controllare con precisione il tipo risultante, usare pair anziché make_pair, come in pair\<short, short >(int1, int2).  
  
-   Un'altra modifica sostanziale tra gli standard C++98/03 e C++11: quando A è implicitamente convertibile in B e B è implicitamente convertibile in C, ma A non è implicitamente convertibile in C, C++98/03 e Visual C++2010 consentono la conversione di pair\<A, X > (in modo implicito o esplicito) in pair\<C, X >. L'altro tipo, X, non interessa in questa sede e non è specifico per il primo tipo nella coppia. Poiché C++11 e Visual C++ in Visual Studio 2012 rilevano che A non è implicitamente convertibile in C, rimuovono la conversione della coppia dalla risoluzione dell'overload. Questa modifica è positiva per molti scenari. Ad esempio, l'overload di func(const pair\<int, int>&) e func(const pair\<string, string>&) e la chiamata di func() con pair\<const char *, const char \*> eseguono la compilazione con questa modifica. Tuttavia, la modifica interrompe il codice che si basava su conversioni di coppia aggressive. In genere, tale codice può essere corretto eseguendo una parte della conversione in modo esplicito, ad esempio passando make_pair(static_cast\<B>(a), x) a una funzione che prevede pair\<C, X >.  
  
-   Visual C++ 2010 simulava i modelli variadic, ad esempio make_shared\<T>(arg1, arg2, argN), fino a un limite massimo di 10 argomenti, contrassegnando overload e specializzazioni con macchine di precompilazione. In Visual C++ in Visual Studio 2012 questo limite viene ridotto a 5 argomenti per migliorare i tempi di compilazione e il consumo di memoria del compilatore per la maggior parte degli utenti. Tuttavia, è possibile impostare il limite precedente definendo in modo esplicito _VARIADIX_MAX come 10, a livello di progetto.  
  
-   C++ 11 17.6.4.3.1 [macro.names]/2 impedisce l'impostazione delle macro delle parole chiave quando sono incluse le intestazioni della libreria standard di C++. Le intestazioni ora generano errori del compilatore se rilevano parole chiave con macro impostate. La definizione di _ALLOW_KEYWORD_MACROS consente la compilazione del codice ma ne è fortemente sconsigliato l'uso. Come eccezione, l'uso di new con macro impostate è consentito per impostazione predefinita, poiché le intestazioni nel complesso si difendono usando #pragma push_macro("new")/#undef new/#pragma pop_macro("new"). Defining _ENFORCE_BAN_OF_MACRO_NEW esegue esattamente l'operazione indicata nel nome.  
  
-   Per implementare varie ottimizzazioni e controlli di debug, l'implementazione della libreria standard di C++ interrompe intenzionalmente la compatibilità binaria tra le versioni di Visual Studio (2005, 2008, 2010, 2012). Se si usa la libreria standard di C++, viene impedita la combinazione di file oggetto e librerie statiche compilati usando versioni diverse in un unico file binario (EXE o DLL) e non è consentito passare gli oggetti della libreria standard di C++ tra i file binari compilati usando versioni diverse. La combinazione di librerie statiche e file oggetto (usando la libreria standard di C++) compilati usando Visual C++ 2010 con quelli compilati usando Visual C++ in Visual Studio 2012 genera errori del linker per mancata corrispondenza in _MSC_VER, dove _MSC_VER è la macro che contiene la versione principale del compilatore (1700 per Visual C++ in Visual Studio 2012). Questo controllo non consente di rilevare la combinazione DLL e altre combinazioni inerenti a Visual C++ 2008 o versioni precedenti.  
  
-   Oltre a rilevare le mancate corrispondenze in _ITERATOR_DEBUG_LEVEL, implementato in Visual C++ 2010, Visual C++ in Visual Studio 2012 rileva le mancate corrispondenze nella libreria di runtime. Queste si verificano se vengono combinate le opzioni del compilatore /MT (versione statica), /MTd (debug statico), /MD (versione dinamica) e /MDd (debug dinamico).  
  
-   operator\<(), operator>(), operator\<=() e operator>=() in precedenza erano disponibili per le famiglie di contenitori std::unordered_map andstdext::hash_map, sebbene implementarli non fosse effettivamente utile. Questi operatori non standard sono stati rimossi in Visual C++ in Visual Studio 2012. Inoltre, l'implementazione di operator==() e operator!=() per la famiglia thestd::unordered_map è stata estesa per coprire la famiglia stdext::hash_map. Si consiglia di evitare l'uso della famiglia thestdext::hash_map nel nuovo codice.  
  
-   C++ 11 22.4.1.4 [locale.codecvt] specifica che codecvt::length() e codecvt::do_length() devono usare parametri stateT& modificabili, ma Visual C++ 2010 usava l'elemento const stateT&. Visual C++ in Visual Studio 2012 accetta stateT& come definito dallo standard. Questa differenza è significativa se si tenta di eseguire l'override della funzione virtuale do_length().  
  
### <a name="crt"></a>CRT  
  
-   L'heap di CRT (Runtime C) usato per new e malloc() non è più privato. CRT ora usa l'heap di processo. Questo significa che l'heap non viene eliminato quando viene scaricata una DLL, quindi le DLL collegate in modo statico a CRT devono verificare che la memoria allocata dal codice DLL sia pulita prima di essere scaricata.  
  
-   La funzione iscsymf() esegue asserzioni con valori negativi.  
  
-   Lo struct threadlocaleinfostruct è stato modificato per contenere le modifiche apportate alle funzioni delle impostazioni locali.  
  
-   Le funzioni CRT con oggetti intrinseci corrispondenti, ad esempio memxxx(), strxxx() vengono rimosse da intrin.h. Se intrin.h è stato incluso solo per queste funzioni, ora è necessario includere le intestazioni CRT corrispondenti.  
  
### <a name="mfc-and-atl"></a>MFC e ATL  
  
-   Rimosso il supporto per la fusione (afxcomctl32.h), quindi sono stati rimossi tutti i metodi definiti in afxcomctl32.h. I file di intestazione afxcomctl32.inl e afxcomctl32.h sono stati eliminati.  
  
-   Modificato il nome di CDockablePane::RemoveFromDefaultPaneDividier in CDockablePane::RemoveFromDefaultPaneDivider.  
  
-   Modificata la firma di CFileDialog::SetDefExt per l'uso di LPCTSTR. Sono interessate le compilazioni Unicode.  
  
-   Rimosse le categorie di analisi ATL obsolete.  
  
-   Modificata la firma di CBasePane::MoveWindow in modo da accettare un elemento const CRect.  
  
-   Modificata la firma di CMFCEditBrowseCtrl::EnableBrowseButton.  
  
-   m_fntTabs e m_fntTabsBold rimossi da CMFCBaseTabCtrl.  
  
-   Aggiunto un parametro ai costruttori CMFCRibbonStatusBarPane. È un parametro predefinito che non rappresenta una modifica essenziale per il codice sorgente.  
  
-   Aggiunto un parametro ai costruttori CMFCRibbonCommandsListBox. È un parametro predefinito che non rappresenta una modifica essenziale per il codice sorgente.  
  
-   Rimossa l'API AFXTrackMouse (e proc timer correlato). Usare l'API TrackMouseEvent di Win32.  
  
-   Aggiunto un parametro al costruttore CFolderPickerDialog. È un parametro predefinito che non rappresenta una modifica essenziale per il codice sorgente.  
  
-   Modificate le dimensioni della struttura CFileStatus: il membro m_attribute è stato modificato da BYTE a DWORD (in base al valore restituito da fromGetFileAttributes).  
  
-   CRichEditCtrl e CRichEditView usano MSFTEDIT_CLASS (controllo RichEdit 4.1) anziché RICHEDIT_CLASS (controllo RichEdit 3.0) nelle compilazioni Unicode.  
  
-   Rimossa AFX_GLOBAL_DATA::IsWindowsThemingDrawParentBackground perché è sempre TRUE in Windows Vista, Windows 7 e Windows 8.  
  
-   Rimossa AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable perché è sempre TRUE in Windows Vista, Windows 7 e Windows 8.  
  
-   Rimossa AFX_GLOBAL_DATA::DwmExtendFrameIntoClientArea. Chiamare l'API Windows direttamente in Windows Vista, Windows 7 e Windows 8.  
  
-   Rimossa AFX_GLOBAL_DATA::DwmDefWindowProc. Chiamare l'API Windows direttamente in Windows Vista, Windows 7 e Windows 8.  
  
-   Rinominata AFX_GLOBAL_DATA::DwmIsCompositionEnable in IsDwmCompositionEnabled per eliminare i conflitti di nome.  
  
-   Modificati gli identificatori per un numero di timer interni di MFC con definizioni spostate in afxres. h (AFX_TIMER_ID_ *).  
  
-   Modificata la firma del metodo OnExitSizeMove per conformità con la macro ON_WM_EXITSIZEMOVE:  
  
    -   CFrameWndEx  
  
    -   CMDIFrameWndEx  
  
    -   CPaneFrameWnd  
  
-   Modificati il nome e la firma di OnDWMCompositionChanged per conformità con la macro ON_WM_DWMCOMPOSITIONCHANGED:  
  
    -   CFrameWndEx  
  
    -   CMDIFrameWndEx  
  
    -   CPaneFrameWnd  
  
-   Modificata la firma del metodo OnMouseLeave per conformità con la macro ON_WM_MOUSELEAVE:  
  
    -   CMFCCaptionBar  
  
    -   CMFCColorBar  
  
    -   CMFCHeaderCtrl  
  
    -   CMFCProperySheetListBox  
  
    -   CMFCRibbonBar  
  
    -   CMFCRibbonPanelMenuBar  
  
    -   CMFCRibbonRichEditCtrl  
  
    -   CMFCSpinButtonCtrl  
  
    -   CMFCToolBar ReplaceThisText  
  
    -   CMFCToolBarComboBoxEdit  
  
    -   CMFCToolBarEditCtrl  
  
    -   CMFCAutoHideBar  
  
-   Modificata la firma di OnPowerBroadcast per conformità con la macro ON_WM_POWERBROADCAST:  
  
    -   CFrameWndEx  
  
    -   CMDIFrameWndEx  
  
-   Modificata la firma di OnStyleChanged per conformità con la macro ON_WM_STYLECHANGED:  
  
    -   CMFCListCtrl  
  
    -   CMFCStatusBar  
  
-   Modificato il nome del metodo interno FontFamalyProcFonts in FontFamilyProcFonts.  
  
-   Rimossi numerosi oggetti statici CString globali per eliminare le perdite di memoria in alcune situazioni (sostituiti con #defines) e le seguenti variabili membro di classe:  
  
    -   CKeyBoardManager::m_strDelimiter  
  
    -   CMFCPropertyGridProperty::m_strFormatChar  
  
    -   CMFCPropertyGridProperty::m_strFormatShort  
  
    -   CMFCPropertyGridProperty::m_strFormatLong  
  
    -   CMFCPropertyGridProperty::m_strFormatUShort  
  
    -   CMFCPropertyGridProperty::m_strFormatULong  
  
    -   CMFCPropertyGridProperty::m_strFormatFloat  
  
    -   CMFCPropertyGridProperty::m_strFormatDouble  
  
    -   CMFCToolBarImages::m_strPngResType  
  
    -   CMFCPropertyGridProperty::m_strFormat  
  
-   Modificata la firma di CKeyboardManager::ShowAllAccelerators e rimosso il parametro di delimitazione per i tasti di scelta rapida.  
  
-   Aggiunta CPropertyPage::GetParentSheet; nella classe CPropertyPage chiamarla al posto di GetParent per ottenere la finestra padre delle proprietà corretta, che può essere la finestra padre o padre del padre per CPropertyPage. Potrebbe essere necessario modificare il codice per chiamare GetParentSheet anziché ofGetParent.  
  
-   Corretto elemento #pragma warning(push) sbilanciato in ATLBASE.H, che causava la disabilitazione non corretta degli avvisi. Gli avvisi sono ora abilitati correttamente dopo l'analisi di ATLBASE.H.  
  
-   Spostati i metodi correlati a D2D da AFX_GLOBAL_DATA a _AFX_D2D_STATE:  
  
    -   GetDirectD2dFactory  
  
    -   GetWriteFactory  
  
    -   GetWICFactory  
  
    -   InitD2D  
  
    -   ReleaseD2DRefs  
  
    -   IsD2DInitialized  
  
    -   D2D1MakeRotateMatrix  
  
    -   Anziché chiamare, ad esempio, afxGlobalData.IsD2DInitialized, chiamare AfxGetD2DState->IsD2DInitialized.  
  
-   Rimossi file *.CPP di ATL obsoleti dalla cartella \atlmfc\include\.  
  
-   Inizializzazione afxGlobalData spostata nella fase su richiesta anziché nella fase di inizializzazione CRT, per soddisfare i requisiti di DLLMain.  
  
-   Aggiunto il metodo RemoveButtonByIndex alla classe CMFCOutlookBarPane.  
  
-   CMFCCmdUsageCount::IsFreqeuntlyUsedCmd corretta in IsFrequentlyUsedCmd.  
  
-   Corrette diverse istanze di RestoreOriginalstate in RestoreOriginalState (CMFCToolBar, CMFCMenuBar, CMFCOutlookBarPane).  
  
-   Rimossi i metodi non usati da CDockablePane: SetCaptionStyle, IsDrawCaption, IsHideDisabledButtons, GetRecentSiblingPaneInfo e CanAdjustLayout.  
  
-   Rimosse le variabili m_bCaptionText e m_bHideDisabledButtons del membro statico CDockablePane.  
  
-   Aggiunto un metodo di override DeleteString a CMFCFontComboBox.  
  
-   Rimossi metodi non usati da CPane: GetMinLength e IsLastPaneOnLastRow.  
  
-   CPane::GetDockSiteRow(CDockingPanesRow *) rinominata CPane::SetDockSiteRow.  
  
## <a name="visual-c-2010-breaking-changes"></a>Modifiche importanti in Visual C++ 2010  
  
### <a name="compiler"></a>Compilatore  
  
-   La parola chiave auto ha un nuovo significato predefinito. Poiché l'uso del significato precedente è poco frequente, la maggior parte delle applicazioni non sarà interessata da questa modifica.  
  
-   Viene introdotta la nuova parola chiave static_assert che causerà un conflitto di nomi se esiste già un identificatore con quel nome nel codice.  
  
-   Il supporto per la nuova notazione lambda esclude il supporto per la codifica di un GUID non racchiuso tra virgolette in un attributo uuid IDL.  
  
-   .NET Framework 4 introduce il concetto di eccezioni di stato danneggiato, ovvero eccezioni che lasciano un processo in uno stato danneggiato irreversibile. Per impostazione predefinita, non è possibile rilevare un'eccezione di stato danneggiato, nemmeno con l'opzione /EHa del compilatore che rileva tutte le altre eccezioni.                 Per rilevare in modo esplicito un'eccezione di stato danneggiato, usare le istruzioni _try-\__except. Oppure applicare l'attributo [HandledProcessCorruptedStateExceptions] per abilitare una funzione che rilevi le eccezioni di stato danneggiato.  Questa modifica interessa principalmente i programmatori di sistema che potrebbero dover rilevare un'eccezione di stato danneggiato. Le otto eccezioni sono STATUS_ACCESS_VIOLATION, STATUS_STACK_OVERFLOW, EXCEPTION_ILLEGAL_INSTRUCTION, EXCEPTION_IN_PAGE_ERROR, EXCEPTION_INVALID_DISPOSITION, EXCEPTION_NONCONTINUABLE_EXCEPTION, EXCEPTION_PRIV_INSTRUCTION, STATUS_UNWIND_CONSOLIDATE.                 Per altre informazioni su queste eccezioni, vedere la macro [GetExceptionCode](https://msdn.microsoft.com/en-us/library/windows/desktop/ms679356.aspx).  
  
-   La nuova opzione /GS del compilatore protegge dai sovraccarichi del buffer in modo più completo rispetto alle versioni precedenti. Questa versione potrebbe inserire controlli di sicurezza aggiuntivi nello stack riducendo le prestazioni. Usare la nuova parola chiave __declspec(safebuffers) per indicare al compilatore di non inserire controlli di sicurezza per una determinata funzione.  
  
-   Se si esegue la compilazione con entrambe le opzioni del compilatore, /GL (ottimizzazione intero programma) e /clr (compilazione Common Language Runtime), l'opzione /GL viene ignorata. Questa modifica è stata apportata poiché la combinazione delle opzioni del compilatore non risultava particolarmente vantaggiosa. In seguito a questa modifica le prestazioni della compilazione sono migliorate.  
  
-   Per impostazione predefinita, il supporto per i trigrammi è disabilitato in Visual C++ 2010. Usare l'opzione /Zc:trigraphs del compilatore per abilitare il supporto dei trigrammi. Un trigramma è costituito da due punti interrogativi consecutivi ("??") seguiti da un terzo carattere univoco. Il compilatore sostituisce un trigramma con un carattere di punteggiatura corrispondente. Ad esempio, il compilatore sostituisce il trigramma "??=" con il carattere "#". Usare i trigrammi in file di origine C che usano un set di caratteri che non contiene rappresentazioni grafiche adeguate per alcuni caratteri di punteggiatura.  
  
-   Il linker non supporta più l'ottimizzazione per Windows 98. L'opzione /OPT (ottimizzazioni) genera un errore in fase di compilazione se si specifica /OPT:WIN98 o /OPT: NOWIN98.  
  
-   Le opzioni predefinite del compilatore specificate dalle proprietà di compilazione RuntimeLibrary e DebugInformationFormat del sistema sono state modificate. Per impostazione predefinita, queste proprietà di compilazione vengono specificate nei progetti creati nelle versioni da 7.0 a 10.0 di Visual C++. Se si esegue la migrazione di un progetto creato da Visual C++ 6.0, considerare la possibilità di specificare un valore per queste proprietà.  
  
-   In Visual C++ 2010, RuntimeLibrary = MultiThreaded (/MD) e DebugInformationFormat = ProgramDatabase (/Zi). In Visual C++ 9.0, RuntimeLibrary = MultiThreaded (/MT) e DebugInformationFormat = Disabled.  
  
### <a name="clr"></a>CLR  
  
-   I compilatori Microsoft C# e Visual Basic ora sono in grado di produrre un assembly senza interoperabilità primaria (no-PIA). Un assembly no-PIA è in grado di usare i tipi COM senza la distribuzione del relativo assembly di interoperabilità primario (PIA). Quando si consumano assembly no-PIA prodotti da Visual C# o Visual Basic, è necessario fare riferimento all'assembly PIA nel comando di compilazione prima di fare riferimento a qualsiasi assembly no-PIA che usa la libreria.  
  
### <a name="visual-c-projects-and-msbuild"></a>Progetti di Visual C++ e MSBuild  
  
-   I progetti di Visual C++ sono ora basati sullo strumento MSBuild. Di conseguenza, i file di progetto usano un nuovo formato di file XML e il suffisso di un file con estensione VCXPROJ. Visual C++ 2010 converte automaticamente i file di progetto da versioni precedenti di Visual Studio nel nuovo formato di file. Un progetto esistente è interessato se dipende dallo strumento di compilazione precedente, VCBUILD.exe, o dal suffisso del file di progetto con estensione VCPROJ.  
  
-   Nelle versioni precedenti Visual C++ supportava la valutazione tardiva delle finestre delle proprietà. Ad esempio, una finestra delle proprietà padre poteva importare una finestra delle proprietà figlio e l'elemento padre poteva usare una variabile definita nell'elemento figlio per definire altre variabili. La valutazione tardiva consentiva all'elemento padre di usare la variabile figlio anche prima dell'importazione della finestra delle proprietà figlio. In Visual C++ 2010 una variabile della finestra del progetto non può essere usata prima che sia definita perché MSBuild supporta solo la valutazione precoce.  
  
### <a name="ide"></a>IDE  
  
-   La finestra di dialogo di chiusura dell'applicazione non chiude più un'applicazione. Nelle versioni precedenti, quando la funzione abort() o terminate() chiudeva la versione per la vendita di un'applicazione, la libreria di runtime C visualizzava un messaggio di chiusura dell'applicazione in una finestra o finestra di dialogo della console. Il messaggio indicava che l'applicazione aveva richiesto al runtime di chiuderla in modo anomalo e di contattare il team di supporto dell'applicazione per maggiori dettagli.                 Il messaggio di chiusura dell'applicazione era ridondante perché in Windows veniva successivamente visualizzato il gestore di chiusura corrente, in genere la finestra di dialogo Segnalazione errori Windows (Dr Watson) o il debugger di Visual Studio. A partire da Visual Studio 2010, la libreria di runtime C non visualizza il messaggio. Inoltre, il runtime impedisce all'applicazione di chiudersi prima dell'avvio di un debugger. Si tratta di una modifica sostanziale solo se si dipende dal comportamento precedente del messaggio di chiusura dell'applicazione.  
  
-   In particolare per Visual Studio 2010, IntelliSense non funziona per il codice o gli attributi C++/CLI, Trova tutti i riferimenti non funziona per le variabili locali e Modello codice non recupera i nomi dei tipi dagli assembly importati o non risolve i tipi per i relativi nomi completi.  
  
### <a name="libraries"></a>Librerie  
  
-   La classe SafeInt è inclusa in Visual C++ e non è più in un download separato. Questa modifica è importante solo se è stata sviluppata una classe denominata anch'essa "SafeInt".  
  
-   Il modello di distribuzione delle librerie non usa più manifesti per trovare una particolare versione di una libreria a collegamento dinamico. Il nome di ogni libreria a collegamento dinamico contiene invece il proprio numero di versione e si usa quel nome per individuare la libreria.  
  
-   Nelle versioni precedenti di Visual Studio era possibile ricompilare le librerie di runtime. Visual C++ 2010 non supporta più la creazione di copie personali dei file della libreria di runtime C.  
  
### <a name="standard-library"></a>Libreria standard  
  
-   L'intestazione \<iterator> non è più inclusa automaticamente da molti altri file di intestazione. Includere tale intestazione in modo esplicito se si richiede supporto per gli iteratori autonomi definiti nell'intestazione <iterator>. Un progetto esistente è influenzato se dipende dallo strumento di compilazione precedente, VCBUILD.exe, o dal suffisso del file di progetto con estensione VCPROJ.  
  
-   Nell'intestazione \<algorithm sono state rimosse le funzioni checked_* e unchecked_\*. E nell'intestazione \<iterator>> header la classe checked_iterator è stata rimossa ed è stata aggiunta la classe unchecked_array_iterator.  
  
-   Il costruttore CComPtr::CComPtr(int) è stato rimosso. Tale costruttore consentiva la creazione di un oggetto CComPtr dalla macro NULL, ma non era necessario e consentiva costruzioni senza senso da valori interi diversi da zero.  
  
     È ancora possibile costruire un oggetto CComPtr da NULL, che viene definita come 0, ma l'esito sarà negativo se l'oggetto viene costruito da un intero diverso dal valore letterale 0. Usare nullptr in alternativa.  
  
-   Le seguenti funzioni del membro ctype sono state rimosse: ctype::_Do_narrow_s, ctype::_Do_widen_s, ctype::_narrow_s, ctype::_widen_s. Se un'applicazione usa una di queste funzioni membro, è necessario sostituirla con la versione non protetta corrispondente: ctype::do_narrow,ctype::do_widen, ctype::narrow, ctype::widen.  
  
### <a name="crt-mfc-and-atl-libraries"></a>Librerie ATL, MFC e CRT  
  
-   È stato rimosso il supporto per gli utenti per la creazione delle librerie CRT, MFC e ATL. Ad esempio, non è disponibile un file NMAKE appropriato.                 Tuttavia, gli utenti possono ancora accedere al codice sorgente per queste librerie. E un documento che descrive le opzioni di MSBuild che Microsoft usa per creare queste librerie verrà probabilmente pubblicato in un blog del team di Visual C++.  
  
-   Il supporto MFC per IA64 è stato rimosso. Tuttavia, è ancora disponibile il supporto per CRT e ATL per IA64.  
  
-   Gli ordinali non vengono più riutilizzati nei file di definizione moduli (DEF) di MFC. Questa modifica implica che gli ordinali non saranno diversi tra le versioni secondarie e che migliorerà la compatibilità binaria per le versioni di progettazione di service pack e quick fix.  
  
-   È stata aggiunta una nuova funzione virtuale alla classe CDocTemplate. Questa nuova funzione virtuale è [CDocTemplate Class](../mfc/reference/cdoctemplate-class.md). La versione precedente di OpenDocumentFile aveva due parametri. La nuova versione ha tre parametri. Per supportare la gestione del riavvio, qualsiasi classe derivata da CDocTemplate deve implementare la versione con tre parametri. Il nuovo parametro è bAddToMRU.  
  
### <a name="macros-and-environment-variables"></a>Macro e variabili di ambiente  
  
-   La variabile di ambiente __MSVCRT_HEAP_SELECT non è più supportata. Questa variabile di ambiente viene rimossa e non vi è alcuna sostituzione.  
  
### <a name="microsoft-macro-assembler-reference"></a>Riferimento a Microsoft Macro Assembler  
  
-   Sono state rimosse diverse direttive dal compilatore di riferimento a Microsoft Macro Assembler. Le direttive rimosse sono .186, .286, .286P, .287, .8086, .8087 e .NO87.  
  
## <a name="visual-c-2008-breaking-changes"></a>Modifiche importanti in Visual C++ 2008  
  
### <a name="compiler"></a>Compilatore  
  
-   Le piattaforme Windows 95, Windows 98, Windows ME e Windows NT non sono più supportate. Questi sistemi operativi sono stati rimossi dall'elenco delle piattaforme assegnate.  
  
-   Il compilatore non supporta più diversi attributi direttamente associati al server ATL. Gli attributi che seguono non sono più supportati:  
  
    -   perf_counter  
  
    -   perf_object  
  
    -   perfmon  
  
    -   request_handler  
  
    -   soap_handler  
  
    -   soap_header  
  
    -   soap_method  
  
    -   tag_name  
  
### <a name="visual-c-projects"></a>Progetti di Visual C++  
  
-   Quando si aggiornano progetti da versioni precedenti di Visual Studio è necessario modificare le macro WINVER e _WIN32_WINNT in modo che siano maggiori o uguali a 0x0500.  
  
-   A partire da Visual Studio 2008 la procedura guidata per la creazione di un nuovo progetto non ha un'opzione che consente di creare un progetto SQL Server di C++. I progetti SQL Server creati usando una versione precedente di Visual Studio verranno comunque compilati e funzioneranno correttamente.  
  
-   Il file di intestazione Winable.h dell'API Windows è stato rimosso. Includere invece Winuser.h.  
  
-   La libreria Rpcndr.lib dell'API Windows è stata rimossa. Eseguire il collegamento a rpcrt4.lib.  
  
### <a name="crt"></a>CRT  
  
-   Il supporto per Windows 95, Windows 98, Windows Millennium Edition e Windows NT 4.0 è stato rimosso.  
  
-   Sono state rimosse le variabili globali seguenti:  
  
    -   _osplatform  
  
    -   _osver  
  
    -   _winmajor  
  
    -   _winminor  
  
    -   _winver  
  
-   Le funzioni seguenti sono state rimosse. Usare in alternativa le funzioni API Windows GetVersion o GetVersionEx:  
  
    -   _get_osplatform  
  
    -   _get_osver  
  
    -   _get_winmajor  
  
    -   _get_winminor  
  
    -   _get_winver  
  
-   La sintassi per le annotazioni SAL è cambiata. Per altre informazioni, vedere le [annotazioni SAL](../c-runtime-library/sal-annotations.md).  
  
-   Il filtro IEEE supporta ora il set di istruzioni SSE 4.1. Per altre informazioni, vedere [_fpieee_flt](../c-runtime-library/reference/fpieee-flt.md)_fpieee_flt.  
  
-   Le librerie di runtime C accluse a Visual Studio non sono più dipendenti dalla DLL di sistema msvcrt.dll.  
  
### <a name="standard-library"></a>Libreria standard  
  
-   Il supporto per Windows 95, Windows 98, Windows Millennium Edition e Windows NT 4.0 è stato rimosso.  
  
-   Durante la compilazione in modalità di debug con HAS_ITERATOR_DEBUGGING definita (sostituita da [ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) dopo Visual Studio 2010), un'applicazione ora esegue un'asserzione quando un iteratore tenta di incrementare o diminuire oltre i limiti del contenitore sottostante.  
  
-   La variabile membro c della classe stack ora è dichiarata protetta. In precedenza, questa variabile membro era dichiarata pubblica.  
  
-   Il comportamento di money_get::do_get è stato modificato. In precedenza, durante l'analisi di un importo monetario con più cifre frazionarie chiamate da frac_digits, do_get le consumava tutte. Ora do_get arresta l'analisi dopo aver consumato al massimo frac_digits caratteri.  
  
### <a name="atl"></a>ATL  
  
-   Non è possibile compilare ATL senza una dipendenza da CRT. Nelle versioni precedenti di Visual Studio è possibile usare #define ATL_MIN_CRT rendere un progetto ATL in minima parte dipendente da CRT. In Visual C++ 2008 tutti i progetti ATL dipendono in minima parte da CRT indipendentemente dal fatto che sia definita ATL_MIN_CRT.  
  
-   La codebase di ATL Server è stata rilasciata come progetto di origine condiviso in CodePlex e non viene installata come parte di Visual Studio. Le classi di codifica e decodifica dei dati di atlenc.h e le funzioni e classi di utilità di atlutil.h e atlpath.h sono state mantenute e ora fanno parte della libreria ATL. Alcuni dei file associati ad ATL Server non fanno più parte di Visual Studio.  
  
-   Alcune funzioni non sono più incluse nella DLL. Si trovano ancora nella libreria di importazione. Ciò non influisce sul codice che usa le funzioni in modo statico. Influirà solo sul codice che usa queste funzioni in modo dinamico.  
  
-   Le macro PROP_ENTRY e PROP_ENTRY_EX sono state deprecate e sostituite con le macro PROP_ENTRY_TYPE e PROP_ENTRY_TYPE_EX per motivi di sicurezza.  
  
### <a name="atlmfc-shared-classes"></a>Classi condivise ATL/MFC  
  
-   Non è possibile compilare ATL senza una dipendenza da CRT. Nelle versioni precedenti di Visual Studio è possibile usare #define ATL_MIN_CRT rendere un progetto ATL in minima parte dipendente da CRT. In Visual C++ 2008 tutti i progetti ATL dipendono in minima parte da CRT indipendentemente dal fatto che sia definita ATL_MIN_CRT.  
  
-   La codebase di ATL Server è stata rilasciata come progetto di origine condiviso in CodePlex e non viene installata come parte di Visual Studio. Le classi di codifica e decodifica dei dati di atlenc.h e le funzioni e classi di utilità di atlutil.h e atlpath.h sono state mantenute e ora fanno parte della libreria ATL. Alcuni dei file associati ad ATL Server non fanno più parte di Visual Studio.  
  
-   Alcune funzioni non sono più incluse nella DLL. Si trovano ancora nella libreria di importazione. Ciò non influisce sul codice che usa le funzioni in modo statico. Influirà solo sul codice che usa queste funzioni in modo dinamico.  
  
### <a name="mfc"></a>MFC  
  
-   Classe CTime: la classe CTime ora accetta le date a partire da 1/1/1900 DC anziché 1/1/1970 DC.              
-   Ordine di tabulazione dei controlli nelle finestre di dialogo MFC: l'ordine di tabulazione corretto di più controlli in una finestra di dialogo MFC è disturbato se un controllo ActiveX di MFC viene inserito nell'ordine di tabulazione. Questa modifica corregge il problema.  
  
     Ad esempio, creare un'applicazione di finestre di dialogo MFC che usa un controllo ActiveX e diversi controlli di modifica. Posizionare il controllo ActiveX nel mezzo dell'ordine di tabulazione dei controlli di modifica. Avviare l'applicazione, fare clic su un controllo di modifica il cui ordine di tabulazione sia dopo il controllo ActiveX, quindi usare la tabulazione. Prima di questa modifica lo stato attivo passava al controllo di modifica successivo al controllo ActiveX anziché al controllo di modifica successivo nell'ordine di tabulazione.  
  
-   Classe CFileDialog: i modelli personalizzati per la classe CFileDialog non possono essere portati automaticamente in Windows Vista. Si possono ancora usare, ma non hanno le funzionalità aggiuntive o l'aspetto delle finestre di dialogo di Windows Vista.  
  
-   Classe CWnd e classe CFrameWnd: il metodo CWnd::GetMenuBarInfo è stato rimosso.  
  
     Il metodo CFrameWnd::GetMenuBarInfo è ora un metodo non virtuale. Per altre informazioni, vedere la funzione GetMenuBarInfo in Windows SDK.  
  
-   Supporto MFC per ISAPI: MFC non supporta più la compilazione di applicazioni con ISAPI (Internet Server Application Programming Interface). Per compilare un'applicazione ISAPI, chiamare direttamente le estensioni ISAPI.  
  
-   API ANSI deprecate: le versioni ANSI di diversi metodi MFC sono deprecate. Usare le versioni Unicode dei metodi nelle applicazioni future. Per altre informazioni, vedere i requisiti di compilazione per i controlli comuni di Windows Vista.  
  
## <a name="visual-c-2005-breaking-changes"></a>Modifiche importanti in Visual C++ 2005  
  
### <a name="crt"></a>CRT  
  
-   Molte funzionalità sono state deprecate. Vedere le funzioni CRT deprecate.  
  
-   Molte funzioni ora convalidano i propri parametri, interrompendo l'esecuzione in presenza di parametri non validi. Ciò può causare l'interruzione del codice che passa parametri non validi e si basa sulla funzione che li ignora o semplicemente restituisce un codice di errore. Vedere Convalida dei parametri.  
  
-   Il valore del descrittore di file -2 viene ora usato per indicare che stdout e stderr non sono disponibili per l'output, ad esempio come in un'applicazione Windows che non ha una finestra di console. Il valore usato in precedenza era -1. Per altre informazioni, vedere [_fileno](../c-runtime-library/reference/fileno.md).  
  
-   Le librerie CRT a thread singolo, libc.lib e libcd.lib, sono state rimosse. Usare le librerie CRT multithread. Il flag del compilatore /ML non è più supportato. Le versioni non di blocco di alcune funzioni sono state aggiunte nei casi in cui la differenza delle prestazioni tra il codice multithread e il codice a thread singolo è potenzialmente significativa.  
  
-   L'overload di pow, double pow(int, int) è stato rimosso per migliorare la conformità allo standard.  
  
-   L'identificatore di formato %n non è più supportato per impostazione predefinita in nessuna delle famiglie di funzioni printf perché è intrinsecamente non sicuro. Il comportamento predefinito se viene rilevato %n è richiamare il gestore di parametro non valido. Per abilitare il supporto di %n, usare set_printf_count_output (anche see_get_printf_count_output).  
  
-   sprintf ora stampa il segno negativo di uno zero con segno.  
  
-   L'oggetto swprintf è stato modificato per essere conforme allo standard e ora richiede un parametro di dimensione. Il modulo di swprintf senza un parametro di dimensione è stato deprecato.  
  
-   La funzione set_security_error_handler è stata rimossa. Rimuovere tutte le chiamate a quella funzione. Il gestore predefinito è molto più sicuro per gestire gli errori relativi alla sicurezza.  
  
-   time_t è ora un valore a 64 bit (a meno che non si definisca _USE_32BIT_TIME_T).  
  
-   Le funzioni _spawn e _wspawn ora non modificano errno se l'esito è positivo, come specificato dallo standard C.  
  
-   RTC ora usa i caratteri wide per impostazione predefinita.  
  
-   Le funzioni di supporto della parola di controllo a virgola mobile sono state deprecate per le applicazioni compilate con /CLR o /CLR:PURE. Le funzioni interessate sono _clear87, _clearfp, _control87, _controlfp, _fpreset, _status87, _statusfp. È possibile disabilitare l'avviso di deprecazione definendo _CRT_MANAGED_FP_NO_DEPRECATE, ma l'uso di queste funzioni nel codice gestito è imprevedibile e non supportato.  
  
-   Alcune funzioni ora restituiscono puntatori const. Il comportamento precedente, senza const, può essere ripristinato specificando CONST_RETURN. Le funzioni interessate sono  
  
    1.  memchr, wmemchr  
  
    2.  strchr, wcschr, _mbschr, _mbschr_l  
  
    3.  strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l  
  
    4.  strrchr, wcsrchr, _mbsrchr, _mbsrchr_l  
  
    5.  strstr, wcsstr, _mbsstr, _mbsstr_l  
  
-   Quando si crea un collegamento con Setargv.obj o Wsetargv.obj non è più possibile eliminare l'espansione di un carattere jolly nella riga di comando racchiudendolo tra virgolette doppie. Per altre informazioni, vedere [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).  
  
### <a name="standard-library-2005"></a>Libreria standard (2005)  
  
-   La classe di eccezione (situata nell'intestazione \<exception>) è stata spostata nello spazio dei nomi std. Nelle versioni precedenti questa classe era nello spazio dei nomi globale. Per risolvere eventuali errori che indicano che è impossibile trovare la classe di eccezione, aggiungere al codice la seguente istruzione: using namespace std;  
  
-   Quando si chiama valarray::resize(), il contenuto dell'oggetto valarray andrà perso e verrà sostituito da valori predefiniti. È previsto che il metodo resize() reinizializzi valarray anziché aumentarlo dinamicamente come un vettore.  
  
-   Iteratori di debug: le applicazioni compilate con una versione di debug della libreria di runtime di C e che usano gli iteratori in modo non corretto potrebbero iniziare a visualizzare asserzioni in fase di esecuzione. Per disabilitare le asserzioni, è necessario impostare _HAS_ITERATOR_DEBUGGING (sostituito da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) dopo Visual Studio 2010) su 0. Per altre informazioni, vedere [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md).  
  
## <a name="visual-c-net-2003-breaking-changes"></a>Modifiche importanti in Visual C++ .NET 2003  
  
### <a name="compiler"></a>Compilatore  
  
-   Le parentesi di chiusura ora sono richieste per la direttiva del preprocessore definita (C2004).  
  
-   Le specializzazioni esplicite non trovano più i parametri modello del modello principale ([errore del compilatore C2146](../error-messages/compiler-errors-1/compiler-error-c2146.md)).  
  
-   È possibile accedere a un membro protetto (n) solo usando una funzione membro di una classe (B) che eredita dalla classe (A) di cui (n) è un membro ([errore del compilatore C2247](../error-messages/compiler-errors-1/compiler-error-c2247.md)).  
  
-   I controlli ottimizzati dell'accessibilità nel compilatore ora rilevano classi di base inaccessibili ([errore del compilatore C2248](../error-messages/compiler-errors-1/compiler-error-c2248.md)).  
  
-   Un'eccezione non può essere rilevata se il distruttore e/o il costruttore di copia sono inaccessibili (C2316).  
  
-   Gli argomenti predefiniti sui puntatori a funzioni non sono più consentiti ([errore del compilatore C2383](../error-messages/compiler-errors-1/compiler-error-c2383.md)).  
  
-   Un membro dati statico non può essere inizializzato usando una classe derivata ([errore del compilatore C2477](../error-messages/compiler-errors-1/compiler-error-c2477.md)).  
  
-   L'inizializzazione di un typedef non è consentita dallo standard e attualmente genera un errore del compilatore ([errore del compilatore C2513](../error-messages/compiler-errors-2/compiler-error-c2513.md)).  
  
-   bool è ora un tipo appropriato ([errore del compilatore C2632](../error-messages/compiler-errors-2/compiler-error-c2632.md)).  
  
-   Un UDC ora può creare ambiguità con gli operatori di overload ([C2666](../error-messages/compiler-errors-2/compiler-error-c2666.md)).  
  
-   Altre espressioni ora sono considerate costanti del puntatore Null valide ([errore del compilatore C2668](../error-messages/compiler-errors-2/compiler-error-c2668.md)).  
  
-   template<> è ora richiesto in posizioni in cui il compilatore in precedenza lo avrebbe implicato ([errore del compilatore C2768](../error-messages/compiler-errors-2/compiler-error-c2768.md)).  
  
-   La specializzazione esplicita di una funzione membro all'esterno della classe non è valida se la funzione è già stata specializzata in modo esplicito attraverso una specializzazione di classe modello ([errore del compilatore C2910](../error-messages/compiler-errors-2/compiler-error-c2910.md)).  
  
-   I parametri di modello non di tipo a virgola mobile non sono più consentiti ([errore del compilatore C2993](../error-messages/compiler-errors-2/compiler-error-c2993.md)).  
  
-   I modelli di classi non sono consentiti come argomenti di tipo modello (C3206).  
  
-   I nomi delle funzioni di tipo friend non vengono più introdotti nello spazio dei nomi ([errore del compilatore C3767](../error-messages/compiler-errors-2/compiler-error-c3767.md)).  
  
-   Il compilatore non accetta più virgole aggiuntive in una macro (C4002).  
  
-   Un oggetto di tipo POD costruito con un inizializzatore con formato () verrà inizializzato per impostazione predefinita (C4345).  
  
-   typename è ora richiesto se un nome dipendente deve essere trattato come un tipo ([avviso del compilatore (livello 1) C4346](../error-messages/compiler-warnings/compiler-warning-level-1-c4346.md)).  
  
-   Le funzioni che venivano considerate erroneamente specializzazioni del modello non vengono più considerate allo stesso modo (C4347).  
  
-   I membri dati statici non possono essere inizializzati usando classi derivate (C4356).  
  
-   Una specializzazione di modello di classe deve essere definita prima di essere usata in un tipo restituito ([avviso del compilatore (livello 3) C4686](../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md)).  
  
-   Il compilatore ora segnala il codice irraggiungibile (C4702).  
  
## <a name="see-also"></a>Vedere anche  
[Novità di Visual C++ in Visual Studio](../what-s-new-for-visual-cpp-in-visual-studio.md)
