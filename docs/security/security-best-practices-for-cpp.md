---
title: Procedure di sicurezza consigliate per C++
ms.date: 05/08/2018
f1_keywords:
- securitybestpracticesVC
helpviewer_keywords:
- Visual C++, security
- security [C++]
- security [C++], best practices
ms.assetid: 86acaccf-cdb4-4517-bd58-553618e3ec42
ms.openlocfilehash: 63c5567cf1b06d52aa4b458a9ca127039e5c5daf
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499595"
---
# <a name="security-best-practices-for-c"></a>Procedure di sicurezza consigliate per C++

Questo articolo contiene informazioni su strumenti e procedure di sicurezza. Il loro uso non rende le applicazioni immuni da attacchi, ma riduce le probabilità che un attacco abbia successo.

## <a name="visual-c-security-features"></a>Funzionalità di sicurezza di Visual C++

Queste funzionalità di sicurezza sono incorporate nel compilatore e nel linker di Microsoft C++:

[`/guard` (Abilita Guard flusso di controllo)](../build/reference/guard-enable-control-flow-guard.md)<br/>
Fa in modo che il compilatore analizzi il flusso di controllo per le destinazioni di chiamata indirette in fase di compilazione e quindi per inserire il codice per verificare le destinazioni in fase di esecuzione.

