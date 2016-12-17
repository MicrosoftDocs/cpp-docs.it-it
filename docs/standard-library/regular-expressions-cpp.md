---
title: "Espressioni regolari (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "espressioni regolari [TR1]"
  - "espressioni regolari, Visual C++"
  - "TR1 (espressioni regolari)"
  - "Visual C++, espressioni regolari"
ms.assetid: aafe202a-1d96-4b36-a270-d676dfd3c51c
caps.latest.revision: 12
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Espressioni regolari (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono illustrate le grammatiche dei motori dell'espressione regolare.  
  
## In questo argomento  
  
-   [Grammatica dell'espressione regolare](#regexgrammar)  
  
-   [Riepilogo della sintassi](#grammarsummary)  
  
-   [Dettagli semantici](#semanticdetails)  
  
-   [Corrispondenza e ricerca](#matchingandsearching)  
  
-   [Flag di formato](#formatflags)  
  
##  <a name="regexgrammar"></a> Grammatica dell'espressione regolare  
  
### Elemento  
 Un elemento può essere quanto segue:  
  
-   Un *carattere ordinario* che corrisponde allo stesso carattere nella sequenza di destinazione.  
  
-   Un *carattere jolly* '.' che corrisponde a qualsiasi carattere nella sequenza di destinazione, escluso il carattere di nuova riga.  
  
-   Un'*espressione tra parentesi quadre* nel formato "\[`expr`\]", che corrisponde a un carattere o a un elemento di ordinamento nella sequenza di destinazione presente anche nel set definito dall'espressione `expr`, o nel formato "\[^`expr`\]", che corrisponde a un carattere o a un elemento di ordinamento nella sequenza di destinazione non presente nel set definito dall'espressione `expr`.  
  
     L'espressione `expr` può contenere qualsiasi combinazione dei seguenti elementi:  
  
    -   Un singolo carattere.  Aggiunge tale carattere al set definito da `expr`.  
  
    -   Un *intervallo di caratteri* nel formato "`ch1`\-`ch2`".  Aggiunge i caratteri rappresentati dai valori dell'intervallo chiuso \[`ch1`, `ch2`\] al set definito da `expr`.  
  
    -   Una *classe di caratteri* nel formato "\[:`name`:\]".  Aggiunge i caratteri nella classe denominata al set definito da `expr`.  
  
    -   Una *classe di equivalenza* nel formato "\[\=`elt`\=\]".  Aggiunge gli elementi di ordinamento equivalenti a `elt` al set definito da `expr`.  
  
    -   Un *simbolo di ordinamento* nel formato "\[.`elt`.\]".  Aggiunge l'elemento di ordinamento `elt` al set definito da `expr`.  
  
-   Un *ancoraggio*.  L'ancoraggio '^' corrisponde all'inizio della sequenza di destinazione; l'ancoraggio '$' corrisponde alla fine della sequenza di destinazione.  
  
 Un *gruppo Capture* nel formato "\( *sottoespressione* \)" o "\\\( *sottoespressione* \\\)" in `BRE` e in `grep` che corrisponde alla sequenza di caratteri nella sequenza di destinazione a cui corrisponde il modello racchiuso tra i delimitatori.  
  
-   Un *escape di identità* nel formato "\\`k`" che corrisponde al carattere `k` nella sequenza di destinazione.  
  
 Esempi:  
  
-   "a" corrisponde alla sequenza di destinazione "a", ma non corrisponde alle sequenze di destinazione "B", "b" o "c".  
  
-   "." corrisponde alle sequenze di destinazione "a", "B", "b" e "c".  
  
-   "\[b\-z\]" corrisponde alle sequenze di destinazione "b" e "c", ma non corrisponde alle sequenze di destinazione "a" o "B".  
  
-   "\[:lower:\]" corrisponde alle sequenze di destinazione "a", "b" e "c", ma non corrisponde alla sequenza di destinazione "B".  
  
-   "\(a\)" corrisponde alla sequenza di destinazione "a" e associa il gruppo Capture 1 alla sottosequenza "a", ma non corrisponde alle sequenze di destinazione "B", "b" o "c".  
  
 In `ECMAScript`, in `BRE` e in `grep` un elemento può anche essere un *backreference* nel formato "\\`dd`" in cui `dd` rappresenta un valore decimale N che corrisponde a una sequenza di caratteri nella sequenza di destinazione uguale alla sequenza di caratteri a cui corrisponde l'ennesimo *gruppo Capture*.  Ad esempio, "\(a\)\\1" corrisponde alla sequenza di destinazione "aa" perché il primo \(e unico\) gruppo Capture corrisponde alla sequenza iniziale "a", quindi \\1 corrisponde alla sequenza finale "a".  
  
 In `ECMAScript` un elemento può anche essere quanto segue:  
  
-   Un *gruppo non Capture* nel formato "\(?: *sottoespressione* \)".  Corrisponde alla sequenza di caratteri nella sequenza di destinazione a cui corrisponde il modello racchiuso tra i delimitatori.  
  
-   Un *escape formato file* limitato nel formato "\\f", "\\n", "\\r", "\\t" o "\\v".  Questi caratteri corrispondono rispettivamente a un avanzamento modulo, una nuova riga, un ritorno a capo, una tabulazione orizzontale e una tabulazione verticale nella sequenza di destinazione.  
  
-   Un'*asserzione positiva* nel formato "\(?\= *sottoespressione* \)".  Corrisponde alla sequenza di caratteri nella sequenza di destinazione a cui corrisponde il modello racchiuso tra i delimitatori, ma non modifica la posizione della corrispondenza nella sequenza di destinazione.  
  
-   Un'*asserzione negativa* nel formato "\(?\!  *sottoespressione* \)".  Corrisponde a qualsiasi sequenza di caratteri nella sequenza di destinazione non corrispondente al modello racchiuso tra i delimitatori e non modifica la posizione della corrispondenza nella sequenza di destinazione.  
  
-   Una *sequenza di escape esadecimale* nel formato "\\x`hh`".  Corrisponde a un carattere nella sequenza di destinazione rappresentato da due cifre esadecimali `hh`.  
  
-   Una *sequenza di escape Unicode* nel formato "\\u`hhhh`".  Corrisponde a un carattere nella sequenza di destinazione rappresentato da quattro cifre esadecimali `hhhh`.  
  
-   Una *sequenza di escape di controllo* nel formato "\\c`k`".  Corrisponde a un carattere di controllo denominato dal carattere `k`.  
  
-   Un'*asserzione confine di parola* nel formato "\\b".  Si verifica quando la posizione corrente nella sequenza di destinazione si trova subito dopo un *confine di parola*.  
  
-   Un'*asserzione confine di parola negativa* nel formato "\\B".  Si verifica quando la posizione corrente nella sequenza di destinazione non si trova subito dopo un *confine di parola*.  
  
-   Un *carattere di escape dsw* nel formato "\\d", "\\D", "\\s", "\\S", "\\w", "\\W".  Fornisce un nome breve per una classe di caratteri.  
  
 Esempi:  
  
-   "\(?: a\)" corrisponde alla sequenza di destinazione "a", ma "\(?:a\)\\1" non è valido perché non esiste alcun gruppo Capture 1.  
  
-   "\(?\=a\)a" corrisponde alla sequenza di destinazione "a".  L'asserzione positiva corrisponde alla sequenza iniziale "a" nella sequenza di destinazione e la "a" finale nell'espressione regolare corrisponde alla sequenza iniziale "a" nella sequenza di destinazione.  
  
-   "\(?\!a\)a" non corrisponde alla sequenza di destinazione "a".  
  
-   "a\\b." corrisponde alla sequenza di destinazione "a~", ma non corrisponde alla sequenza di destinazione "ab".  
  
-   "a\\B." corrisponde alla sequenza di destinazione "ab", ma non corrisponde alla sequenza di destinazione "a~".  
  
 In `awk` un elemento può anche essere quanto segue:  
  
-   Un *escape formato file* nel formato "\\\\", "\\a", "\\b", "\\f", "\\n", "\\r", "\\t" o "\\v".  Questi caratteri corrispondono rispettivamente a una barra rovesciata, un avviso, una nuova riga, un ritorno a capo, una tabulazione orizzontale e una tabulazione verticale nella sequenza di destinazione.  
  
-   Una *sequenza di escape ottale* nel formato "\\`ooo`".  Corrisponde a un carattere nella sequenza di destinazione la cui rappresentazione è il valore rappresentato da uno, due o tre cifre ottali `ooo`.  
  
### Ripetizione  
 Qualsiasi elemento diverso da un'*asserzione positiva*, un'*asserzione negativa* o da un *ancoraggio* può essere seguito da un numero di ripetizioni.  Il tipo di numero di ripetizioni più generale assume il formato "{`min`,`max`}" o "\\ {`min`,`max`\\}" in `BRE` e in `grep`.  Un elemento seguito da questo formato di numero di ripetizioni corrisponde almeno a `min` occorrenze successive e a non più di `max` occorrenze successive di una sequenza corrispondente all'elemento.  Ad esempio, "a{2,3}" corrisponde alla sequenza di destinazione "aa" e alla sequenza di destinazione "aaa", ma non corrisponde alla sequenza di destinazione "a" o alla sequenza di destinazione "aaaa".  
  
 Un numero di ripetizioni può inoltre assumere uno dei seguenti formati:  
  
-   "{`min`}" o "\\{`min`\\}" in `BRE` e `grep`.  Equivalente a "{`min`,`min`}".  
  
-   "{`min`,}" o "\\{`min`,\\}" in `BRE` e `grep`.  Equivalente a "{`min`,unbounded}".  
  
-   "\*".  Equivalente a "{0,unbounded}".  
  
 Esempi:  
  
-   "a{2}" corrisponde alla sequenza di destinazione "aa", ma non corrisponde alla sequenza di destinazione "a" o alla sequenza di destinazione "aaa".  
  
-   "a{2,}" corrisponde alla sequenza di destinazione "aa", alla sequenza di destinazione "aaa" e così via, ma non corrisponde alla sequenza di destinazione "a".  
  
-   "a\*" corrisponde alla sequenza di destinazione "", alla sequenza di destinazione "a", alla sequenza di destinazione "aa" e così via.  
  
 Per tutte le grammatiche tranne `BRE` e `grep`, un numero di ripetizioni può inoltre assumere uno dei seguenti formati:  
  
-   "?".  Equivalente a "{0,1}".  
  
-   "\+".  Equivalente a "{1,unbounded}".  
  
 Esempi:  
  
-   "a?" corrisponde alla sequenza di destinazione "" e alla sequenza di destinazione "a", ma non corrisponde alla sequenza di destinazione "aa".  
  
-   "a\+" corrisponde alla sequenza di destinazione "a", alla sequenza di destinazione "aa" e così via, ma non corrisponde alla sequenza di destinazione "".  
  
 In `ECMAScript` tutti i formati del numero di ripetizioni possono essere seguiti dal carattere '?', che definisce una *ripetizione non\-greedy*.  
  
### Concatenazione  
 Gli elementi delle espressioni regolari, con o senza *numeri di ripetizioni*, possono essere concatenati per formare espressioni regolari più lunghe.  L'espressione risultante corrisponde a una sequenza di destinazione che è una concatenazione delle sequenze a cui corrispondono i singoli elementi.  Ad esempio, "a{2,3}b" corrisponde alla sequenza di destinazione "aab" e alla sequenza di destinazione "aaab", ma non corrisponde alla sequenza di destinazione "ab" o alla sequenza di destinazione "aaaab".  
  
### Alternanza  
 In tutte le grammatiche dell'espressione regolare tranne `BRE` e `grep` un'espressione regolare concatenata può essere seguita dal carattere '&#124;' e da un'altra espressione regolare concatenata.  Qualsiasi numero di espressioni regolari concatenate può essere combinato in questo modo.  L'espressione risultante corrisponde a qualsiasi sequenza di destinazione corrispondente a uno o più espressioni regolari concatenate.  
  
 Quando più di una delle espressioni regolari concatenate corrisponde alla sequenza di destinazione, `ECMAScript` sceglie la prima delle espressioni regolari concatenate che corrisponde alla sequenza come corrispondenza \(*prima corrispondenza*\); le altre grammatiche dell'espressione regolare scelgono quella che raggiunge la *corrispondenza più lunga*.  Ad esempio, "ab&#124;cd" corrisponde alla sequenza di destinazione "ab" e alla sequenza di destinazione "cd", ma non corrisponde alla sequenza di destinazione"abd" o alla sequenza di destinazione "acd".  
  
 In `grep` e in `egrep` è possibile utilizzare un carattere di nuova riga \('\\n'\) per separare le alternanze.  
  
### Sottoespressione  
 In `BRE` e in `grep` una sottoespressione è una concatenazione.  Nelle altre grammatiche dell'espressione regolare una sottoespressione è un'alternanza.  
  
##  <a name="grammarsummary"></a> Riepilogo della sintassi  
 Nella tabella riportata di seguito vengono riepilogate le funzionalità disponibili nelle diverse grammatiche dell'espressione regolare:  
  
|Elemento|BRE|ERE|ECMA|grep|egrep|awk|  
|--------------|---------|---------|----------|----------|-----------|---------|  
|alternanza in cui viene utilizzato '&#124;'||\+|\+||\+|\+|  
|alternanza in cui viene utilizzato '\\n'||||\+|\+||  
|ancoraggio|\+|\+|\+|\+|\+|\+|  
|backreference|\+||\+|\+|||  
|espressione tra parentesi quadre|\+|\+|\+|\+|\+|\+|  
|gruppo Capture in cui viene utilizzato "\(\)"||\+|\+||\+|\+|  
|gruppo Capture in cui viene utilizzato "\\\(\\\)"|\+|||\+|||  
|sequenza di escape di controllo|||\+||||  
|carattere di escape dsw|||\+||||  
|escape formato file|||\+|||\+|  
|sequenza di escape esadecimale|||\+||||  
|escape di identità|\+|\+|\+|\+|\+|\+|  
|asserzione negativa|||\+||||  
|asserzione confine di parola negativa|||\+||||  
|gruppo non Capture|||\+||||  
|ripetizione non\-greedy|||\+||||  
|sequenza di escape ottale||||||\+|  
|carattere ordinario|\+|\+|\+|\+|\+|\+|  
|asserzione positiva|||\+||||  
|ripetizione in cui viene utilizzato "{}"||\+|\+||\+|\+|  
|ripetizione in cui viene utilizzato "\\{\\}"|\+|||\+|||  
|ripetizione in cui viene utilizzato '\*'|\+|\+|\+|\+|\+|\+|  
|ripetizione in cui vengono utilizzati '?' e '\+'||\+|\+||\+|\+|  
|sequenza di escape Unicode|||\+||||  
|carattere jolly|\+|\+|\+|\+|\+|\+|  
|asserzione confine di parola|||\+||||  
  
##  <a name="semanticdetails"></a> Dettagli semantici  
  
### Ancoraggio  
 Un ancoraggio corrisponde a una posizione nella stringa di destinazione, non a un carattere.  '^' corrisponde all'inizio della stringa di destinazione e '$' corrisponde alla fine della stringa di destinazione.  
  
### Backreference  
 Un backreference è una barra rovesciata seguita da un valore decimale N.  Corrisponde al contenuto dell'ennesimo *gruppo Capture*.  Il valore di N non deve essere maggiore del numero di gruppi Capture che precedono il backreference.  In `BRE` e in `grep` il valore di N è determinato dalla cifra decimale che segue la barra rovesciata.  In `ECMAScript` il valore di N è determinato da tutte le cifre decimali che seguono immediatamente la barra rovesciata.  Pertanto, in `BRE` e in `grep` il valore di N non è mai maggiore di 9, anche se l'espressione regolare include più di nove gruppi Capture.  In `ECMAScript` il valore di N è illimitato.  
  
 Esempi:  
  
-   "\(\(a\+\)\(b\+\)\)\(c\+\)\\3" corrisponde alla sequenza di destinazione "aabbbcbbb".  Il backreference "\\3" corrisponde al testo nel terzo gruppo Capture, ovvero "\(b\+\)".  Non corrisponde alla sequenza di destinazione "aabbbcbb".  
  
-   "\(a\)\\2" non è valido.  
  
-   Il significato di "\(b\(\(\(\(\(\(\(\(\(a\)\)\)\)\)\)\)\)\)\)\\10" è diverso in `BRE` e in `ECMAScript`.  In `BRE` il backreference è "\\1".  Il backreference corrisponde al contenuto del primo gruppo Capture, ovvero quello che inizia con "\(b" e termina con "\)" finale e precede il backreference, e la '0' finale corrisponde a un carattere ordinario '0'.  In `ECMAScript` il backreference è "\\10".  Corrisponde al decimo gruppo Capture, ovvero quello più interno.  
  
### Espressione tra parentesi quadre  
 Un'espressione tra parentesi quadre definisce un set di caratteri ed *elementi di ordinamento*.  Quando l'espressione tra parentesi quadre inizia con il carattere '^' la corrispondenza ha esito positivo se nessun elemento nel set corrisponde al carattere nella sequenza di destinazione.  In caso contrario, la corrispondenza ha esito positivo se uno degli elementi nel set corrisponde al carattere corrente nella sequenza di destinazione.  
  
 Il set di caratteri può essere definito elencando qualsiasi combinazione di *caratteri singoli*, *intervalli di caratteri*, *classi di caratteri*,  *classi di equivalenza* e *simboli di ordinamento*.  
  
### Gruppo Capture  
 Il gruppo Capture contrassegna il proprio contenuto come singola unità nella grammatica dell'espressione regolare ed etichetta il testo di destinazione che corrisponde a tale contenuto.  L'etichetta associata a ogni gruppo Capture è un numero che viene determinato contando le parentesi di apertura con cui vengono contrassegnati i gruppi Capture fino alla parentesi di apertura compresa con cui viene contrassegnato il gruppo Capture corrente.  In questa implementazione il numero massimo di gruppi Capture è 31.  
  
 Esempi:  
  
-   "ab\+" corrisponde alla sequenza di destinazione "abb", ma non corrisponde alla sequenza di destinazione "abab".  
  
-   "\(ab\)\+" non corrisponde alla sequenza di destinazione "abb", ma corrisponde alla sequenza di destinazione "abab".  
  
-   "\(\(a\+\)\(b\+\)\)\(c\+\)" corrisponde alla sequenza di destinazione "aabbbc" e associa il gruppo Capture 1 alla sottosequenza "aabbb", il gruppo Capture 2 alla sottosequenza "aa", il gruppo Capture 3 a "bbb" e il gruppo Capture 4 alla sottosequenza "c".  
  
### Classe Character  
 Una classe di caratteri in un'espressione tra parentesi quadre aggiunge tutti i caratteri nella classe denominata al set di caratteri definito dall'espressione tra parentesi quadre.  Per creare una classe di caratteri, utilizzare "\[:" seguito dal nome della classe seguito a sua volta da ":"\].  Internamente, i nomi delle classi di caratteri vengono riconosciuti chiamando `id = traits.lookup_classname`.  Un carattere `ch` appartiene a tale classe se `traits.isctype(ch, id)` restituisce true.  Il modello `regex_traits` predefinito supporta i nomi di classe della tabella seguente.  
  
|Nome classe|Descrizione|  
|-----------------|-----------------|  
|"alnum"|lettere minuscole, lettere maiuscole e cifre|  
|"alpha"|lettere minuscole e lettere maiuscole|  
|"blank"|Spazio o tabulazione|  
|"cntrl"|i caratteri di *escape formato file*|  
|"digit"|cifre|  
|"graph"|lettere minuscole, lettere maiuscole, cifre e punteggiatura|  
|"lower"|lettere minuscole|  
|"print"|lettere minuscole, lettere maiuscole, cifre, punteggiatura e spazio|  
|"punct"|punteggiatura|  
|"space"|`space`|  
|"upper|caratteri maiuscoli|  
|"xdigit"|cifre, 'a', 'b', 'c', 'd', 'e', 'f', 'A', 'B', 'C', 'D', 'E', 'F'|  
|"d"|uguale a digit|  
|"s"|uguale a spazio|  
|"w"|uguale a alnum|  
  
### Intervallo di caratteri  
 Un intervallo di caratteri in un'espressione tra parentesi quadre consente di aggiungere tutti i caratteri dell'intervallo al set di caratteri definito dall'espressione tra parentesi quadre.  Per creare un intervallo di caratteri, inserire il carattere '\-' tra i primi e gli ultimi caratteri dell'intervallo.  Questa operazione consente di inserire nel set tutti i caratteri che dispongono di un valore numerico maggiore o uguale al valore numerico del primo carattere e minore o uguale al valore numerico dell'ultimo carattere.  Si noti che questo set di caratteri aggiunti dipende dalla rappresentazione di caratteri specifica della piattaforma.  Se il carattere '\-' è presente all'inizio o alla fine di un'espressione tra parentesi quadre o come primo o ultimo carattere di un intervallo di caratteri, rappresenta se stesso.  
  
 Esempi:  
  
-   "\[0\-7\]" rappresenta il set di caratteri {'0', '1', '2', '3', '4', '5', '6', '7' }.  Corrisponde alle sequenze di destinazione "0", "1" e così via, ma non a "a".  
  
-   Nei sistemi in cui viene utilizzata la codifica dei caratteri ASCII, "\[h\-k\]" rappresenta il set di caratteri {'h', 'i', 'j', 'k'}.  Corrisponde alle sequenze di destinazione "h", "i" e così via, ma non a "\\x8A" o a "0".  
  
-   Nei sistemi in cui viene utilizzata la codifica dei caratteri EBCDIC, "\[h\-k\]" rappresenta il set di caratteri {'h', 'i', '\\x8A', '\\x8B', '\\x8C', '\\x8D', '\\x8E', '\\x8F', '\\x90', 'j', 'k'} \('h' viene codificato come 0x88 e 'k' viene codificato come 0x92\).  Corrisponde alle sequenze di destinazione "h", "i", "\\x8A" e così via, ma non a "0".  
  
-   "\[\-0\-24\]" rappresenta il set di caratteri {'\-', '0', '1', '2', '4'}.  
  
-   "\[0\-2\-\]" rappresenta il set di caratteri {'0', '1', '2', '\-'}.  
  
-   Nei sistemi in cui viene utilizzata la codifica dei caratteri ASCII, "\[\+\-\-\]" rappresenta il set di caratteri {'\+', ',', '\-'}.  
  
 Tuttavia, quando vengono utilizzati intervalli sensibili alle impostazioni locali, i caratteri in un intervallo vengono determinati dalle regole di confronto relative alle impostazioni locali.  I caratteri che si trovano dopo il primo carattere della definizione dell'intervallo e prima dell'ultimo carattere della definizione dell'intervallo si trovano nel set.  I due caratteri finali si trovano anch'essi nel set.  
  
### Elemento di ordinamento  
 Un elemento di ordinamento è una sequenza di più caratteri considerata come un carattere singolo.  
  
### Simbolo di ordinamento  
 Un simbolo di ordinamento in un'espressione tra parentesi quadre consente di aggiungere un *elemento di ordinamento* al set definito dall'espressione tra parentesi quadre.  Per creare un simbolo di ordinamento utilizzare "\[." seguito dall'elemento di ordinamento seguito a sua volta da ".\]".  
  
### Sequenza di escape di controllo  
 Una sequenza di escape di controllo è una barra rovesciata seguita dalla lettera "c" seguita a sua volta da una delle lettere comprese tra "a" e "z" o tra "A" e "Z".  Corrisponde a un carattere di controllo ASCII denominato dalla lettera.  Ad esempio, "\\ci" corrisponde alla sequenza di destinazione "\\x09" poiché \<CTRL\+I\> ha il valore 0x09.  
  
### Carattere di escape DSW  
 Un carattere di escape dsw è il nome breve di una classe di caratteri, come illustrato nella tabella seguente.  
  
|Sequenza di escape|Classe denominata Equivalent|Classe denominata Default|  
|------------------------|----------------------------------|-------------------------------|  
|"\\d"|"\[\[:d:\]\]"|"\[\[:digit:\]\]"|  
|"\\D"|"\[^\[:d:\]\]"|"\[^\[:digit:\]\]"|  
|"\\s"|"\[\[:s:\]\]"|"\[\[:space:\]\]"|  
|"\\S"|"\[^\[:s:\]\]"|"\[^\[:space:\]\]"|  
|"\\w"|"\[\[:w:\]\]"|"\[a\-zA\-Z0\-9\_\]"\*|  
|"\\W"|"\[^\[:w:\]\]"|"\[^a\-zA\-Z0\-9\_\]"\*|  
  
 \*ASCII character set  
  
### Classe di equivalenza  
 Una classe di equivalenza in un'espressione tra parentesi quadre consente di aggiungere tutti i caratteri e gli *elementi di ordinamento* equivalenti all'elemento di ordinamento nella definizione della classe di equivalenza al set definito dall'espressione tra parentesi quadre.  Per creare una classe di equivalenza utilizzare "\[\=" seguito dall'elemento di ordinamento seguito a sua volta da "\=\]".  Internamente, due elementi di ordinamento `elt1` e `elt2` sono equivalenti se `traits.transform_primary(elt1.begin(), elt1.end()) == traits.transform_primary(elt2.begin(), elt2.end())`.  
  
### Escape formato file  
 Un escape formato file è costituito dalle consuete sequenze di escape dei caratteri del linguaggio C, "\\\\", "\\a", "\\b", "\\f", "\\n", "\\r", "\\t", "\\v". Questi hanno i soliti significati, ovvero, barra rovesciata, avviso, BACKSPACE, avanzamento modulo, nuova riga, ritorno a capo, tabulazione orizzontale e tabulazione verticale.  In `ECMAScript`, "\\a" e "\\b" non sono consentiti. \("\\\\" è consentito, ma è un escape di identità, non un escape formato file\).  
  
### Sequenza di escape esadecimale  
 Una sequenza di escape esadecimale è una barra rovesciata seguita dalla lettera 'x' seguita a sua volta da due cifre esadecimali \(0\-9a\-fA\-F\).  Corrisponde a un carattere nella sequenza di destinazione con il valore specificato da due cifre.  Ad esempio, "\\x41" corrisponde alla sequenza di destinazione "A" quando viene utilizzata la codifica dei caratteri ASCII.  
  
### Escape di identità  
 Un escape di identità è una barra rovesciata seguita da un singolo carattere.  Corrisponde a tale carattere.  È obbligatorio quando il carattere ha un significato speciale; tramite l'escape di identità il significato speciale viene rimosso.  Di seguito è riportato un esempio.  
  
-   "a\*" corrisponde alla sequenza di destinazione "aaa", ma non corrisponde alla sequenza di destinazione "a\*".  
  
-   "a\\\*" non corrisponde alla sequenza di destinazione "aaa", ma corrisponde alla sequenza di destinazione "a\*".  
  
 Il set di caratteri consentito in un escape di identità dipende dalla grammatica dell'espressione regolare, come illustrato nella tabella seguente.  
  
|Grammatica|Caratteri di escape di identità consentiti|  
|----------------|------------------------------------------------|  
|`BRE`, `grep`|{ '\(', '\)', '{', '}', '.', '\[', '\\', '\*', '^', '$' }|  
|`ERE`, `egre`|{ '\(', '\)', '{', '.', '\[', '\\', '\*', '^', '$', '\+', '?', '&#124;' }|  
|`awk`|`ERE` più {'"', '\/'}|  
|`ECMAScript`|Tutti i caratteri tranne quelli che possono far parte di un identificatore.  In genere sono comprese le lettere, le cifre, '$', '\_' e le sequenze di escape Unicode.  Per ulteriori informazioni, vedere la specifica del linguaggio ECMAScript.|  
  
### Singolo carattere  
 Un singolo carattere in un'espressione tra parentesi quadre aggiunge tale carattere al set di caratteri definito dall'espressione tra parentesi quadre.  In qualsiasi punto di un'espressione tra parentesi quadre tranne all'inizio, un '^' rappresenta se stesso.  
  
 Esempi:  
  
-   "\[abc\]" corrisponde alle sequenze di destinazione "a", "b" e "c", ma non alla sequenza "d".  
  
-   "\[^abc\]" corrisponde alla sequenza di destinazione "d", ma non alle sequenze di destinazione "a", "b" o "c".  
  
-   "\[a^bc\]" corrisponde alle sequenze di destinazione "a", "b", "c" e "^", ma non alla sequenza di destinazione "d".  
  
 In tutte le grammatiche dell'espressione regolare tranne `ECMAScript`, se a '\]' è il primo carattere che segue la parentesi di apertura '\[' o è il primo carattere che segue un '^' iniziale, rappresenta se stesso.  
  
 Esempi:  
  
-   "\[\]a" non è valido in quanto non è presente alcuna "\]" per terminare l'espressione tra parentesi quadre.  
  
-   "\[\]abc\]" corrisponde alle sequenze di destinazione "a", "b", "c" e "\]", ma non alla sequenza di destinazione "d".  
  
-   "\[^\]abc\]" corrisponde alla sequenza di destinazione "d", ma non alle sequenze di destinazione "a", "b", "c" o "\]".  
  
 In `ECMAScript` utilizzare '\\\]' per rappresentare il carattere '\]' in un'espressione tra parentesi quadre.  
  
 Esempi:  
  
-   "\[\]a" corrisponde alla sequenza di destinazione "a" perché l'espressione tra parentesi quadre è vuota.  
  
-   "\[\\\]abc\]" corrisponde alle sequenze di destinazione "a", "b", "c" e "\]", ma non alla sequenza di destinazione "d".  
  
### Asserzione negativa  
 Un'asserzione negativa corrisponde solo al proprio contenuto.  Tale asserzione non utilizza i caratteri della sequenza di destinazione.  Ad esempio, "\(?\!aa\)\(a\*\)" corrisponde alla sequenza di destinazione "a" e associa il gruppo Capture 1 alla sottosequenza "a".  Non corrisponde alla sequenza di destinazione "aa" o alla sequenza di destinazione "aaa".  
  
### Asserzione confine di parola negativa  
 Un'asserzione confine di parola negativa corrisponde se la posizione corrente nella stringa di destinazione non si trova subito dopo un *confine di parola*.  
  
### Gruppo non Capture  
 Un gruppo non Capture contrassegna il proprio contenuto come singola unità nella grammatica dell'espressione regolare, ma non etichetta il testo di destinazione.  Ad esempio, "\(a\)\(?:b\)\*\(c\) corrisponde al testo di destinazione "abbc" e associa il gruppo Capture 1 alla sottosequenza "a" e il gruppo Capture 2 alla sottosequenza "c".  
  
### Ripetizione non\-greedy  
 In una ripetizione non\-greedy viene utilizzata la sottosequenza più breve della sequenza di destinazione corrispondente al modello.  In una ripetizione greedy viene utilizzata quella più lunga.  Ad esempio, "\(a\+\) \(a\*b\)" corrisponde alla sequenza di destinazione "aaab".  Quando viene utilizzata una ripetizione non\-greedy, tale ripetizione associa il gruppo Capture 1 alla sottosequenza "a" all'inizio della sequenza di destinazione e il gruppo Capture 2 alla sottosequenza "aab" alla fine della sequenza di destinazione.  Quando viene utilizzata una corrispondenza greedy, associa il gruppo Capture 1 alla sottosequenza "aaa" e il gruppo Capture 2 alla sottosequenza "b".  
  
### Sequenza di escape ottale  
 Una sequenza di escape ottale è una barra rovesciata seguita da una, due o tre cifre ottali \(0\-7\).  Corrisponde a un carattere nella sequenza di destinazione con il valore specificato da tali cifre.  Se tutte le cifre sono '0', la sequenza non è valida.  Ad esempio, "\\101" corrisponde alla sequenza di destinazione "A" quando viene utilizzata la codifica dei caratteri ASCII.  
  
### Carattere ordinario  
 Un carattere ordinario è qualsiasi carattere valido che non ha un significato speciale nella grammatica corrente.  
  
 In `ECMAScript` i seguenti caratteri hanno significati speciali:  
  
-   ^  $  \\  .  \*  \+  ?  \(  \)  \[  \]  {  }  &#124;  
  
 In `BRE` e in `grep` i seguenti caratteri hanno significati speciali:  
  
-   .   \[   \\  
  
 Inoltre in `BRE` e in `grep` i seguenti caratteri hanno significati speciali quando vengono utilizzati in un particolare contesto.  
  
-   '\*' ha un significato speciale in tutti i casi tranne quando è il primo carattere di un'espressione regolare o il primo carattere che segue un '^ iniziale in un'espressione regolare, oppure quando è il primo carattere di un gruppo Capture o il primo carattere che segue un '^' iniziale in un gruppo Capture.  
  
-   '^' ha un significato speciale quando è il primo carattere di un'espressione regolare.  
  
-   '$' ha un significato speciale quando è l'ultimo carattere di un'espressione regolare.  
  
 In `ERE`, `egrep` e in `awk` i seguenti caratteri hanno significati speciali:  
  
-   .   \[   \\   \(   \*   \+   ?   {   &#124;  
  
 Inoltre in `ERE`, `egrep` e in `awk` i seguenti caratteri hanno significati speciali quando vengono utilizzati in un particolare contesto.  
  
-   '\)' ha un significato speciale quando corrisponde a un '\(' precedente.  
  
-   '^' ha un significato speciale quando è il primo carattere di un'espressione regolare.  
  
-   '$' ha un significato speciale quando è l'ultimo carattere di un'espressione regolare.  
  
 Un carattere ordinario corrisponde allo stesso carattere nella sequenza di destinazione.  Per impostazione predefinita, significa che la corrispondenza ha esito positivo se i due caratteri sono rappresentati dallo stesso valore.  In una corrispondenza senza distinzione tra maiuscole e minuscole `ch0` e `ch1` corrispondono se `traits.translate_nocase(ch0) == traits.translate_nocase(ch1)`.  In una corrispondenza sensibile alle impostazioni locali `ch0` e `ch1` corrispondono se `traits.translate(ch0) == traits.translate(ch1)`.  
  
### Asserzione positiva  
 Un'asserzione positiva corrisponde al proprio contenuto, ma non utilizza i caratteri della sequenza di destinazione.  
  
 Esempi:  
  
-   "\(?\=aa\)\(a\*\)" corrisponde alla sequenza di destinazione "aaaa" e associa il gruppo Capture 1 alla sottosequenza "aaaa".  
  
-   "\(aa\)\(a\*\)" corrisponde alla sequenza di destinazione "aaaa" e associa il gruppo Capture 1 alla sottosequenza "aa" all'inizio della sequenza di destinazione e il gruppo Capture 2 alla sottosequenza "aa" alla fine della sequenza di destinazione.  
  
-   "\(?\=aa\)\(a\)&#124;\(a\)" corrisponde alla sequenza di destinazione "a" e associa il gruppo Capture 1 a una sequenza vuota \(perché l'asserzione positiva ha avuto esito negativo\) e il gruppo Capture 2 alla sottosequenza "a".  Corrisponde anche alla sequenza di destinazione "aa" e associa il gruppo Capture 1 alla sottosequenza "aa" e il gruppo Capture 2 a una sequenza vuota.  
  
### Sequenza di escape Unicode  
 Una sequenza di escape Unicode è una barra rovesciata seguita dalla lettera 'u' seguita a sua volta da quattro cifre esadecimali \(0\-9a\-fA\-F\).  Corrisponde a un carattere nella sequenza di destinazione con il valore specificato da quattro cifre.  Ad esempio, "\\u0041" corrisponde alla sequenza di destinazione "A" quando viene utilizzata la codifica dei caratteri ASCII.  
  
### Carattere jolly  
 Un carattere jolly corrisponde a qualsiasi carattere nella sequenza di destinazione, escluso il carattere di nuova riga.  
  
### Confine di parola  
 Un confine di parola si verifica nelle seguenti situazioni:  
  
-   Il carattere corrente si trova all'inizio della sequenza di destinazione ed è uno dei caratteri alfanumerici `A-Za-z0-9_.`  
  
-   La posizione corrente del carattere è oltre la fine della sequenza di destinazione e l'ultimo carattere della sequenza di destinazione è uno dei caratteri alfanumerici.  
  
-   Il carattere corrente è uno dei caratteri alfanumerici e il carattere precedente non lo è.  
  
-   Il carattere corrente non è uno dei caratteri alfanumerici e il carattere precedente lo è.  
  
### Asserzione confine di parola  
 Un'asserzione confine di parola si verifica quando la posizione corrente nella stringa di destinazione si trova subito dopo un *confine di parola*.  
  
##  <a name="matchingandsearching"></a> Corrispondenza e ricerca  
 Affinché un'espressione regolare corrisponda a una sequenza di destinazione, l'intera espressione regolare deve corrispondere all'intera sequenza di destinazione.  Ad esempio, l'espressione regolare "bcd" corrisponde alla sequenza di destinazione "bcd", ma non corrisponde alla sequenza di destinazione "abcd" o alla sequenza di destinazione "bcde".  
  
 Perché una ricerca di espressione regolare abbia esito positivo, è necessario che esista una sottosequenza in qualche punto della sequenza di destinazione corrispondente all'espressione regolare.  La ricerca in genere trova la sottosequenza corrispondente più a sinistra.  
  
 Esempi:  
  
-   Una ricerca dell'espressione regolare "bcd" nella sequenza di destinazione "bcd" ha esito positivo e trova la corrispondenza dell'intera sequenza.  La stessa ricerca nella sequenza di destinazione "abcd" ha anch'essa esito positivo e trova la corrispondenza degli ultimi tre caratteri.  La stessa ricerca nella sequenza di destinazione "bcde" ha anch'essa esito positivo e trova la corrispondenza dei primi tre caratteri.  
  
-   Una ricerca dell'espressione regolare "bcd" nella sequenza di destinazione "bcdbcd" ha esito positivo e trova la corrispondenza dei primi tre caratteri.  
  
 Se esiste più di uno sottosequenza che corrisponde a una posizione nella sequenza di destinazione, esistono due modi per scegliere il modello corrispondente.  *Prima corrispondenza* consente di scegliere la sottosequenza trovata per prima quando viene trovata la corrispondenza dell'espressione regolare.  *Corrispondenza più lunga* consente di scegliere la sottosequenza più lunga tra quelle che corrispondono in tale posizione.  Se esiste più di una sottosequenza con la lunghezza massima, la corrispondenza più lunga consente di scegliere quella trovata per prima.  Ad esempio, quando viene utilizzata la prima corrispondenza, una ricerca dell'espressione regolare "b&#124;bc" nella sequenza di destinazione "abcd" trova la sottosequenza "b" perché il termine di sinistra dell'alternanza corrisponde a tale sottosequenza; pertanto, con la prima corrispondenza il termine di destra dell'alternanza non viene considerato.  Quando viene utilizzata la corrispondenza più lunga, la stessa ricerca trova la corrispondenza di "bc" perché "bc" è più lungo di "b".  
  
 Una corrispondenza parziale ha esito positivo se la corrispondenza raggiunge la fine della sequenza di destinazione senza generare errori, anche se non ha raggiunto la fine dell'espressione regolare.  Di conseguenza, dopo l'esito positivo di una corrispondenza parziale, l'aggiunta di caratteri alla sequenza di destinazione potrebbe causare l'esito negativo di una corrispondenza parziale successiva.  Tuttavia, dopo l'esito negativo di una corrispondenza parziale, l'aggiunta di caratteri alla sequenza di destinazione potrebbe impedire l'esito positivo di una corrispondenza parziale successiva.  Ad esempio, con una corrispondenza parziale, "ab" corrisponde alla sequenza di destinazione "a", ma non alla sequenza di destinazione "ac".  
  
##  <a name="formatflags"></a> Flag di formato  
  
|Regole dei formati ECMAScript|Regole dei formati sed|Testo di sostituzione|  
|-----------------------------------|----------------------------|---------------------------|  
|"$&"|"&"|Sequenza di caratteri corrispondente all'intera espressione regolare \(`[match[0].first, match[0].second)`\)|  
|"$$"||"$"|  
||"\\&"|"&"|  
|"$ \`" \(simbolo del dollaro seguito dalla virgoletta inversa\)||Sequenza di caratteri che precede la sottosequenza corrispondente all'espressione regolare \(`[match.prefix().first, match.prefix().second)`\)|  
|"$'" \(simbolo del dollaro seguito dalla virgoletta dritta\)||Sequenza di caratteri che segue la sottosequenza corrispondente all'espressione regolare \(`[match.suffix().first, match.suffix().second)`\)|  
|"$n"|"\\n"|Sequenza di caratteri corrispondente al gruppo Capture nella posizione `n`, in cui `n` è un numero compreso tra 0 e 9 \(`[match[n].first, match[n].second)`|  
||"\\\\n"|"\\n"|  
|"$nn"||Sequenza di caratteri corrispondente al gruppo Capture nella posizione `nn`, in cui `nn` è un numero compreso tra 10 e 99 \(`[match[nn].first, match[nn].second)`|  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)