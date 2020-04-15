---
title: Blocchi di descrizione
description: NMAKE utilizza blocchi di descrizione per associare destinazioni, dipendenze e comandi in un makefile.
ms.date: 10/29/2019
helpviewer_keywords:
- description blocks
- NMAKE program, description blocks
- blocks, description
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
ms.openlocfilehash: e4e80b59d3d30b3b34c55b40d337ef5c078e6404
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322256"
---
# <a name="description-blocks"></a>Blocchi di descrizione

I blocchi di descrizione costituiscono il nucleo di un makefile. Descrivono le *destinazioni,* o file da creare, e le relative *dipendenze,* i file necessari per creare le destinazioni. Un blocco di descrizione può includere *comandi*, che descrivono come creare le destinazioni dalle dipendenze. Un blocco di descrizione è una riga di dipendenza, facoltativamente seguita da un blocco di comandi:A description block is a dependency line, orptionally followed by a commands block:

```makefile
targets... : dependents...
    commands...
```

## <a name="dependency-lines"></a>Linee di dipendenza

Una linea di *dipendenza* specifica una o più destinazioni e zero o più dipendenti. Se una destinazione non esiste o ha un timestamp precedente rispetto a un dipendente, NMAKE esegue i comandi nel blocco di comandi. NMAKE esegue anche il blocco di comando se la destinazione è una [pseudodestinazione](pseudotargets.md). Di seguito è riportata una riga di dipendenza di esempio:Here's an example dependency line:

```makefile
hi_bye.exe : hello.obj goodbye.obj helper.lib
```

In questa linea `hi_bye.exe` di dipendenza, è la destinazione. Le sue `hello.obj`dipendenze sono , `goodbye.obj`, e `helper.lib`. La linea di dipendenza indica a `hello.obj`NMAKE di compilare la destinazione ogni volta che, `goodbye.obj`, o `helper.lib` è stata modificata più di recente rispetto `hi_bye.exe`a .

Un obiettivo deve trovarsi all'inizio della riga. Non può essere rientrato con spazi o tabulazioni. Utilizzare i`:`due punti ( ) per separare le destinazioni dai dipendenti. Sono consentiti spazi o tabulazioni`:`tra le destinazioni, il separatore due punti ( ) e i dipendenti. Per dividere la riga di dipendenza,`\`utilizzare una barra rovesciata ( ) dopo una destinazione o un dipendente.

Prima di eseguire i blocchi di comandi, NMAKE analizza tutte le dipendenze e tutte le regole di inferenza applicabili per creare un *albero delle dipendenze.* Un albero delle dipendenze specifica i passaggi necessari per aggiornare completamente la destinazione. NMAKE controlla in modo ricorsivo se un dipendente è esso stesso una destinazione in un altro elenco di dipendenze. Dopo aver compilato l'albero delle dipendenze, NMAKE controlla gli indicatori di data e ora. Se i dipendenti nell'albero sono più recenti della destinazione, NMAKE compila la destinazione.

## <a name="targets"></a><a name="targets"></a>Obiettivi

La sezione targets di una linea di dipendenza specifica una o più destinazioni. Una destinazione può essere qualsiasi nome di file, nome di directory o [pseudodestinazione](pseudotargets.md)valido. Separare più destinazioni utilizzando uno o più spazi o tabulazioni. Le destinazioni non fanno distinzione tra maiuscole e minuscole. I percorsi sono consentiti con i nomi di file. Una destinazione e il relativo percorso non possono superare i 256 caratteri. Se la destinazione che precede i due punti è un singolo carattere, utilizzare uno spazio di separazione. In caso contrario, NMAKE interpreta la combinazione lettera-due punti come identificatore di unità.

### <a name="multiple-targets"></a><a name="multiple-targets"></a>Obiettivi multipli

NMAKE valuta più destinazioni in una singola dipendenza come se ognuna fosse specificata in un blocco di descrizione separato.

Ad esempio, questa regola:For example, this rule:

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

### <a name="cumulative-dependencies"></a><a name="cumulative-dependencies"></a>Dipendenze cumulative

Le dipendenze sono cumulative in un blocco di descrizione, se una destinazione viene ripetuta.

Ad esempio, questo insieme di regole,

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

Quando si dispone di più destinazioni in più righe di dipendenza in un singolo blocco di descrizione, NMAKE le valuta come se ognuna fosse specificata in un blocco di descrizione separato. Tuttavia, solo le destinazioni nell'ultima riga di dipendenza utilizzano il blocco commands. NMAKE tenta di utilizzare una regola di inferenza per le altre destinazioni.

Ad esempio, questo insieme di regole,

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

### <a name="targets-in-multiple-description-blocks"></a><a name="targets-in-multiple-description-blocks"></a>Destinazioni in più blocchi di descrizioneTargets in multiple description blocks

Per aggiornare una destinazione in più blocchi di descrizione utilizzando comandi diversi, specificare due punti consecutivi (::) tra obiettivi e dipendenti.

```makefile
target.lib :: one.asm two.asm three.asm
    ml one.asm two.asm three.asm
    lib target one.obj two.obj three.obj
target.lib :: four.c five.c
    cl /c four.c five.c
    lib target four.obj five.obj
```

### <a name="dependency-side-effects"></a><a name="dependency-side-effects"></a>Effetti collaterali delle dipendenzeDependency side effects

È possibile specificare una destinazione con i due punti (:) in due linee di dipendenza in posizioni diverse. Se i comandi vengono visualizzati dopo una sola delle righe, NMAKE interpreta le dipendenze come se le righe fossero adiacenti o combinate. Non richiama una regola di inferenza per la dipendenza che non dispone di comandi. Al contrario, NMAKE presuppone che le dipendenze appartengano a un blocco di descrizione ed esegue i comandi specificati con l'altra dipendenza. Si consideri questo set di regole:Consider this set of rules:

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

