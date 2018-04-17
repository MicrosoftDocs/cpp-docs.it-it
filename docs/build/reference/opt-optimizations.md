---
title: -OPT (ottimizzazioni) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.OptimizeReferences
- /opt
- VC.Project.VCLinkerTool.OptimizeForWindows98
- VC.Project.VCLinkerTool.EnableCOMDATFolding
- VC.Project.VCLinkerTool.OptimizeFolding
- VC.Project.VCLinkerTool.FoldingIterations
- VC.Project.VCLinkerTool.OptimizeFoldingIterations
dev_langs:
- C++
helpviewer_keywords:
- LINK tool [C++], controlling optimizations
- -OPT linker option
- linker [C++], optimizations
- OPT linker option
- optimization, linker
- /OPT linker option
ms.assetid: 8f229863-5f53-48a8-9478-243a647093ac
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 928968803dc008eb39b3d0c52152c1f3b631a852
ms.sourcegitcommit: 770f6c4a57200aaa9e8ac6e08a3631a4b4bdca05
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/16/2018
---
# <a name="opt-optimizations"></a>/OPT (Ottimizzazioni)
Controlla le ottimizzazioni eseguite da LINK durante una compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/OPT:{REF | NOREF}  
/OPT:{ICF[=iterations] | NOICF}  
/OPT:{LBR | NOLBR}  
```  
  
## <a name="arguments"></a>Argomenti  
 **REF** &AMP;#124; **NOREF**  
 **/OPT: ref** Elimina le funzioni e i dati a cui non fanno riferimento mai; **/OPT: NOREF** mantiene le funzioni e dati che non sono mai utilizzato come riferimento.  
  
 Quando /OPT: REF è abilitato, LINK rimuove i dati e le funzioni di package. Un oggetto contiene funzioni e dati (compressi COMDAT) se è stato compilato utilizzando il [/Gy](../../build/reference/gy-enable-function-level-linking.md) opzione. Questa ottimizzazione è nota come eliminazione COMDAT transitiva. Per impostazione predefinita, **/OPT: ref** è abilitato nelle compilazioni non di debug. Per eseguire l'override di questa impostazione predefinita e mantenere i dati COMDAT nel programma, specificare **/OPT: NOREF**. È possibile utilizzare il [/INCLUDONO](../../build/reference/include-force-symbol-references.md) opzione per ignorare la rimozione di un simbolo specifico.  
  
 Quando **/OPT: ref** è abilitato in modo esplicito o per impostazione predefinita, una forma limitata di **/OPT: ICF** è abilitato che riduce unicamente le funzioni identiche. Se si desidera **/OPT: ref** ma non **/OPT: ICF**, è necessario specificare **/OPT: REF, NOICF** o **/OPT: NOICF**.  
  
 Se [/debug](../../build/reference/debug-generate-debug-info.md) è specificato, il valore predefinito per **/OPT** è **NOREF**, e tutte le funzioni vengono mantenute nell'immagine. Per eseguire l'override di questa impostazione predefinita e ottimizzare una build di debug, specificare **/OPT: ref**. Poiché **/OPT: ref** implica **/OPT: ICF**, è consigliabile specificare anche **/OPT: NOICF** per mantenere le funzioni identiche nelle build di debug. Questo semplifica la lettura delle tracce dello stack e l'impostazione di punti di interruzione nelle funzioni che altrimenti verrebbero ridotte insieme. Il **/OPT: ref** disabilita il collegamento incrementale.  
  
 È necessario contrassegnare in modo esplicito `const` dati come COMDAT; usare [__declspec(selectany)](../../cpp/selectany.md).  
  
 Specifica di **/OPT: ICF** non abilita il **/OPT: ref** opzione.  
  
 **ICF [=** `iterations` **] &AMP;#124; NOICF**   
 Utilizzare **/OPT: ICF [=**`iterations`**]** per eseguire la riduzione di COMDAT identici. I dati COMDAT ridondanti possono essere rimossi dall'output del linker. Il parametro `iterations` facoltativo specifica il numero di volte in cui scorrere i simboli per individuare eventuali duplicati. Il numero predefinito di iterazioni è due. Attraverso iterazioni aggiuntive si potrebbero trovare più duplicati rivelati attraverso la riduzione nell'iterazione precedente.  
  
 Il linker si comporta in modo diverso quando **/OPT: ref** è specificato, e **ICF** è attiva per impostazione predefinita, rispetto a quando **/OPT: REF, ICF** è specificato in modo esplicito. Il modulo di **ICF** abilitato con **/OPT: ref** da solo non comporta la riduzione dei dati di sola lettura, inclusi rdata, pdata e xdata. Di conseguenza, viene ridotto un numero inferiore di funzioni quando vengono prodotte immagini per [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] perché le funzioni in questi moduli presentano una maggiore dipendenza dai dati di sola lettura, ad esempio PDATA e XDATA. Per ottenere la funzionalità completa **ICF** riduzione comportamento, specificare in modo esplicito **/OPT: ICF**.  
  
 Per inserire funzioni nei dati COMDAT, utilizzare il **/Gy** dell'opzione del compilatore; inserire `const` dati, si dichiara la classe `__declspec(selectany)`. Per informazioni su come specificare i dati per la riduzione, vedere [selectany](../../cpp/selectany.md).  
  
 Per impostazione predefinita, **ICF** è abilitato se **REF** si trova in. Per eseguire l'override di questa impostazione predefinita se **REF** è specificato, utilizzare **NOICF**. Quando **/OPT: ref** non è specificato in una build di debug, è necessario specificare esplicitamente **/OPT: ICF** per abilitare la riduzione di COMDAT. Tuttavia, poiché **/OPT: ICF** unisce funzioni o dati identici, può modificare i nomi delle funzioni visualizzati nelle tracce dello stack. Può inoltre impedire l'impostazione di punti di interruzione in alcune funzioni o l'analisi di alcuni dati nel debugger e condurre l'utente a funzioni impreviste quando avanza nel codice istruzione dopo istruzione. Pertanto, si consiglia di non utilizzare **/OPT: ICF** nelle build di debug a meno che i vantaggi del codice di dimensioni ridotte rendano tali svantaggi irrilevanti.  
  
> [!NOTE]
>  Poiché **/OPT: ICF** può provocare lo stesso indirizzo per poter essere assegnati a differenti funzioni o membri dati di sola lettura (`const` variabili compilate utilizzando **/Gy**), può causare interruzioni in un programma che dipende da indirizzi univoci per le funzioni o membri dati di sola lettura. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md).  
  
 **LBR** &AMP;#124; **NOLBR**  
 Il **/OPT: lbr** e **/OPT:NOLBR** opzioni si applicano solo ai dati binari ARM. Poiché alcune istruzioni branch del processore ARM presentano un intervallo limitato, se il linker rileva un salto a un indirizzo non compreso in tale intervallo, sostituisce l'indirizzo di destinazione dell'istruzione branch con l'indirizzo di un'"isola" di codice contenente un'istruzione branch destinata alla destinazione effettiva. È possibile utilizzare **/OPT: lbr** per ottimizzare il rilevamento di istruzioni branch lunghe e il posizionamento di isole di codice intermedie per ridurre al minimo la dimensione complessiva del codice. **/OPT:NOLBR** indica al linker di generare isole di codice per istruzioni branch lunghe man mano che vengono rilevate, senza ottimizzazione.  
  
 Per impostazione predefinita, il **/OPT: lbr** opzione viene impostata quando il collegamento incrementale non è abilitato. Se si desidera un collegamento non incrementale, ma non ottimizzazioni branch lunghe, specificare **/OPT:NOLBR**. Il **/OPT: lbr** disabilita il collegamento incrementale.  
  
## <a name="remarks"></a>Note  
 Le ottimizzazioni riducono in genere le dimensioni dell'immagine e aumentano la velocità del programma, con conseguente aumento del tempo necessario per il collegamento.  
  
 È possibile utilizzare il [/Verbose](../../build/reference/verbose-print-progress-messages.md) opzione per visualizzare le funzioni rimosse da **/OPT: ref** e le funzioni vengono ridotte da **/OPT: ICF**.  
  
### <a name="to-set-the-opticf-or-optref-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:ICF o OPT:REF nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro sinistro, espandere **le proprietà di configurazione**, **Linker**, **ottimizzazione**.  
  
3.  Modificare una di queste proprietà:  
  
    -   **Abilita riduzione COMDAT**  
  
    -   **Riferimenti**  
  
### <a name="to-set-the-optlbr-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:LBR nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **Linker** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Immettere l'opzione in **opzioni aggiuntive**:  
  
     `/opt:lbr`  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
