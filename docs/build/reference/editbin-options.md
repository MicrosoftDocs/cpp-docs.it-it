---
title: Opzioni di EDITBIN
ms.date: 11/04/2016
f1_keywords:
- editbin
helpviewer_keywords:
- EDITBIN program, options
ms.assetid: 2da9f88e-cbab-4d64-bb66-ef700535230f
ms.openlocfilehash: e7338c6a45d74aa8efac1b72683cca7661c62e0a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62271853"
---
# <a name="editbin-options"></a>Opzioni di EDITBIN

È possibile usare EDITBIN per modificare i file oggetto, i file eseguibili e librerie a collegamento dinamico (DLL). Le opzioni specificano le modifiche che EDITBIN apporta.

Un'opzione è costituito da un identificatore di opzione, che può essere un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Per alcune opzioni è possibile specificare argomenti, preceduti da due punti ( : ). Spazi o tabulazioni non sono consentite all'interno di una specifica opzione. Usare uno o più spazi o tabulazioni per separare le specifiche di opzione nella riga di comando. Per i nomi delle opzioni e i corrispondenti argomenti parola chiave o nome file, non viene rilevata la distinzione tra maiuscole e minuscole. Ad esempio, -bind e /BIND hanno lo stesso significato.

EDITBIN dispone delle opzioni seguenti:

|Opzione|Scopo|
|------------|-------------|
|[/ALLOWBIND](allowbind.md)|Specifica se una DLL può essere associata.|
|[/ALLOWISOLATION](allowisolation.md)|Specifica il comportamento di ricerca nel manifest di file eseguibile o DLL.|
|[/APPCONTAINER](appcontainer.md)|Specifica se l'app deve essere eseguita in un AppContainer, ad esempio, un'app UWP.|
|[/BIND](bind.md)|Imposta gli indirizzi per i punti di ingresso negli oggetti specificati per ridurre il tempo di caricamento.|
|[/DYNAMICBASE](dynamicbase.md)|Specifica se l'immagine eseguibile o DLL può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (Address Space Layout Randomization).|
|[/ERRORREPORT](errorreport-editbin-exe.md)|Segnala a Microsoft gli errori interni.|
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
|[/SWAPRUN](swaprun.md)|Specifica che l'immagine eseguibile deve essere copiata nel file di scambio e quindi eseguita da li.|
|[/TSAWARE](tsaware.md)|Specifica che l'applicazione è progettata per funzionare in un ambiente multiutente.|
|[/VERSION](version.md)|Imposta il numero di versione nell'intestazione.|

## <a name="see-also"></a>Vedere anche

[Strumenti di compilazione MSVC aggiuntive](c-cpp-build-tools.md)<br/>
[Riferimento a EDITBIN](editbin-reference.md)
