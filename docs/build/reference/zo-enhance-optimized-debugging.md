---
title: -Zo (ottimizzare il debug) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- -Zo
- /Zo
dev_langs:
- C++
helpviewer_keywords:
- Zo compiler option [C++]
- /Zo compiler option [C++]
- -Zo compiler option [C++]
ms.assetid: eea8d89a-7fe0-4fe1-86b2-7689bbebbd7f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 013738ab05bf67d3db066d94d32d398a0555c55e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="zo-enhance-optimized-debugging"></a>/Zo (Ottimizzare il debug)
Genera informazioni di debug avanzate per il codice ottimizzato nelle compilazioni non di debug.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
/Zo[-]  
```  
  
## <a name="remarks"></a>Note  
 Il **/Zo** opzione del compilatore genera informazioni di debug avanzate per il codice ottimizzato. L'ottimizzazione può usare i registri per le variabili locali, riordinare il codice, vettorizzare i cicli e rendere inline le chiamate di funzione. Queste ottimizzazioni possono nascondere la relazione tra il codice sorgente e il codice oggetto compilato. Il **/Zo** opzione indica al compilatore di generare informazioni di debug aggiuntive per le variabili locali e delle funzioni inline. Utilizzarla per visualizzare le variabili di **Auto**, **variabili locali**, e **espressioni di controllo** ottimizzato di windows se si esegue il codice nel debugger di Visual Studio. Consente anche le analisi dello stack per mostrare le funzioni rese inline nel debugger WinDBG. Compilazioni che sono disabilitate le ottimizzazioni di debug ([/Od](../../build/reference/od-disable-debug.md)) non è necessario le informazioni di debug aggiuntive generate quando si **/Zo** specificato. Utilizzare il **/Zo** commutatore per eseguire il debug delle configurazioni di rilascio con l'ottimizzazione attivata. Per ulteriori informazioni sulle opzioni di ottimizzazione, vedere [Opzioni /O (Ottimizza codice)](../../build/reference/o-options-optimize-code.md). Il **/Zo** opzione è abilitata per impostazione predefinita in Visual Studio quando si specificano le informazioni di debug con **/Zi** o **/Z7**. Specificare **/Zo-** disabilitare in modo esplicito l'opzione del compilatore.  
  
 Il **/Zo** commutatore è disponibile a partire da Visual Studio 2013 Update 3 e sostituisce il non documentato in precedenza **/d2Zi+** passare.  
  
### <a name="to-set-the-zo-compiler-option-in-visual-studio"></a>Per impostare l'opzione /Zo del compilatore in Visual Studio  
  
1.  Aprire il **pagine delle proprietà** la finestra di dialogo per il progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **le proprietà di configurazione**, **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere `/Zo` e quindi scegliere **OK**.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /O (Ottimizza codice)](../../build/reference/o-options-optimize-code.md)   
 [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md)   
 [Modifica e continuazione](/visualstudio/debugger/edit-and-continue)