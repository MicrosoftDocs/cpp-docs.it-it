---
title: Opzioni di EDITBIN
description: Guida di riferimento per le opzioni della riga di comando di Microsoft EDITBIN) Utility.
ms.date: 02/09/2020
helpviewer_keywords:
- EDITBIN program, options
ms.assetid: 2da9f88e-cbab-4d64-bb66-ef700535230f
ms.openlocfilehash: 9fd4170e5ee020780963d83936f1a9fd08d2be11
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439969"
---
# <a name="editbin-options"></a>Opzioni di EDITBIN

È possibile utilizzare EDITBIN) per modificare i file oggetto, i file eseguibili e le librerie a collegamento dinamico (dll). Le opzioni specificano le modifiche che EDITBIN apporta.

Un'opzione è costituita da un identificatore di opzione, che può essere un trattino (`-`) o una barra (`/`), seguita dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Alcune opzioni accettano argomenti specificati dopo i due punti (`:`). Non sono consentiti spazi o tabulazioni all'interno di una specifica Option. Usare uno o più spazi o schede per separare le specifiche delle opzioni nella riga di comando. I nomi delle opzioni e gli argomenti di parole chiave o di nome file non fanno distinzione tra maiuscole e minuscole Ad esempio, `-bind` e `/BIND` significano la stessa cosa.

In EDITBIN) sono disponibili le opzioni seguenti:

|Opzione|Scopo|
|------------|-------------|
|[/ALLOWBIND](allowbind.md)|Specifica se una DLL può essere associata.|
|[/ALLOWISOLATION](allowisolation.md)|Specifica il comportamento di ricerca nel manifest di file eseguibile o DLL.|
|[/APPCONTAINER](appcontainer.md)|Specifica se l'app deve essere eseguita all'interno di un AppContainer, ad esempio un'app UWP.|
|[/BIND](bind.md)|Imposta gli indirizzi per i punti di ingresso negli oggetti specificati per ridurre il tempo di caricamento.|
|[/DYNAMICBASE](dynamicbase.md)|Specifica se l'immagine eseguibile o DLL può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (Address Space Layout Randomization).|
|[/ERRORREPORT](errorreport-editbin-exe.md)| Operazione deprecata. La segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) . |
|[/HEAP](heap.md)|Imposta la dimensione dell'heap dell'immagine eseguibile in byte.|
|[/HIGHENTROPYVA](highentropyva.md)|Specifica se l'immagine eseguibile o DLL supporta un'entropia elevata (64 bit) per ASLR (Address Space Layout Randomization).|
|[/INTEGRITYCHECK](integritycheck.md)|Specifica se verificare la firma digitale al momento del caricamento.|
|[/LARGEADDRESSAWARE](largeaddressaware.md)|Specifica se l'oggetto supporta gli indirizzi maggiori di 2 gigabyte.|
|[/NOLOGO](nologo-editbin.md)|Non visualizza il messaggio di avvio di EDITBIN.|
|[/NXCOMPAT](nxcompat.md)|Specifica se l'immagine eseguibile è compatibile con la funzionalità Protezione esecuzione programmi di Windows.|
|[/REBASE](rebase.md)|Imposta gli indirizzi di base per gli oggetti specificati.|
|[/RELEASE](release.md)|Imposta il checksum nell'intestazione.|
|[/SECTION](section-editbin.md)|Esegue l'override gli attributi di una sezione.|
|[/STACK](stack.md)|Imposta la dimensione dello stack dell'immagine eseguibile in byte.|
|[/SUBSYSTEM](subsystem.md)|Specifica l'ambiente di esecuzione.|
|[/SWAPRUN](swaprun.md)|Specifica che l'immagine eseguibile viene copiata nel file di scambio e quindi eseguita da tale posizione.|
|[/TSAWARE](tsaware.md)|Specifica che l'applicazione è progettata per funzionare in un ambiente multiutente.|
|[/VERSION](version.md)|Imposta il numero di versione nell'intestazione.|

## <a name="see-also"></a>Vedere anche

[Ulteriori strumenti di compilazione MSVC](c-cpp-build-tools.md)\
[Riferimento a EDITBIN](editbin-reference.md)
