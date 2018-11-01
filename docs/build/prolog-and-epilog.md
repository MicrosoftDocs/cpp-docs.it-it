---
title: Prologo ed epilogo
ms.date: 11/04/2016
ms.assetid: 0453ed1a-3ff1-4bee-9cc2-d6d3d6384984
ms.openlocfilehash: 2b54737edd46a5e108a211ee032889885be2b1da
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50543117"
---
# <a name="prolog-and-epilog"></a>Prologo ed epilogo

Ogni funzione che alloca lo spazio dello stack, deve avere un prologo della query il cui indirizzo di limiti è descritti nei dati di rimozione associati alla voce di tabella la rispettiva funzione chiama altre funzioni, consente di salvare i registri non volatili o Usa la gestione delle eccezioni (vedere [(X64) di gestione delle eccezioni](../build/exception-handling-x64.md)). Il prologo della query Salva argomento registri nei relativi indirizzi di casa se richiesto, inserisce i registri non volatili nello stack, assegna la parte fissa dello stack per variabili locali e temporanei e, facoltativamente, stabilisce un puntatore ai frame. Dati di rimozione associato deve descrivere l'azione di prologo e deve fornire le informazioni necessarie per annullare l'effetto del codice di prologo.

Se l'allocazione fissa nello stack è più di una pagina (vale a dire, maggiore di 4096 byte), è possibile che l'allocazione dello stack potrebbe estendersi su più pagine di memoria virtuale e, pertanto, l'allocazione deve essere verificato prima che venga effettivamente allocata. Una speciale routine che è possibile chiamare dal prologo e che non elimina i registri di argomento viene fornita per questo scopo.

Il metodo preferito per il salvataggio dei registri non volatili è per spostarli nello stack prima dell'allocazione fissa dello stack. Se l'allocazione dello stack predefinito sono stato eseguito prima dei registri non volatili sono stati salvati, molto probabilmente sarà necessario all'indirizzo uno spostamento a 32 bit di salvato registra area (quest'ultima, push di registri sono tanto rapida quanto spostamenti e deve rimanere per in futuro nonostante la dipendenza implicita tra push). I registri non volatili possono essere salvati in qualsiasi ordine. Tuttavia, deve essere al primo utilizzo di un registro non volatile nel prologo per salvare il file.

Il codice per un prologo tipico potrebbe essere:

```
mov       [RSP + 8], RCX
push   R15
push   R14
push   R13
sub      RSP, fixed-allocation-size
lea      R13, 128[RSP]
...
```

Questo prologo archivia il Registro di argomento RCX nella relativa posizione iniziale, non volatile Salva registra R13 R15 alloca la parte fissa del frame dello stack e stabilisce un puntatore ai frame che punti a 128 byte nell'area di allocazione fissa. L'uso di un offset consente più l'area di allocazione fissa da essere indirizzata con un offset a un byte.

Se la dimensione di allocazione fissa è maggiore o uguale a una pagina di memoria, una funzione di supporto deve essere chiamata prima di modificare RSP. Questo chkstk, ha il è responsabile dell'individuazione tramite probe l'intervallo dello stack da allocare, per assicurarsi che lo stack viene esteso in modo corretto. In tal caso, il precedente esempio di prologo invece sarebbe:

```
mov       [RSP + 8], RCX
push   R15
push   R14
push   R13
mov      RAX,  fixed-allocation-size
call   __chkstk
sub      RSP, RAX
lea      R13, 128[RSP]
...
```

Il supporto di chkstk non modificherà alcun registro R10, R11 e i codici di condizione. In particolare, verrà restituito RAX invariato e lasciare tutti i registri non volatili e registri di argomenti vengono passati senza modificati.

Codice di epilogo esiste ogni uscita per una funzione. Mentre è in genere solo un prologo, possono essere presenti più codici di epilogo. Codice di epilogo taglia lo stack per le dimensioni di allocazione fissa (se necessario), consente di deallocare l'allocazione dello stack fissi, consente di ripristinare registri non volatili visualizzando i valori salvati dallo stack e restituisce.

Il codice di epilogo deve seguire una serie di regole per il codice di rimozione precise per eseguire correttamente la rimozione delle eccezioni e gli interrupt. Ciò riduce la quantità di dati necessari, di rimozione perché nessun dato aggiuntivo è necessaria per descrivere ogni epilogo. Al contrario, il codice di rimozione può determinare che un epilogo è in esecuzione eseguendo la scansione di rollforward tramite un flusso di codice per identificare un epilogo.

Se non viene usato alcun puntatore ai frame nella funzione e quindi l'epilogo deve prima di tutto deallocare la parte fissa dello stack di registri non volatili sono estratti e il controllo viene restituito alla funzione chiamante. Ad esempio,

```
add      RSP, fixed-allocation-size
pop      R13
pop      R14
pop      R15
ret
```

Se un puntatore ai frame viene utilizzato nella funzione, lo stack deve essere tagliato alla propria allocazione fissa prima dell'esecuzione dell'epilogo. Si tratta tecnicamente non fa parte dell'epilogo. Ad esempio, l'epilogo seguente può essere utilizzato per annullare il prologo della query usata in precedenza:

```
lea      RSP, -128[R13]
; epilogue proper starts here
add      RSP, fixed-allocation-size
pop      R13
pop      R14
pop      R15
ret
```

In pratica, quando viene usato un puntatore ai frame, non è un valido motivo per regolare RSP in due passaggi, in modo che l'epilogo seguente verrà usato invece:

```
lea      RSP, fixed-allocation-size - 128[R13]
pop      R13
pop      R14
pop      R15
ret
```

Questi sono i moduli consentiti solo per un epilogo. Deve contenere sia un' `add RSP,constant` o `lea RSP,constant[FPReg]`, seguito da una serie di zero o più server POP register a 8 byte e un valore restituito o una routine. (Solo un subset di istruzioni jmp sono consentite nell'epilogo. Si tratta esclusivamente di alla classe di jmp con i riferimenti alla memoria ModRM dove ModRM mod campo value 00. Non è consentito l'uso di jmp nell'epilogo con valore del campo mod ModRM 01 o 10. Vedere tabella A-15 nel Volume 3 del manuale per programmatori di AMD 64 x86 architettura: generico e istruzioni di sistema, per altre informazioni sui riferimenti ModRM consentiti.). Nessun altro codice può essere visualizzato. In particolare, non può essere pianificato all'interno di un epilogo, tra cui il caricamento di un valore restituito.

Si noti che, quando non viene usato un puntatore ai frame, è necessario usare l'epilogo `add RSP,constant` per deallocare la parte fissa dello stack. Non è possibile utilizzare `lea RSP,constant[RSP]` invece. Questa restrizione esiste in modo che il codice di rimozione ha modelli meno riconoscere quando la ricerca di epiloghi.

Seguendo queste regole consente il codice di rimozione per determinare che un epilogo è attualmente in esecuzione e per simulare l'esecuzione del resto dell'epilogo in modo da ricreare il contesto della funzione chiamante.

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)