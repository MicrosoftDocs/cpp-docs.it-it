---
title: AddressSanitizer cloud o test distribuiti
description: Funzionalità di AddressSanitizer estesa per Visual Studio e Azure
ms.date: 03/02/2021
helpviewer_keywords:
- AddressSanitizer cloud or distributed testing
ms.openlocfilehash: 53bbb1ca04a5c4636914591cf10bfcc6bf275d42
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470606"
---
# <a name="addresssanitizer-cloud-or-distributed-testing"></a>AddressSanitizer cloud o test distribuiti

Non è necessario eseguire il debug degli errori AddressSanitizer quando e dove si verificano. Configurare il runtime per creare un dump di arresto anomalo del sistema che archivia tutto il contesto specifico di AddressSanitizer quando si verifica un errore. Inviare quindi il dump di arresto anomalo del sistema a un altro PC per il debug. Il debug offline può essere un risparmio critico durante l'esecuzione di AddressSanitizer nel cloud o nel test distribuito. È possibile creare il dump nell'infrastruttura di test o di produzione in cui si verifica l'errore ed eseguirne il debug in un secondo momento nel PC per sviluppatori.

Il debugger di Visual Studio fornisce errori AddressSanitizer diagnosticati in modo accurato. È possibile visualizzare questi bug senza dover eseguire di nuovo i test, copiare set di dati di grandi dimensioni, individuare dati persi o trovare computer di test che sono andati offline. È sufficiente caricare il dump di arresto anomalo del sistema.

I dump di arresto anomalo del sistema vengono creati in caso di errori AddressSanitizer impostando la variabile di ambiente seguente:

`set ASAN_SAVE_DUMPS=MyFileName.dmp`

> [!NOTE]
> Il nome del file deve avere un suffisso *`.dmp`* per seguire le convenzioni di denominazione di Visual Studio.

Questo [file di dump](/previous-versions/windows/desktop/proc_snap/export-a-process-snapshot-to-a-file) può essere visualizzato con Visual Studio in un secondo momento in un altro computer.

Visual Studio può visualizzare le informazioni sull'errore nel contesto del codice sorgente originale. A tale scopo, Visual Studio richiede i [simboli di debug](/windows/win32/dxtecharts/debugging-with-symbols) e il [codice sorgente indicizzato](/windows-hardware/drivers/debugger/source-indexing). Per un'esperienza di debug ottimale, i file EXE, PDB e il codice sorgente usati per produrre tali file binari devono corrispondere.

Per ulteriori informazioni sull'archiviazione di origini e simboli, vedere la sezione [origine e simboli](#source) . Per informazioni sui dettagli di implementazione e il controllo con granularità fine, vedere [integrazione del debugger](asan-debugger-integration.md).

## <a name="example---build-test-and-analyze"></a>Esempio: compilare, testare e analizzare

Prendere in considerazione tre computer: A, B e C. le compilazioni vengono eseguite nel computer B, i test vengono eseguiti nel computer C e si analizzano gli errori nel computer A. Gli errori vengono segnalati in base ai numeri di riga e di colonna del codice sorgente. È possibile visualizzare lo stack di chiamate insieme a un set di simboli nel file PDB prodotto utilizzando la [versione esatta del codice sorgente](#source).

I passaggi seguenti sono per gli scenari locali o distribuiti che comportano la creazione di un file con estensione dmp e per la visualizzazione offline del file di dump AddressSanitizer.

### <a name="produce-a-dmp-locally"></a>Produrre un. dmp localmente

- Compilazione
- Testare l'eseguibile
- Copiare un file. dmp generato nella directory di compilazione
- Aprire il file. dmp con il file con estensione pdb associato nella stessa directory

### <a name="produce-a-dmp-on-a-distributed-system"></a>Produrre un. dmp in un sistema distribuito

- Compilazione e [post-elaborazione del PDB per i](#source) [blocchi di dati di indicizzazione di origine](/windows/win32/debug/source-server-and-source-indexing)
- Copiare la coppia atomica di (. exe,. pdb) nel computer di test ed eseguire i test
- Scrivere le coppie atomiche di (PDB, DMP) nel database di segnalazione dei bug
- Visual Studio apre un file con estensione dmp con il file con estensione pdb associato nella stessa directory

> [!NOTE]
> Il computer Visual Studio 2019 usato per l'analisi deve avere accesso a GitHub o all'interno in *`\\Machine\share`* cui è archiviata l'origine indicizzata.

## <a name="view-addresssanitizer-dmp-files"></a>Visualizza file AddressSanitizer. dmp

1. Assicurarsi che l'IDE del debugger possa trovare i file PDB e di origine.

1. Aprire Visual Studio e selezionare **continua senza codice**. Quindi selezionare **file**  >  **Apri**  >  **file** per aprire la finestra di dialogo Apri file. Verificare che il suffisso del nome file sia **. dmp**.

   :::image type="content" source="./media/asan-open-crash-dump-file.png" alt-text="Screenshot del menu file Apri file in Visual Studio.":::

   La schermata illustrata di seguito richiede un altro passaggio per abilitare l'accesso dell'IDE ai simboli e all'origine.

1. Impostare i percorsi dei simboli, quindi scegliere **debug con solo nativo**.

   :::image type="content" source="./media/asan-dump-file-open.png" alt-text="Screenshot della visualizzazione Riepilogo minidump in Visual Studio.":::

Questa schermata mostra il file dump finale caricato, con origini e metadati AddressSanitizer caricati.

:::image type="content" source="./media/asan-view-crash-metadata.png" alt-text="Screenshot del debugger che mostra i file di origine e i metadati AddressSanitizer.":::

## <a name="source-and-symbols"></a><a name="source"></a> Origine e simboli

Il server di origine consente a un client di recuperare la **versione esatta** dei file di origine utilizzati per compilare un'applicazione. Il codice sorgente per un file eseguibile o una DLL può cambiare nel tempo e tra le versioni. È possibile usarlo per esaminare lo stesso codice sorgente che ha compilato una determinata versione dell'applicazione.

Durante il debug di un file EXE con il relativo file PDB, il debugger può utilizzare il blocco di dati del server di origine incorporato per recuperare i file appropriati dal controllo del codice sorgente. Carica i file che vengono mappati ai nomi completi inseriti nel PDB automaticamente dall' **`/Zi`** opzione del compilatore.

Per utilizzare il server di origine, l'applicazione deve essere "indicizzata di origine" utilizzando *`pdbstr.exe`* per scrivere un `srcsrv` blocco di dati nel file PDB. Per ulteriori informazioni, vedere la sezione relativa ai blocchi di dati del [server di origine e l'indicizzazione dell'origine](/windows/win32/debug/source-server-and-source-indexing). [Sono disponibili i passaggi per indicizzare le origini e pubblicare i simboli](/azure/devops/pipelines/tasks/build/index-sources-publish-symbols) e [come specificare anche i simboli e il codice sorgente per il debugger](/visualstudio/debugger/specify-symbol-dot-pdb-and-source-files-in-the-visual-studio-debugger) .

Per la documentazione esterna, vedere:

- [Indicizzazione di origine con git](https://gist.github.com/baldurk/c6feb31b0305125c6d1a)
- [Guida al debug semplificato](https://www.codeproject.com/articles/115125/source-indexing-and-symbol-servers-a-guide-to-easi)
- [L'indicizzazione dell'origine è una grandiosità sottoutilizzata](https://randomascii.wordpress.com/2011/11/11/source-indexing-is-underused-awesomeness/)

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)
