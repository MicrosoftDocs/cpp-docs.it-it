---
title: "Direttive #if, #elif, #else e #endif (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#else"
  - "#endif"
  - "#if"
  - "#elif"
  - "Defined"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#elif (direttiva)"
  - "#else (direttiva)"
  - "#endif (direttiva)"
  - "#if (direttiva)"
  - "compilazione condizionale, direttive"
  - "defined (direttiva)"
  - "elif (direttiva) (#elif)"
  - "else (direttiva) (#else)"
  - "endif (direttiva) (#endif)"
  - "if (direttiva) (#if)"
  - "preprocessore, direttive"
ms.assetid: c77a175f-6ca8-47d4-8df9-7bac5943d01b
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttive #if, #elif, #else e #endif (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La direttiva `#if`, con le direttive `#elif`, `#else` e `#endif`, controlla la compilazione di parti di un file di origine.  Se l'espressione scritta \(dopo `#if`\) presenta un valore diverso da zero, il gruppo di righe immediatamente successivo alla direttiva `#if` viene mantenuto nell'unità di conversione.  
  
## Grammatica  
 *conditional* :  
 *if\-part elif\-parts* opt *else\-part*opt *endif\-line*  
  
 *if\-part* :  
 *if\-line text*  
  
 *if\-line* :  
 **\#if**  *constant\-expression*  
  
 **\#ifdef**  *identifier*  
  
 **\#ifndef**  *identifier*  
  
 *elif\-parts* :  
 *elif\-line text*  
  
 *elif\-parts elif\-line text*  
  
 *elif\-line* :  
 **\#elif**  *constant\-expression*  
  
 *else\-part* :  
 *else\-line text*  
  
 *else\-line* :  
 `#else`  
  
 *endif\-line* :  
 `#endif`  
  
 Ogni direttiva `#if` in un file di origine deve corrispondere a una direttiva `#endif` di chiusura.  Tra le direttive `#if` e `#endif` può essere presente un numero qualsiasi di direttive `#elif`, ma è consentita al massimo una direttiva `#else`.  La direttiva `#else`, se disponibile, deve essere l'ultima direttiva prima di `#endif`.  
  
 Le direttive `#if`, `#elif`, `#else` e `#endif` possono essere annidate in parti di testo di altre direttive `#if`.  Ciascuna direttiva `#else`, `#elif` o `#endif` annidata appartiene alla direttiva `#if` precedente più vicina.  
  
 Tutte le direttive di compilazione condizionale, come `#if` e **\#ifdef**, devono corrispondere alle direttive `#endif` di chiusura prima della fine del file; in caso contrario, viene generato un messaggio di errore.  Quando le direttive di compilazione condizionale sono contenute in file di inclusione, devono soddisfare le stesse condizioni: non devono esistere direttive di compilazione condizionale non corrispondenti alla fine del file di inclusione.  
  
 La sostituzione della macro viene eseguita nella parte della riga di comando che segue un comando `#elif`, pertanto una chiamata della macro può essere utilizzata in *constant\-expression*.  
  
 Il preprocessore seleziona una delle occorrenze di *text* specificate per l'ulteriore elaborazione.  Un blocco specificato in *text* può essere qualsiasi sequenza di testo.  Può occupare più righe.  In genere *text* rappresenta testo di programma utile al compilatore o al preprocessore.  
  
 Il preprocessore elabora il *text* selezionato e lo passa al compilatore.  Se *text* contiene direttive per il preprocessore, questo le eseguirà.  Solo i blocchi di testo selezionati dal preprocessore vengono compilati.  
  
 Il preprocessore seleziona un singolo elemento *text* valutando l'espressione costante che segue ogni direttiva `#if` o `#elif` finché non trova un'espressione costante true \(diversa da zero\).  Seleziona tutto il testo \(incluse altre direttive per il preprocessore che iniziano con **\#**\) fino alla direttiva `#elif`, `#else` o `#endif` associata.  
  
 Se tutte le ricorrenze di *constant\-expression* sono false o se non viene visualizzata alcuna direttiva `#elif`, il preprocessore seleziona il blocco testo dopo la clausola `#else`.  Se la clausola `#else` viene omessa e tutte le istanze di *constant\-expression* nel blocco `#if` sono false, non viene selezionato alcun blocco testo.  
  
 L'elemento *constant\-expression* rappresenta un'espressione costante Integer con queste ulteriori restrizioni:  
  
-   Le espressioni devono disporre di un tipo integrale e possono includere solo costanti Integer, costanti carattere e l'operatore **defined**.  
  
-   L'espressione non può utilizzare `sizeof` o un operatore di cast di tipo.  
  
-   È possibile che l'ambiente di destinazione non sia in grado di rappresentare tutti gli intervalli di Integer.  
  
-   La traslazione rappresenta il tipo `int` così come il tipo **long**e `unsigned int` così come `unsigned long`.  
  
-   Il convertitore può traslare le costanti carattere in un set di valori di codice diverso dal set per l'ambiente di destinazione.  Per determinare le proprietà dell'ambiente di destinazione, verificare i valori delle macro da LIMITS.H in un'applicazione sviluppata per l'ambiente di destinazione.  
  
-   L'espressione non deve eseguire alcuna analisi di ambiente e deve rimanere isolata dai dettagli di implementazione nel computer di destinazione.  
  
 L'operatore del preprocessore **defined** può essere utilizzato in espressioni costanti speciali, come illustrato nella seguente sintassi:  
  
 defined\( `identifier` \)  
  
 defined `identifier`  
  
 Questa espressione costante è considerata true \(diversa da zero\) se *identifier* è attualmente definito; in caso contrario, la condizione è false \(0\).  Un identificatore definito come testo vuoto viene considerato definito.  La direttiva **defined** può essere utilizzata in una direttiva `#if` e `#elif`, ma non altrove.  
  
 Nell'esempio seguente, le direttive `#endif` e `#if` controllano la compilazione di una delle tre chiamate di funzioni:  
  
```  
#if defined(CREDIT)  
    credit();  
#elif defined(DEBIT)  
    debit();  
#else  
    printerror();  
#endif  
```  
  
 La chiamata di funzione a `credit` viene compilata se è definito l'identificatore `CREDIT`.  Se è definito l'identificatore `DEBIT`, viene compilata la chiamata di funzione a `debit`.  Se non viene definito alcun identificatore, viene compilata la chiamata a `printerror`.  Si noti che `CREDIT` e `credit` sono identificatori distinti nei linguaggi C e C\+\+ poiché i casi sono diversi.  
  
 Per le istruzioni di compilazione condizionali nell'esempio seguente si presuppone una costante simbolica precedentemente definita, denominata `DLEVEL`.  
  
```  
#if DLEVEL > 5  
    #define SIGNAL  1  
    #if STACKUSE == 1  
        #define STACK   200  
    #else  
        #define STACK   100  
    #endif  
#else  
    #define SIGNAL  0  
    #if STACKUSE == 1  
        #define STACK   100  
    #else  
        #define STACK   50  
    #endif  
#endif  
#if DLEVEL == 0  
    #define STACK 0  
#elif DLEVEL == 1  
    #define STACK 100  
#elif DLEVEL > 5  
    display( debugptr );  
#else  
    #define STACK 200  
#endif  
```  
  
 Il primo blocco `#if` mostra due set di direttive `#if`, `#else` e `#endif` annidate.  Il primo set delle direttive viene elaborato solo se `DLEVEL > 5` è true.  In caso contrario, vengono elaborate le istruzioni dopo \#**else**.  
  
 Le direttive `#elif` e `#else` nel secondo esempio sono utilizzate per scegliere una delle quattro possibilità in base al valore di `DLEVEL`.  La costante `STACK` è impostata su 0, 100 o 200, a seconda della definizione di `DLEVEL`.  Se `DLEVEL` è maggiore di 5, allora l'istruzione  
  
```  
#elif DLEVEL > 5  
display(debugptr);  
```  
  
 verrà compilata e `STACK` non è definito.  
  
 Generalmente la compilazione condizionale viene utilizzata per evitare più inclusioni dello stesso file di intestazione.  In C\+\+, in cui le classi sono spesso definite in file di intestazione, è possibile utilizzare costrutti come quelli riportati di seguito per impedire più definizioni:  
  
```  
/*  EXAMPLE.H - Example header file  */  
#if !defined( EXAMPLE_H )  
#define EXAMPLE_H  
  
class Example  
{  
...  
};  
  
#endif // !defined( EXAMPLE_H )  
```  
  
 Il codice precedente verifica se la costante simbolica `EXAMPLE_H` è definita.  In questo caso, il file è già stato incluso e non deve essere rielaborato.  In caso contrario, la costante `EXAMPLE_H` viene definita per contrassegnare EXAMPLE.H come già elaborato.  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)