---
title: "Procedure di sicurezza consigliate per C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "securitybestpracticesVC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sicurezza [C++]"
  - "sicurezza [C++], procedure ottimali"
  - "Visual C++, sicurezza"
ms.assetid: 86acaccf-cdb4-4517-bd58-553618e3ec42
caps.latest.revision: 45
caps.handback.revision: 45
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Procedure di sicurezza consigliate per C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo contiene informazioni su strumenti e procedure di sicurezza.  Il loro uso non rende le applicazioni immuni da attacchi, ma riduce le probabilità che un attacco abbia successo.  
  
## Funzionalità di sicurezza di Visual C\+\+  
 Queste funzionalità di sicurezza sono incluse nel compilatore e nel linker di Visual C\+\+:  
  
 [\/guard \(abilita la protezione del flusso di controllo\)](../build/reference/guard-enable-control-flow-guard.md)  
 Fa in modo che il compilatore analizzi il flusso di controllo per verificare la presenza di destinazioni di chiamata indiretta in fase di compilazione e che quindi inserisca il codice per verificare le destinazioni in fase di esecuzione.  
  
 [\/GS \(Controllo sicurezza buffer\)](../build/reference/gs-buffer-security-check.md)  
 Indica al compilatore di inserire il codice di rilevamento di sovraccarico nelle funzioni esposte al rischio di exploit.  Quando viene rilevato un sovraccarico, l'esecuzione viene interrotta.  Per impostazione predefinita, questa opzione è attivata.  
  
 [\/SAFESEH \(L'immagine ha gestori delle eccezioni sicuri\)](../build/reference/safeseh-image-has-safe-exception-handlers.md)  
 Indica al linker di includere nell'immagine di output una tabella contenente l'indirizzo di ogni gestore di eccezioni.  In fase di esecuzione, il sistema operativo usa la tabella per verificare che vengano eseguiti solo i gestori di eccezione legittimi.  Questo consente di evitare l'esecuzione di gestori di eccezione introdotti da un attacco dannoso in fase di esecuzione.  Per impostazione predefinita, questa opzione è impostata su OFF.  
  
 [\/NXCOMPAT](../build/reference/nxcompat.md), [\/NXCOMPAT \(compatibile con Protezione esecuzione programmi\)](../build/reference/nxcompat-compatible-with-data-execution-prevention.md)  
 Queste opzioni del compilatore e del linker consentono la compatibilità con Protezione esecuzione programmi.  Protezione esecuzione programmi protegge la CPU dall'esecuzione di pagine non di codice.  
  
 [\/analyze \(Analisi codice\)](../build/reference/analyze-code-analysis.md)  
 Questa opzione del compilatore attiva l'analisi codice che segnala i potenziali problemi di sicurezza, ad esempio sovraccarico del buffer, memoria non inizializzata, dereferenziazione puntatore Null e perdite di memoria.  Per impostazione predefinita, questa opzione è impostata su OFF.  Per altre informazioni, vedere [Cenni preliminari sull'analisi del codice per C\/C\+\+](../Topic/Code%20Analysis%20for%20C-C++%20Overview.md).  
  
 [\/DYNAMICBASE \(utilizzo della funzionalità ASLR\)](../build/reference/dynamicbase-use-address-space-layout-randomization.md)  
 Questa opzione del linker consente la compilazione di un'immagine eseguibile che può essere caricata in posizioni diverse in memoria all'inizio dell'esecuzione.  Questa opzione rende inoltre il percorso dello stack in memoria molto meno prevedibile.  
  
## CRT con sicurezza avanzata  
 La libreria di runtime C \(CRT\) è stata ampliata per poter includere le versioni sicure delle funzioni che comportano rischi per la sicurezza, ad esempio la funzione di copia stringa `strcpy` non controllata.  Le versioni precedenti non sicure di queste funzioni, essendo deprecate, generano avvisi in fase di compilazione.  Si consiglia di usare le versioni sicure di queste funzioni CRT invece di eliminare gli avvisi di compilazione.  Per altre informazioni, vedere [Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md).  
  
## Libreria SafeInt  
 [Libreria SafeInt](../windows/safeint-library.md) impedisce gli overflow di Integer e altri errori sfruttabili che possono verificarsi quando l'applicazione esegue operazioni matematiche.  La libreria `SafeInt` include la [Classe SafeInt](../windows/safeint-class.md), la [Classe SafeIntException](../windows/safeintexception-class.md) e diverse [Funzioni SafeInt](../windows/safeint-functions.md).  
  
 La classe `SafeInt` protegge da exploit basati sugli overflow di Integer e sulle divisioni per zero.  È possibile usarla per gestire i confronti tra valori di tipi diversi.  Fornisce due criteri di gestione degli errori.  Il criterio predefinito è per la classe `SafeInt` che genera un'eccezione della classe `SafeIntException` che segnala perché un'operazione matematica non può essere completata.  Il secondo criterio è per la classe `SafeInt` che interrompe l'esecuzione del programma.  È inoltre possibile definire un criterio personalizzato.  
  
 Ogni funzione `SafeInt` protegge un'operazione matematica da un errore sfruttabile.  È possibile usare due diversi generi di parametri senza convertirli nello stesso tipo.  Per proteggere più operazioni matematiche, usare la classe `SafeInt`.  
  
## Iteratori verificati  
 Un iteratore verificato applica i limiti del contenitore.  Per impostazione predefinita, quando un iteratore verificato è fuori limite, genera un'eccezione e termina l'esecuzione del programma.  Un iteratore verificato fornisce altri livelli di risposta che dipendono dai valori assegnati alle definizioni del preprocessore, ad esempio **\_SECURE\_SCL\_THROWS** e **\_ITERATOR\_DEBUG\_LEVEL**.  Ad esempio, in **\_ITERATOR\_DEBUG\_LEVEL\=2**, un iteratore verificato fornisce controlli di correttezza completi in modalità debug, resi disponibili mediante le asserzioni.  Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).  
  