[`/GS` (Controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md)<br/>
Indica al compilatore di inserire il codice di rilevamento di sovraccarico nelle funzioni esposte al rischio di exploit. Quando viene rilevato un sovraccarico, l'esecuzione viene interrotta. Per impostazione predefinita, questa opzione è attivata.

[`/SAFESEH` (L'immagine ha gestori delle eccezioni sicuri)](../build/reference/safeseh-image-has-safe-exception-handlers.md)<br/>
Indica al linker di includere nell'immagine di output una tabella contenente l'indirizzo di ogni gestore di eccezioni. In fase di esecuzione, il sistema operativo usa la tabella per verificare che vengano eseguiti solo i gestori di eccezione legittimi. Questo consente di evitare l'esecuzione di gestori di eccezione introdotti da un attacco dannoso in fase di esecuzione. Per impostazione predefinita, questa opzione è impostata su OFF.

[`/NXCOMPAT`](../build/reference/nxcompat.md), [ `/NXCOMPAT` (Compatibile con protezione esecuzione programmi)](../build/reference/nxcompat-compatible-with-data-execution-prevention.md) queste opzioni del compilatore e del linker abilitano la compatibilità DEP (Data Execution Prevention). Protezione esecuzione programmi protegge la CPU dall'esecuzione di pagine non di codice.

[`/analyze` (Analisi codice)](../build/reference/analyze-code-analysis.md)<br/>
Questa opzione del compilatore attiva l'analisi codice che segnala i potenziali problemi di sicurezza, ad esempio sovraccarico del buffer, memoria non inizializzata, dereferenziazione puntatore Null e perdite di memoria. Per impostazione predefinita, questa opzione è impostata su OFF. Per ulteriori informazioni, vedere [Cenni preliminari sull'analisi del codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md).

[`/DYNAMICBASE` (Usare la sequenza casuale del layout dello spazio degli indirizzi)](../build/reference/dynamicbase-use-address-space-layout-randomization.md)<br/>
Questa opzione del linker consente la compilazione di un'immagine eseguibile che può essere caricata in posizioni diverse in memoria all'inizio dell'esecuzione. Questa opzione rende inoltre il percorso dello stack in memoria molto meno prevedibile.

## <a name="security-enhanced-crt"></a>CRT con sicurezza avanzata

La libreria di runtime C (CRT) è stata ampliata per poter includere le versioni sicure delle funzioni che comportano rischi per la sicurezza, ad esempio la funzione di copia stringa `strcpy` non controllata. Le versioni precedenti non sicure di queste funzioni, essendo deprecate, generano avvisi in fase di compilazione. Si consiglia di usare le versioni sicure di queste funzioni CRT invece di eliminare gli avvisi di compilazione. Per altre informazioni, vedere [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md) (Funzionalità di sicurezza in CRT).

## <a name="safeint-library"></a>Libreria SafeInt

La [libreria SafeInt](../safeint/safeint-library.md) consente di evitare overflow di Integer e altri errori sfruttabili che possono verificarsi quando l'applicazione esegue operazioni matematiche. La `SafeInt` libreria include la [classe SafeInt](../safeint/safeint-class.md), la [Classe SafeIntException](../safeint/safeintexception-class.md)e diverse [Funzioni SafeInt](../safeint/safeint-functions.md).

La classe `SafeInt` protegge da exploit basati sugli overflow di Integer e sulle divisioni per zero. È possibile usarla per gestire i confronti tra valori di tipi diversi. Fornisce due criteri di gestione degli errori. Il criterio predefinito è per la classe `SafeInt` che genera un'eccezione della classe `SafeIntException` che segnala perché un'operazione matematica non può essere completata. Il secondo criterio è per la classe `SafeInt` che interrompe l'esecuzione del programma. È inoltre possibile definire un criterio personalizzato.

Ogni funzione `SafeInt` protegge un'operazione matematica da un errore sfruttabile. È possibile usare due diversi generi di parametri senza convertirli nello stesso tipo. Per proteggere più operazioni matematiche, usare la classe `SafeInt`.

## <a name="checked-iterators"></a>Checked Iterators

Un iteratore verificato applica i limiti del contenitore. Per impostazione predefinita, quando un iteratore verificato è fuori limite, genera un'eccezione e termina l'esecuzione del programma. Un iteratore verificato fornisce altri livelli di risposta che dipendono dai valori assegnati alle definizioni del preprocessore, ad esempio `_SECURE_SCL_THROWS` e `_ITERATOR_DEBUG_LEVEL` . Ad esempio, in `_ITERATOR_DEBUG_LEVEL=2` un iteratore verificato fornisce controlli di correttezza completi in modalità di debug, resi disponibili tramite asserzioni. Per ulteriori informazioni, vedere [iteratori verificati](../standard-library/checked-iterators.md) e [`_ITERATOR_DEBUG_LEVEL`](../standard-library/iterator-debug-level.md) .

## <a name="code-analysis-for-managed-code"></a>Analisi del codice gestito

L'analisi del codice gestito, nota anche come FxCop, controlla la conformità degli assembly alle linee guida di progettazione di .NET Framework. FxCop analizza il codice e i metadati in ogni assembly per verificare la presenza di difetti nelle aree seguenti:

- Progettazione di librerie

- Localizzazione

- Convenzioni di denominazione

- Prestazioni

- Sicurezza

## <a name="windows-application-verifier"></a>Windows Application Verifier

Il [Application Verifier (AppVerifier)](/windows-hardware/drivers/debugger/enable-application-verifier) consente di identificare i potenziali problemi di compatibilità, stabilità e protezione delle applicazioni.

AppVerifier monitora come un'applicazione usa il sistema operativo. Controlla il file system, il Registro di sistema, la memoria e le API mentre l'applicazione è in esecuzione e suggerisce le correzioni del codice sorgente per i problemi rilevati.

È possibile usare AppVerifier per:

- Testare i potenziali errori di compatibilità delle applicazioni causati da comuni sbagli commessi durante la programmazione.

- Cercare in un'applicazione problemi relativi alla memoria.

- Identificare potenziali problemi di sicurezza in un'applicazione.

## <a name="windows-user-accounts"></a>Account utente di Windows

L'uso di account utente di Windows appartenenti al gruppo Administrators espone gli sviluppatori e, per estensione, i clienti a rischi per la sicurezza. Per ulteriori informazioni, vedere [esecuzione come membro del gruppo Users](running-as-a-member-of-the-users-group.md) e il [modo in cui il controllo dell'account utente influisca sull'applicazione](how-user-account-control-uac-affects-your-application.md).

## <a name="guidance-for-speculative-execution-side-channels"></a>Linee guida per i canali laterali di esecuzione speculativa

Per informazioni su come identificare e mitigare le vulnerabilità hardware del canale laterale per l'esecuzione speculativa nel software C++, vedere [linee guida per sviluppatori c++ per i canali laterali di esecuzione speculativa](developer-guidance-speculative-execution.md).

## <a name="see-also"></a>Vedere anche

<xref:System.Security> <br/>
[Sicurezza](/dotnet/standard/security/index)<br/>
[Effetti del controllo dell'account utente sull'applicazione](how-user-account-control-uac-affects-your-application.md)
