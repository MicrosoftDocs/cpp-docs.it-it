---
description: 'Altre informazioni su: Prologo x64 e epilogo'
title: Prologo ed epilogo x64
ms.date: 12/17/2018
ms.assetid: 0453ed1a-3ff1-4bee-9cc2-d6d3d6384984
ms.openlocfilehash: 3bd4e2350a678e16a1c506ec8cd16497f78b7ec9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179772"
---
# <a name="x64-prolog-and-epilog"></a>Prologo ed epilogo x64

Ogni funzione che alloca lo spazio dello stack, chiama altre funzioni, Salva i registri non volatili o usa la gestione delle eccezioni deve avere un prologo i cui limiti degli indirizzi sono descritti nei dati di rimozione associati alla rispettiva voce della tabella di funzione. Per ulteriori informazioni, vedere [gestione delle eccezioni x64](../build/exception-handling-x64.md). Il prologo salva i registri degli argomenti negli indirizzi Home, se necessario, inserisce i registri non volatili nello stack, alloca la parte fissa dello stack per le variabili locali e temporaries e, facoltativamente, stabilisce un puntatore al frame. I dati di rimozione associati devono descrivere l'azione del prologo e devono fornire le informazioni necessarie per annullare l'effetto del codice di prologo.

Se l'allocazione fissa nello stack è maggiore di una pagina (ovvero maggiore di 4096 byte), è possibile che l'allocazione dello stack possa estendersi su più di una pagina di memoria virtuale e, di conseguenza, l'allocazione deve essere verificata prima di essere allocata. Una routine speciale che è richiamabile dal prologo e che non elimina definitivamente i registri degli argomenti viene fornita a questo scopo.

Il metodo preferito per salvare i registri non volatili consiste nello spostarli nello stack prima dell'allocazione dello stack fisso. Se l'allocazione dello stack fisso viene eseguita prima del salvataggio dei registri non volatili, probabilmente è necessario uno spostamento a 32 bit per risolvere l'area di registro salvata. (È possibile che i push dei registri siano veloci quanto lo spostamento e rimangano così per il futuro prevedibile, a prescindere dalla dipendenza implicita tra i push). I registri non volatili possono essere salvati in qualsiasi ordine. Tuttavia, il primo utilizzo di un registro non volatile nel prologo deve essere per salvarlo.

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

Questo prologo archivia il registro degli argomenti RCX nella posizione principale, Salva i registri non volatili R13-R15, alloca la parte fissa del stack frame e stabilisce un puntatore al frame che punta a 128 byte nell'area di allocazione fissa. L'utilizzo di un offset consente di risolvere più l'area di allocazione fissa con offset a un byte.

Se le dimensioni di allocazione fisse sono maggiori o uguali a una pagina di memoria, prima di modificare RSP è necessario chiamare una funzione di supporto. Questo helper, `__chkstk` , esegue il probe dell'intervallo di stack allocato per garantire che lo stack venga esteso correttamente. In tal caso, l'esempio di prologo precedente sarebbe:

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

L' `__chkstk` Helper non modificherà alcun registro diverso da R10, R11 e i codici di condizione. In particolare, restituirà RAX invariato e lascerà invariati tutti i registri non volatili e quelli che passano gli argomenti.

## <a name="epilog-code"></a>Codice epilogo

Il codice di epilogo esiste a ogni uscita da una funzione. Mentre in genere esiste solo un prologo, possono essere presenti molti epilogo. Il codice di epilogo consente di tagliare lo stack alle dimensioni di allocazione fisse (se necessario), deallocare l'allocazione dello stack fisso, ripristinare i registri non volatili schioccando i valori salvati dallo stack e restituisce.

Il codice di epilogo deve seguire un set di regole rigoroso per il codice di rimozione in modo da rimuovere in modo affidabile le eccezioni e gli interrupt. Queste regole riducono la quantità di dati di rimozione necessari, perché non sono necessari dati aggiuntivi per descrivere ogni epilogo. Al contrario, il codice di rimozione può determinare che un epilogo viene eseguito analizzando in modo diretto un flusso di codice per identificare un epilogo.

Se nella funzione non viene utilizzato alcun puntatore a frame, l'epilogo deve innanzitutto deallocare la parte fissa dello stack, i registri non volatili vengono estratti e il controllo viene restituito alla funzione chiamante. ad esempio:

```MASM
    add      RSP, fixed-allocation-size
    pop      R13
    pop      R14
    pop      R15
    ret
```

Se nella funzione viene usato un puntatore a un frame, lo stack deve essere ritagliato nell'allocazione fissa prima dell'esecuzione dell'epilogo. Questa azione non è tecnicamente inclusa nell'epilogo. Ad esempio, è possibile usare l'epilogo seguente per annullare il prologo usato in precedenza:

```MASM
    lea      RSP, -128[R13]
    ; epilogue proper starts here
    add      RSP, fixed-allocation-size
    pop      R13
    pop      R14
    pop      R15
    ret
```

In pratica, quando viene utilizzato un puntatore al frame, non esiste un motivo valido per modificare RSP in due passaggi, pertanto viene utilizzato l'epilogo seguente:

```MASM
    lea      RSP, fixed-allocation-size - 128[R13]
    pop      R13
    pop      R14
    pop      R15
    ret
```

Questi moduli sono gli unici validi per un epilogo. Deve essere costituito da un oggetto `add RSP,constant` o `lea RSP,constant[FPReg]` , seguito da una serie di zero o più pop di registri a 8 byte e da un oggetto `return` o `jmp` . (Solo un subset di `jmp` istruzioni è consentito nell'epilogo. Il subset è esclusivamente la classe di `jmp` istruzioni con riferimenti di memoria ModRM in cui il valore del campo ModRM mod è 00. L'uso di `jmp` istruzioni nell'epilogo con il valore del campo mod ModRM 01 o 10 non è consentito. Per altre informazioni sui riferimenti a ModRM consentiti, vedere la tabella A-15 nel volume Manuale del programmatori dell'architettura AMD x86-64 volume 3: per utilizzo generico e istruzioni di sistema. Non è possibile visualizzare altro codice. In particolare, non è possibile pianificare alcun elemento all'interno di un epilogo, incluso il caricamento di un valore restituito.

Quando non viene utilizzato un puntatore al frame, l'epilogo deve utilizzare `add RSP,constant` per deallocare la parte fissa dello stack. Non può invece usare `lea RSP,constant[RSP]` . Questa restrizione esiste, quindi il codice di rimozione ha meno modelli da riconoscere durante la ricerca di epilogo.

Seguendo queste regole, il codice di rimozione determina che è in corso l'esecuzione di un epilogo e per simulare l'esecuzione del resto dell'epilogo per consentire la ricreazione del contesto della funzione chiamante.

## <a name="see-also"></a>Vedi anche

[convenzioni software x64](x64-software-conventions.md)
