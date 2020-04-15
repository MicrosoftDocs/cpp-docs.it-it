---
title: Prologo ed epilogo x64
ms.date: 12/17/2018
ms.assetid: 0453ed1a-3ff1-4bee-9cc2-d6d3d6384984
ms.openlocfilehash: d0b7444af6e434a09f6af5f5b1c144b46c79ad56
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328438"
---
# <a name="x64-prolog-and-epilog"></a>Prologo ed epilogo x64

Ogni funzione che alloca spazio dello stack, chiama altre funzioni, salva i registri non volatili o utilizza la gestione delle eccezioni deve avere un prologo i cui limiti di indirizzo sono descritti nei dati di rimozione associati alla rispettiva voce della tabella delle funzioni. Per ulteriori informazioni, vedere [Gestione delle eccezioni x64](../build/exception-handling-x64.md). Il prolog salva i registri degli argomenti nei relativi indirizzi di casa, se necessario, inserisce i registri non volatili nello stack, alloca la parte fissa dello stack per variabili locali e temporaneae e, facoltativamente, stabilisce un puntatore ai frame. I dati di rimozione associati devono descrivere l'azione del prologo e devono fornire le informazioni necessarie per annullare l'effetto del codice di prologo.

Se l'allocazione fissa nello stack è più di una pagina (ovvero, maggiore di 4096 byte), è possibile che l'allocazione dello stack si estende su più di una pagina di memoria virtuale e, pertanto, l'allocazione deve essere controllata prima di essere allocata. Una routine speciale che è richiamabile dal prologo e che non distrugge nessuno dei registri di argomento viene fornito a questo scopo.

Il metodo preferito per salvare i registri non volatili consiste nello spostarli nello stack prima dell'allocazione fissa dello stack. Se l'allocazione fissa dello stack viene eseguita prima del salvataggio dei registri non volatili, molto probabilmente è necessario uno spostamento a 32 bit per indirizzare l'area di registro salvata. (Secondo quanto riferito, i push dei registri sono veloci come gli spostamenti e dovrebbero rimanere tali nel prossimo futuro, nonostante la dipendenza implicita tra i push.) I registri non volatili possono essere salvati in qualsiasi ordine. Tuttavia, il primo utilizzo di un registro non volatile nel prologo deve essere quello di salvarlo.

## <a name="prolog-code"></a>Codice di prologo

Il codice per un prologo tipico potrebbe essere:The code for a typical prolog might be:

```MASM
    mov    [RSP + 8], RCX
    push   R15
    push   R14
    push   R13
    sub    RSP, fixed-allocation-size
    lea    R13, 128[RSP]
    ...
```

Questo prologo archivia il registro degli argomenti RCX nella posizione iniziale, salva i registri non volatili R13-R15, alloca la parte fissa dello stack frame e stabilisce un puntatore a iframe che punta 128 byte nell'area di allocazione fissa. L'utilizzo di un offset consente di indirizzare una parte maggiore dell'area di allocazione fissa con offset di un byte.

Se la dimensione di allocazione fissa è maggiore o uguale a una pagina di memoria, è necessario chiamare una funzione di supporto prima di modificare RSP. Questo helper, `__chkstk`, esegue il probe dell'intervallo dello stack da allocare per garantire che lo stack venga esteso correttamente. In tal caso, l'esempio di prologo precedente sarebbe invece:In that case, the previous prolog example would instead be:

```MASM
    mov    [RSP + 8], RCX
    push   R15
    push   R14
    push   R13
    mov    RAX,  fixed-allocation-size
    call   __chkstk
    sub    RSP, RAX
    lea    R13, 128[RSP]
    ...
```

L'helper `__chkstk` non modificherà i registri diversi da R10, R11 e i codici di condizione. In particolare, restituirà RAX invariato e lascerà invariati tutti i registri non volatili e i registri di trasmissione degli argomenti.

## <a name="epilog-code"></a>Codice epilogo

Il codice dell'epilogo esiste ad ogni uscita da una funzione. Mentre normalmente c'è un solo prologo, ci possono essere molti epiloghi. Il codice Epilog taglia lo stack alla dimensione di allocazione fissa (se necessario), dealloca l'allocazione fissa dello stack, ripristina i registri non volatili estraendo i valori salvati dallo stack e restituisce.

Il codice di epilog deve seguire un set rigoroso di regole affinché il codice di rimozione si svolga in modo affidabile tramite eccezioni e interrupt. Queste regole riducono la quantità di dati di rimozione necessari, poiché non sono necessari dati aggiuntivi per descrivere ogni epilogo. Al contrario, il codice di rimozione può determinare che un epilogo viene eseguito eseguendo l'analisi in avanti attraverso un flusso di codice per identificare un epilogo.

Se nella funzione non viene utilizzato alcun puntatore ai frame, l'epilogo deve prima deallocare la parte fissa dello stack, i registri non volatili vengono visualizzati e il controllo viene restituito alla funzione chiamante. Ad esempio,

```MASM
    add      RSP, fixed-allocation-size
    pop      R13
    pop      R14
    pop      R15
    ret
```

Se nella funzione viene utilizzato un puntatore ai frame, lo stack deve essere tagliato per l'allocazione fissa prima dell'esecuzione dell'epilogo. Questa azione tecnicamente non fa parte dell'epilogo. Ad esempio, il seguente epilogo potrebbe essere utilizzato per annullare il prologo utilizzato in precedenza:

```MASM
    lea      RSP, -128[R13]
    ; epilogue proper starts here
    add      RSP, fixed-allocation-size
    pop      R13
    pop      R14
    pop      R15
    ret
```

In pratica, quando viene utilizzato un puntatore ai frame, non vi è alcun motivo valido per regolare RSP in due passaggi, pertanto verrebbe utilizzato il seguente epilogo:

```MASM
    lea      RSP, fixed-allocation-size - 128[R13]
    pop      R13
    pop      R14
    pop      R15
    ret
```

Queste forme sono le uniche legali per un epilogo. Deve essere costituito `add RSP,constant` `lea RSP,constant[FPReg]`da un o , seguito da una serie di `return` zero `jmp`o più pop di registro a 8 byte e a o a . (Solo un `jmp` sottoinsieme di istruzioni è consentito nell'epilogo. Il sottoinsieme è esclusivamente la classe di istruzioni con riferimenti di `jmp` memoria ModRM in cui il valore del campo mod ModRM è 00. L'uso `jmp` di istruzioni nell'epilogo con il valore del campo mod ModRM 01 o 10 è vietato. Vedere la tabella A-15 nel volume manuale del programmatore dell'architettura AMD x86-64 Volume 3: General Purpose and System Instructions, per ulteriori informazioni sui riferimenti ModRM consentiti.) Nessun altro codice può essere visualizzato. In particolare, non è possibile pianificare nulla all'interno di un epilogo, incluso il caricamento di un valore restituito.

Quando non viene utilizzato un puntatore `add RSP,constant` ai frame, l'epilogo deve utilizzare per deallocare la parte fissa dello stack. Non può `lea RSP,constant[RSP]` essere utilizzato al suo posto. Questa restrizione esiste in modo che il codice di rimozione ha meno modelli da riconoscere durante la ricerca di epiloghi.

Seguire queste regole consente al codice di rimozione di determinare che un epilogo è attualmente in esecuzione e di simulare l'esecuzione del resto dell'epilogo per consentire la ricreazione del contesto della funzione chiamante.

## <a name="see-also"></a>Vedere anche

[Convenzioni software x64](x64-software-conventions.md)
