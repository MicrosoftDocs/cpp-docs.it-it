---
title: Tabella di conformità al linguaggio C++ di Microsoft
description: Tabella degli aggiornamenti di conformità di Microsoft C' in base alla versione di Visual Studio.
ms.date: 03/17/2020
ms.technology: cpp-language
ms.assetid: 475da6e9-0d78-4b4e-bd23-f41c406c4efe
author: corob-msft
ms.author: corob
ms.openlocfilehash: 18f8db28fab83f795baced82a346f07d73256716
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365230"
---
# <a name="microsoft-c-language-conformance-table"></a>Tabella di conformità al linguaggio C++ di Microsoft

La conformità agli standard per il compilatore di Microsoft C' in Visual Studio (MSVC) è un work in progress. Di seguito è riportato un riepilogo della conformità della libreria e del linguaggio ISO Standard C e della libreria in base alla versione di Visual Studio. Ogni compilatore e il nome della funzionalità di libreria standard sono collegati al documento della proposta ISO Standard C, che descrive la funzionalità, se disponibile al momento della pubblicazione. La colonna **Supportato** elenca la versione di Visual Studio in cui è apparso per la prima volta il supporto per la funzionalità.

Per informazioni dettagliate sui miglioramenti della conformità di Visual Studio 2017 o Visual Studio 2019 MSVC, vedere Miglioramenti della [conformità di C.](cpp-conformance-improvements.md) Per un elenco di altre modifiche, vedere [Novità per Visual C](what-s-new-for-visual-cpp-in-visual-studio.md) Per le modifiche della conformità nelle versioni precedenti, vedere [Cronologia delle modifiche di Visual C++](../porting/visual-cpp-change-history-2003-2015.md) e [Visual C++: novità dalla versione 2003 alla 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md). Per notizie aggiornate dal team di C++, visitare il [blog del team di C++](https://devblogs.microsoft.com/cppblog/).

> [!NOTE]
> Non sono state apportate modifiche binarie di rilievo tra Visual Studio 2015, Visual Studio 2017 e Visual Studio 2019. Per altre informazioni, vedere [Compatibilità binaria di C'è tra Visual Studio 2015, 2017 e 2019](../porting/binary-compat-2015-2017.md)

## <a name="compiler-features"></a>Funzionalità del compilatore

|  |  |
|--|--|
| __Funzionalità del linguaggio di base C++03/11__ | __Supportato__ |
| &nbsp;&nbsp;Tutti gli altri elementi | VS 2015 <sup>[A](#note_A)</sup> |
| &nbsp;&nbsp;Ricerca del nome in due fasi | VS 2017 15.7 <sup>[B](#note_B)</sup> |
| &nbsp;&nbsp;[N2634 Espressione SFINAE](https://wg21.link/N2634) | VS 2017 15.7 |
| &nbsp;&nbsp;[N1653 Preprocessore C99](https://wg21.link/N1653) | Parziale <sup> [C](#note_C)</sup> |
| __Funzionalità del linguaggio di base C++14__ | __Supportato__ |
| &nbsp;&nbsp;[N3323 Formulazione perfezionata per le conversioni contestuali](https://wg21.link/N3323) | Visual Studio 2013 |
| &nbsp;&nbsp;[N3472 Valori letterali binari](https://wg21.link/N3472) | VS 2015 |
| &nbsp;&nbsp;[N3638 Tipi restituiti auto e decltype(auto)](https://wg21.link/n3638) | VS 2015 |
| &nbsp;&nbsp;[N3648 init-captures](https://wg21.link/n3648) | VS 2015 |
| &nbsp;&nbsp;[N3649 Espressioni lambda generiche](https://wg21.link/n3649) | VS 2015 |
| &nbsp;&nbsp;[Attributo deprecato \[ \[\] \] N3760](https://wg21.link/n3760) | VS 2015 |
| &nbsp;&nbsp;[N3778 Deallocazione dimensionata](https://wg21.link/n3778) | VS 2015 |
| &nbsp;&nbsp;[N3781 Separatori di cifre](https://wg21.link/n3781) | VS 2015 |
| &nbsp;&nbsp;[N3651 Modelli di variabile](https://wg21.link/n3651) | VS 2015.2 |
| &nbsp;&nbsp;[N3652 constexpr esteso](https://wg21.link/n3652) | VS 2017 15.0 |
| &nbsp;&nbsp;[N3653 Inizializzatori di membri predefiniti per aggregati](https://wg21.link/n3653) | VS 2017 15.0 |
| __Funzionalità del linguaggio di base C++17__ | __Supportato__ |
| &nbsp;&nbsp;[N4086 Rimozione di trigrammi](https://wg21.link/n4086) | VS 2010 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N3922 Nuove regole per l'automazione con braced-init-list](https://wg21.link/n3922) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4051 typename in parametri di modello](https://wg21.link/n4051) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[Attributi N4266 per spazi dei nomi ed enumeratori](https://wg21.link/n4266) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[Valori letterali carattere N4267 u8](https://wg21.link/n4267) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4230 Definizioni di spazi dei nomi annidati](https://wg21.link/n4230) | VS 2015.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N3928 static_assert concisa](https://wg21.link/n3928) | VS 2017 15.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0184R0 Cicli for basati su intervallo generalizzati](https://wg21.link/p0184r0) | VS 2017 15.0 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[Attributo fallthrough \[ \[\] \] P0188R1](https://wg21.link/p0188r1) | VS 2017 15.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0001R1 Rimozione della parola chiave register](https://wg21.link/p0001r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0002R1 Rimozione di operator++ per bool](https://wg21.link/p0002r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0018R3 Acquisizione *this per valore](https://wg21.link/p0018r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0028R4 Uso attributo namespaces senza ripetizione](https://wg21.link/p0028r4) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[Has_include P0061R1 \_ \_](https://wg21.link/p0061r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0138R2 direct-list-init delle enumerazioni fisse da numeri interi](https://wg21.link/p0138r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0170R1 Espressioni lambda constexpr](https://wg21.link/p0170r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[Attributo nodiscard \[ \[\] \] P0189R1](https://wg21.link/p0189r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[Attributo \[ \[maybe_unused\] \] P0212R1](https://wg21.link/p0212r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0217R3 Associazioni strutturate](https://wg21.link/p0217r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0292R2 Istruzioni if di constexpr](https://wg21.link/p0292r2) | VS 2017 15.3 <sup>[D](#note_D)</sup> |
| &nbsp;&nbsp;[P0305R1 Istruzioni di selezione con inizializzatori](https://wg21.link/p0305r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0245R1 Valori letterali hexfloat](https://wg21.link/p0245r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N4268 Consentire più argomenti del modello non di tipo](https://wg21.link/n4268) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N4295 Espressioni di riduzione](https://wg21.link/n4295) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0003R5 Rimozione di specifiche di eccezione dinamiche](https://wg21.link/p0003r5) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0012R1 Aggiunta di noexcept al sistema di tipi](https://wg21.link/p0012r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0035R4 Allocazione di memoria dinamica con ulteriore allineamento](https://wg21.link/p0035r4) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0386R2 Variabili inline](https://wg21.link/p0386r2) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0522R0 Corrispondenza tra parametri di modello e argomenti compatibili](https://wg21.link/p0522r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0036R0 Rimozione di alcune riduzioni unarie](https://wg21.link/p0036r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[N4261 Fissaggio delle conversioni di qualificazione](https://wg21.link/n4261) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0017R1 Inizializzazione aggregata estesa](https://wg21.link/p0017r1) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[ P0091R3 Deduzione dell'argomento del modello per modelli di classe](https://wg21.link/p0091r3)<br/>&nbsp;&nbsp;[ P0512R0 Problemi di deduzione dell'argomento del modello di classe](https://wg21.link/p0512r0) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0127R2 Dichiarazione di parametri di modello non di tipo con auto](https://wg21.link/p0127r2) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0135R1 Elisione copia garantita](https://wg21.link/p0135r1) | VS 2017 15.6 |
| &nbsp;&nbsp;[P0136R1 Ridefinizione ereditarietà dei costruttori](https://wg21.link/p0136r1) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0137R1 std::launder](https://wg21.link/p0137r1) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0145R3 Ridefinizione ordine di valutazione di espressioni](https://wg21.link/p0145r3)<br/>&nbsp;&nbsp;[P0400R0 Ordine di valutazione degli argomenti della funzione](https://wg21.link/p0400r0) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0195R2 Espansioni pack nelle dichiarazioni using](https://wg21.link/p0195r2) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0283R2 Attributi non riconosciuti ignorati](https://wg21.link/p0283r2) | VS 2015 <sup>[14](#note_14)</sup> |
| __Funzionalità del linguaggio di base C++17 (report sui difetti)__ | __Supportato__ |
| &nbsp;&nbsp;[P0702R1 Correzione della deduzione di argomenti del modello di classe per i costruttori di elenchi di inizializzatori](https://wg21.link/p0702r1) | VS 2017 15.7 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0961R1: rilasciare regole di individuazione del punto di personalizzazione per binding strutturati](https://wg21.link/p0961r1) | VS 2019 16.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0969R0: consentire binding strutturati a membri accessibili](https://wg21.link/p0969r0) | VS 2019 16.0 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0588R1: semplificare l'acquisizione implicita delle espressioni lambda](https://wg21.link/p0588r1) | VS 2019 16.4 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P1771R1 \[ \[nodiscard\] \] per i costruttori](https://wg21.link/p1771r1) | VS 2019 16.4 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P1825R0 Formulazione unita per P0527R1 e P1155R3, spostamenti più impliciti](https://wg21.link/p1825r0) | VS 2019 16.4 <sup> [17](#note_17)</sup> |
| &nbsp;&nbsp;[P0929R2: controllo di tipi di classi astratte](https://wg21.link/P0929R2) | No |
| &nbsp;&nbsp;[P0962R2: rilasciare regole di individuazione del punto di personalizzazione per cicli range-for:](https://wg21.link/p0962r1) | No |
| &nbsp;&nbsp;[P0859R0 CWG 1581: quando sono definite funzioni membro constexpr](https://wg21.link/p0859r0) | No |
| &nbsp;&nbsp;[P1009R2: deduzione di dimensione delle matrici nelle espressioni new](https://wg21.link/P1009R2) | No |
| &nbsp;&nbsp;[P1286R2 Contra CWG DR1778](https://wg21.link/P1286R2) | No |
| __Funzionalità del linguaggio di base C++20__ | __Supportato__ |
| &nbsp;&nbsp;[P0704R1 Correzione lvalue const per puntatori a membri con qualificatore ref](https://wg21.link/p0704r1) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1041R4 Impostazione di valori letterali stringa char16_t/char32_t su UTF-16/32](https://wg21.link/P1041R4) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1330R0 Modifica del membro attivo di un'unione all'interno di constexpr](https://wg21.link/P1330R0) | VS 2017 15.0 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0972R0 noexcept per \<chrono> zero(), min(), max()](https://wg21.link/P0972R0) | VS 2017 15.7 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0515R3 Operatore di confronto a tre livelli (Spaceship) <=>](https://wg21.link/P0515R3) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0941R2 Macro dei test di funzionalità](https://wg21.link/P0941R2) | VS 2019 16.0 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1008R1 Come vietare gli aggregati con i costruttori dichiarati dall'utente](https://wg21.link/P1008R1) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0329R4 Inizializzazione designata](https://wg21.link/p0329r4) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0846R0 ADL e modelli di funzione non visibili](https://wg21.link/P0846R0) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0409R2 Acquisizione consentita di espressioni lambda \[=, this\]](https://wg21.link/p0409r2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0428R2 Sintassi modello familiare per espressioni lambda generiche](https://wg21.link/p0428r2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0624R2 Espressioni lambda senza stato costruibili e assegnabili per impostazione predefinita](https://wg21.link/P0624R2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0780R2 Espansione di pacchetto consentita nelle acquisizioni iniziali di espressioni lambda](https://wg21.link/P0780R2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0806R2 Deprecare l'acquisizione implicita di questo\[=\]](https://wg21.link/P0806R2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1120R0 Miglioramenti di coerenza per <=> e altri operatori di confronto](https://wg21.link/P1120R0) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1185R2 \< = \> !](https://wg21.link/P1185R2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0734R0 Concetti](https://wg21.link/P0734R0) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0857R0 Correzione dei gap delle funzionalità nei vincoli](https://wg21.link/P0857R0) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1084R2 return-type-requirement attuali insufficienti](https://wg21.link/P1084R2) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0892R2 Costruttore explicit condizionale](https://wg21.link/P0892R2) | VS 2019 16.4 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1091R3 Estensione dei binding strutturati in modo che risultino più simili a dichiarazioni di variabili](https://wg21.link/P1091R3) | VS 2019 16.4 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1099R5 Utilizzo dell'enumerazione](https://wg21.link/P1099R5) | VS 2019 16.4 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1186R3 Quando si utilizza effettivamente\<=>](https://wg21.link/P1186R3) | VS 2019 16.4 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1630R1 Spaceship ha bisogno di una messa a punto](https://wg21.link/P1630R1) | VS 2019 16.4 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0306R4 \_ \_Aggiunta\_ \_ di VA_OPT per l'omissione di virgole e l'eliminazione delle virgole](https://wg21.link/P0306R4) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0614R1 Cicli for basati su intervallo con inizializzatori](https://wg21.link/P0614R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0683R1 Inizializzatori del membro predefinito per campi bit](https://wg21.link/P0683R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1002R1 Blocchi try-catch in funzioni constexpr](https://wg21.link/P1002R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1161R3 Deprecare gli utilizzi dell'operatore virgola nelle espressioni di indice](https://wg21.link/P1161R3) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1301R4 \[ \[nodiscard("messaggio")\]\]](https://wg21.link/P1301R4) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1703R1 Il riconoscimento delle importazioni di unità di intestazione richiede la pre-elaborazione completa](https://wg21.link/P1703R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1946R0 Consente confronti predefiniti per valore](https://wg21.link/P1946R0) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0641R2 Mancata corrispondenza tra costruttori con il costruttore di copia predefinito](https://wg21.link/P0641R2) | Parziale |
| &nbsp;&nbsp;[P0912R5 Coroutine](https://wg21.link/P0912R5) | Parziale |
| &nbsp;&nbsp;[P1103R3 Moduli](https://wg21.link/P1103R3) | Parziale |
| &nbsp;&nbsp;[P0315R4 Espressioni lambda consentite in contesti non valutati](https://wg21.link/P0315R4) | No |
| &nbsp;&nbsp;[P0388R4 Consente conversioni in matrici con associazione sconosciuta](https://wg21.link/P0388R4) | No |
| &nbsp;&nbsp;[Attributi \[ \[\] \] probabili e \[ \[improbabili\] \] P0479R5](https://wg21.link/P0479R5) | No |
| &nbsp;&nbsp;[P0634R3 typename non richiesto](https://wg21.link/P0634R3) | No |
| &nbsp;&nbsp;[P0692R1 Rilascio del controllo di accesso nelle specializzazioni](https://wg21.link/P0692R1) | No |
| &nbsp;&nbsp;[P0722R3 Eliminazione con dimensioni efficienti per classi con dimensioni variabili](https://wg21.link/P0722R3) | No |
| &nbsp;&nbsp;[P0732R2 Tipi di classi in parametri di modello non di tipo](https://wg21.link/P0732R2) | No |
| &nbsp;&nbsp;[P0735R1 Interazione di memory_order_consume con sequenze di rilascio](https://wg21.link/P0735R1) | No |
| &nbsp;&nbsp;[P0784R7 Altri contenitori constexpr](https://wg21.link/P0784R7) | No |
| &nbsp;&nbsp;[Attributo di no_unique_address \[ \[\] \] P0840R2](https://wg21.link/P0840R2) | No |
| &nbsp;&nbsp;[P0848R3 Funzioni speciali bisbisce in modo condizionale](https://wg21.link/P0848R3) | No |
| &nbsp;&nbsp;[P0960R3 Inizializzazione degli aggregati consentita da un elenco di valori tra parentesi](https://wg21.link/P0960R3) | No |
| &nbsp;&nbsp;[P1064R0 Chiamate di funzioni virtuali consentite in espressioni costanti](https://wg21.link/P1064R0) | No |
| &nbsp;&nbsp;[P1073R3 Funzioni immediate](https://wg21.link/P1073R3) | No |
| &nbsp;&nbsp;[P1094R2 Spazi dei nomi inline annidati](https://wg21.link/P1094R2) | No |
| &nbsp;&nbsp;[P1139R2 Risoluzione di problemi di formulazione correlati a ISO 10646](https://wg21.link/P1139R2) | No |
| &nbsp;&nbsp;[P1141R2 Un ulteriore approccio alle dichiarazioni vincolate](https://wg21.link/P1141R2) | No |
| &nbsp;&nbsp;[P1143R2 constinit](https://wg21.link/P1143R2) | No |
| &nbsp;&nbsp;[P1152R4 Deprecazione volatile](https://wg21.link/P1152R4) | No |
| &nbsp;&nbsp;[P1236R1 Gli interi con segno sono complementi a due](https://wg21.link/P1236R1) | No |
| &nbsp;&nbsp;[P1327R1 typeid polimorfico dynamic_cast consentito in espressioni costanti](https://wg21.link/P1327R1) | No |
| &nbsp;&nbsp;[P1331R2 Perconsentire un'inizializzazione predefinita semplice nei contesti constexpr](https://wg21.link/P1331R2) | No |
| &nbsp;&nbsp;[P1353R0 Macro di test delle funzionalità mancante](https://wg21.link/P1353R0) | No |
| &nbsp;&nbsp;[P1381R1 Acquisizione di riferimento di binding strutturati](https://wg21.link/P1381R1) | No |
| &nbsp;&nbsp;[P1452R2 Sulla semantica non uniforme dei requisiti di tipo restituito](https://wg21.link/P1452R2) | No |
| &nbsp;&nbsp;[P1616R1 Utilizzo di TTP non vincolati con modelli vincolati](https://wg21.link/P1616R1) | No |
| &nbsp;&nbsp;[P1668R1 Consentire l'assemblaggio inline non valutato nelle funzioni constexpr](https://wg21.link/P1668R1) | No |
| &nbsp;&nbsp;[P1766R1 Mitigazione moduli minori moduli](https://wg21.link/P1766R1) | No |
| &nbsp;&nbsp;[P1811R0 Restrizioni di ridefinizione rilassante per la robustezza di riesportazione](https://wg21.link/P1811R0) | No |
| &nbsp;&nbsp;[P1814R0 CTAD per i modelli di alias](https://wg21.link/P1814R0) | No |
| &nbsp;&nbsp;[P1816R0 CTAD per aggregati](https://wg21.link/P1816R0) | No |
| &nbsp;&nbsp;[Ordine di inizializzazione dinamica P1874R1 delle variabili non locali nei moduli](https://wg21.link/P1874R1) | No |
| &nbsp;&nbsp;[P1907R1 Incoerenze con parametri di modello non di tipo](https://wg21.link/P1907R1) | No |
| &nbsp;&nbsp;[P1971R0 Modifiche fondamentali per i commenti NB alla riunione di novembre 2019 (Belfast)](https://wg21.link/P1971R0) | No |
| &nbsp;&nbsp;[P1972R0 US105 Verificare la soddisfazione dei vincoli per i non modelli durante la formazione del puntatore alla funzione](https://wg21.link/P1972R0) | No |
| &nbsp;&nbsp;[P1975R0 Correzione del dicino dell'inizializzazione aggregata tra parentesi](https://wg21.link/P1975R0) | No |
| &nbsp;&nbsp;[P1979R0 Risoluzione US086](https://wg21.link/P1979R0) | No |
| &nbsp;&nbsp;[P1980R0 CA096: corrispondenza della dichiarazione per le clausole richieste non dipendenti](https://wg21.link/P1980R0) | No |

## <a name="standard-library-features"></a>Funzionalità della libreria standard

|  |  |
|--|--|
| __Funzionalità della libreria standard C++20__ | __Supportato__ |
| &nbsp;&nbsp;[P0809R0: confrontare contenitori non ordinati](https://wg21.link/p0809r0) | VS 2010 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0858R0: requisiti di iteratore Constexpr](https://wg21.link/p0858r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0777R1 Come evitare il decadimento non necessario](https://wg21.link/p0777r1) | VS 2017 15.7 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P1164R1 Rendere create_directory() intuitivo](https://wg21.link/P1164R1) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0550R2 remove_cvref](https://wg21.link/p0550r2) | VS 2019 16.0 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0318R1 unwrap_reference, unwrap_ref_decay](https://wg21.link/p0318r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0457R2 starts_with()/ends_with() per basic_string/basic_string_view](https://wg21.link/p0457r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0458R2 contains() per contenitori associativi ordinati e non ordinati](https://wg21.link/p0458r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0646R1 list/forward_list remove()/remove_if()/unique() Return size_type](https://wg21.link/p0646r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0769R2 shift_left(), shift_right()](https://wg21.link/p0769r2) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0887R1 type_identity](https://wg21.link/p0887r1) | VS 2019 16.1 <sup>[20](#note_20)</sup> |
| &nbsp;&nbsp;[P0020R6 atomic\<float>, atomic\<double>, atomic\<long double>](https://wg21.link/p0020r6) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0463R1 endian](https://wg21.link/p0463r1) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0482R6 char8_t: un tipo per caratteri UTF-8 e stringhe](https://wg21.link/P0482R6) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0600R1 \[ \[nodiscard\] \] Per la STL, Parte 1](https://wg21.link/p0600r1) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0653R2 to_address()](https://wg21.link/p0653r2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0754R2 \<version>](https://wg21.link/p0754r2) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0771R1 noexcept per il costruttore di spostamento di std::function](https://wg21.link/P0771R1) | VS 2019 16.2 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0487R1 Correzione di operator>>(basic_istream&, CharT*)](https://wg21.link/P0487R1) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0616R0 Uso di move() in \<numeric>](https://wg21.link/p0616r0) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0758R1 is_nothrow_convertible](https://wg21.link/P0758R1) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0898R3 Concetti della libreria standard](https://wg21.link/P0898R3) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0919R3 Ricerca eterogenea di contenitori non ordinati](https://wg21.link/P0919R3) | VS 2019 16.3 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1754R1 Rinominare i concetti in standard_case](https://wg21.link/P1754R1) | VS 2019 16.4 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0325R4 to_array da LFTS con aggiornamenti](https://wg21.link/P0325R4) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0340R3 underlying_type compatibile con SFINAE](https://wg21.link/P0340R3) | VS 2019 16,5 <sup> [14](#note_14)</sup> |
| &nbsp;&nbsp;[P0356R5 bind_front()](https://wg21.link/P0356R5) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0439R0 enum class memory_order](https://wg21.link/p0439r0) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[Le funzioni di rotazione \<e di conteggio del bit P0553R4>](https://wg21.link/P0553R4) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0556R3 \<bit> ispow2(), ceil2(), floor2(), log2p1()](https://wg21.link/P0556R3) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0595R2 is_constant_evaluated()](https://wg21.link/P0595R2) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[Numeri P0631R8 \<> Costanti matematiche](https://wg21.link/P0631R8) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0738R2 Pulizia di istream_iterator](https://wg21.link/P0738R2) | VS 2019 16,5 <sup> [14](#note_14)</sup> |
| &nbsp;&nbsp;[P0767R1 Deprecamento di is_pod](https://wg21.link/P0767R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0966R1 Non ridurre string::reserve()](https://wg21.link/P0966R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1209R0 erase_if(), erase()](https://wg21.link/P1209R0) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1227R2 std::ssize() con segno, span::size() senza segno](https://wg21.link/P1227R2) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1355R2 Contratto restringito per ceil2()](https://wg21.link/P1355R2) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1357R1 is_bounded_array, is_unbounded_array](https://wg21.link/P1357R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1612R1 Rilocazione endian A \<>](https://wg21.link/P1612R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P1651R0 bind_front() non deve annullare il wrapping reference_wrapper](https://wg21.link/P1651R0) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[Ricerca eterogenea di raffinazione P1690R1 per contenitori non ordinati](https://wg21.link/P1690R1) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[Macro feature-Test mancanti di P1902R1 2017-2019](https://wg21.link/P1902R1) | VS 2019 16,5 <sup> [14](#note_14)</sup> |
| &nbsp;&nbsp;[P0019R8 atomic_ref](https://wg21.link/P0019R8) | No |
| &nbsp;&nbsp;[P0053R7 \<syncstream>](https://wg21.link/p0053r7)<br/>&nbsp;&nbsp;[P0753R2 Modifiche osyncstream](https://wg21.link/p0753r2) | No |
| &nbsp;&nbsp;[P0122R7 \<span>](https://wg21.link/p0122r7) | No |
| &nbsp;&nbsp;[P0202R3 constexpr per \<algorithm> ed exchange()](https://wg21.link/p0202r3) | No |
| &nbsp;&nbsp;[P0339R6 polymorphic_allocator<>](https://wg21.link/P0339R6) | No |
| &nbsp;&nbsp;[P0355R7 \<chrono> per calendari e fusi orario](https://wg21.link/p0355r7) | No |
| &nbsp;&nbsp;[P0357R3 Supporto di tipi incompleti in reference_wrapper](https://wg21.link/P0357R3) | No |
| &nbsp;&nbsp;[P0415R1 constexpr per \<complex> (ripetizione)](https://wg21.link/p0415r1) | No |
| &nbsp;&nbsp;[P0475R1 Elisione copia garantita per una costruzione lineare a tratti](https://wg21.link/P0475R1) | No |
| &nbsp;&nbsp;[P0476R2 \<> bit_cast](https://wg21.link/P0476R2) | No |
| &nbsp;&nbsp;[P0528R3 Confronto e scambio atomico con bit di riempimento](https://wg21.link/P0528R3) | No |
| &nbsp;&nbsp;[P0591R4 Funzioni di utilità per costruzioni uses-allocator](https://wg21.link/P0591R4) | No |
| &nbsp;&nbsp;[P0608R3 Miglioramento del costruttore o dell'assegnazione di conversione della variante](https://wg21.link/P0608R3) | No |
| &nbsp;&nbsp;[P0619R4 Rimozione delle funzionalità deprecate di C++17 in C++20](https://wg21.link/P0619R4) | No |
| &nbsp;&nbsp;[P0653R2 to_address()](https://wg21.link/p0653r2) | No |
| &nbsp;&nbsp;[P0655R1\<visita R>()](https://wg21.link/P0655R1) | No |
| &nbsp;&nbsp;[P0674R1 make_shared() per le matrici](https://wg21.link/p0674r1) | No |
| &nbsp;&nbsp;[P0718R2 atomic\<shared_ptr\<T>>, atomic\<weak_ptr\<T>>](https://wg21.link/p0718r2) | No |
| &nbsp;&nbsp;[Supporto della libreria P0768R1 per l'operatore di confronto delle astronavi\<=>](https://wg21.link/p0768r1) | No |
| &nbsp;&nbsp;[P0811R3 midpoint(), lerp()](https://wg21.link/P0811R3) | No |
| &nbsp;&nbsp;[P0879R0 constexpr per funzioni di scambio](https://wg21.link/P0879R0) | No |
| &nbsp;&nbsp;[P0896R4 \<ranges\>](https://wg21.link/P0896R4) | No |
| &nbsp;&nbsp;[P0912R5 Supporto di libreria per coroutine](https://wg21.link/P0912R5) | No |
| &nbsp;&nbsp;[P0920R2 Ricerca di valori hash precalcolati](https://wg21.link/P0920R2) | No |
| &nbsp;&nbsp;[P0935R0 Eliminazione di costruttori predefiniti inutilmente espliciti](https://wg21.link/P0935R0) | No |
| &nbsp;&nbsp;[P1001R2 execution::unseq](https://wg21.link/P1001R2) | No |
| &nbsp;&nbsp;[P1006R1 constexpr per pointer_traits<T*>::pointer_to()](https://wg21.link/P1006R1) | No |
| &nbsp;&nbsp;[P1007R3 assume_aligned()](https://wg21.link/P1007R3) | No |
| &nbsp;&nbsp;[P1020R1 Creazione di puntatori intelligenti con inizializzazione predefinita](https://wg21.link/P1020R1) | No |
| &nbsp;&nbsp;[P1023R0 constexpr per std::array Comparisons](https://wg21.link/P1023R0) | No |
| &nbsp;&nbsp;[P1032R1 constexpr - Varie](https://wg21.link/P1032R1) | No |
| &nbsp;&nbsp;[P1165R1 Propagazione coerente di allocatori con stato in operator+() di basic_string](https://wg21.link/P1165R1) | No |
| &nbsp;&nbsp;[P1285R0 Miglioramento dei requisiti di completezza per tratti di tipo](https://wg21.link/P1285R0) | No |
| __Funzionalità della libreria standard C++17__ | __Supportato__ |
| &nbsp;&nbsp;[LWG 2221 Operatore di output formattato per nullptr](https://cplusplus.github.io/LWG/issue2221) | VS 2019 16.1 |
| &nbsp;&nbsp;[N3911 void_t](https://wg21.link/n3911) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4089 Conversioni sicure in unique_ptr\<T[]>](https://wg21.link/n4089) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4169 invoke()](https://wg21.link/n4169) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4190 Rimozione auto_ptr, random_shuffle() ed elementi \<functional> precedenti](https://wg21.link/n4190) | VS 2015 <sup>[rem](#note_rem)</sup> |
| &nbsp;&nbsp;[N4258 Pulizia noexcept](https://wg21.link/n4258) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4259 uncaught_exceptions()](https://wg21.link/n4259) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4277 reference_wrapper facilmente copiabile](https://wg21.link/n4277) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4279 insert_or_assign()/try_emplace() per map/unordered_map](https://wg21.link/n4279) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4280 size(), empty(), data()](https://wg21.link/n4280) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4366 Assegnazione unique_ptr vincolata con precisione](https://wg21.link/n4366) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4387 Ottimizzazione di pair e tuple](https://wg21.link/n4387) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4389 bool_constant](https://wg21.link/n4389) | VS 2015 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4508 shared_mutex (non temporizzata)](https://wg21.link/n4508) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4510 Supporto tipi incompleti in vector/list/forward_list](https://wg21.link/n4510) | VS 2013 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<algorithm> sample()](https://wg21.link/n4562#alg.random.sample) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<any>](https://wg21.link/n4562#any) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<memory_resource >](https://wg21.link/n4562#memory.resource.synop)<br/>&nbsp;&nbsp;[P0337R0 Eliminazione assegnazione di polymorphic_allocator](https://wg21.link/p0337r0) | VS 2017 15.6 |
| &nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<optional>](https://wg21.link/n4562#optional) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<string_view>](https://wg21.link/n4562#string.view) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<tuple> apply()](https://wg21.link/n4562#tuple) | VS 2017 15.0 |
| &nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: ricerca di Boyer-Moore()](https://wg21.link/n4562#func.searchers.boyer_moore)<br/>&nbsp;&nbsp;[P0253R1 Correzione dei tipi restituiti dal servizio di ricerca](https://wg21.link/p0253r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0003R5 Rimozione specifiche di eccezione dinamiche](https://wg21.link/p0003r5) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0004R1 Rimozione di alias iostream deprecati](https://wg21.link/p0004r1) | VS 2015.2 <sup>[rem](#note_rem)</sup> |
| &nbsp;&nbsp;[P0005R4 not_fn()](https://wg21.link/p0005r4)<br/>&nbsp;&nbsp;[P0358R1 Correzioni per not_fn()](https://wg21.link/p0358r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0006R0 Modelli di variabile per tratti di tipo (is_same_v e altri)](https://wg21.link/p0006r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0007R1 as_const()](https://wg21.link/p0007r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0013R1 Tratti di tipo operatore logico (conjunction e altri)](https://wg21.link/p0013r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0024R2 Algoritmi paralleli](https://wg21.link/p0024r2)<br/>&nbsp;&nbsp;[P0336R1 Ridenominazione dei criteri di esecuzione parallela](https://wg21.link/p0336r1)<br/>&nbsp;&nbsp;[P0394R4 Algoritmi paralleli devono avere terminate() per le eccezioni](https://wg21.link/p0394r4)<br/>&nbsp;&nbsp;[P0452R1 Unificazione degli \<algoritmi numerici> paralleli](https://wg21.link/p0452r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0025R1 clamp()](https://wg21.link/p0025r1) | VS 2015.3 |
| &nbsp;&nbsp;[P0030R1 hypot (x, y, z)](https://wg21.link/p0030r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0031R0 constexpr per \<array> (nuovamente) e \<iterator>](https://wg21.link/p0031r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0032R3 Interfaccia omogenea per variant/any/optional](https://wg21.link/p0032r3) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0033R1 Ridefinizione di enable_shared_from_this](https://wg21.link/p0033r1) | VS 2017 15.5 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0040R3 Estensione degli strumenti di gestione della memoria](https://wg21.link/p0040r3) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0063R3 Libreria Standard C11](https://wg21.link/p0063r3) | VS 2015 <sup>[C11](#note_C11), [14](#note_14)</sup> |
| &nbsp;&nbsp;[P0067R5 Conversioni di stringhe elementari](https://wg21.link/p0067r5) | VS 2019 16,4 <sup> [charconv](#note_charconv)</sup> |
| &nbsp;&nbsp;[owner_less P0074R0\<>](https://wg21.link/p0074r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0077R2 is_callable, is_nothrow_callable](https://wg21.link/p0077r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0083R3 Splicing mappe e set](https://wg21.link/p0083r3)<br/>&nbsp;&nbsp;[P0508R0 Chiarimento di insert_return_type](https://wg21.link/p0508r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0084R2 Tipo restituito emplace](https://wg21.link/p0084r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0088R3 \<variant>](https://wg21.link/p0088r3) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0092R1 \<chrono> floor(), ceil(), round(), abs()](https://wg21.link/p0092r1) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0152R1 atomic::is_always_lock_free](https://wg21.link/p0152r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0154R1 hardware_destructive_interference_size e altre](https://wg21.link/p0154r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0156R0 Variadic lock_guard](https://wg21.link/p0156r0) | VS 2015.2 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0156R2 Ridenominazione della funzione variadic lock\_guard come scoped\_lock](https://wg21.link/p0156r2) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0163R0 shared_ptr::weak_type](https://wg21.link/p0163r0) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0174R2 Deprecazione di parti superflue della libreria](https://wg21.link/p0174r2) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0185R1 is_swappable, is_nothrow_swappable](https://wg21.link/p0185r1) | VS 2015.3 |
| &nbsp;&nbsp;[P0209R2 make_from_tuple()](https://wg21.link/p0209r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0218R1 \<filesystem >](https://wg21.link/p0218r1)<br/>&nbsp;&nbsp;[P0219R1 Percorsi relativi per file system](https://wg21.link/p0219r1)<br/>&nbsp;&nbsp;[P0317R1 Memorizzazione nella cache della voce di directory per file sytem](https://wg21.link/p0317r1)<br/>&nbsp;&nbsp;[P0392R0 Supporto string_view nei percorsi del file system](https://wg21.link/p0392r0)<br/>&nbsp;&nbsp;[P0430R2 supporto di file system non POSIX](https://wg21.link/p0430r2)<br/>&nbsp;&nbsp;[P0492R2 Risoluzione dei commenti NB per file system](https://wg21.link/p0492r2) | VS 2017 15.7 <sup>[E](#note_E)</sup> |
| &nbsp;&nbsp;[P0220R1 Library Fundamentals V1](https://wg21.link/p0220r1) | VS 2017 15.6 |
| &nbsp;&nbsp;[P0226R1 Funzioni matematiche speciali](https://wg21.link/p0226r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0254R2 Integrazione di string_view e std::string](https://wg21.link/p0254r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0258R2 has_unique_object_representations](https://wg21.link/p0258r2) | VS 2017 15.3 <sup>[G](#note_G)</sup> |
| &nbsp;&nbsp;[P0272R1 basic_string::data() non-const](https://wg21.link/p0272r1) | VS 2015.3 |
| &nbsp;&nbsp;[P0295R0 gcd(), lcm()](https://wg21.link/p0295r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0298R3 std::byte](https://wg21.link/p0298r3) | VS 2017 15.3 <sup>[17](#note_17),&nbsp;[byte](#note_byte)</sup> |
| &nbsp;&nbsp;[P0302R1 Rimozione supporto allocatore in std::function](https://wg21.link/p0302r1) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0307R2 Rendere nuovamente facoltativo maggiore o uguale](https://wg21.link/p0307r2) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0393R3 Rendere maggiore o uguale come variante](https://wg21.link/p0393r3) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0403R1 UDL per \<string_view> ("meow"sv e così via)](https://wg21.link/p0403r1) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0414R2 shared_ptr\<T[]>, shared_ptr\<T[N]>](https://wg21.link/p0414r2)<br/>&nbsp;&nbsp;[P0497R0 Correzione shared_ptr per matrici](https://wg21.link/p0497r0) | VS 2017 15.5 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0418R2 Requisiti per atomic compare_exchange memory_order](https://wg21.link/p0418r2) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0426R1 Constexpr per char_traits](https://wg21.link/p0426r1) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0433R2 Integrazione della deduzione del modello per i modelli di classe nella libreria standard](https://wg21.link/p0433r2)<br/>&nbsp;&nbsp;[P0739R0 Miglioramento dell'integrazione della deduzione degli argomenti dei modelli di classe nella libreria standard](https://wg21.link/p0739r0) | VS 2017 15.7 |
| &nbsp;&nbsp;[P0435R1 Revisione di common_type](https://wg21.link/p0435r1)<br/>&nbsp;&nbsp;[P0548R1 Tweaking\_tipo comune e durata](https://wg21.link/p0548r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0504R0 Revisione in_place_t/in_place_type_t\<T>/in_place_index_t\<I>](https://wg21.link/p0504r0) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0505R0 constexpr per \<chrono > (nuovamente)](https://wg21.link/p0505r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0510R0 Rifiuto delle varianti di niente, matrici, riferimenti e tipi incompleti](https://wg21.link/p0510r0) | VS 2017 15.0 |
| &nbsp;&nbsp;[P0513R0 Hash di poisoning](https://wg21.link/p0513r0)<br/>&nbsp;&nbsp;[P0599R1 noexcept hash](https://wg21.link/p0599r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0516R0 Contrassegno copia di shared_future come noexcept](https://wg21.link/p0516r0) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0517R0 Costruzione di future_error da future_errc](https://wg21.link/p0517r0) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0521R0 Deprecazione di shared_ptr::unique()](https://wg21.link/p0521r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0558R1 Risoluzione delle incoerenze della classe di base con nome atomic\<T>](https://wg21.link/p0558r1) | VS 2017 15.3 <sup>[14](#note_14)</sup> |
| &nbsp;&nbsp;[P0595R2 std::is_constant_evaluated()](https://wg21.link/P0595R2) | VS 2019 16,5 <sup> [20](#note_20)</sup> |
| &nbsp;&nbsp;[P0602R4 Propagazione della semplicità di copia/spostamento in variant/optional](https://wg21.link/P0602R4) | VS 2017 15.3<sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0604R0 Modifica di is\_callable/result\_of in invoke\_result, is\_invocable, is\_nothrow\_invocable](https://wg21.link/p0604r0) | VS 2017 15.3 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0607R0 Variabili inline per la libreria standard](https://wg21.link/p0607r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0618R0>\<di codecvt di deprecazione](https://wg21.link/p0618r0) | VS 2017 15.5 <sup>[17](#note_17)</sup> |
| &nbsp;&nbsp;[P0682R1 Ripristino delle conversioni di stringhe elementari](https://wg21.link/P0682R1) | VS 2015 15.7 <sup>[17](#note_17)</sup> |
| __Funzionalità della libreria standard C++14__ | __Supportato__ |
| &nbsp;&nbsp;[N3462 result_of adatto a SFINAE](https://wg21.link/n3462) | VS 2015.2 |
| &nbsp;&nbsp;[N3302 constexpr per \<complex>](https://wg21.link/n3302) | VS 2015 |
| &nbsp;&nbsp;[N3469 constexpr per \<chrono>](https://wg21.link/n3469) | VS 2015 |
| &nbsp;&nbsp;[N3470 constexpr per \<array>](https://wg21.link/n3470) | VS 2015 |
| &nbsp;&nbsp;[N3471 constexpr per \<initializer_list>, \<tuple>, \<utility>](https://wg21.link/n3471) | VS 2015 |
| &nbsp;&nbsp;[N3545 integral_constant::operator()()](https://wg21.link/n3545) | VS 2015 |
| &nbsp;&nbsp;[N3642 UDL per \<chrono>, \<string> (1729ms, "meow"s e altri)](https://wg21.link/n3642) | VS 2015 |
| &nbsp;&nbsp;[N3644 Iteratori in avanti Null](https://wg21.link/n3644) | VS 2015 |
| &nbsp;&nbsp;[N3654 quoted()](https://wg21.link/n3654) | VS 2015 |
| &nbsp;&nbsp;[N3657 Ricerca eterogenea di associativi](https://wg21.link/n3657) | VS 2015 |
| &nbsp;&nbsp;[N3658 integer_sequence](https://wg21.link/n3658) | VS 2015 |
| &nbsp;&nbsp;[N3659 shared_mutex (temporizzata)](https://wg21.link/n3659) | VS 2015 |
| &nbsp;&nbsp;[N3668 exchange()](https://wg21.link/n3668) | VS 2015 |
| &nbsp;&nbsp;[N3669 Correzione funzioni membro constexpr senza const](https://wg21.link/n3669) | VS 2015 |
| &nbsp;&nbsp;[N3670 get\<T>()](https://wg21.link/n3670) | VS 2015 |
| &nbsp;&nbsp;[N3671 equal(), is_permutation(), mismatch() a doppio intervallo](https://wg21.link/n3671) | VS 2015 |
| &nbsp;&nbsp;[N3778 Dimension Deallocation](https://wg21.link/n3778) | VS 2015 |
| &nbsp;&nbsp;[N3779 UDL per \<complex> (3.14i e altri)](https://wg21.link/n3779) | VS 2015 |
| &nbsp;&nbsp;[N3789 constexpr per \<functional>](https://wg21.link/n3789) | VS 2015 |
| &nbsp;&nbsp;[N3887 tuple_element_t](https://wg21.link/n3887) | VS 2015 |
| &nbsp;&nbsp;[N3891 Ridenominazione di shared_mutex (temporizzata) in shared_timed_mutex](https://wg21.link/n3891) | VS 2015 |
| &nbsp;&nbsp;[N3346 Requisiti minimi elemento contenitore](https://wg21.link/n3346) | Visual Studio 2013 |
| &nbsp;&nbsp;[N3421 Funtori di operatori trasparenti (less\<> e altri)](https://wg21.link/n3421) | Visual Studio 2013 |
| &nbsp;&nbsp;[N3655 Modelli di alias per \<type_traits> (decay_t e altri)](https://wg21.link/n3655) | Visual Studio 2013 |
| &nbsp;&nbsp;[N3656 make_unique()](https://wg21.link/n3656) | Visual Studio 2013 |

Un gruppo di documenti elencati insieme indica una funzione Standard insieme a uno o più miglioramenti o espansioni approvati. Queste funzionalità vengono implementate insieme.

### <a name="supported-values"></a>Valori supportati

__No__ significa non ancora implementato.
__Parziale__ significa che l'implementazione è incompleta. Per ulteriori informazioni, vedere la sezione Note.
__VS 2010__ indica le funzionalità supportate in Visual Studio 2010.
__VS 2013__ indica le funzionalità supportate in Visual Studio 2013.
__VS 2015__ indica le funzionalità supportate in Visual Studio 2015 (RTW).
__VS 2015.2__ e __VS 2015.3__ indicano funzionalità supportate in Visual Studio 2015 Update 2 e Visual Studio 2015 Update 3, rispettivamente.
__VS 2017 15.0__ indica le funzionalità supportate in Visual Studio 2017 versione 15.0 (RTW).
__VS 2017 15.3__ indica le funzionalità supportate in Visual Studio 2017 versione 15.3.
__VS 2017 15.5__ indica le funzionalità supportate in Visual Studio 2017 versione 15.5.
__VS 2017 15.7__ indica le funzionalità supportate in Visual Studio 2017 versione 15.7.
__VS 2019 16.0__ indica le funzionalità supportate in Visual Studio 2019 versione 16.0 (RTW).
__VS 2019 16.1__ indica le funzionalità supportate in Visual Studio 2019 versione 16.1.
__VS 2019 16.2__ indica le funzionalità supportate in Visual Studio 2019 versione 16.2.
__VS 2019 16.3__ indica le funzionalità supportate in Visual Studio 2019 versione 16.3.
__VS 2019 16.4__ indica le funzionalità supportate in Visual Studio 2019 versione 16.4.
__VS 2019 16.5__ indica le funzionalità supportate in Visual Studio 2019 versione 16.5.

### <a name="notes"></a>Note

<a name="note_A"></a> __A__ Nella modalità [/std:c++14](../build/reference/std-specify-language-standard-version.md) le specifiche di eccezione dinamiche non vengono implementate e `throw()` viene ancora considerato come sinonimo di `__declspec(nothrow)`. In C++17 le specifiche di eccezione dinamiche sono state per lo più rimosse da P0003R5. Vestige: `throw()` viene deprecato e si comporta come sinonimo di `noexcept`. In modalità [/std:c'17,](../build/reference/std-specify-language-standard-version.md) MSVC è ora `throw()` conforme allo `noexcept`standard assegnando lo stesso comportamento di , ovvero l'imposizione tramite terminazione.

L'opzione del compilatore [/Zc:noexceptTypes](../build/reference/zc-noexcepttypes.md) richiede il comportamento precedente di `__declspec(nothrow)`. È probabile che `throw()` venga rimosso in C. Per agevolare la migrazione del codice in risposta a queste modifiche nello standard e nell'implementazione Microsoft, sono stati aggiunti nuovi avvisi del compilatore per problemi relativi alle specifiche di eccezione in [/std:c++17](../build/reference/std-specify-language-standard-version.md) e [/permissive-](../build/reference/permissive-standards-conformance.md).

<a name="note_B"></a> __B__ Supporto nella modalità [/permissive-](../build/reference/permissive-standards-conformance.md) in Visual Studio 2017 versione 15.7. Per ulteriori informazioni, vedere Supporto per la ricerca di [nomi in due fasi viene fornito a MSVC](https://devblogs.microsoft.com/cppblog/two-phase-name-lookup-support-comes-to-msvc/).

<a name="note_C"></a>__C__ Il supporto del compilatore per le regole del preprocessore C99 è incompleto in Visual Studio 2017. Stiamo riportando il preprocessore e abbiamo iniziato a spedire tali modifiche in Visual Studio 2017 versione 15.8 con l'opzione del compilatore [/experimental:preprocessore.](../build/reference/experimental-preprocessor.md)

<a name="note_D"></a> __D__ Supporto disponibile in [/std:c++14](../build/reference/std-specify-language-standard-version.md) con un messaggio di avviso che può essere rimosso, [C4984](../error-messages/compiler-warnings/compiler-warning-c4984.md).

<a name="note_E"></a>__E__ Si tratta di un'implementazione del tutto `std::experimental` nuova, incompatibile con la versione precedente, resa necessaria dal supporto di symlink, dalle correzioni di bug e dalle modifiche apportate al comportamento richiesto dallo standard. Attualmente, con \<filesystem > sono inclusi il nuovo `std::experimental::filesystem` e il precedente \<. Con `std::filesystem`experimental/filesystem> è inclusa solo la precedente implementazione sperimentale. L'implementazione sperimentale sarà RIMOSSA nella prossima versione delle librerie con modifiche di rilievo per l'ABI.

<a name="note_G"></a> __G__ Funzionalità supportata da una funzione intrinseca del compilatore.

<a name="note_14"></a> __14__ Queste funzionalità C++ 17/20 sono sempre abilitate, anche quando si specifica [/std:c + + 14](../build/reference/std-specify-language-standard-version.md) (impostazione predefinita). Il motivo è perché la funzionalità è stata implementata prima dell'introduzione delle opzioni **/std** o perché l'implementazione condizionale era indesiderabile complessa.

<a name="note_17"></a> __17__ Queste funzionalità sono abilitate da [/std:c++17](../build/reference/std-specify-language-standard-version.md) (o dall'opzione del compilatore [/std:c++latest](../build/reference/std-specify-language-standard-version.md)).

<a name="note_20"></a> __20__ Queste funzionalità sono abilitate dall'opzione del compilatore [/std:c++latest](../build/reference/std-specify-language-standard-version.md). Quando l'implementazione di C++20 sarà stata completata, verrà aggiunta una nuova opzione del compilatore **/std:c++20** che includerà anche queste funzionalità.

<a name="note_byte"></a> __byte__ `std::byte` è abilitato da [/std:c++17](../build/reference/std-specify-language-standard-version.md) (o [/std:c++latest](../build/reference/std-specify-language-standard-version.md)), ma poiché è in conflitto con le intestazioni di Windows SDK in alcuni casi, dispone di una macro dettagliata per il rifiuto esplicito. Può essere disabilitato definendo `_HAS_STD_BYTE` come `0`.

<a name="note_C11"></a> __C11__ La libreria CRT universale ha implementato le parti della libreria standard C11 richieste da C++ 17, fatta eccezione per gli identificatori di conversione alternativa E/O `strftime()` C99, `fopen()` in modalità esclusiva C11 e `aligned_alloc()` C11. Quest'ultimo è improbabile che venga implementato, perché C11 specificato `aligned_alloc()` in un `free()`modo che è `free()` incompatibile con l'implementazione Microsoft di : vale a dire, che deve essere in grado di gestire allocazioni altamente allineate.

<a name="note_rem"></a> __rem__ Funzionalità rimosse quando si specifica l'opzione del compilatore [/std:c++17](../build/reference/std-specify-language-standard-version.md) (o [/std:c++latest](../build/reference/std-specify-language-standard-version.md)). Queste funzionalità possono essere riabilitate per facilitare la transizione a modalità di linguaggio più recenti mediante l'uso di queste macro: `_HAS_AUTO_PTR_ETC`, `_HAS_FUNCTION_ALLOCATOR_SUPPORT`, `_HAS_OLD_IOSTREAMS_MEMBERS`e `_HAS_UNEXPECTED`.

<a name="note_charconv"></a> __charconv__ `from_chars()` e `to_chars()` sono disponibili per gli interi. La sequenza temporale per `from_chars()` a virgola mobile e `to_chars()` a virgola mobile è la seguente:

- VS 2017 15.7: Numero intero `from_chars()` e `to_chars()`.
- VS 2017 15.8: `from_chars()`virgola mobile .
- VS 2017 15.9: `to_chars()` overload a virgola mobile per il decimale più breve.
- VS 2019 16.0: `to_chars()` Overload a virgola mobile per esagono più breve ed esadecimale di precisione.
- VS 2019 16.2: `to_chars()` Overload a virgola mobile per la precisione scientifica fissa e di precisione.
- VS 2019 16.4: L'overload a `to_chars()` virgola mobile per la precisione generale.

<a name ="note_parallel"></a>__parallelo__ La libreria di algoritmi paralleli di C.17 è stata completata. Completa non significa che ogni algoritmo sia parallelizzato in ogni caso. Gli algoritmi più importanti sono stati parallelizzati e le firme dei criteri di esecuzione vengono fornite anche quando gli algoritmi non sono parallelizzati. L'intestazione interna centrale della nostra implementazione, yvals_core.h, contiene le seguenti "Note degli algoritmi paralleli": C' consente a un'implementazione di implementare algoritmi paralleli come chiamate agli algoritmi seriali. Con questa implementazione è possibile eseguire la parallelizzazione di diverse chiamate di algoritmi comuni, ma non di tutti.

Vengono parallelizzati gli algoritmi seguenti:

- `adjacent_difference`, `adjacent_find`, `all_of`, `any_of`, `count`, `count_if`, `equal`, `exclusive_scan`, `find`, `find_end`, `find_first_of`, `find_if`, `find_if_not`, `for_each`, `for_each_n`, `inclusive_scan`, `is_heap`, `is_heap_until`, `is_partitioned`, `is_sorted`, `is_sorted_until`, `mismatch`, `none_of`, `partition`, `reduce`, `remove`, `remove_if`, `replace`, `replace_if`, `search`, `search_n`, `set_difference`, `set_intersection`, `sort`, `stable_sort`, `transform`, `transform_exclusive_scan`, `transform_inclusive_scan`, `transform_reduce`

I seguenti elementi non sono attualmente parallelizzati:

- Nessun miglioramento evidente delle prestazioni del parallelismo sull'hardware di destinazione; tutti gli algoritmi che copiano o permutano semplicemente gli elementi senza rami sono in genere limitati nella larghezza di banda della memoria:All algorithms that rely copy or permute elements with no branches are typically memory bandwidth limited:
  - `copy`, `copy_n`, `fill`, `fill_n`, `move`, `reverse`, `reverse_copy`, `rotate`, `rotate_copy`, `shift_left`, `shift_right`, `swap_ranges`
- Esiste confusione sui requisiti di parallelismo utente, probabilmente anche nella categoria precedente:
  - `generate`, `generate_n`
- Parallelismo efficace che si ritiene irrealizzabile:
  - `partial_sort`, `partial_sort_copy`
- Non ancora valutato. Il parallelismo potrà essere implementato in una versione futura e rivelarsi utile:
  - `copy_if`, `includes`, `inplace_merge`, `lexicographical_compare`, `max_element`, `merge`, `min_element`, `minmax_element`, `nth_element`, `partition_copy`, `remove_copy`, `remove_copy_if`, `replace_copy`, `replace_copy_if`, `set_symmetric_difference`, `set_union`, `stable_partition`, `unique`, `unique_copy`

## <a name="see-also"></a>Vedere anche

[Guida di riferimento al linguaggio C](../cpp/cpp-language-reference.md)\
[Libreria standard di C](../standard-library/cpp-standard-library-reference.md)\
[Miglioramenti della conformità in C.](cpp-conformance-improvements.md)\
[Novità per Visual C](what-s-new-for-visual-cpp-in-visual-studio.md)\
[Cronologia delle modifiche di Visual C, dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md)\
[Novità dal 2003 al 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md)\
[Blog del team di C](https://devblogs.microsoft.com/cppblog/)
