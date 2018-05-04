---
title: -vd (Disabilita spostamenti costruttori) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /vd
dev_langs:
- C++
helpviewer_keywords:
- -vd0 compiler option [C++]
- vd1 compiler option [C++]
- /vdn (Disable Construction Displacement) compiler option
- constructor displacements
- vtordisp fields
- /vd0 compiler option [C++]
- -vd1 compiler option [C++]
- /vd1 compiler option [C++]
- displacements compiler option
- vd0 compiler option [C++]
- Disable Construction Displacements compiler option
ms.assetid: 93258964-14d7-4b1c-9cbc-d6f4d74eab69
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c6a7b9bacc95c668c1c0f59a3dba172d58c607d2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="vd-disable-construction-displacements"></a>/vd (Disabilita spostamenti costruttori)
## <a name="syntax"></a>Sintassi  
  
```  
/vdn  
```  
  
## <a name="arguments"></a>Argomenti  
 `0`  
 Elimina il membro di spostamento di un costruttore/distruttore vtordisp. Scegliere questa opzione solo se si è certi che tutti i costruttori di classe e i distruttori chiamano virtuali virtualmente le funzioni.  
  
 `1`  
 Consente di creare membri costruttore/distruttore vtordisp nascosti. Questa scelta è il valore predefinito.  
  
 `2`  
 Consente di utilizzare [operatore dynamic_cast](../../cpp/dynamic-cast-operator.md) su un oggetto viene costruito. Ad esempio, un dynamic_cast da una classe base virtuale per una classe derivata.  
  
 **/ vd2** aggiunge un campo vtordisp quando si dispone di una base virtuale con le funzioni virtuali. **/ vd1** dovrebbe essere sufficiente. La più comune caso dove **/vd2** è necessaria quando la funzione virtuale solo nella base virtuale ha un distruttore.  
  
## <a name="remarks"></a>Note  
 Queste opzioni si applicano solo al codice C++ che utilizza basi virtuali.  
  
 [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] implementa il supporto di C++ la costruzione dello spostamento in situazioni in cui viene utilizzata l'ereditarietà virtuale. Spostamenti costruttori risolvono il problema creato quando una funzione virtuale dichiarato in una base virtuale e sottoposto a override in una classe derivata, viene chiamato da un costruttore durante la costruzione di un'ulteriore classe derivata.  
  
 Il problema è che la funzione virtuale è possibile passare un'implementazione non corretta `this` puntatore come conseguenza di discrepanze tra gli spostamenti nelle virtuale basi di una classe e gli spostamenti nelle relative classi derivate. La soluzione offre una regolazione dello spostamento di costruzione unico, denominata campo vtordisp, per ogni base virtuale di una classe.  
  
 Per impostazione predefinita, i campi vtordisp vengono introdotti ogni volta che il codice definisce costruttori definiti dall'utente e i distruttori ed esegue inoltre l'override di funzioni virtuali di basi virtuali.  
  
 Queste opzioni influiscono interi file di origine. Utilizzare [vtordisp](../../preprocessor/vtordisp.md) per eliminare e quindi riabilitare i campi vtordisp classe per classe.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)