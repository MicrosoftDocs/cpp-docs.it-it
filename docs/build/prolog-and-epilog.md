---
title: Prologo ed epilogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 0453ed1a-3ff1-4bee-9cc2-d6d3d6384984
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 700b467065d17a61dcfabf9dcaa6577a7ecffc11
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="prolog-and-epilog"></a>Prologo ed epilogo
Ogni funzione alloca spazio dello stack, chiama altre funzioni, consente di salvare i registri non volatili o utilizza la gestione delle eccezioni deve essere un prologo, i cui indirizzi limite sono descritti nei dati di rimozione associati alla voce di tabella rispettiva funzione (vedere [Eccezioni (x64)](../build/exception-handling-x64.md)). Il prologo Salva argomento registri nei relativi indirizzi iniziali se necessario, inserisce i registri non volatili nello stack, alloca la parte fissa dello stack per le variabili locali e i temporanei e facoltativamente stabilisce un puntatore ai frame. I dati di rimozione deve descrivere l'azione del prologo e deve fornire le informazioni necessarie per annullare gli effetti del codice di prologo.  
  
 Se l'allocazione fissa nello stack è più di una pagina (ovvero, maggiore di 4096 byte), è possibile che l'allocazione dello stack potrebbe estendersi su più pagine di memoria virtuale e, pertanto, è necessario controllare l'allocazione prima è effettivamente allocata. A questo scopo, viene fornita una speciale routine che viene chiamata dal prologo e che non elimina i registri di argomento.  
  
 Il metodo preferito per il salvataggio dei registri non volatili consiste nello spostare li nello stack prima dell'allocazione fissa dello stack. Se l'allocazione fissa dello stack sono stata eseguita prima di registri non volatili salvati, probabilmente sarà necessario all'indirizzo uno spostamento a 32 bit salvati registrare area (quest'ultima, push di registri sono veloci come si sposta e deve rimanere ad in futuro malgrado la dipendenza implicita tra push). I registri non volatili possono essere salvati in qualsiasi ordine. Tuttavia, il primo utilizzo di un registro non volatile nel prologo deve essere salvarlo.  
  
 Il codice di un tipico prologo potrebbe essere:  
  
```  
mov       [RSP + 8], RCX  
push   R15  
push   R14  
push   R13  
sub      RSP, fixed-allocation-size  
lea      R13, 128[RSP]  
...  
```  
  
 In questo prologo archivia il Registro di argomento RCX nella relativa posizione iniziale, non volatile Salva registra R13 R15 alloca la parte fissa dello stack frame e stabilisce un puntatore ai frame che punti a 128 byte nell'area di allocazione fissa. Utilizzo di un offset consente più dell'area di allocazione fissa essere risolti con offset di 1 byte.  
  
 Se la dimensione di allocazione fissa è maggiore o uguale a una pagina di memoria, una funzione di supporto deve essere chiamata prima di modificare RSP. Questo chkstk, ha il è responsabile per l'individuazione tramite probe l'intervallo dello stack da allocare, per assicurarsi che lo stack viene esteso in modo corretto. In tal caso, il precedente esempio di prologo invece sarebbe:  
  
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
  
 Il supporto di chkstk non modificherà qualsiasi registri diversi da R10, R11 e i codici di condizione. In particolare, verrà restituito RAX invariato e lasciare tutti i registri non volatili e registri di passaggio di argomenti senza modificati.  
  
 Codice di epilogo è presente in ogni uscita per una funzione. Mentre è in genere solo un prologo, possono essere presenti più codici di epilogo. Codice di epilogo taglia lo stack per le dimensioni di allocazione fissa (se necessario), ne esegue l'allocazione fissa dello stack, consente di ripristinare registri non volatili visualizzando i valori salvati dallo stack e restituisce.  
  
 Il codice di epilogo deve seguire una serie di regole per il codice di rimozione precise per eseguire correttamente la rimozione tramite le eccezioni e gli interrupt. Questo riduce la quantità di dati richiesti, di rimozione perché non di dati aggiuntivi necessari per descrivere ogni epilogo. Al contrario, il codice di rimozione è possibile determinare che un epilogo è in esecuzione per l'analisi in avanti di un flusso di codice per identificare un epilogo.  
  
 Se non viene utilizzato alcun puntatore ai frame in funzione, quindi l'epilogo deve prima di deallocare la parte fissa dello stack di registri non volatili e il controllo viene restituito alla funzione chiamante. Ad esempio,  
  
```  
add      RSP, fixed-allocation-size  
pop      R13  
pop      R14  
pop      R15  
ret  
```  
  
 Se un puntatore ai frame viene utilizzato nella funzione, lo stack deve essere tagliato nell'allocazione fissa prima dell'esecuzione dell'epilogo. Si tratta tecnicamente non fa parte dell'epilogo. Ad esempio, l'epilogo seguente potrebbe essere utilizzato per annullare il prologo utilizzato in precedenza:  
  
```  
lea      RSP, -128[R13]  
; epilogue proper starts here  
add      RSP, fixed-allocation-size  
pop      R13  
pop      R14  
pop      R15  
ret  
```  
  
 In pratica, quando viene utilizzato un puntatore ai frame, non vi è alcun motivo per cui modificare RSP in due passaggi, in modo che verrà utilizzato invece il seguente epilogo:  
  
```  
lea      RSP, fixed-allocation-size - 128[R13]  
pop      R13  
pop      R14  
pop      R15  
ret  
```  
  
 Questi sono i formati validi solo per un epilogo. Essere costituito un `add RSP,constant` o `lea RSP,constant[FPReg]`, seguito da una serie di zero o più estrazioni di registro a 8 byte e una restituzione o un jmp. (Solo un subset di istruzioni jmp sono consentiti nell'epilogo. Si tratta esclusivamente di classe di jmp con riferimenti a memoria ModRM in campo mod ModRM valore 00. Non è consentito l'uso di jmp nell'epilogo con il valore di campo mod ModRM 01 o 10. Tabella vedere A-15 AMD x86-64 Architecture Programmer manuale Volume 3: utilizzo generale e istruzioni di sistema, per ulteriori informazioni sui riferimenti ModRM consentiti.). Nessun altro codice può essere visualizzati. In particolare, non può essere pianificato all'interno di un epilogo, compreso il caricamento di un valore restituito.  
  
 Si noti che, quando non viene utilizzato un puntatore ai frame, l'epilogo deve utilizzare `add RSP,constant` per deallocare la parte fissa dello stack. Non è possibile utilizzare `lea RSP,constant[RSP]` invece. Questa restrizione non esiste, pertanto il codice di rimozione ha meno di modelli per riconoscere quando si cerca di epiloghi.  
  
 Seguendo queste regole consente il codice di rimozione per determinare che un epilogo è attualmente in esecuzione e per simulare l'esecuzione del resto dell'epilogo in modo da ricreare il contesto della funzione chiamante.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)