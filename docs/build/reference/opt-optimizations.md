---
title: "/OPT (Ottimizzazioni) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.OptimizeReferences"
  - "/opt"
  - "VC.Project.VCLinkerTool.OptimizeForWindows98"
  - "VC.Project.VCLinkerTool.EnableCOMDATFolding"
  - "VC.Project.VCLinkerTool.OptimizeFolding"
  - "VC.Project.VCLinkerTool.FoldingIterations"
  - "VC.Project.VCLinkerTool.OptimizeFoldingIterations"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/OPT (opzione del linker)"
  - "LINK (strumento) [C++], controllo delle ottimizzazioni"
  - "linker [C++], ottimizzazioni"
  - "OPT (opzione del linker)"
  - "-OPT (opzione del linker)"
  - "ottimizzazione, linker"
ms.assetid: 8f229863-5f53-48a8-9478-243a647093ac
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# /OPT (Ottimizzazioni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla le ottimizzazioni eseguite da LINK durante una compilazione.  
  
## Sintassi  
  
```  
/OPT:{REF | NOREF}  
/OPT:{ICF[=iterations] | NOICF}  
/OPT:{LBR | NOLBR}  
```  
  
## Argomenti  
 **REF** &#124; **NOREF**  
 **\/OPT:REF** elimina le funzioni e i dati a cui non viene mai fatto riferimento. **\/OPT:NOREF** mantiene le funzioni e i dati a cui non viene mai fatto riferimento.  
  
 Quando \/OFT:REF è abilitato, LINK rimuove le funzioni e i dati compressi a cui non viene fatto riferimento.  Un oggetto contiene funzioni e dati compressi \(COMDAT\) se è stato compilato con l'opzione [\/Gy](../../build/reference/gy-enable-function-level-linking.md).  Questa ottimizzazione è nota come eliminazione COMDAT transitiva.  Per impostazione predefinita, **\/OPT:REF** è abilitato nelle compilazioni non di debug.  Per eseguire l'override di questa impostazione predefinita e mantenere i dati COMDAT senza riferimenti nel programma, specificare **\/OPT:NOREF**.  È possibile utilizzare l'opzione [\/INCLUDE](../../build/reference/include-force-symbol-references.md) per eseguire l'override della rimozione di un simbolo specifico.  
  
 Quando **\/OPT:REF** è abilitato in modo esplicito o per impostazione predefinita, è abilitata una forma limitata di **\/OPT:ICF** che riduce unicamente le funzioni identiche.  Se si desidera specificare **\/OPT:REF**, ma non **\/OPT:ICF**, è necessario specificare **\/OPT:REF,NOICF** o **\/OPT:NOICF**.  
  
 Se si specifica [\/DEBUG](../../build/reference/debug-generate-debug-info.md), l'impostazione predefinita per **\/OPT** è **NOREF** e tutte le funzioni vengono mantenute nell'immagine.  Per eseguire l'override di questa impostazione predefinita e ottimizzare una build di debug, specificare **\/OPT:REF**.  Poiché **\/OPT:REF** implica **\/OPT:ICF**, è consigliabile specificare anche **\/OPT:NOICF** per mantenere le funzioni identiche nelle build di debug.  Questo semplifica la lettura delle tracce dello stack e l'impostazione di punti di interruzione nelle funzioni che altrimenti verrebbero ridotte insieme.  **\/OPT:REF** disabilita il collegamento incrementale.  
  
 È necessario contrassegnare in modo esplicito i dati `const` come COMDAT. Utilizzare [\_\_declspec\(selectany\)](../../cpp/selectany.md).  
  
 L'utilizzo di **\/OPT:ICF** non comporta l'abilitazione dell'opzione **\/OPT:REF**.  
  
 **ICF\[\=**  `iterations` **\] &#124; NOICF**  
 Utilizzare **\/OPT:ICF\[\=**`iterations`**\]** per eseguire la riduzione dei dati COMDAT identici.  I dati COMDAT ridondanti possono essere rimossi dall'output del linker.  Il parametro `iterations` facoltativo specifica il numero di volte in cui scorrere i simboli per individuare eventuali duplicati.  Il numero predefinito di iterazioni è due.  Attraverso iterazioni aggiuntive si potrebbero trovare più duplicati rivelati attraverso la riduzione nell'iterazione precedente.  
  
 Il linker si comporta in modo diverso quando si specifica **\/OPT:REF** e **ICF** è abilitato per impostazione predefinita, rispetto a quando si specifica **\/OPT:REF,ICF** in modo esplicito.  Il formato di **ICF** abilitato solo con **\/OPT:REF** non comporta la riduzione dei dati di sola lettura, inclusi i dati RDATA, PDATA e XDATA.  Di conseguenza, viene ridotto un numero inferiore di funzioni quando vengono prodotte immagini per [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] perché le funzioni in questi moduli presentano una maggiore dipendenza dai dati di sola lettura, ad esempio PDATA e XDATA.  Per ottenere il comportamento di riduzione completo di **ICF**, specificare **\/OPT:ICF** in modo esplicito.  
  
 Per inserire funzioni nei dati COMDAT, utilizzare l'opzione del compilatore **\/Gy**. Per inserire dati `const`, dichiarare `__declspec(selectany)`.  Per informazioni su come specificare i dati per la riduzione, vedere [selectany](../../cpp/selectany.md).  
  
 Per impostazione predefinita, **ICF** è abilitato se **REF** è abilitato.  Per eseguire l'override di questa impostazione predefinita se **REF** è specificato, utilizzare **NOICF**.  Quando non si specifica **\/OPT:REF** in una build di debug, è necessario specificare in modo esplicito **\/OPT:ICF** per abilitare la riduzione dei dati COMDAT.  Tuttavia, poiché **\/OPT:ICF** unisce funzioni o dati identici, può modificare i nomi delle funzioni visualizzati nelle tracce dello stack.  Può inoltre impedire l'impostazione di punti di interruzione in alcune funzioni o l'analisi di alcuni dati nel debugger e condurre l'utente a funzioni impreviste quando avanza nel codice istruzione dopo istruzione.  Non è pertanto consigliabile utilizzare **\/OPT:ICF** nelle build di debug, a meno che i vantaggi derivanti dall'utilizzo di codice di dimensioni ridotte non rendano tali svantaggi irrilevanti.  
  
