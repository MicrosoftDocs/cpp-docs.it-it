---
title: "/kernel (crea file binario in modalit&#224; Kernel) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/kernel"
  - "/kernel-"
dev_langs: 
  - "C++"
ms.assetid: 6d7fdff0-c3d1-4b78-9367-4da588ce8b05
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /kernel (crea file binario in modalit&#224; Kernel)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un file binario che può essere eseguito nel kernel di Windows.  
  
## Sintassi  
  
```  
/kernel[-]  
```  
  
## Argomenti  
 **\/kernel**  
 Il codice nel progetto corrente viene compilato e collegato mediante un set di regole del linguaggio C\+\+ specifiche per il codice che verrà eseguito in modalità kernel.  
  
 **\/kernel\-**  
 Il codice nel progetto corrente viene compilato e collegato senza usare il set di regole del linguaggio C\+\+ specifiche per il codice che verrà eseguito in modalità kernel.  
  
## Note  
 Non esiste un equivalente `#pragma` al controllo di questa opzione.  
  
 Specificare l'opzione **\/kernel** indica al compilatore e al linker di arbitrare le funzionalità del linguaggio che sono consentite in modalità kernel e assicurarsi che la potenza espressiva sia sufficiente ad evitare instabilità a tempo di esecuzione univoca in modalità kernel C\+\+.  Questa operazione viene eseguita proibendo l'utilizzo delle funzionalità del linguaggio C\+\+ che siano distruttive in modalità kernel e fornendo gli avvisi per le funzionalità del linguaggio C\+\+ che sono potenzialmente dannose ma non possono essere disabilitate.  
  
 L'opzione **\/kernel** si applica sia alle fasi del linker che del compilatore di una compilazione ed è impostata a livello di progetto.  Passare l'opzione **\/kernel** per indicare al compilatore che il file binario risultante, dopo la fase di link, deve essere caricato nel kernel di Windows.  Il compilatore restringerà la gamma di funzionalità del linguaggio C\+\+ a un sottoinsieme compatibile con il kernel.  
  
 Nella tabella seguente sono elencate le modifiche nel comportamento del compilatore quando **\/kernel** è specificato.  
  
|Tipo di comportamento|Comportamento **\/kernel**|  
|---------------------------|--------------------------------|  
|Gestione delle eccezioni C\+\+|Disabilitato.  Tutte le istanze delle parole chiave `try` e `throw` generano un errore di compilazione \(ad eccezione della specifica di eccezione `throw()`\).  Non esistono opzioni **\/EH** compatibili con **\/kernel**, ad eccezione di **\/EH\-**.|  
|RTTI|Disabilitato.  Tutte le istanze delle parole chiave `typeid` e `dynamic_cast` generano un errore del compilatore, a meno che `dynamic_cast` venga utilizzata in modo statico.|  
|`new` e `delete`|È necessario definire in modo esplicito l'operatore `delete()` o `new()` ; né il tipo né il runtime fornirà una definizione predefinita.|  
  
 Le convenzioni di chiamata personalizzate, l'opzione di compilazione [\/GS](../../build/reference/gs-buffer-security-check.md) e tutte le ottimizzazioni sono consentite quando si utilizza l'opzione **\/kernel**.  L'incorporamento in gran parte non è interessato da **\/kernel**, con la stessa semantica rispettata dal compilatore.  Se si desidera assicurarsi che il qualificatore di incorporamento `__forceinline` venga rispettato, è necessario assicurarsi che l'avviso [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) sia abilitato in modo che l'utente sappia quando una particolare funzione `__forceinline` non viene incorporata.  
  
 Quando al compilatore viene passata l'opzione **\/kernel**, predefinisce una macro del preprocessore denominata `_KERNEL_MODE` e avente il valore **1**.  È possibile utilizzare questo metodo per compilare in modo condizionale il codice basato sul fatto che l'ambiente di esecuzione sia in modalità utente o in modalità kernel.  Ad esempio, il codice seguente specifica che la classe deve trovarsi in un segmento di memoria non divisibile in pagine quando viene compilata per l'esecuzione in modalità kernel.  
  
```cpp  
#ifdef _KERNEL_MODE  
#define NONPAGESECTION __declspec(code_seg("$kerneltext$"))  
#else  
#define NONPAGESECTION  
#endif  
  
class NONPAGESECTION MyNonPagedClass  
{  
  
};  
  
```  
  
 Alcune delle seguenti combinazioni di architettura di destinazione e opzione **\/arch** generano un errore quando vengono utilizzate con **\/kernel**:  
  
-   **\/arch:{SSE&#124;SSE2&#124;AVX}** non è supportato su x86.  Solo **\/arch:IA32** è supportato con **\/kernel** su x86.  
  
-   **\/arch:AVX** non è supportato con **\/kernel** su x64.  
  
 La compilazione con **\/kernel** passa **\/kernel** anche al linker.  Ecco come ciò influisce sul comportamento del linker:  
  
-   Il collegamento incrementale è disabilitato.  Se si aggiunge **\/incremental** alla riga di comando, il linker genera questo errore irreversibile:  
  
     **LINK : fatal error LNK1295: '\/INCREMENTAL' not compatible with '\/KERNEL' specification; link without '\/INCREMENTAL'**  
  
-   Il linker controlla ogni file oggetto \(o qualsiasi membro archivio incluso da librerie statiche\) per verificare se può essere compilato utilizzando l'opzione **\/kernel** ma non lo è.  Se le istanze soddisfano questi criteri, il linker collega di nuovo correttamente ma può presentarsi un avviso, come illustrato nella tabella seguente.  
  
    ||**\/kernel** obj|**\/kernel\-** obj, MASM obj, o cvtresed|Combinazione di **\/kernel** e obj **\/kernel\-**|  
    |-|----------------------|----------------------------------------------|-------------------------------------------------------|  
    |**collegamento \/kernel**|Yes|Yes|Sì con avviso LNK4257|  
    |**link**|Yes|Yes|Yes|  
  
     **LNK4257 linking object not compiled with \/KERNEL ; image may not run**  
  
 L'opzione **\/kernel** e l'opzione **\/driver** operano in modo indipendente e nessuna delle due influisce sull'altra.  
  
### Impostare l'opzione \/kernel del compilatore in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Nella casella **Opzioni aggiuntive**, aggiungere `/kernel` o `/kernel-`.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)