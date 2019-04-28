---
title: x64 prologo ed epilogo
ms.date: 12/17/2018
ms.assetid: 0453ed1a-3ff1-4bee-9cc2-d6d3d6384984
ms.openlocfilehash: a225786853fcc2eb7b6a21de29f1ccf4901e4377
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295240"
---
# <a name="x64-prolog-and-epilog"></a>x64 prologo ed epilogo

Ogni funzione che consente di allocare lo spazio dello stack, chiama altre funzioni, consente di salvare i registri non volatili o Usa la gestione delle eccezioni deve contenere un prologo della query il cui indirizzo di limiti è descritti nei dati di rimozione associati alla voce di tabella la rispettiva funzione. Per altre informazioni, vedere [x64 la gestione delle eccezioni](../build/exception-handling-x64.md). Il prologo della query salvata argomento registri nei relativi indirizzi di casa se necessario, inserisce i registri non volatili nello stack, assegna la parte fissa dello stack per variabili locali e temporanei e, facoltativamente, stabilisce un puntatore ai frame. Dati di rimozione associato deve descrivere l'azione di prologo e deve fornire le informazioni necessarie per annullare l'effetto del codice di prologo.

Se l'allocazione fissa nello stack è più di una pagina (vale a dire, maggiore di 4096 byte), è possibile che l'allocazione dello stack potrebbe estendersi su più pagine di memoria virtuale e, pertanto, l'allocazione deve essere verificato prima viene allocato. Una speciale routine che è possibile chiamare dal prologo e che non eliminare uno dei registri argomento viene fornita per questo scopo.

Il metodo preferito per il salvataggio dei registri non volatili è per spostarli nello stack prima dell'allocazione fissa dello stack. Se l'allocazione dello stack predefinito viene eseguita prima del salvataggio dei registri non volatili, molto probabilmente uno spostamento a 32 bit non sarà necessario indirizzare l'area di registro salvato. (Quest'ultima, push di registri sono stessa velocità con cui viene spostato e pertanto deve rimanere in futuro nonostante la dipendenza implicita tra push). I registri non volatili possono essere salvati in qualsiasi ordine. Tuttavia, deve essere al primo utilizzo di un registro non volatile nel prologo per salvare il file.

## <a name="prolog-code"></a>Codice di prologo

Il codice per un prologo tipico potrebbe essere:

```MASM
    mov    [RSP + 8], RCX
    push   R15
    push   R14
    push   R13
    sub    RSP, fixed-allocation-size
    lea    R13, 128[RSP]
    ...
```

Questo prologo archivia il Registro di argomento RCX nella relativa posizione iniziale, non volatile Salva registra R13 R15 alloca la parte fissa del frame dello stack e stabilisce un puntatore ai frame che punti a 128 byte nell'area di allocazione fissa. L'uso di un offset consente più l'area di allocazione fissa da essere indirizzata con un offset a un byte.

Se la dimensione di allocazione fissa è maggiore o uguale a una pagina di memoria, una funzione di supporto deve essere chiamata prima di modificare RSP. Questo helper, `__chkstk`, probe di intervallo con allocazione dello stack per assicurarsi che lo stack viene esteso in modo corretto. In tal caso, il precedente esempio di prologo invece sarebbe:

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

Il `__chkstk` helper non modificherà alcun registro R10, R11 e i codici di condizione. In particolare, verrà restituito RAX invariato e lasciare tutti i registri non volatili e registri di argomenti vengono passati senza modificati.

## <a name="epilog-code"></a>Codice di epilogo

Codice di epilogo esiste ogni uscita per una funzione. Mentre è in genere solo un prologo, possono essere presenti più codici di epilogo. Codice di epilogo taglia lo stack per le dimensioni di allocazione fissa (se necessario), consente di deallocare l'allocazione dello stack fissi, consente di ripristinare registri non volatili visualizzando i valori salvati dallo stack e restituisce.

Il codice di epilogo deve seguire una serie di regole per il codice di rimozione precise per eseguire correttamente la rimozione delle eccezioni e gli interrupt. Queste regole di ridurre la quantità di dati necessari, di rimozione perché nessun dato aggiuntivo è necessaria per descrivere ogni epilogo. Al contrario, il codice di rimozione può determinare che un epilogo è in esecuzione eseguendo la scansione di rollforward tramite un flusso di codice per identificare un epilogo.

Se non viene usato alcun puntatore ai frame nella funzione e quindi l'epilogo deve prima di tutto deallocare la parte fissa dello stack di registri non volatili sono estratti e il controllo viene restituito alla funzione chiamante. Ad esempio,

```MASM
    add      RSP, fixed-allocation-size
    pop      R13
    pop      R14
    pop      R15
    ret
```

Se un puntatore ai frame viene utilizzato nella funzione, lo stack deve essere tagliato alla propria allocazione fissa prima dell'esecuzione dell'epilogo. Questa azione è tecnicamente non fa parte dell'epilogo. Ad esempio, l'epilogo seguente può essere utilizzato per annullare il prologo della query usata in precedenza:

```MASM
    lea      RSP, -128[R13]
    ; epilogue proper starts here
    add      RSP, fixed-allocation-size
    pop      R13
    pop      R14
    pop      R15
    ret
```

In pratica, quando viene usato un puntatore ai frame, non è un valido motivo per regolare RSP in due passaggi, in modo che l'epilogo seguente verrà usato invece:

```MASM
    lea      RSP, fixed-allocation-size - 128[R13]
    pop      R13
    pop      R14
    pop      R15
    ret
```

Questi moduli sono consentiti solo quelli per un epilogo. Deve contenere sia un' `add RSP,constant` o `lea RSP,constant[FPReg]`, seguito da una serie di zero o più server POP register a 8 byte e un `return` o un `jmp`. (Solo un subset di `jmp` istruzioni sono consentite nell'epilogo. Il subset è esclusivamente la classe di `jmp` istruzioni con ModRM i riferimenti alla memoria in cui il valore di campo mod ModRM è 00. L'uso di `jmp` istruzioni nell'epilogo con ModRM valore del campo mod 01 o 10 non è consentito. Tabella A-15 nel Volume manuale del programmatore di AMD 64 x86 architettura 3, vedere: Utilizzo generico e istruzioni di sistema, per altre informazioni sui riferimenti ModRM consentiti.) Nessun altro codice può essere visualizzato. In particolare, non può essere pianificato all'interno di un epilogo, tra cui il caricamento di un valore restituito.

Quando non viene usato un puntatore ai frame, è necessario usare l'epilogo `add RSP,constant` per deallocare la parte fissa dello stack. Non è possibile utilizzare `lea RSP,constant[RSP]` invece. Questa restrizione esiste in modo che il codice di rimozione ha modelli meno riconoscere quando la ricerca di epiloghi.

Seguendo queste regole consente il codice di rimozione per determinare che un epilogo è attualmente in esecuzione e per simulare l'esecuzione del resto dell'epilogo in modo da ricreare il contesto della funzione chiamante.

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](x64-software-conventions.md)