Questo effetto non si verifica se`::`si utilizzano i due punti doppi ( ). Ad esempio, questo set di regole:For example, this set of rules:

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

### <a name="pseudotargets"></a><a name="pseudotargets"></a>Pseudoobiettivi

Una *pseudodestinazione* è un'etichetta utilizzata al posto di un nome file in una riga di dipendenza. Viene interpretato come un file che non esiste e quindi non è aggiornato. NMAKE presuppone che il timestamp di una pseudodestinazione sia lo stesso del più recente di tutti i suoi dipendenti. Se non ha dipendenti, viene considerata l'ora corrente. Se una pseudodestinazione viene utilizzata come destinazione, i relativi comandi vengono sempre eseguiti. Una pseudodestinazione usata come dipendente deve anche apparire come destinazione in un'altra dipendenza. Tuttavia, tale dipendenza non è necessario disporre di un blocco di comandi.

I nomi di pseudodestinazione seguono le regole di sintassi del nome file per le destinazioni. Tuttavia, se il nome non ha un'estensione, può superare il limite di 8 caratteri per i nomi di file e può avere una lunghezza massima di 256 caratteri.

Le pseudodestinazioni sono utili quando si desidera che NMAKE crei automaticamente più destinazioni. NMAKE compila solo le destinazioni specificate nella riga di comando. In alternativa, se non viene specificata alcuna destinazione della riga di comando, viene compilata solo la prima destinazione nella prima dipendenza nel makefile. È possibile indicare a NMAKE di creare più destinazioni senza elencarle singolarmente nella riga di comando. Scrivi un blocco di descrizione con una dipendenza contenente una pseudodestinazione ed elenca le destinazioni che vuoi creare come dipendenti. Quindi, inserire prima questo blocco di descrizione nel makefile o specificare la pseudodestinazione nella riga di comando nMAKE.

In questo esempio, UPDATE è una pseudodestinazione.

```makefile
UPDATE : *.*
!COPY $** c:\product\release
```

Quando UPDATE viene valutato, NMAKE copia tutti i file nella directory corrente nell'unità e nella directory specificate.

Nel makefile seguente, la `all` pseudodestinazione `project1.exe` `project2.exe` compila `all` entrambi e se nella riga di comando è specificata una o nessuna destinazione. La pseudodestinazione `setenv` modifica la variabile `.exe` di ambiente LIB prima dell'aggiornamento dei file:

```makefile
all : setenv project1.exe project2.exe

project1.exe : project1.obj
    LINK project1;

project2.exe : project2.obj
    LINK project2;

setenv :
    set LIB=\project\lib
```

## <a name="dependents"></a><a name="dependents"></a>Dipendenti

In una riga di dipendenza specificare zero o`:`più dipendenti`::`dopo i due punti ( ) o i due punti doppi ( ), utilizzando qualsiasi nome di file o [pseudodestinazione](pseudotargets.md)valido. Separare più dipendenti utilizzando uno o più spazi o tabulazioni. I dipendenti non fanno distinzione tra maiuscole e minuscole. I percorsi sono consentiti con i nomi di file.

### <a name="inferred-dependents"></a><a name="inferred-dependents"></a>Dipendenti dedotti

Insieme ai dipendenti elencati in modo esplicito nella riga di dipendenza, NMAKE può assumere un *dipendente dedotto*. Un dipendente dedotto è derivato da una regola di inferenza e viene valutato prima dei dipendenti espliciti. Quando un dipendente dedotto non è aggiornato rispetto alla relativa destinazione, NMAKE richiama il blocco di comando per la dipendenza. Se un dipendente dedotto non esiste o non è aggiornato rispetto ai propri dipendenti, NMAKE aggiorna prima il dipendente dedotto. Per ulteriori informazioni sui dipendenti dedotti, vedere Regole di [inferenza](inference-rules.md).

### <a name="search-paths-for-dependents"></a><a name="search-paths-for-dependents"></a>Percorsi di ricerca per i dipendenti

È possibile specificare un percorso di ricerca facoltativo per ogni dipendente. Di seguito è riportata la sintassi per specificare un set di directory in cui eseguire la ricerca:

> **:**_directory_\[**;** _directory_...] **-**_dipendente_

Racchiudere i nomi`{ }`delle directory tra parentesi graffe ( ). Separare più directory con`;`un punto e virgola ( ). Non sono consentiti spazi o tabulazioni. NMAKE cerca il dipendente prima nella directory corrente e quindi nell'elenco delle directory nell'ordine specificato. È possibile utilizzare una macro per specificare parte o tutto un percorso di ricerca. Solo il dipendente specificato utilizza questo percorso di ricerca.

#### <a name="directory-search-path-example"></a>Esempio di percorso di ricerca nella directory

Questa linea di dipendenza mostra come creare una specifica di directory per una ricerca:This dependency line shows how to create a directory specification for a search:

```makefile
reverse.exe : {\src\omega;e:\repo\backwards}retro.obj
```

La `reverse.exe` destinazione ha `retro.obj`un dipendente, . L'elenco racchiuso tra parentesi graffe specifica due directory. NMAKE cerca `retro.obj` prima nella directory corrente. Se non è presente, NMAKE `\src\omega` esegue la `e:\repo\backwards` ricerca nella directory, quindi nella directory.

## <a name="see-also"></a>Vedere anche

[Riferimenti a NMAKE](nmake-reference.md)
