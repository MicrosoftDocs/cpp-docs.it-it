---
description: 'Altre informazioni su: collegamento'
title: Informazioni di riferimento sul linker MSVC
ms.date: 12/10/2018
ms.assetid: bb736587-d13b-4f3c-8982-3cc2c015c59c
ms.openlocfilehash: aa4ff82f19ba47fb0fdb9b5c28fe41f9fda1adbe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190939"
---
# <a name="linking"></a>Il collegamento

In un progetto C++, il passaggio del *collegamento* viene eseguito dopo che il compilatore ha compilato il codice sorgente in file oggetto (*. obj). Il linker (link.exe) combina i file oggetto in un unico file eseguibile.

Le opzioni del linker possono essere impostate all'interno o all'esterno di Visual Studio. In Visual Studio è possibile accedere alle opzioni del linker facendo clic con il pulsante destro del mouse su un nodo del progetto in **Esplora soluzioni** e scegliendo **Proprietà** per visualizzare le pagine delle proprietà. Scegliere **linker** nel riquadro a sinistra per espandere il nodo e visualizzare tutte le opzioni.

## <a name="linker-command-line-syntax"></a>Sintassi della riga di comando del linker

Quando si esegue il collegamento all'esterno di Visual Studio, è possibile specificare l'input in uno o più modi:

- Sulla riga di comando

- Uso dei file di comando

- In variabili di ambiente

LINK First elabora le opzioni specificate nella variabile di ambiente del collegamento, seguite dalle opzioni nell'ordine in cui sono specificate nella riga di comando e nei file di comando. Se un'opzione viene ripetuta con argomenti diversi, l'ultima elaborata avrà la precedenza.

Le opzioni si applicano all'intera compilazione; non è possibile applicare opzioni a file di input specifici.

Per eseguire LINK.EXE, usare la sintassi del comando seguente:

```
LINK arguments
```

Le `arguments` Opzioni di inclusione e i nomi file e possono essere specificati in qualsiasi ordine. Le opzioni vengono prima elaborate, quindi i file. Usare uno o più spazi o tabulazioni per separare gli argomenti.

> [!NOTE]
> È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

## <a name="command-line"></a>Riga di comando

Nella riga di comando, un'opzione è costituita da un identificatore di opzione, ovvero un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Alcune opzioni accettano un argomento, specificato dopo i due punti (:). Non sono consentiti spazi o tabulazioni all'interno di una specifica di opzione, tranne che all'interno di una stringa tra virgolette nell'opzione/COMMENT. Specificare gli argomenti numerici in notazione decimale o in linguaggio C. I nomi delle opzioni e la relativa parola chiave o gli argomenti filename non fanno distinzione tra maiuscole e minuscole, ma gli identificatori come argomenti fanno distinzione tra

Per passare un file al linker, specificare il nome del file nella riga di comando dopo il comando di collegamento. È possibile specificare un percorso assoluto o relativo con il nome file ed è possibile usare caratteri jolly nel nome file. Se si omette l'estensione punto (.) e filename, il collegamento presuppone. obj allo scopo di individuare il file. Il collegamento non usa le estensioni del nome file o la mancanza di essi per creare presupposti sul contenuto dei file; determina il tipo di file esaminando l'oggetto e lo elabora di conseguenza.

link.exe restituisce zero per l'esito positivo (nessun errore).  In caso contrario, il linker restituisce il numero di errore che ha interrotto il collegamento.  Ad esempio, se il linker genera LNK1104, il linker restituisce 1104.  Di conseguenza, il numero di errore più basso restituito per un errore dal linker è 1000.  Un valore restituito di 128 rappresenta un problema di configurazione con il sistema operativo o con un file config; il caricatore non ha caricato link.exe o c2.dll.

## <a name="link-command-files"></a>File di comando di LINK

È possibile passare gli argomenti della riga di comando per il collegamento sotto forma di file di comando. Per specificare un file di comando per il linker, usare la sintassi seguente:

> **Collegamento \@** di <em>commandfile</em>

*Commandfile* è il nome di un file di testo. Non sono consentiti spazi o tabulazioni tra il simbolo di chiocciola ( **\@** ) e il nome del file. Non esiste alcuna estensione predefinita; è necessario specificare il nome file completo, inclusa qualsiasi estensione. Non è possibile usare i caratteri jolly. È possibile specificare un percorso assoluto o relativo con il nome file. Il collegamento non usa una variabile di ambiente per cercare il file.

Nel file di comando gli argomenti possono essere separati da spazi o tabulazioni (come nella riga di comando) e da caratteri di nuova riga.

È possibile specificare tutta o parte della riga di comando in un file di comando. È possibile usare più di un file di comando in un comando di collegamento. Il collegamento accetta l'input del file di comando come se fosse stato specificato in tale percorso nella riga di comando. I file di comando non possono essere annidati. Il collegamento restituisce il contenuto dei file di comando, a meno che non sia stata specificata l'opzione [/nologo](nologo-suppress-startup-banner-linker.md) .

## <a name="example"></a>Esempio

Il comando seguente per compilare una DLL passa i nomi dei file oggetto e delle librerie in file di comando distinti e usa un terzo file di comando per specificare l'opzione/EXPORTS.:

```cmd
link /dll @objlist.txt @liblist.txt @exports.txt
```

## <a name="link-environment-variables"></a>Variabili di ambiente LINK

Lo strumento LINK usa le seguenti variabili di ambiente:

- COLLEGAMENTO e \_ collegamento \_ , se definito. Lo strumento di collegamento antepone le opzioni e gli argomenti definiti nella variabile di ambiente del collegamento e accoda le opzioni e gli argomenti definiti nella \_ \_ variabile di ambiente del collegamento agli argomenti della riga di comando prima dell'elaborazione.

- LIB, se definito. Gli strumenti di collegamento usano il percorso LIB durante la ricerca di un oggetto, di una libreria o di un altro file specificato nella riga di comando o tramite l'opzione [/base](base-base-address.md) . Usa il percorso LIB anche per trovare un file PDB denominato in un oggetto. La variabile LIB può contenere uno o più specifiche di percorso, separate da punti e virgola. Un percorso deve puntare alla sottodirectory \lib dell'installazione di Visual C++.

- PATH, se lo strumento deve eseguire CVTRES e non riesce a trovare il file nella stessa directory di LINK. (Per collegare un file con estensione res è necessario CVTRES.) Il percorso deve puntare alla sottodirectory \bin dell'installazione del Visual C++.

- TMP, per specificare una directory quando si collegano file OMF o res.

## <a name="see-also"></a>Vedi anche

Riferimenti alla compilazione in [C/C++](c-cpp-building-reference.md) 
 Opzioni del linker [MSVC](linker-options.md) 
 File di definizione [moduli (con estensione def)](module-definition-dot-def-files.md) 
 [Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