> [!NOTE]
>  Poiché **\/OPT:ICF** può comportare l'assegnazione dello stesso indirizzo a differenti funzioni o membri dati di sola lettura \(variabili `const` compilate utilizzando **\/Gy**\), può causare interruzioni in un programma che dipende da indirizzi univoci per le funzioni o i membri dati di sola lettura.  Per ulteriori informazioni, vedere [\/Gy \(Attiva collegamento a livello di funzione\)](../../build/reference/gy-enable-function-level-linking.md).  
  
 **LBR** &#124; **NOLBR**  
 Le opzioni **\/OPT:NOLBR** e **\/OPT:LBR** sono applicabili unicamente ai dati binari ARM.  Poiché alcune istruzioni branch del processore ARM presentano un intervallo limitato, se il linker rileva un salto a un indirizzo non compreso in tale intervallo, sostituisce l'indirizzo di destinazione dell'istruzione branch con l'indirizzo di un'"isola" di codice contenente un'istruzione branch destinata alla destinazione effettiva.  È possibile utilizzare **\/OPT:LBR** per ottimizzare il rilevamento di istruzioni branch lunghe e il posizionamento di isole di codice intermedie per ridurre al minimo le dimensioni del codice nel suo complesso.  **\/OPT:NOLBR** indica al linker di generare isole di codice per istruzioni branch lunghe man mano che vengono rilevate, senza ottimizzazione.  
  
 Per impostazione predefinita, l'opzione **\/OPT:LBR** viene impostata quando il collegamento incrementale non è abilitato.  Se si desidera un collegamento non incrementale, ma non ottimizzazioni branch lunghe, specificare **\/OPT:NOLBR**.  **\/OPT:LBR** disabilita il collegamento incrementale.  
  
## Note  
 Le ottimizzazioni riducono in genere le dimensioni dell'immagine e aumentano la velocità del programma, con conseguente aumento del tempo necessario per il collegamento.  
  
 È possibile utilizzare l'opzione [\/VERBOSE](../../build/reference/verbose-print-progress-messages.md) per visualizzare le funzioni rimosse da **\/OPT:REF** e quelle ridotte da **\/OPT:ICF**.  
  
### Per impostare l'opzione del linker OPT:ICF o OPT:REF nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro sinistro espandere **Proprietà di configurazione**, **Linker**, **Ottimizzazione**.  
  
3.  Modificare una di queste proprietà:  
  
    -   **Abilita riduzione COMDAT**  
  
    -   **Riferimenti**  
  
### Per impostare l'opzione del linker OPT:LBR nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Immettere l'opzione in **Opzioni aggiuntive**:  
  
     `/opt:lbr`  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)