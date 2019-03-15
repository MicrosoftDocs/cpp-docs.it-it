---
title: Riferimento del linker MSVC
ms.date: 12/10/2018
ms.assetid: bb736587-d13b-4f3c-8982-3cc2c015c59c
ms.openlocfilehash: 3a9eebef0a264b0131311b5ca96011a4d56264a1
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57820377"
---
# <a name="linking"></a>Collegamento

In un progetto C++, il *collegamento* passaggio viene eseguito dopo che il compilatore ha compilato il codice sorgente in file oggetto (obj). Il linker (link.exe) combina i file oggetto in un singolo file eseguibile. 

All'interno o all'esterno di Visual Studio, è possono impostare le opzioni del linker. All'interno di Visual Studio, è accedere alle opzioni del linker facendo clic su un nodo di progetto in **Esplora soluzioni** e scegliendo **proprietà** per visualizzare le pagine delle proprietà. Scegli **Linker** nel riquadro sinistro espandere il nodo e visualizzare tutte le opzioni. 


## <a name="linker-command-line-syntax"></a>Sintassi della riga di comando del linker

Quando si esegue collegamento esternamente a Visual Studio, è possibile specificare l'input in uno o più modi:

- Sulla riga di comando

- Utilizzo dei file di comando

- Nelle variabili di ambiente

COLLEGAMENTO prima elaborate le opzioni specificate nella variabile di ambiente LINK, seguito da opzioni nell'ordine in cui vengono specificati nella riga di comando e nei file di comando. Se un'opzione viene ripetuta con diversi argomenti, quella più recente elaborato ha la precedenza.

Le opzioni si applicano all'intera build; Nessuna opzione è applicabile ai file di input specifici.

Per eseguire il collegamento. EXE, usare la sintassi del comando seguente:

```
LINK arguments
```

Il `arguments` includono opzioni e nomi di file e può essere specificato in qualsiasi ordine. Le opzioni vengono elaborate prima, quindi i file. Usare uno o più spazi o tabulazioni per separare gli argomenti.

> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

## <a name="command-line"></a>Riga di comando

Nella riga di comando, un'opzione è costituito da un identificatore di opzione, un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Alcune opzioni di accettano un argomento, dopo i due punti (:) specificato. Spazi o tabulazioni non sono consentite all'interno di una specifica opzione, ad eccezione all'interno di una stringa tra virgolette nell'opzione /COMMENT. Specificare gli argomenti numerici nella notazione decimale o del linguaggio C. I nomi e i relativi argomenti parola chiave o un nome file non sono tra maiuscole e minuscole, ma gli identificatori come argomenti sono tra maiuscole e minuscole.

Per passare un file del linker, specificare il nome del file nella riga di comando dopo il comando di collegamento. È possibile specificare un percorso relativo o assoluto con il nome del file e si possono usare caratteri jolly nel nome file. Se si omette il punto (.) e l'estensione del nome file, viene presupposto obj allo scopo di trovare il file. COLLEGAMENTO non utilizza estensioni di file o la mancanza di essi per fare ipotesi sul contenuto dei file; Determina il tipo di file tramite l'analisi e lo elabora di conseguenza.

Link.exe restituisce zero per l'esito positivo (senza errori).  In caso contrario, il linker restituisce il numero di errore che è stato arrestato il collegamento.  Ad esempio, se il linker genera LNK1104, il linker restituisce 1104.  Di conseguenza, il numero di errore più basso restituito in caso di errore dal linker è 1000.  Valore restituito di 128 rappresenta un problema di configurazione con il sistema operativo o un file con estensione config. il caricatore non è stato caricato link.exe o c2.dll.

## <a name="link-command-files"></a>File di comando di LINK

È possibile passare argomenti della riga di comando di collegamento sotto forma di un file di comando. Per specificare un file di comando del linker, usare la sintassi seguente:

> **COLLEGAMENTO \@**  <em>commandfile</em>

Il *commandfile* è il nome di un file di testo. Non è consentito alcun spazio o tabulazione tra il simbolo di chiocciola (**\@**) e il nome del file. Non vi è alcuna estensione predefinita; è necessario specificare il nome file completo, inclusa qualsiasi estensione. Non è possibile usare caratteri jolly. È possibile specificare un percorso relativo o assoluto con il nome del file. COLLEGAMENTO non utilizza una variabile di ambiente per cercare il file.

Nel file di comando, gli argomenti possono essere separati da spazi o tabulazioni (come nella riga di comando) e caratteri di nuova riga.

È possibile specificare tutto o parte della riga di comando in un file di comando. È possibile usare più di un file di comando in un comando di collegamento. COLLEGAMENTO accetta l'input di file di comando come se fosse specificato in tale posizione nella riga di comando. File di comando non possono essere annidati. COLLEGAMENTO di restituisce il contenuto dei file di comando, a meno che il [/NOLOGO](nologo-suppress-startup-banner-linker.md) opzione specificata.

## <a name="example"></a>Esempio

Il comando seguente per compilare una DLL vengono passati i nomi dei file oggetto e librerie in file separati per comandi e Usa un terzo comando file per la specifica dell'opzione /EXPORTS:

```cmd
link /dll @objlist.txt @liblist.txt @exports.txt
```

## <a name="link-environment-variables"></a>Variabili di ambiente LINK

Lo strumento LINK usa le seguenti variabili di ambiente:

- COLLEGAMENTO e \_collegamento\_, se definito. Lo strumento LINK antepone le opzioni e gli argomenti definiti nella variabile di ambiente LINK e accoda le opzioni e gli argomenti definiti nel \_collegamento\_ variabile di ambiente per gli argomenti della riga di comando prima dell'elaborazione.

- LIB, se definito. Lo strumento LINK Usa il percorso LIB durante la ricerca di un oggetto, raccolta o altri file specificati nella riga di comando o tramite il [/base](base-base-address.md) opzione. Usa il percorso LIB anche per trovare un file PDB denominato in un oggetto. La variabile LIB può contenere uno o più specifiche di percorso, separate da punti e virgola. Un percorso deve puntare alla sottodirectory \lib dell'installazione di Visual C++.

- PATH, se lo strumento deve eseguire CVTRES e non riesce a trovare il file nella stessa directory di LINK. CVTRES è necessario a LINK per collegare un file res. PATH deve puntare alla sottodirectory \bin dell'installazione di Visual C++.

- TMP, per specificare una directory quando si collegano file OMF o res.

## <a name="see-also"></a>Vedere anche

[C/C++ Building Reference](c-cpp-building-reference.md)
[le opzioni del Linker MSVC](linker-options.md)
[i file di definizione moduli (def)](module-definition-dot-def-files.md)
[supporto per nel Linker DLL a caricamento ritardato](linker-support-for-delay-loaded-dlls.md)
