---
title: Blocchi di descrizione
description: NMAKE usa i blocchi di descrizione per associare le destinazioni, le dipendenze e i comandi in un makefile.
ms.date: 10/29/2019
helpviewer_keywords:
- description blocks
- NMAKE program, description blocks
- blocks, description
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
ms.openlocfilehash: 8f7bf3a26eadde91471e8b45ec26e0abea906244
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506585"
---
# <a name="description-blocks"></a>Blocchi di descrizione

I blocchi di descrizione formano il nucleo di un makefile. Descrivono le *destinazioni*, i file da creare e le relative *dipendenze*, i file necessari per creare le destinazioni. Un blocco Description può includere *comandi*, che descrivono come creare le destinazioni dalle dipendenze. Un blocco Description è una linea di dipendenza, seguita facoltativamente da un blocco commands:

```makefile
targets... : dependents...
    commands...
```

## <a name="dependency-lines"></a>Righe di dipendenza

Una *linea di dipendenza* specifica una o più destinazioni e zero o più dipendenti. Se una destinazione non esiste o ha un timestamp precedente rispetto a un dipendente, NMAKE esegue i comandi nel blocco di comandi. NMAKE esegue anche il blocco di comandi se la destinazione è un [pseudo-destinazione](#pseudotargets). Di seguito è riportato un esempio di riga di dipendenza:

```makefile
hi_bye.exe : hello.obj goodbye.obj helper.lib
```

In questa linea di dipendenza `hi_bye.exe` è la destinazione. Le relative dipendenze sono `hello.obj` , `goodbye.obj` e `helper.lib` . La linea di dipendenza indica a NMAKE di compilare la destinazione ogni volta `hello.obj` `goodbye.obj` che, o `helper.lib` è stato modificato più di recente rispetto a `hi_bye.exe` .

Una destinazione deve trovarsi all'inizio della riga. Non può essere rientrata con spazi o tabulazioni. Usare i due punti ( `:` ) per separare le destinazioni dai dipendenti. Spazi o tabulazioni sono consentiti tra le destinazioni, il separatore dei due punti ( `:` ) e i dipendenti. Per dividere la linea di dipendenza, utilizzare una barra rovesciata ( `\` ) dopo una destinazione o dipendente.

Prima di eseguire i blocchi di comando, NMAKE analizza tutte le dipendenze ed eventuali regole di inferenza applicabili per compilare un *albero delle dipendenze*. Un albero delle dipendenze specifica i passaggi necessari per aggiornare completamente la destinazione. NMAKE verifica in modo ricorsivo se un dipendente è a sua volta una destinazione in un altro elenco di dipendenze. Dopo aver compilato l'albero delle dipendenze, NMAKE controlla i timestamp. Se tutti i dipendenti nell'albero sono più recenti della destinazione, NMAKE compila la destinazione.

## <a name="targets"></a><a name="targets"></a> Obiettivi

La sezione targets di una linea di dipendenza specifica una o più destinazioni. Una destinazione può essere qualsiasi nome file, nome di directory o [pseudo-destinazione](#pseudotargets)valido. Separare più destinazioni usando uno o più spazi o tabulazioni. Le destinazioni non fanno distinzione tra maiuscole e minuscole. I percorsi sono consentiti con i nomi file. Una destinazione e il relativo percorso non possono superare i 256 caratteri. Se la destinazione che precede i due punti è un singolo carattere, usare uno spazio di separazione. In caso contrario, NMAKE interpreta la combinazione di lettere e due punti come identificatore di unità.

### <a name="multiple-targets"></a><a name="multiple-targets"></a> Destinazioni multiple

NMAKE valuta più destinazioni in una singola dipendenza come se fossero specificate in un blocco di descrizione separato.

Ad esempio, questa regola:

```makefile
bounce.exe leap.exe : jump.obj
   echo Building...
```

viene valutato come:

```makefile
bounce.exe : jump.obj
   echo Building...

leap.exe : jump.obj
   echo Building...
```

### <a name="cumulative-dependencies"></a><a name="cumulative-dependencies"></a> Dipendenze cumulative

Le dipendenze sono cumulative in un blocco di descrizione, se una destinazione viene ripetuta.

Questo set di regole, ad esempio,

```makefile
bounce.exe : jump.obj
bounce.exe : up.obj
   echo Building bounce.exe...
```

viene valutato come:

```makefile
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
```

Quando si hanno più destinazioni in più righe di dipendenza in un singolo blocco di descrizioni, NMAKE le valuta come se fossero specificate in un blocco di descrizione separato. Tuttavia, solo le destinazioni nell'ultima riga di dipendenza usano il blocco Commands. NMAKE tenta di utilizzare una regola di inferenza per le altre destinazioni.

Questo set di regole, ad esempio,

```makefile
leap.exe bounce.exe : jump.obj
bounce.exe climb.exe : up.obj
   echo Building bounce.exe...
```

viene valutato come:

```makefile
leap.exe : jump.obj
# invokes an inference rule

bounce.exe : jump.obj up.obj
   echo Building bounce.exe...

climb.exe : up.obj
   echo Building bounce.exe...
```

### <a name="targets-in-multiple-description-blocks"></a><a name="targets-in-multiple-description-blocks"></a> Destinazioni in più blocchi di descrizione

Per aggiornare una destinazione in più di un blocco di descrizione con comandi diversi, specificare due due punti consecutivi (::) tra destinazioni e dipendenti.

```makefile
target.lib :: one.asm two.asm three.asm
    ml one.asm two.asm three.asm
    lib target one.obj two.obj three.obj
target.lib :: four.c five.c
    cl /c four.c five.c
    lib target four.obj five.obj
```

### <a name="dependency-side-effects"></a><a name="dependency-side-effects"></a> Effetti collaterali sulla dipendenza

È possibile specificare una destinazione con i due punti (:) in due righe di dipendenza in posizioni diverse. Se i comandi vengono visualizzati dopo una sola riga, NMAKE interpreta le dipendenze come se le righe fossero adiacenti o combinate. Non richiama una regola di inferenza per la dipendenza senza comandi. Al contrario, NMAKE presuppone che le dipendenze appartengano a un blocco Description ed esegue i comandi specificati con l'altra dipendenza. Prendere in considerazione questo set di regole:

```makefile
bounce.exe : jump.obj
   echo Building bounce.exe...

bounce.exe : up.obj
```

viene valutato come:

```makefile
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
```

Questo effetto non si verifica se viene usato un doppio segno di due punti ( `::` ). Ad esempio, questo set di regole:

```makefile
bounce.exe :: jump.obj
   echo Building bounce.exe...

bounce.exe :: up.obj
```

viene valutato come:

```makefile
bounce.exe : jump.obj
   echo Building bounce.exe...

bounce.exe : up.obj
# invokes an inference rule
```

### <a name="pseudotargets"></a><a name="pseudotargets"></a> Pseudodestinazioni

Un *pseudo-destinazione* è un'etichetta utilizzata al posto di un nome di file in una linea di dipendenza. Viene interpretato come un file che non esiste ed è quindi obsoleto. Per NMAKE si presuppone che il timestamp di un pseudo-destinazione sia uguale al più recente di tutti i relativi dipendenti. Se non sono presenti dipendenti, viene utilizzata l'ora corrente. Se un pseudo-destinazione viene usato come destinazione, i relativi comandi vengono sempre eseguiti. Un pseudo-destinazione usato come dipendente deve anche apparire come destinazione in un'altra dipendenza. Tuttavia, non è necessario che la dipendenza disponga di un blocco Commands.

I nomi pseudo-destinazione seguono le regole di sintassi del nome file per le destinazioni. Tuttavia, se il nome non ha un'estensione, può superare il limite di 8 caratteri per i nomi file e può avere una lunghezza massima di 256 caratteri.

Pseudodestinazioni sono utili quando si desidera che NMAKE crei più destinazioni automaticamente. NMAKE compila solo le destinazioni specificate nella riga di comando. In alternativa, se non è specificata alcuna destinazione della riga di comando, compila solo la prima destinazione nella prima dipendenza del makefile. È possibile indicare a NMAKE di compilare più destinazioni senza elencarle singolarmente nella riga di comando. Scrivere un blocco di descrizione con una dipendenza contenente un pseudo-destinazione ed elencare le destinazioni che si vuole compilare come dipendenti. Quindi, inserire prima questo blocco Description nel makefile oppure specificare pseudo-destinazione nella riga di comando di NMAKE.

In questo esempio, UPDATE è un pseudo-destinazione.

```makefile
UPDATE : *.*
!COPY $** c:\product\release
```

Quando viene valutato l'aggiornamento, NMAKE copia tutti i file nella directory corrente nell'unità e nella directory specificate.

Nel makefile seguente, pseudo-destinazione `all` Compila sia `project1.exe` che `project2.exe` se `all` nella riga di comando non è specificata una o più destinazioni. Pseudo-destinazione `setenv` modifica la variabile di ambiente LIB prima dell' `.exe` aggiornamento dei file:

```makefile
all : setenv project1.exe project2.exe

project1.exe : project1.obj
    LINK project1;

project2.exe : project2.obj
    LINK project2;

setenv :
    set LIB=\project\lib
```

## <a name="dependents"></a><a name="dependents"></a> Dipendenti

In una riga di dipendenza specificare zero o più dipendenti dopo i due punti ( `:` ) o due punti ( `::` ), usando qualsiasi nome file o [pseudo-destinazione](#pseudotargets)valido. Separare più dipendenti usando uno o più spazi o tabulazioni. I dipendenti non fanno distinzione tra maiuscole e minuscole. I percorsi sono consentiti con i nomi file.

### <a name="inferred-dependents"></a><a name="inferred-dependents"></a> Dipendenti dedotti

Insieme ai dipendenti elencati in modo esplicito nella linea di dipendenza, NMAKE può presumere un *dipendente dedotto*. Una dipendenza dedotta deriva da una regola di inferenza e viene valutata prima dei dipendenti espliciti. Quando un dipendente derivato non è aggiornato rispetto alla relativa destinazione, NMAKE richiama il blocco di comando per la dipendenza. Se un dipendente dedotto non esiste o non è aggiornato rispetto ai propri dipendenti, NMAKE aggiorna prima di tutto la dipendenza dedotta. Per altre informazioni sui dipendenti dedotti, vedere regole di [inferenza](inference-rules.md).

### <a name="search-paths-for-dependents"></a><a name="search-paths-for-dependents"></a> Percorsi di ricerca per dipendenti

È possibile specificare un percorso di ricerca facoltativo per ogni dipendente. Di seguito è illustrata la sintassi per specificare un set di directory in cui eseguire la ricerca:

> **{**_directory_ \[ **;** _directory_...] **}**_dipendente_

Racchiudere i nomi di directory tra parentesi graffe ( `{ }` ). Separare più directory con un punto e virgola ( `;` ). Non sono consentiti spazi o tabulazioni. NMAKE cerca innanzitutto il dipendente nella directory corrente e quindi nell'elenco delle directory nell'ordine specificato. È possibile utilizzare una macro per specificare una o più parti di un percorso di ricerca. Questo percorso di ricerca viene utilizzato solo dal dipendente specificato.

#### <a name="directory-search-path-example"></a>Esempio di percorso di ricerca directory

Questa linea di dipendenza Mostra come creare una specifica di directory per una ricerca:

```makefile
reverse.exe : {\src\omega;e:\repo\backwards}retro.obj
```

La destinazione `reverse.exe` ha un dipendente, `retro.obj` . L'elenco racchiuso tra parentesi quadre specifica due directory. NMAKE cerca `retro.obj` innanzitutto nella directory corrente. In caso contrario, NMAKE cerca nella `\src\omega` Directory, quindi nella `e:\repo\backwards` Directory.

## <a name="see-also"></a>Vedere anche

[Riferimento a NMAKE](nmake-reference.md)
