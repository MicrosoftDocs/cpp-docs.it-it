---
title: Gestione delle eccezioni ARM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: fe0e615f-c033-4ad5-97f4-ff96af45b201
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fdbb6ea3563fb82e90b2bc4ca19f76c43c703cf3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="arm-exception-handling"></a>Gestione delle eccezioni ARM
Windows su architetture ARM usa lo stesso meccanismo di gestione strutturata delle eccezioni sia per le eccezioni sincrone generate da hardware che per le eccezioni sincrone generate da software. I gestori di eccezioni specifici del linguaggio sono costruiti sulla base della gestione strutturata delle eccezioni di Windows mediante le funzioni helper del linguaggio. Questo documento illustra la gestione delle eccezioni in Windows su architetture ARM e descrive gli helper del linguaggio usati dal codice generato da MASM e dal compilatore Visual C++.  
  
## <a name="arm-exception-handling"></a>Gestione delle eccezioni ARM  
 Windows su ARM Usa *codici di rimozione* per controllare la rimozione dello stack durante [gestione delle eccezioni strutturata](http://msdn.microsoft.com/library/windows/desktop/ms680657) (SEH). I codici di rimozione sono sequenze di byte memorizzate nella sezione .xdata dell'immagine eseguibile. Descrivono il funzionamento del codice di prologo ed epilogo della funzione in modo astratto, affinché sia possibile annullare gli effetti del prologo di una funzione in previsione della rimozione fino allo stack frame del chiamante.  
  
 L'interfaccia EABI (Embedded Application Binary Interface) ARM specifica un modello di rimozione delle eccezioni che usa i codici di rimozione, ma non è sufficiente per la rimozione SEH in Windows, che deve gestire i casi asincroni in cui il processore è al centro del prologo o dell'epilogo di una funzione. Windows suddivide inoltre il controllo della rimozione in rimozione a livello di funzione e rimozione con ambito specifico del linguaggio, unificate nell'interfaccia EABI ARM. Per queste ragioni Windows su ARM specifica maggiori dettagli per i dati e la procedura di rimozione.  
  
### <a name="assumptions"></a>Presupposti  
 Le immagini eseguibili per Windows su ARM usano il formato Portable Executable (PE). Per ulteriori informazioni, vedere [specifica Microsoft PE e COFF](http://go.microsoft.com/fwlink/p/?linkid=84140). Le informazioni sulla gestione delle eccezioni sono memorizzate nelle sezioni .pdata e .xdata dell'immagine.  
  
 Il meccanismo di gestione delle eccezioni si basa su alcuni presupposti in relazione al codice che segue l'ABI per Windows su ARM:  
  
-   Quando si verifica un'eccezione all'interno del corpo di una funzione, non è rilevante se le operazioni del prologo vengono annullate o se le operazioni dell'epilogo vengono eseguite in avanti. Entrambi devono produrre risultati identici.  
  
-   Prologhi ed epiloghi tendono a riflettersi. Questo può essere sfruttato per ridurre le dimensioni dei metadati necessari per descrivere la rimozione.  
  
-   Le funzioni tendono a essere relativamente piccole. Diverse ottimizzazioni sfruttano questa caratteristica per creare pacchetti di dati in modo efficiente.  
  
-   Se viene inserita una condizione in un epilogo, sarà valida anche per tutte le istruzioni contenute nell'epilogo.  
  
-   Se un puntatore dello stack (SP) viene salvato in un altro registro nel prologo, è necessario che tale registro resti invariato in tutta la funzione, per consentire il recupero dell'SP di origine in qualsiasi momento.  
  
-   A meno che l'SP non venga salvato in un altro registro, tutte le relative modifiche devono avvenire esclusivamente all'interno di prologo ed epilogo.  
  
-   La rimozione di uno stack frame richiede le operazioni seguenti:  
  
    -   Regolare r13 (SP) a incrementi di 4 byte.  
  
    -   Prelevare uno o più registri Integer.  
  
    -   Prelevare uno o più registri Pop VFP (Virtual Floating-Point).  
  
    -   Copiare un valore di registro arbitrario in r13 (SP).  
  
    -   Caricare l'SP dallo stack mediante una piccola operazione post-decremento.  
  
    -   Analizzare uno dei pochi tipi di frame definiti correttamente.  
  
### <a name="pdata-records"></a>Record .pdata  
 I record .pdata in un'immagine in formato PE sono una matrice ordinata di elementi a lunghezza fissa che descrivono ogni funzione di manipolazione dello stack. Le funzioni foglia, ovvero funzioni che non chiamano altre funzioni, non richiedono record .pdata quando non modificano lo stack. In altri termini, non richiedono archiviazione locale e non devono salvare o ripristinare registri non volatili. I record per queste funzioni possono essere omessi dalla sezione .pdata per risparmiare spazio. Un'operazione di rimozione da una di queste funzioni può semplicemente copiare l'indirizzo mittente dal registro collegamenti (LR) al contatore del programma (PC) per risalire al chiamante.  
  
 Ogni record .pdata per ARM è lungo 8 byte. Il formato generale di un record posiziona l'indirizzo RVA (Relative Virtual Address) dell'inizio della funzione nella prima parola a 32 bit, seguita da una seconda parola che contiene un puntatore a un blocco .xdata di lunghezza variabile oppure una parola compressa che descrive una sequenza di rimozione di una funzione canonica, come mostrato in questa tabella:  
  
|Offset parola|Bit|Scopo|  
|-----------------|----------|-------------|  
|0|0-31|*Funzione avviare RVA* è RVA uguale a 32 bit dell'inizio della funzione. Se la funzione contiene codice Thumb, è necessario impostare il bit inferiore di questo indirizzo.|  
|1|0-1|*Flag* è un campo a 2 bit che indica come interpretare i restanti 30 bit della seconda parola. pdata. Se *Flag* è 0, quindi i bit restanti formano un *eccezione informazioni RVA* (con i due bit inferiori implicitamente 0). Se *Flag* è diverso da zero, i bit restanti formano un *dati di rimozione compressi* struttura.|  
|1|2-31|*Informazioni sull'eccezione RVA* o *compressi dati di rimozione*.<br /><br /> *Eccezione informazioni RVA* è l'indirizzo della struttura di informazioni di eccezione a lunghezza variabile, memorizzata nella sezione. xdata. Questi dati devono essere allineati a 4 byte.<br /><br /> *Dati di rimozione compressi* è una descrizione compressa delle operazioni necessarie per la rimozione da una funzione, supponendo una forma canonica. In questo caso non sono necessari record .xdata.|  
  
### <a name="packed-unwind-data"></a>Dati di rimozione compressi  
 Per le funzioni i cui prologhi ed epiloghi seguono la forma canonica descritta sotto, è possibile usare i dati di rimozione compressi. Questo elimina la necessità di un record .xdata e riduce significativamente lo spazio necessario per fornire dati di rimozione. I prologhi ed epiloghi canonici sono progettati per soddisfare le esigenze comuni di una funzione semplice che non richiede un gestore di eccezioni ed esegue le proprie operazioni di installazione e disinstallazione in un ordine standard.  
  
 Questa tabella mostra il formato di un record .pdata che contiene dati di rimozione compressi:  
  
|Offset parola|Bit|Scopo|  
|-----------------|----------|-------------|  
|0|0-31|*Funzione avviare RVA* è RVA uguale a 32 bit dell'inizio della funzione. Se la funzione contiene codice Thumb, è necessario impostare il bit inferiore di questo indirizzo.|  
|1|0-1|*Flag* è un campo a 2 bit che ha i seguenti significati:<br /><br /> -00 = compresso non è utilizzati; dati di rimozione i bit rimanenti puntare al record. xdata.<br />-01 = compresso dati di rimozione.<br />-10 = compresso dati in cui la funzione si presuppone che non abbia un prologo di rimozione. Si rivela utile per la descrizione dei frammenti di funzione non contigui all'inizio della funzione.<br />-11 = riservato.|  
|1|2-12|*Funzione lunghezza* è un campo a 11 bit che indica la lunghezza dell'intera funzione in byte diviso 2. Se la funzione è superiore a 4000 byte, è invece necessario usare un record .xdata completo.|  
|1|13-14|*RET* è un campo a 2 bit che indica come la funzione restituisce:<br /><br /> -00 = restituzione tramite pop {pc} (il *L* bit del flag deve essere impostato su 1, in questo caso).<br />-01 = restituzione tramite un branch a 16 bit.<br />-10 = restituzione tramite un branch a 32 bit.<br />-11 = Nessun epilogo affatto. Si rivela utile per descrivere un frammento di funzione non contiguo che può solo contenere un prologo, ma il cui epilogo si trova altrove.|  
|1|15|*H* è un flag a 1 bit che indica se la funzione "ospita" parametro di tipo integer Registra (r0-r3) eseguendone il push all'inizio della funzione e dealloca i 16 byte di stack prima della restituzione. (0 = non ospita i registri, 1 = ospita i registri.)|  
|1|16-18|*Reg* un campo a 3 bit che indica l'indice dell'ultimo salvataggio registro non volatile. Se il *R* bit è 0, quindi vengono salvati solo i registri integer e si presuppone che sia compreso nell'intervallo r4-rN, dove N è uguale a 4 + *Reg*. Se il *R* bit è 1, quindi vengono salvati, registri solo a virgola mobile che rientrano nell'intervallo d8-DN, dove N è uguale a 8 + *Reg*. La combinazione speciale di *R* = 1 e *Reg* = 7 indica che viene salvato alcun registro.|  
|1|19|*R* è un flag a 1 bit che indica se i registri non volatili salvati sono registri integer (0) o a virgola mobile (1). Se *R* è impostato su 1 e *Reg* campo è impostato su 7, non è sono inseriti alcun registri non volatili.|  
|1|20|*L* è un flag a 1 bit che indica se la funzione Salva/Ripristina registri LR, oltre agli altri registri indicati dal *Reg* campo. (0 = non salva/ripristina, 1 = salva/ripristina).|  
|1|21|*C* è un flag a 1 bit che indica se la funzione include istruzioni aggiuntive per configurare una catena di frame per l'analisi rapida dello stack (1) o non (0). Se questo bit è impostato, r11 viene aggiunto implicitamente all'elenco di registri Integer non volatili salvati. (Vedere la sezione limitazioni di seguito se il *C* flag viene utilizzato.)|  
|1|22-31|*Stack Adjust* è un campo di 10 bit che indica il numero di byte di stack allocati per questa funzione, divisa 4. Tuttavia, solo i valori compresi tra 0x000 e 0x3F3 possono essere codificati direttamente. Le funzioni che allocano più di 4044 byte di stack devono usare un record .xdata completo. Se il *regolare Stack* campo è 0x3F4 o superiore, quindi i 4 bit inferiori hanno un significato speciale:<br /><br /> -Bit 0-1 indicano il numero di parole di regolazione dello stack (1-4) meno 1.<br />-Bit 2 è impostato su 1 se il prologo ha combinato questa regolazione nella propria operazione push.<br />-Bit 3 è impostato su 1 se l'epilogo ha combinato questa regolazione nella propria operazione pop.|  
  
 Date le possibili ridondanze nelle codifiche descritte sopra, si applicano le seguenti limitazioni:  
  
-   Se il *C* flag è impostato su 1:  
  
    -   Il *L* flag deve essere impostata su 1, anche perché concatenazione dei frame richiesto sia r11 che LR.  
  
    -   R11 non deve essere incluso nel set di registri descritti da *Reg*. Ovvero, se vengono inseriti r4-r11, *Reg* deve descrivere solo r4-r10 perché il *C* flag presuppone r11.  
  
-   Se il *Ret* campo è impostato su 0, il *L* flag deve essere impostato su 1.  
  
 La violazione di queste restrizioni determina una sequenza non supportata.  
  
 Ai fini della discussione seguente, due pseudo flag derivate da *regolare Stack*:  
  
-   *PF* o "riduzione prologo", indica che *regolare Stack* è 0x3F4 o superiore e il bit 2 è impostato.  
  
-   *EF* o "riduzione epilogo", indica che *regolare Stack* è 0x3F4 o superiore e il bit 3 è impostato.  
  
 I prologhi per le funzioni canoniche possono contenere fino a 5 istruzioni (tenere presente che 3a e 3b si escludono a vicenda):  
  
|Istruzione|Opcode è considerato presente se:|Dimensione|Opcode|Codici di rimozione|  
|-----------------|-----------------------------------|----------|------------|------------------|  
|1|*H*= = 1|16|`push {r0-r3}`|04|  
|2|*C*= = 1 o *L*= = 1 o *R*= = 0 o PF = = 1|16/32|`push {registers}`|80-BF/D0-DF/EC-ED|  
|3a|*C*= = 1 e (*L*= = 0 e *R*= = 1 e PF = = 0)|16|`mov r11,sp`|C0-CF/FB|  
|3b|*C*= = 1 e (*L*= = 1 o *R*= = 0 o PF = = 1)|32|`add r11,sp,#xx`|FC|  
|4|*R*= = 1 e *Reg* ! = 7|32|`vpush {d8-dE}`|E0-E7|  
|5|*Stack regolare* ! = 0 e PF = = 0|16/32|`sub sp,sp,#xx`|00-7F/E8-EB|  
  
 L'istruzione 1 è sempre presente se la *H* bit viene impostato su 1.  
  
 Per impostare la concatenazione di frame, è presente l'istruzione 3a o 3b se il *C* bit viene impostato. È un `mov` a 16 bit se non viene eseguito il push di registri diversi da r11 e LR; in caso contrario, è un `add` a 32 bit.  
  
 Se viene specificata una regolazione non ridotta, l'istruzione 5 è la regolazione dello stack esplicita.  
  
 Le istruzioni 2 e 4 sono impostate in base alla necessità o meno di un'operazione push. Questa tabella riepiloga quali registri vengono salvati in base il *C*, *L*, *R*, e *PF* campi. In tutti i casi, *N* è uguale a *Reg* + 4, *E* è uguale a *Reg* + 8 e *S* è uguale a (~*Stack regolare*) & 3.  
  
|C|L|R|PF|Registri Integer sottoposti a push|Registri VFP sottoposti a push|  
|-------|-------|-------|--------|------------------------------|--------------------------|  
|0|0|0|0|R4-r*N*|none|  
|0|0|0|1|r*S*- r*N*|none|  
|0|0|1|0|none|D8-d*E*|  
|0|0|1|1|r*S*-r3|D8-d*E*|  
|0|1|0|0|R4-r*N*, LR|none|  
|0|1|0|1|r*S*- r*N*, LR|none|  
|0|1|1|0|LR|D8-d*E*|  
|0|1|1|1|r*S*-r3, LR|D8-d*E*|  
|1|0|0|0|R4-r*N*, r11|none|  
|1|0|0|1|r*S*- r*N*, r11|none|  
|1|0|1|0|r11|D8-d*E*|  
|1|0|1|1|r*S*-r3, r11|D8-d*E*|  
|1|1|0|0|R4-r*N*, r11, LR|none|  
|1|1|0|1|r*S*- r*N*, r11, LR|none|  
|1|1|1|0|r11, LR|D8-d*E*|  
|1|1|1|1|r*S*-r3, r11, LR|D8-d*E*|  
  
 Gli epiloghi per le funzioni canoniche hanno un formato analogo, ma in ordine inverso e con alcune opzioni aggiuntive. L'epilogo può contenere fino a 5 istruzioni e la sua forma dipende strettamente dalla forma del prologo.  
  
|Istruzione|Opcode è considerato presente se:|Dimensione|Opcode|  
|-----------------|-----------------------------------|----------|------------|  
|6|*Stack regolare*! = 0 e *EF*= = 0|16/32|`add   sp,sp,#xx`|  
|7|*R*= = 1 e *Reg*! = 7|32|`vpop  {d8-dE}`|  
|8|*C*= = 1 o (*L*= = 1 e *H*= = 0) o *R*= = 0 o *EF*= = 1|16/32|`pop   {registers}`|  
|9a|*H*= = 1 e *L*= = 0|16|`add   sp,sp,#0x10`|  
|9b|*H*= = 1 e *L*= = 1|32|`ldr   pc,[sp],#0x14`|  
|10a|*RET*= = 1|16|`bx    reg`|  
|10b|*RET*= = 2|32|`b     address`|  
  
 L'istruzione 6 è la regolazione dello stack esplicita se viene specificata una regolazione non ridotta. Poiché *PF* indipendenti *EF*, è possibile che l'istruzione 5 senza l'istruzione 6 è presente, o viceversa.  
  
 Le istruzioni 7 e 8 usano la stessa logica del prologo per stabilire quali registri vengono ripristinati dallo stack, ma con questi due modifiche: prima di tutto, *EF* è usato al posto di *PF*; il secondo, se *Ret*  = 0, LR viene sostituito da PC nell'elenco di registri e l'epilogo termina immediatamente.  
  
 Se *H* è impostata, l'istruzione 9a o 9b è presente. Istruzione 9a viene usata quando *L* è 0, per indicare che LR non è presente nello stack. In questo caso, lo stack viene regolato manualmente e *Ret* deve essere 1 o 2 per specificare una restituzione esplicita. Istruzione 9b viene usata quando *L* è 1, per indicare una fine precoce all'epilogo e per restituire e regolare lo stack contemporaneamente.  
  
 Se l'epilogo non è ancora terminato, istruzione 10a o 10b è presente, per indicare un ramo a 16 bit o 32 bit, in base al valore di *Ret*.  
  
### <a name="xdata-records"></a>Record .xdata  
 Quando il formato di rimozione compresso non è sufficiente per descrivere la rimozione di una funzione, è necessario creare un record .xdata a lunghezza variabile. L'indirizzo di questo record è archiviato nella seconda parola del record .pdata. Il formato di .xdata è un set di parole compresso di lunghezza variabile, con quattro sezioni:  
  
1.  Un'intestazione da 1 o 2 parole che descrive la dimensione complessiva della struttura .xdata e fornisce dati di funzione chiave. La seconda parola è presente solo se il *numero di epiloghi* e *codice parole* campi sono impostati entrambi su 0. I campi sono illustrati in dettaglio in questa tabella:  
  
    |Parola|Bit|Scopo|  
    |----------|----------|-------------|  
    |0|0-17|*Funzione lunghezza* è un campo a 18 bit che indica la lunghezza totale della funzione in byte, diviso 2. Se una funzione è maggiore di 512 KB, è necessario usare più record .pdata e .xdata per descrivere la funzione. Per maggiori dettagli, vedere la sezione Funzioni di grandi dimensioni più avanti in questo documento.|  
    |0|18-19|*Nascondi* è un campo a 2 bit che descrive la versione degli xdata rimanenti. Attualmente è definita solo la versione 0; i valori 1-3 sono riservati.|  
    |0|20|*X* è un campo a 1 bit che indica la presenza (1) o meno (0) di dati dell'eccezione.|  
    |0|21|*E* è un campo a 1 bit che indica che le informazioni che descrivono un singolo epilogo sono compresse nell'intestazione (1) anziché richiedere l'ambito aggiuntivo parole successive (0).|  
    |0|22|*F* è un campo a 1 bit che indica che questo record descrive un frammento di funzione (1) o una funzione intera (0). Un frammento implica che non esiste un prologo e che l'elaborazione dei prologhi deve essere ignorata.|  
    |0|23-27|*Numero di epiloghi* è un campo di bit 5 che ha due significati, a seconda dello stato del *E* bit:<br /><br /> -Se *E* è 0, questo campo è un conteggio del numero totale di ambiti di eccezione descritti nella sezione 3. Se nella funzione, questo campo è presente più di 31 ambiti e *codice parole* campo deve essere impostato entrambi su 0 per indicare che è necessaria una parola di estensione.<br />-Se *E* è 1, questo campo specifica l'indice del primo codice di rimozione che descrive l'unico epilogo.|  
    |0|28-31|*Parole chiave* è un campo a 4 bit che specifica il numero di parole a 32 bit necessarie per contenere tutti i codici di rimozione nella sezione 4. Se sono necessarie più di 15 parole per più di 63 byte di codice di rimozione, questo campo e *numero di epiloghi* campo deve essere impostato entrambi su 0 per indicare che è necessaria una parola di estensione.|  
    |1|0-15|*Il conteggio di epilogo estesa* è un campo a 16 bit che fornisce spazio aggiuntivo per la codifica di un numero di epiloghi insolitamente ampio. La parola di estensione che contiene questo campo è presente solo se il *numero di epiloghi* e *codice parole* campi nella prima parola di intestazione sono impostati entrambi su 0.|  
    |1|16-23|*Parole chiave estese* è un campo a 8 bit che fornisce spazio aggiuntivo per la codifica di un numero insolitamente elevato di parole di codice di rimozione. La parola di estensione che contiene questo campo è presente solo se il *numero di epiloghi* e *codice parole* campi nella prima parola di intestazione sono impostati entrambi su 0.|  
    |1|24-31|Riservata|  
  
2.  I dati (se il *E* bit nell'intestazione è stato impostato su 0) è un elenco di informazioni sugli ambiti di epilogo, compresse una per una parola e archiviate in ordine di inizio offset crescente. Ogni ambito contiene i campi seguenti:  
  
    |Bit|Scopo|  
    |----------|-------------|  
    |0-17|*Offset avviare epilogo* è un campo a 18 bit che descrive l'offset dell'epilogo, in byte diviso 2, rispetto all'inizio della funzione.|  
    |18-19|*Res* è un campo a 2 bit riservato per l'espansione futura. Il suo valore deve essere 0.|  
    |20-23|*Condizione* è un campo a 4 bit che indica la condizione in cui viene eseguito l'epilogo. Per gli epiloghi non condizionali, deve essere impostato su 0xE, che significa "sempre". Si noti che un epilogo deve essere interamente condizionale o interamente non condizionale e, in modalità Thumb-2, l'epilogo inizia con la prima istruzione dopo l'opcode IT.|  
    |24-31|*Indice iniziale di epilogo* è un campo a 8 bit che indica l'indice di byte del primo codice di rimozione che descrive questo epilogo.|  
  
3.  L'elenco di ambiti di epilogo è seguito da una matrice di byte che contiene codici di rimozione, descritti in dettaglio nella sezione Codici di rimozione di questo articolo. Questa matrice viene riempita alla fine fino al più vicino confine di parola completa. I byte sono archiviati in ordine little-endian, in modo da essere direttamente recuperabili in modalità little-endian.  
  
4.  Se il *X* campo dell'intestazione è 1, i byte di codice di rimozione sono seguiti dalle informazioni sul gestore di eccezioni. Si tratta di un *eccezione gestore RVA* che contiene l'indirizzo del gestore eccezioni, seguito immediatamente dalla quantità di dati richiesto dal gestore di eccezioni (a lunghezza variabile).  
  
 Il record .xdata è progettato in modo da consentire il recupero dei primi 8 byte e il calcolo della dimensione totale del record, esclusa la lunghezza dei dati di eccezione a lunghezza variabile che seguono. Questo frammento di codice calcola la dimensione del record:  
  
```cpp  
ULONG ComputeXdataSize(PULONG *Xdata)  
{  
    ULONG EpilogueScopes;  
    ULONG Size;  
    ULONG UnwindWords;  
  
    if ((Xdata[0] >> 23) != 0) {  
        Size = 4;  
        EpilogueScopes = (Xdata[0] >> 23) & 0x1f;  
        UnwindWords = (Xdata[0] >> 28) & 0x0f;  
    } else {  
        Size = 8;  
        EpilogueScopes = Xdata[1] & 0xffff;  
        UnwindWords = (Xdata[1] >> 16) & 0xff;  
    }  
  
    if (!(Xdata[0] & (1 << 21))) {  
        Size += 4 * EpilogueScopes;  
    }  
    Size += 4 * UnwindWords;  
    if (Xdata[0] & (1 << 20)) {  
        Size += 4;  
    }  
    return Size;  
}  
```  
  
 Anche se il prologo e ogni epilogo è indicizzato nei codici di rimozione, la tabella è condivisa tra di essi. Non è insolito che possano condividere tutti gli stessi codici di rimozione. È consigliabile che i writer dei compilatori siano ottimizzati per questo caso, perché l'indice più grande che si può specificare è 255 e questo limita il numero totale di codici di rimozione possibile per una determinata funzione.  
  
### <a name="unwind-codes"></a>Codici di rimozione  
 La matrice di codici di rimozione è un pool di sequenze di istruzione che descrive esattamente come annullare gli effetti del prologo, nell'ordine in cui le operazioni devono essere annullate. I codici di rimozione sono un mini set di istruzioni, codificato come stringa di byte. Al termine dell'esecuzione, l'indirizzo mittente della funzione di chiamata è nel registro LR e vengono ripristinati i valori di tutti i registri non volatili al momento della chiamata della funzione.  
  
 Se fosse garantito che le eccezioni possono verificarsi solo nel corpo di una funzione e mai all'interno di un prologo o epilogo, sarebbe necessaria una sola sequenza di rimozione. Il modello di rimozione di Windows, invece, richiede la possibilità di rimozione da un prologo o un epilogo parzialmente eseguito. Per tenere conto di questo requisito, i codici di rimozione sono stati progettati accuratamente in modo da includere un mapping uno a uno non ambiguo a ogni opcode pertinente nel prologo e nell'epilogo. Questo ha diverse implicazioni:  
  
-   È possibile calcolare la lunghezza del prologo e dell'epilogo contando il numero di codici di rimozione. Questo è possibile anche con istruzioni Thumb-2 a lunghezza variabile perché ci sono mapping distinti per gli opcode a 16 e 32 bit.  
  
-   Contando il numero di istruzioni dopo l'inizio dell'ambito di un epilogo, è possibile saltare il numero equivalente di codici di rimozione ed eseguire il resto di una sequenza per completare la rimozione parziale che l'epilogo stava eseguendo.  
  
-   Contando il numero di istruzioni prima della fine del prologo, è possibile saltare il numero equivalente di codici di rimozione ed eseguire il resto della sequenza per annullare solo le parti di prologo già eseguite completamente.  
  
 La tabella seguente illustra il mapping dai codici di rimozione agli opcode. I codici più comuni includono un solo byte, mentre quelli meno comuni richiedono due, tre o persino quattro byte. Ogni codice è archiviato dal byte più significativo a quello meno significativo. La struttura di codici di rimozione è diversa rispetto alla codifica descritta in nell'interfaccia EABI ARM perché questi codici di rimozione sono progettati per disporre di un mapping uno a uno agli opcode nel prologo e nell'epilogo per consentire la rimozione di prologhi ed epiloghi parzialmente eseguiti.  
  
|Byte 1|Byte 2|Byte 3|Byte 4|Opsize|Descrizione|  
|------------|------------|------------|------------|------------|-----------------|  
|00-7F||||16|`add   sp,sp,#X`<br /><br /> dove X è (Code & 0x7F) * 4|  
|80-BF|00-FF|||32|`pop   {r0-r12, lr}`<br /><br /> dove LR è estratto se Code & 0x2000 e r0-r12 sono estratti se il bit corrispondente è impostato in Code & 0x1FFF|  
|C0-CF||||16|`mov   sp,rX`<br /><br /> dove X è Code & 0x0F|  
|D0-D7||||16|`pop   {r4-rX,lr}`<br /><br /> dove X è (Code & 0x03) + 4 e LR è estratto se Code & 0x04|  
|D8-DF||||32|`pop   {r4-rX,lr}`<br /><br /> dove X è (Code & 0x03) + 8 e LR è estratto se Code & 0x04|  
|E0-E7||||32|`vpop  {d8-dX}`<br /><br /> dove X è (Code & 0x07) + 8|  
|E8-EB|00-FF|||32|`addw  sp,sp,#X`<br /><br /> dove X è (Code & 0x03FF) * 4|  
|EC-ED|00-FF|||16|`pop   {r0-r7,lr}`<br /><br /> dove LR è estratto se Code & 0x0100 e r0-r7 sono estratti se il bit corrispondente è impostato in Code & 0x00FF|  
|EE|00-0F|||16|Specifico di Microsoft|  
|EE|10-FF|||16|Disponibile|  
|EF|00-0F|||32|`ldr   lr,[sp],#X`<br /><br /> dove X è (Code & 0x000F) * 4|  
|EF|10-FF|||32|Disponibile|  
|F0-F4||||-|Disponibile|  
|F5|00-FF|||32|`vpop  {dS-dE}`<br /><br /> dove S è (Code & 0x00F0) >> 4 e E è Code & 0x000F|  
|F6|00-FF|||32|`vpop  {dS-dE}`<br /><br /> dove S è ((Code & 0x00F0) >> 4) + 16 e E è (Code & 0x000F) + 16|  
|F7|00-FF|00-FF||16|`add   sp,sp,#X`<br /><br /> dove X è (Code & 0x00FFFF) * 4|  
|F8|00-FF|00-FF|00-FF|16|`add   sp,sp,#X`<br /><br /> dove X è (Code & 0x00FFFFFF) * 4|  
|F9|00-FF|00-FF||32|`add   sp,sp,#X`<br /><br /> dove X è (Code & 0x00FFFF) * 4|  
|FA|00-FF|00-FF|00-FF|32|`add   sp,sp,#X`<br /><br /> dove X è (Code & 0x00FFFFFF) * 4|  
|FB||||16|nop (16 bit)|  
|FC||||32|nop (32 bit)|  
|FD||||16|end + nop a 16 bit nell'epilogo|  
|FE||||32|end + nop a 32 bit nell'epilogo|  
|FF||||-|end|  
  
 Mostra l'intervallo di valori esadecimali per ogni byte in un codice di rimozione *codice*, insieme alla dimensione opcode *Opsize* e all'interpretazione dell'istruzione originale corrispondente. Le celle vuote indicano codici di rimozione più brevi. Nelle istruzioni con valori ampi che coprono più byte, i bit più significativi sono archiviati per primi. Il *Opsize* campo Mostra la dimensione opcode implicita associata a ogni operazione Thumb-2. Le voci apparentemente duplicate nella tabella con diverse codifiche consentono di distinguere le varie dimensioni del codice operativo.  
  
 I codici di rimozione sono progettati in modo tale che il primo byte del codice indica sia la dimensione totale in byte del codice, sia la dimensione dell'opcode corrispondente nel flusso di istruzioni. Per calcolare la dimensione del prologo o epilogo, scorrere i codici di rimozione dall'inizio della sequenza fino alla fine e usare una tabella di ricerca o un metodo analogo per determinare la lunghezza dell'opcode corrispondente.  
  
 I codici di rimozione 0xFD e 0xFE sono equivalenti al codice finale normale 0xFF, ma prevedono un opcode nop supplementare nel caso dell'epilogo, a 16 o 32 bit. Per i prologhi, i codici 0xFD, 0xFE e 0xFF sono perfettamente equivalenti. Questo tiene conto delle comuni terminazioni di epilogo `bx lr` o `b <tailcall-target>`, che non hanno un'istruzione di prologo equivalente. In questo modo aumentano le possibilità di condivisione delle sequenze di rimozione tra il prologo e gli epiloghi.  
  
 In molti casi dovrebbe essere possibile usare lo stesso set di codici di rimozione per il prologo e tutti gli epiloghi. Per gestire la rimozione di prologhi ed epiloghi parzialmente eseguiti, tuttavia, possono essere necessarie più sequenze di codici di rimozione che variano per ordine e comportamento. Per questo motivo ogni epilogo ha un indice proprio nella matrice di rimozione per specificare l'inizio dell'esecuzione.  
  
### <a name="unwinding-partial-prologues-and-epilogues"></a>Rimozione di prologhi ed epiloghi parziali  
 Il caso di rimozione più comune è quando l'eccezione si verifica nel corpo della funzione, lontano dal prologo e da tutti gli epiloghi. In questo caso, l'agente di rimozione esegue il codice nella matrice di rimozione iniziando dall'indice 0 e prosegue fino a quando non viene rilevato un opcode finale.  
  
 Quando si verifica un'eccezione durante l'esecuzione di un prologo o epilogo, lo stack frame viene costruito solo parzialmente e l'agente di rimozione deve determinare esattamente quali operazioni sono state eseguite per poterle annullare correttamente.  
  
 Si consideri ad esempio questo prologo ed epilogo:  
  
```  
0000:   push  {r0-r3}         ; 0x04  
0002:   push  {r4-r9, lr}     ; 0xdd  
0006:   mov   r7, sp          ; 0xc7  
...  
0140:   mov   sp, r7          ; 0xc7  
0142:   pop   {r4-r9, lr}     ; 0xdd  
0146:   add   sp, sp, #16     ; 0x04  
0148:   bx    lr  
```  
  
 Accanto a ogni opcode è presente il codice di rimozione appropriato per descrivere l'operazione. La sequenza dei codici di rimozione per il prologo è un'immagine speculare dei codici di rimozione per l'epilogo, senza contare l'istruzione finale. Si tratta di un caso comune ed è il motivo per cui i codici di rimozione per il prologo si presumono sempre archiviati in ordine inverso rispetto all'ordine di esecuzione del prologo. Ecco quindi un set comune di codici di rimozione:  
  
```  
0xc7, 0xdd, 0x04, 0xfd  
```  
  
 Il codice 0xFD è un codice speciale per la fine della sequenza che indica che l'epilogo è più lungo di un'istruzione a 16 bit rispetto al prologo. Questo aumenta notevolmente le possibilità di condivisione dei codici di rimozione.  
  
 Nell'esempio, se si verifica un'eccezione durante l'esecuzione del corpo della funzione compreso tra prologo ed epilogo, la rimozione inizia con il caso dell'epilogo, all'offset 0 all'interno del codice dell'epilogo. Questo corrisponde all'offset 0x140 nell'esempio. L'agente di rimozione esegue la sequenza di rimozione completa poiché non è stata eseguita alcuna pulizia. Se invece l'eccezione si verifica un'istruzione dopo l'inizio del codice dell'epilogo, l'agente di rimozione può eseguire la rimozione saltando il primo codice di rimozione. Dato un mapping uno a uno tra OpCode e codici di rimozione, la rimozione dall'istruzione  *n*  nell'epilogo, l'agente di rimozione deve saltare i primi  *n*  codici di rimozione.  
  
 Una logica simile è applicabile al contrario per il prologo. In caso di rimozione dall'offset 0 nel prologo, non deve essere eseguito nulla. Per la rimozione da un'istruzione in avanti, la sequenza di rimozione deve iniziare da un codice di rimozione dalla fine perché i codici di rimozione del prologo sono archiviati in ordine inverso. Nel caso generale, la rimozione dall'istruzione  *n*  nel prologo, rimozione deve iniziare all'esecuzione  *n*  codici di rimozione dalla fine dell'elenco di codici.  
  
 I codici di rimozione di prologo ed epilogo non sempre corrispondono esattamente. In questo caso, può essere necessario che la matrice di codici di rimozione contenga più sequenze di codice. Per determinare l'offset per l'inizio dell'elaborazione dei codici, usare la logica seguente:  
  
1.  Per la rimozione dall'interno del corpo della funzione, iniziare l'esecuzione dei codici di rimozione all'indice 0 e proseguire fino a quando non viene raggiunto un opcode finale.  
  
2.  Per la rimozione dall'interno di un epilogo, usare l'indice di inizio specifico dell'epilogo fornito dall'ambito dell'epilogo. Calcolare il numero di byte di distanza tra PC e l'inizio dell'epilogo. Procedere nei codici di rimozione fino a quando non sono state considerate tutte le istruzioni già eseguite. Eseguire la sequenza di rimozione iniziando da tale punto.  
  
3.  Per la rimozione dal prologo, iniziare dall'indice 0 nei codici di rimozione. Calcolare la lunghezza dl codice di prologo dalla sequenza, quindi calcolare il numero di byte di distanza tra PC e la fine del prologo. Procedere nei codici di rimozione fino a quando non sono state considerate tutte le istruzioni non eseguite. Eseguire la sequenza di rimozione iniziando da tale punto.  
  
 I codici di rimozione per il prologo devono essere sempre i primi nella matrice. Si tratta anche dei codici usati per la rimozione nel caso generale di rimozione dall'interno del corpo. Le sequenze di codice specifiche dell'epilogo devono essere immediatamente successive alla sequenza di codice del prologo.  
  
### <a name="function-fragments"></a>Frammenti di funzione  
 Per ottimizzare il codice può essere utile suddividere una funzione in parti discontinue. Al termine, ogni frammento di funzione richiede un record .pdata, in alcuni casi .xdata, separato.  
  
 Supponendo che il prologo della funzione si trovi all'inizio della funzione e non possa essere suddiviso, si presentano quattro casi di frammentazione delle funzioni:  
  
-   Solo prologo; tutti gli epiloghi in altri frammenti.  
  
-   Prologo e uno o più epiloghi; altri epiloghi in altri frammenti.  
  
-   Nessun prologo o epilogo; prologo e uno o più epiloghi in altri frammenti.  
  
-   Solo epiloghi; prologo e altri eventuali epiloghi in altri frammenti.  
  
 Nel primo caso, deve essere descritto solo il prologo. Questa operazione può essere eseguita in formato. pdata compatto descrivendo normalmente il prologo e specificando un *Ret* valore 3 per non indicare nessun epilogo. Nel formato .xdata completo, è possibile specificare i codici di rimozione del prologo all'indice 0 come di consueto e specificare un numero di epiloghi pari a 0.  
  
 Il secondo caso corrisponde esattamente a una funzione normale. Se c'è solo un epilogo nel frammento e si trova alla fine del frammento, è possibile usare un record .pdata compatto. Altrimenti, è necessario usare un record .xdata completo. Tenere presente che gli offset specificati per l'inizio dell'epilogo sono relativi all'inizio del frammento, non all'inizio originario della funzione.  
  
 Il terzo e quarto caso sono varianti del primo e secondo caso rispettivamente, con la differenza che non contengono un prologo. In situazioni di questo tipo, si presume che prima dell'inizio dell'epilogo sia presente codice che è considerato parte del corpo della funzione, che normalmente verrebbe rimosso annullando gli effetti del prologo. Questi casi devono quindi essere codificati con uno pseudo-prologo, che descrive le modalità di rimozione dal corpo, ma che viene considerato di lunghezza 0 quando viene stabilito se eseguire una rimozione parziale all'inizio del frammento. In alternativa, questo pseudo-prologo può essere descritto usando gli stessi codici di rimozione dell'epilogo perché presumibilmente eseguono operazioni equivalenti.  
  
 Nel terzo e quarto caso, la presenza di una pseudo-prologo è specificata impostando il *Flag* campo del record. pdata compatto su 2 oppure impostando il *F* flag nell'intestazione. XData su 1. In entrambi i casi, il controllo della presenza di una rimozione epilogo parziale viene ignorato e tutte le rimozioni non epilogo vengono considerate complete.  
  
#### <a name="large-functions"></a>Funzioni di grandi dimensioni  
 È possibile usare frammenti per descrivere le funzioni che superano il limite di 512 KB imposto dai campi di bit nell'intestazione .xdata. Per descrivere una funzione di dimensioni molto grandi, è sufficiente suddividerla in frammenti di dimensioni inferiori a 512 KB. Ogni frammento deve essere adattato in modo da non suddividere un epilogo in più parti.  
  
 Solo il primo frammento della funzione contiene un prologo; gli altri frammenti sono contrassegnati come privi di prologo. A seconda del numero di epiloghi, ogni frammento può contenere zero o più epiloghi. Tenere presente che ogni ambito di epilogo in un frammento specifica l'offset di inizio rispetto all'inizio del frammento, non all'inizio della funzione.  
  
 Se un frammento non include prologo o epiloghi, è comunque necessario che il relativo record .pdata, e probabilmente .xdata, descriva le modalità di rimozione dall'interno del corpo della funzione.  
  
#### <a name="shrink-wrapping"></a>Wrapping di riduzione  
 Un caso speciale più complesso di frammenti di funzione è *wrapping di riduzione*, una tecnica per posticipare registro Salva dall'inizio della funzione in un secondo momento nella funzione, per ottimizzare nei casi semplici che non richiedono il salvataggio di registro. Può essere descritto come un'area esterna che alloca lo spazio stack ma salva un set minimo di registri e un'area interna che salva e ripristina ulteriori registri.  
  
```  
ShrinkWrappedFunction  
     push   {r4, lr}          ; A: save minimal non-volatiles  
     sub    sp, sp, #0x100    ; A: allocate all stack space up front  
     ...                      ; A:  
     add    r0, sp, #0xE4     ; A: prepare to do the inner save  
     stm    r0, {r5-r11}      ; A: save remaining non-volatiles  
     ...                      ; B:   
     add    r0, sp, #0xE4     ; B: prepare to do the inner restore  
     ldm    r0, {r5-r11}      ; B: restore remaining non-volatiles  
     ...                      ; C:   
     pop    {r4, pc}          ; C:  
```  
  
 Le funzioni con wrapping di riduzione in genere preallocano lo spazio per il salvataggio dei registri aggiuntivi nel prologo normale, quindi eseguono i salvataggi dei registri usando `str` o `stm` anziché `push`. In questo modo, tutte le modifiche ai puntatori dello stack rimangono nel prologo originale della funzione.  
  
 La funzione con wrapping di riduzione di esempio deve essere suddivisa in tre aree, contrassegnate come A, B e C nei commenti. La prima area A si estende dall'inizio della funzione fino alla fine dei salvataggi non volatili supplementari. È necessario che sia costruito un record .pdata o .xdata per descrivere questo frammento come dotato di prologo e privo di epiloghi.  
  
 L'area B intermedia ottiene il proprio record .pdata o .xdata che descrive un frammento privo di prologo ed epilogo. I codici di rimozione per quest'area devono comunque essere presenti perché è considerata un corpo di funzione. I codici devono descrivere un prologo composito che rappresenta sia i registri originali salvati nel prologo dell'area A, sia i registri aggiuntivi salvati prima di entrare nell'area B, come se fossero prodotti da una sequenza di operazioni.  
  
 I salvataggi di registri per l'area B non possono essere considerati un "prologo interno" perché il prologo composito descritto per l'area B deve descrivere sia il prologo dell'area A, sia i registri aggiuntivi salvati. Se il frammento B fosse descritto come dotato di prologo, i codici di rimozione presupporrebbero anche le dimensioni di tale prologo e non è possibile in alcun modo descrivere il prologo composito in maniera tale da prevedere il mapping uno a uno con gli opcode che salvano solo i registri aggiuntivi.  
  
 I salvataggi dei registri aggiuntivi devono essere considerati parte dell'area A perché, finché non sono completi, il prologo composito non descrive con precisione lo stato dello stack.  
  
 L'area C finale ottiene il proprio record .pdata o .xdata che descrive un frammento privo di prologo ma dotato di un epilogo.  
  
 Può funzionare anche un approccio alternativo se la modifica dello stack eseguita prima dell'ingresso nell'area B può essere ridotta a un'istruzione:  
  
```  
ShrinkWrappedFunction  
     push   {r4, lr}          ; A: save minimal non-volatile registers  
     sub    sp, sp, #0xE0     ; A: allocate minimal stack space up front  
     ...                      ; A:  
     push   {r4-r9}           ; A: save remaining non-volatiles  
     ...                      ; B:   
     pop    {r4-r9}           ; B: restore remaining non-volatiles  
     ...                      ; C:   
     pop    {r4, pc}          ; C: restore non-volatile registers  
```  
  
 L'elemento chiave in questo scenario è che a ogni limite di istruzione lo stack è pienamente coerente con i codici di rimozione per l'area. Se si verifica una rimozione prima del push interno in questo esempio, è considerata parte dell'area A e verrà rimosso solo il prologo dell'area A. Se la rimozione si verifica dopo il push interno, viene considerato parte dell'area B, che è privo di prologo ma contiene codici di rimozione che descrivono il push interno e il prologo originale dall'area una logica simile A. viene mantenuto per il pop interno.  
  
### <a name="encoding-optimizations"></a>Ottimizzazioni della codifica  
 Date la complessità dei codici di rimozione e la possibilità di sfruttare forme compatte ed espanse dei dati, esistono molte opportunità di ottimizzazione della codifica per ridurre ulteriormente lo spazio. Con un uso intensivo di queste tecniche, il sovraccarico netto derivante dalla descrizione di funzioni e frammenti mediante codici di rimozione può essere irrisorio.  
  
 L'ottimizzazione più importante consiste nel prestare attenzione a non confondere i limiti prologo/epilogo per le operazioni di rimozione con i limiti prologo/epilogo dal punto di vista del compilatore. I limiti di rimozione possono essere ridotti e ristretti per migliorare l'efficienza. Ad esempio, un prologo può contenere codice dopo l'impostazione dello stack per eseguire ulteriori controlli di convalida. Al termine della modifica dello stack, però, non è necessario codificare altre operazioni e tutto ciò che si trova oltre può essere rimosso dal prologo di rimozione.  
  
 Questa stessa regola vale per la lunghezza della funzione. Se dopo un epilogo in una funzione sono presenti dati, ad esempio un pool di valori letterali, questi non devono essere inclusi nella lunghezza della funzione. Riducendo la funzione al solo codice che fa parte della funzione, aumentano notevolmente le probabilità che l'epilogo si trovi alla fine e che sia possibile usare un record .pdata compatto.  
  
 In un prologo, quando il puntatore allo stack viene salvato in un altro registro, in genere non è necessario registrare ulteriori opcode. Per rimuovere la funzione, la prima operazione che viene eseguita è il recupero di SP dal registro salvato, per cui ulteriori operazioni non hanno alcun impatto sulla rimozione.  
  
 Gli epiloghi a istruzione singola non devono essere codificati, come ambiti o come codici di rimozione. Se la rimozione avviene prima dell'esecuzione dell'istruzione, è presumibile che sia dall'interno del corpo della funzione ed è sufficiente eseguire i codici di rimozione del prologo. Se la rimozione avviene dopo l'esecuzione dell'unica istruzione, per definizione avviene in un'altra area.  
  
 Gli epiloghi a istruzioni multiple non devono necessariamente codificare la prima istruzione dell'epilogo, per la stessa ragione di cui al punto precedente: se la rimozione avviene prima del l'esecuzione dell'unica istruzione, è sufficiente una rimozione prologo completa. Se la rimozione avviene dopo tale istruzione, devono essere considerate solo le operazioni successive.  
  
 Il riutilizzo del codice di rimozione deve essere massiccio. L'indice specificato da ogni ambito di epilogo punta a un punto iniziale arbitrario nella matrice di codici di rimozione. Non deve necessariamente puntare all'inizio di una sequenza precedente, ma può puntare a un punto intermedio. L'approccio migliore in questo caso consiste nel generare la sequenza di codice desiderata e quindi cercare una corrispondenza esatta di byte nel pool di sequenze già codificato e usare qualsiasi corrispondenza esatta come punto iniziale per il riutilizzo.  
  
 Se dopo gli epiloghi a istruzione singola ignorati non restano altri epiloghi, prendere in considerazione un formato .pdata compatto; diventa molto più probabile in assenza di un epilogo.  
  
## <a name="examples"></a>Esempi  
 In questi esempi, la base dell'immagine è in 0x00400000.  
  
### <a name="example-1-leaf-function-no-locals"></a>Esempio 1: funzione foglia, nessuna variabile locale  
  
```  
Prologue:  
  004535F8: B430      push        {r4-r5}  
Epilogue:  
  00453656: BC30      pop         {r4-r5}  
  00453658: 4770      bx          lr  
```  
  
 .pdata (fisso, 2 parole):  
  
-   Parola 0  
  
    -   *Inizio della funzione RVA* = 0x000535F8 (= 0x004535F8 0x00400000)  
  
-   Parola 1  
  
    -   *Flag* = 1, che indica formati canonici di prologo ed epilogo  
  
    -   *Funzione lunghezza* = 0x31 (= 0x62/2)  
  
    -   *RET* = 1, a indicare un ramo a 16 bit restituito  
  
    -   *H* = 0, che indica i parametri non erano ospitati  
  
    -   *R*= 0 e *Reg* = 1, che indicano il push/pop di r4-r5  
  
    -   *L* = 0, che indica di non salvare/ripristinare LR  
  
    -   *C* = 0, che indica l'assenza di concatenazione dei frame  
  
    -   *Stack Adjust* = 0, che indica nessuna regolazione dello stack  
  
### <a name="example-2-nested-function-with-local-allocation"></a>Esempio 2: funzione annidata con allocazione locale  
  
```  
Prologue:  
  004533AC: B5F0      push        {r4-r7, lr}  
  004533AE: B083      sub         sp, sp, #0xC  
Epilogue:  
  00453412: B003      add         sp, sp, #0xC  
  00453414: BDF0      pop         {r4-r7, pc}  
```  
  
 .pdata (fisso, 2 parole):  
  
-   Parola 0  
  
    -   *Inizio della funzione RVA* = 0x000533AC (= 0x004533AC-0x00400000)  
  
-   Parola 1  
  
    -   *Flag* = 1, che indica formati canonici di prologo ed epilogo  
  
    -   *Funzione lunghezza* = 0x35 (= 0x6A/2)  
  
    -   *RET* = 0, che indica una restituzione pop {pc}  
  
    -   *H* = 0, che indica i parametri non erano ospitati  
  
    -   *R*= 0 e *Reg* = 3, che indicano il push/pop di r4-r7  
  
    -   *L* = 1, che indica che LR è stato salvato/ripristinato  
  
    -   *C* = 0, che indica l'assenza di concatenazione dei frame  
  
    -   *Stack regolare* = 3 (0x0C/4 =)  
  
### <a name="example-3-nested-variadic-function"></a>Esempio 3: funzione variadic annidata  
  
```  
Prologue:  
  00453988: B40F      push        {r0-r3}  
  0045398A: B570      push        {r4-r6, lr}  
Epilogue:  
  004539D4: E8BD 4070 pop         {r4-r6}  
  004539D8: F85D FB14 ldr         pc, [sp], #0x14  
```  
  
 .pdata (fisso, 2 parole):  
  
-   Parola 0  
  
    -   *Inizio della funzione RVA* = 0x00053988 (= 0x00453988 0x00400000)  
  
-   Parola 1  
  
    -   *Flag* = 1, che indica formati canonici di prologo ed epilogo  
  
    -   *Funzione lunghezza* = 0x2A (= 0x54/2)  
  
    -   *RET* = 0, che indica un pop {pc}-ritorno di stile (in questo caso un tipo ldr pc, [sp], #0x14 restituito)  
  
    -   *H* = 1, che indica i parametri erano ospitati  
  
    -   *R*= 0 e *Reg* = 2, che indicano il push/pop di r4-r6  
  
    -   *L* = 1, che indica che LR è stato salvato/ripristinato  
  
    -   *C* = 0, che indica l'assenza di concatenazione dei frame  
  
    -   *Stack Adjust* = 0, che indica nessuna regolazione dello stack  
  
### <a name="example-4-function-with-multiple-epilogues"></a>Esempio 4: funzione con più epiloghi  
  
```  
Prologue:  
  004592F4: E92D 47F0 stmdb       sp!, {r4-r10, lr}  
  004592F8: B086      sub         sp, sp, #0x18  
Epilogues:  
  00459316: B006      add         sp, sp, #0x18  
  00459318: E8BD 87F0 ldm         sp!, {r4-r10, pc}  
  ...  
  0045943E: B006      add         sp, sp, #0x18  
  00459440: E8BD 87F0 ldm         sp!, {r4-r10, pc}  
  ...  
  004595D4: B006      add         sp, sp, #0x18  
  004595D6: E8BD 87F0 ldm         sp!, {r4-r10, pc}  
  ...  
  00459606: B006      add         sp, sp, #0x18  
  00459608: E8BD 87F0 ldm         sp!, {r4-r10, pc}  
  ...  
  00459636: F028 FF0F bl          KeBugCheckEx     ; end of function  
```  
  
 .pdata (fisso, 2 parole):  
  
-   Parola 0  
  
    -   *Inizio della funzione RVA* = 0x000592F4 (= 0x004592F4 0x00400000)  
  
-   Parola 1  
  
    -   *Flag* = 0, che indica i record. XData (necessario a causa di più epiloghi)  
  
    -   *. XData indirizzo* -0x00400000  
  
 .xdata (variabile, 6 parole):  
  
-   Parola 0  
  
    -   *Funzione lunghezza* = 0x0001A3 (= 0x000346/2)  
  
    -   *Nascondi* = 0, che indica la prima versione di xdata  
  
    -   *X* = 0, che indica nessun dato di eccezione  
  
    -   *E* = 0, che indica un elenco di ambiti di epilogo  
  
    -   *F* = 0, che indica una descrizione di funzione completa, incluso il prologo  
  
    -   *Numero di epiloghi* = 0x04, che indica 4 ambiti di epilogo totale  
  
    -   *Parole chiave* = 0x01, che indica una parola a 32 bit di codici di rimozione  
  
-   Parole 1-4, che descrivono 4 ambiti di epilogo in 4 posizioni. Ogni ambito ha un set comune di codici di rimozione, condiviso con il prologo, all'offset 0x00, e non è condizionale, specificando la condizione 0x0E (sempre).  
  
-   Codici di rimozione, a partire dalla parola 5: (condivisi tra prologo/epilogo)  
  
    -   Codice di rimozione 0 = 0x06: sp += (6 << 2)  
  
    -   Codice di rimozione 1 = 0xDE: pop {r4-r10, lr}  
  
    -   Codice di rimozione 2 = 0xFF: end  
  
### <a name="example-5-function-with-dynamic-stack-and-inner-epilogue"></a>Esempio 5: funzione con stack dinamico e prologo interno  
  
```  
Prologue:  
  00485A20: B40F      push        {r0-r3}  
  00485A22: E92D 41F0 stmdb       sp!, {r4-r8, lr}  
  00485A26: 466E      mov         r6, sp  
  00485A28: 0934      lsrs        r4, r6, #4  
  00485A2A: 0124      lsls        r4, r4, #4  
  00485A2C: 46A5      mov         sp, r4  
  00485A2E: F2AD 2D90 subw        sp, sp, #0x290  
Epilogue:  
  00485BAC: 46B5      mov         sp, r6  
  00485BAE: E8BD 41F0 ldm         sp!, {r4-r8, lr}  
  00485BB2: B004      add         sp, sp, #0x10  
  00485BB4: 4770      bx          lr  
  ...  
  00485E2A: F7FF BE7D b           #0x485B28    ; end of function  
```  
  
 .pdata (fisso, 2 parole):  
  
-   Parola 0  
  
    -   *Inizio della funzione RVA* = 0x00085A20 (= 0x00485A20 0x00400000)  
  
-   Parola 1  
  
    -   *Flag* = 0, che indica i record. XData (necessario a causa di più epiloghi)  
  
    -   *. XData indirizzo* -0x00400000  
  
 .xdata (variabile, 3 parole):  
  
-   Parola 0  
  
    -   *Funzione lunghezza* = 0x0001A3 (= 0x000346/2)  
  
    -   *Nascondi* = 0, che indica la prima versione di xdata  
  
    -   *X* = 0, che indica nessun dato di eccezione  
  
    -   *E* = 0, che indica un elenco di ambiti di epilogo  
  
    -   *F* = 0, che indica una descrizione di funzione completa, incluso il prologo  
  
    -   *Numero di epiloghi* = 0x001, che indica 1 ambito di epilogo totale  
  
    -   *Parole chiave* = 0x01, che indica una parola a 32 bit di codici di rimozione  
  
-   Parola 1: ambito di epilogo all'offset 0xC6 (= 0x18C/2), con inizio indice dei codici di rimozione in 0x00 e con la condizione 0x0E (sempre)  
  
-   Codici di rimozione, a partire dalla parola 2: (condivisi tra prologo/epilogo)  
  
    -   Codice di rimozione 0 = 0xC6: sp = r6  
  
    -   Codice di rimozione 1 = 0xDC: pop {r4-r8, lr}  
  
    -   Codice di rimozione 2 = 0x04: sp += (4 << 2)  
  
    -   Codice di rimozione 3 = 0xFD: end, conta come istruzione a 16 bit per l'epilogo  
  
### <a name="example-6-function-with-exception-handler"></a>Esempio 6: funzione con gestore di eccezioni  
  
```  
Prologue:  
  00488C1C: 0059 A7ED dc.w  0x0059A7ED  
  00488C20: 005A 8ED0 dc.w  0x005A8ED0  
FunctionStart:  
  00488C24: B590      push        {r4, r7, lr}  
  00488C26: B085      sub         sp, sp, #0x14  
  00488C28: 466F      mov         r7, sp  
Epilogue:  
  00488C6C: 46BD      mov         sp, r7  
  00488C6E: B005      add         sp, sp, #0x14  
  00488C70: BD90      pop         {r4, r7, pc}  
```  
  
 .pdata (fisso, 2 parole):  
  
-   Parola 0  
  
    -   *Inizio della funzione RVA* = 0x00088C24 (= 0x00488C24 0x00400000)  
  
-   Parola 1  
  
    -   *Flag* = 0, che indica i record. XData (necessario a causa di più epiloghi)  
  
    -   *. XData indirizzo* -0x00400000  
  
 .xdata (variabile, 5 parole):  
  
-   Parola 0  
  
    -   *Funzione lunghezza* = 0x000027 (= 0x00004E/2)  
  
    -   *Nascondi* = 0, che indica la prima versione di xdata  
  
    -   *X* = 1, che indica i dati di eccezione presenti  
  
    -   *E* = 1, che indica un unico epilogo  
  
    -   *F* = 0, che indica una descrizione di funzione completa, incluso il prologo  
  
    -   *Numero di epiloghi* = 0x00, che indica i codici di rimozione epilogo iniziano all'offset 0x00  
  
    -   *Parole chiave* = 0x02, che indica due parole a 32 bit di codici di rimozione  
  
-   Codici di rimozione, a partire dalla parola 1:  
  
    -   Codice di rimozione 0 = 0xC7: sp = r7  
  
    -   Codice di rimozione 1 = 0x05: sp += (5 << 2)  
  
    -   Codice di rimozione 2 = 0xED/0x90: pop {r4, r7, lr}  
  
    -   Codice di rimozione 4 = 0xFF: end  
  
-   Parola 3 specifica un gestore di eccezioni = 0x0019A7ED (= 0x0059A7ED - 0x00400000)  
  
-   La parola 4 e successive sono dati di eccezione inline  
  
### <a name="example-7-funclet"></a>Esempio 7: Funclet  
  
```  
Function:  
  00488C72: B500      push        {lr}  
  00488C74: B081      sub         sp, sp, #4  
  00488C76: 3F20      subs        r7, #0x20  
  00488C78: F117 0308 adds        r3, r7, #8  
  00488C7C: 1D3A      adds        r2, r7, #4  
  00488C7E: 1C39      adds        r1, r7, #0  
  00488C80: F7FF FFAC bl          target  
  00488C84: B001      add         sp, sp, #4  
  00488C86: BD00      pop         {pc}  
```  
  
 .pdata (fisso, 2 parole):  
  
-   Parola 0  
  
    -   *Inizio della funzione RVA* = 0x00088C72 (= 0x00488C72 0x00400000)  
  
-   Parola 1  
  
    -   *Flag* = 1, che indica formati canonici di prologo ed epilogo  
  
    -   *Funzione lunghezza* 0x0B (= 0x16/2)  
  
    -   *RET* = 0, che indica una restituzione pop {pc}  
  
    -   *H* = 0, che indica i parametri non erano ospitati  
  
    -   *R*= 0 e *Reg* = 7, che indica nessun registro è stato salvato/ripristinato  
  
    -   *L* = 1, che indica che LR è stato salvato/ripristinato  
  
    -   *C* = 0, che indica l'assenza di concatenazione dei frame  
  
    -   *Stack Adjust* = 1, che indica una regolazione dello stack di 1 × 4 byte  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica delle convenzioni ABI ARM](../build/overview-of-arm-abi-conventions.md)   
 [Problemi comuni relativi alla migrazione di Visual C++ ARM](../build/common-visual-cpp-arm-migration-issues.md)