## Analisi del codice gestito  
 L'analisi del codice gestito, nota anche come FxCop, controlla la conformità degli assembly alle linee guida di progettazione di .NET Framework.  FxCop analizza il codice e i metadati in ogni assembly per verificare la presenza di difetti nelle aree seguenti:  
  
-   Progettazione di librerie  
  
-   Localizzazione  
  
-   Convenzioni di denominazione  
  
-   Prestazioni  
  
-   Sicurezza  
  
## Windows Application Verifier  
 Application Verifier \(AppVerifier\) aiuta a identificare i potenziali problemi di compatibilità, stabilità e sicurezza delle applicazioni.  
  
 AppVerifier monitora come un'applicazione usa il sistema operativo.  Controlla il file system, il Registro di sistema, la memoria e le API mentre l'applicazione è in esecuzione e suggerisce le correzioni del codice sorgente per i problemi rilevati.  
  
 È possibile usare AppVerifier per:  
  
-   Testare i potenziali errori di compatibilità delle applicazioni causati da comuni sbagli commessi durante la programmazione.  
  
-   Cercare in un'applicazione problemi relativi alla memoria.  
  
-   Identificare potenziali problemi di sicurezza in un'applicazione.  
  
 AppVerifier fa parte del componente Application Compatibility Toolkit, disponibile in [Compatibilità delle applicazioni](http://go.microsoft.com/fwlink/?LinkId=91277) sul sito Web Microsoft TechNet.  
  
## Funzionalità di sicurezza di .NET Framework  
 [NIB: Configuring Security Policy](http://msdn.microsoft.com/it-it/0f130bcd-1bba-4346-b231-0bcca7dab1a4) descrive le linee guida e gli strumenti per modificare i criteri di sicurezza di .NET Framework.  
  
## Account utente di Windows  
 L'uso di account utente di Windows appartenenti al gruppo Administrators espone gli sviluppatori e, per estensione, i clienti a rischi per la sicurezza.  Per altre informazioni, vedere [Esecuzione come membro del gruppo Users](../top/running-as-a-member-of-the-users-group.md) e [Effetti del Controllo dell'account utente sull'applicazione](../top/how-user-account-control-uac-affects-your-application.md).  
  
## Vedere anche  
 <xref:System.Security>   
 [Security](../Topic/Security%20in%20the%20.NET%20Framework.md)   
 [Effetti del Controllo dell'account utente sull'applicazione](../top/how-user-account-control-uac-affects-your-application.md)