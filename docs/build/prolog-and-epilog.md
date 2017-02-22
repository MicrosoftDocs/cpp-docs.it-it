---
title: "Prologo ed epilogo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 0453ed1a-3ff1-4bee-9cc2-d6d3d6384984
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Prologo ed epilogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per ciascuna funzione che alloca spazio dello stack, chiama altre funzioni, salva il contenuto dei registri non volatili o utilizza la gestione delle eccezioni deve essere definito un prologo, i cui indirizzi limite sono descritti nei dati di rimozione associati alla voce corrispondente nella tabella delle funzioni \(vedere [Gestione delle eccezioni \(x64\)](../build/exception-handling-x64.md)\).  Il prologo salva i registri di argomento nei relativi indirizzi iniziali, se necessario, inserisce i registri non volatili nello stack, alloca la parte fissa dello stack per le variabili locali e temporanee ed eventualmente definisce un puntatore ai frame.  I dati di rimozione associati devono descrivere l'azione del prologo nonché fornire le informazioni necessarie per annullare gli effetti del codice di prologo.  
  
 Se la dimensione dell'allocazione fissa dello stack è maggiore di una pagina, ossia è maggiore di 4096 byte, è possibile che l'allocazione dello stack si estenda su più pagine di memoria virtuale. Di conseguenza, prima di eseguire effettivamente l'allocazione, è necessario effettuare un controllo.  A questo scopo, è disponibile una routine speciale che può essere chiamata dal prologo e che non distrugge gli eventuali registri di argomento.  
  
 Il metodo consigliato per il salvataggio dei registri non volatili consiste nello spostamento di tali registri nello stack prima dell'esecuzione dell'allocazione fissa dello stack.  Se quest'ultima è stata eseguita prima del salvataggio dei registri non volatili, è molto probabile che sia necessario uno spostamento a 32 bit per indirizzare l'area dei registri salvati. Le operazioni di inserimento dei registri sono simili a quelle di spostamento e devono mantenere tale velocità anche nell'immediato futuro, nonostante la dipendenza implicita tra i vari inserimenti.  Il salvataggio dei registri non volatili può essere effettuato in qualsiasi ordine.  Tuttavia, la prima operazione da eseguire nel prologo su un registro non volatile deve essere il salvataggio del registro.  
  
 Di seguito è riportato il codice di un tipico prologo:  
  
```  
mov       [RSP + 8], RCX  
push   R15  
push   R14  
push   R13  
sub      RSP, fixed-allocation-size  
lea      R13, 128[RSP]  
...  
```  
  
 In questo prologo viene memorizzato il contenuto del registro di argomento RCX nella relativa posizione iniziale, vengono salvati i registri non volatili R13\-R15, viene allocata la parte fissa dello stack frame e viene definito un puntatore ai frame che punti a 128 byte nell'area di allocazione fissa.  L'utilizzo di un offset consente di indirizzare una parte maggiore dell'area di allocazione fissa, con offset di 1 byte.  
  
 Se la dimensione dell'allocazione fissa è maggiore o uguale a una pagina di memoria, prima di modificare RSP sarà necessario chiamare una funzione di supporto.  Quest'ultima, \_\_chkstk, ha il compito di sondare l'intervallo dello stack da allocare e assicura che lo stack venga esteso correttamente.  In questo caso, il precedente esempio di prologo diventerebbe:  
  
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
  
 La funzione di supporto \_\_chkstk non modificherà gli eventuali registri diversi da R10, R11 e i codici di condizione.  In particolare, restituirà RAX invariato e lascerà intatti tutti i registri non volatili e i registri di argomento.  
  
 Deve essere presente un codice di epilogo in corrispondenza di ciascuna uscita a una funzione.  In genere viene definito un unico codice di prologo, mentre possono essere presenti più codici di epilogo.  Il codice di epilogo taglia lo stack in corrispondenza della relativa dimensione di allocazione fissa, se necessario, dealloca l'allocazione fissa dello stack, ripristina i registri non volatili estraendo i rispettivi valori salvati dallo stack e quindi restituisce il controllo.  
  
 Affinché il codice di rimozione possa eseguire correttamente la rimozione attraverso eccezioni e interrupt, è necessario che il codice di epilogo rispetti un set di regole ben definito.  Questo consente di ridurre la quantità di dati di rimozione richiesti, poiché non sono necessari dati aggiuntivi per descrivere ciascun epilogo.  Al contrario, il codice di rimozione può determinare che un epilogo è in fase di esecuzione analizzando un flusso di codice per identificare un epilogo.  
  
 Se nella funzione non viene utilizzato alcun puntatore ai frame, l'epilogo deve prima deallocare la parte fissa dello stack, quindi recuperare i registri non volatili e infine restituire il controllo alla funzione chiamante.  Di seguito è riportato un esempio:  
  
```  
add      RSP, fixed-allocation-size  
pop      R13  
pop      R14  
pop      R15  
ret  
```  
  
 Se nella funzione viene utilizzato un puntatore ai frame, lo stack deve essere tagliato in corrispondenza della relativa allocazione fissa prima dell'esecuzione dell'epilogo.  Questa operazione non è inclusa tecnicamente nell'epilogo.  Ad esempio, è possibile utilizzare il seguente epilogo per annullare gli effetti del precedente codice di prologo:  
  
```  
lea      RSP, -128[R13]  
; epilogue proper starts here  
add      RSP, fixed-allocation-size  
pop      R13  
pop      R14  
pop      R15  
ret  
```  
  
 In pratica, quando si utilizza un puntatore ai frame, non esiste alcun motivo per modificare RSP in due passaggi. Di conseguenza, è possibile utilizzare in alternativa il seguente epilogo:  
  
```  
lea      RSP, fixed-allocation-size – 128[R13]  
pop      R13  
pop      R14  
pop      R15  
ret  
```  
  
 Un codice di epilogo deve  essere costituito necessariamente da un'istruzione `add RSP,constant` o `lea RSP,constant[FPReg]`, seguita da una serie di zero o più estrazioni di registro a 8 byte e da un'istruzione ret o jmp.  Nell'epilogo è consentito soltanto un sottoinsieme di istruzioni jmp,  ovvero quelle appartenenti alla classe di jmp con riferimenti di memoria ModRM in cui il valore del campo mod di ModRM è 00.  Non è possibile utilizzare nell'epilogo istruzioni jmp in cui il valore del campo mod di ModRM è 01 o 10.  Per ulteriori informazioni sui riferimenti ModRM consentiti, vedere la tabella A\-15 nel Volume 3 "General Purpose and System Instructions" di AMD x86\-64 Architecture Programmer’s Manual.  Non può essere presente alcun altro codice.  In particolare, non è possibile specificare alcuna operazione all'interno di un epilogo, compreso il caricamento di un valore restituito.  
  
 Tenere presente che, quando non si utilizza un puntatore ai frame, l'epilogo deve utilizzare l'istruzione `add RSP,constant` per deallocare la parte fissa dello stack.  Non è possibile utilizzare l'istruzione `lea RSP,constant[RSP]`.  Questa restrizione è stata imposta per limitare il numero dei modelli che devono essere riconosciuti dal codice di rimozione durante la ricerca degli epiloghi.  
  
 Il rispetto di queste regole consente al codice di rimozione di determinare che un epilogo è attualmente in esecuzione e di simulare l'esecuzione del resto dell'epilogo in modo da ricreare il contesto della funzione chiamante.  
  
## Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)