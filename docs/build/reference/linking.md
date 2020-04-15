---
title: Informazioni di riferimento sul linker MSVC
ms.date: 12/10/2018
ms.assetid: bb736587-d13b-4f3c-8982-3cc2c015c59c
ms.openlocfilehash: 2503e212e7325fc97f9057861cb85d5cf0571094
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336492"
---
# <a name="linking"></a>Collegamento

In un progetto in C, il passaggio di *collegamento* viene eseguito dopo che il compilatore ha compilato il codice sorgente in file oggetto (con estensione obj). Il linker (link.exe) combina i file oggetto in un unico file eseguibile.

Linker options can be set inside or outside of Visual Studio. In Visual Studio è possibile accedere alle opzioni del linker facendo clic con il pulsante destro del mouse su un nodo di progetto in **Esplora soluzioni** e scegliendo **Proprietà** per visualizzare le pagine delle proprietà. Scegliere **Linker** nel riquadro sinistro per espandere il nodo e visualizzare tutte le opzioni.

## <a name="linker-command-line-syntax"></a>Sintassi della riga di comando del linker

Quando si esegue LINK all'esterno di Visual Studio, è possibile specificare l'input in uno o più modi:

- Sulla riga di comando

- Utilizzo dei file di comando

- Nelle variabili di ambiente

LINK elabora innanzitutto le opzioni specificate nella variabile di ambiente LINK, seguite dalle opzioni nell'ordine in cui sono specificate nella riga di comando e nei file di comando. Se un'opzione viene ripetuta con argomenti diversi, l'ultima elaborata ha la precedenza.

Le opzioni si applicano all'intera compilazione; nessuna opzione può essere applicata a file di input specifici.

Per eseguire LINK. EXE, utilizzare la sintassi del comando seguente:

```
LINK arguments
```

Le `arguments` opzioni di inclusione e i nomi dei file e può essere specificato in qualsiasi ordine. Le opzioni vengono elaborate prima, quindi i file. Utilizzare uno o più spazi o tabulazioni per separare gli argomenti.

> [!NOTE]
> È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio.You can start this tool only from the Visual Studio command prompt. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

## <a name="command-line"></a>Riga di comando

Nella riga di comando, un'opzione è costituita da un identificatore di opzione, un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi delle opzioni non possono essere abbreviati. Alcune opzioni accettano un argomento, specificato dopo i due punti (:). All'interno di una specifica di opzione non sono consentiti spazi o tabulazioni, tranne all'interno di una stringa tra virgolette nell'opzione /COMMENT. Specificare gli argomenti numerici in notazione decimale o in linguaggio C. I nomi delle opzioni e gli argomenti della parola chiave o del nome del file non fanno distinzione tra maiuscole e minuscole, ma per gli identificatori come argomenti viene fatta distinzione tra maiuscole e minuscole.

Per passare un file al linker, specificare il nome del file nella riga di comando dopo il comando LINK. È possibile specificare un percorso assoluto o relativo con il nome del file ed è possibile utilizzare caratteri jolly nel nome del file. Se omettere il punto (.) e l'estensione del nome del file, link assume .obj allo scopo di trovare il file. LINK non utilizza le estensioni dei nomi di file o la loro mancanza per fare ipotesi sul contenuto dei file; determina il tipo di file esaminandolo ed elaborandolo di conseguenza.

link.exe restituisce zero per l'esito positivo (nessun errore).  In caso contrario, il linker restituisce il numero di errore che ha interrotto il collegamento.  Ad esempio, se il linker genera l'errore LNK1104, il linker restituisce 1104.  Di conseguenza, il numero di errore più basso restituito in caso di errore dal linker è 1000.  Un valore restituito di 128 rappresenta un problema di configurazione con il sistema operativo o un file con estensione config; il caricatore non ha caricato link.exe o c2.dll.

## <a name="link-command-files"></a>File di comando di LINK

È possibile passare argomenti della riga di comando a LINK sotto forma di file di comando. Per specificare un file di comando per il linker, utilizzare la sintassi seguente:

> **File \@ ** <em>di comando</em> LINK

Il *file di comando* è il nome di un file di testo. Non è consentito alcuno spazio**\@** o tabulazione tra il simbolo di chiocciola ( ) e il nome del file. Non esiste un'estensione predefinita; è necessario specificare il nome file completo, inclusa qualsiasi estensione. Non è possibile utilizzare caratteri jolly. È possibile specificare un percorso assoluto o relativo con il nome del file. IN LINK non viene utilizzata una variabile di ambiente per cercare il file.

Nel file di comando, gli argomenti possono essere separati da spazi o tabulazioni (come nella riga di comando) e da caratteri di nuova riga.

È possibile specificare tutta o parte della riga di comando in un file di comando. È possibile utilizzare più di un file di comando in un comando LINK. LINK accetta l'input del file di comando come se fosse specificato in tale posizione nella riga di comando. I file di comando non possono essere nidificati. LINK esegue l'eco del contenuto dei file di comando, a meno che non venga specificata l'opzione [/NOLOGO.](nologo-suppress-startup-banner-linker.md)

## <a name="example"></a>Esempio

Il comando seguente per compilare una DLL passa i nomi dei file oggetto e delle librerie in file di comando separati e utilizza un terzo file di comando per specificare l'opzione /EXPORTS:

```cmd
link /dll @objlist.txt @liblist.txt @exports.txt
```

## <a name="link-environment-variables"></a>Variabili di ambiente LINK

Lo strumento LINK usa le seguenti variabili di ambiente:

- LINK \_e\_LINK , se definiti. Lo strumento LINK antepone le opzioni e gli argomenti definiti nella variabile di \_\_ ambiente LINK e aggiunge le opzioni e gli argomenti definiti nella variabile di ambiente LINK agli argomenti della riga di comando prima dell'elaborazione.

- LIB, se definito. Gli strumenti LINK utilizzano il percorso LIB durante la ricerca di un oggetto, una libreria o un altro file specificato nella riga di comando o dall'opzione [/BASE.](base-base-address.md) Usa il percorso LIB anche per trovare un file PDB denominato in un oggetto. La variabile LIB può contenere uno o più specifiche di percorso, separate da punti e virgola. Un percorso deve puntare alla sottodirectory \lib dell'installazione di Visual C++.

- PATH, se lo strumento deve eseguire CVTRES e non riesce a trovare il file nella stessa directory di LINK. (LINK richiede CVTRES per collegare un file RES.) PATH deve fare clic sulla sottodirectory "bin" dell'installazione di Visual C.

- TMP, per specificare una directory quando si collegano file OMF o res.

## <a name="see-also"></a>Vedere anche

[C/C++ Building Reference](c-cpp-building-reference.md)
[MSVC Linker Options](linker-options.md)
[Module-Definition (.def) Files](module-definition-dot-def-files.md)
[Supporto](linker-support-for-delay-loaded-dlls.md) del linker delle opzioni del linker del linker delle opzioni del linker del linker del collegamento in formato c/c
