---
title: Esecuzione di LIB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLibrarianTool.TargetMachine
- Lib
- VC.Project.VCLibrarianTool.PrintProgress
- VC.Project.VCLibrarianTool.SuppressStartupBanner
dev_langs:
- C++
helpviewer_keywords:
- -MACHINE target platform option
- command files, LIB
- MACHINE target platform option
- colon command files
- VERBOSE library manager option
- /NOLOGO library manager option
- dash option specifier
- /MACHINE target platform option
- forward slash option specifier
- -NOLOGO library manager option
- LIB [C++], running LIB
- -VERBOSE library manager option
- /VERBOSE library manager option
- command files
- NOLOGO library manager option
- slash (/)
- semicolon, command files
- / command files
ms.assetid: d54f5c81-7147-4b2c-a8db-68ce6eb1eabd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2a487bb6f6ffd740f6479916c5115bf95d568655
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="running-lib"></a>Esecuzione di LIB
Varie opzioni della riga di comando possono essere utilizzato per controllare LIB.  
  
## <a name="lib-command-line"></a>Riga di comando LIB  
 Per eseguire LIB, digitare il comando `lib` seguito dalle opzioni e nomi di file per l'attività si utilizza LIB per eseguire. Inoltre, LIB accetta l'input della riga di comando nei file di comando, che sono descritte nella sezione seguente. LIB non utilizza una variabile di ambiente.  
  
> [!NOTE]
>  Se si è abituati al LINK32.exe LIB32.exe gli strumenti e forniti con Microsoft Win32 Software Development Kit per Windows NT, si utilizza il comando `link32 -lib` o il comando `lib32` per la gestione delle librerie e creazione librerie di importazione. Assicurarsi di modificare i file makefile e batch da utilizzare il `lib` invece di comando.  
  
## <a name="lib-command-files"></a>File di comando LIB  
 È possibile passare argomenti della riga di comando a LIB in un file di comando utilizzando la sintassi seguente:  
  
```  
LIB @commandfile  
```  
  
 Il file `commandfile` è un file di testo. Non è consentito alcun spazio o tabulazione tra il simbolo di chiocciola (@) e il nome del file. Non vi è alcuna estensione predefinita; è necessario specificare il nome file completo, inclusa qualsiasi estensione. Non è possibile utilizzare caratteri jolly. Con il nome del file, è possibile specificare un percorso assoluto o relativo.  
  
 Nel file di comando, gli argomenti possono essere separati da spazi o tabulazioni, nonché nella riga di comando. possono anche essere separate da caratteri di nuova riga. Utilizzare un punto e virgola (;) per contrassegnare un commento. LIB Ignora tutto il testo da punto e virgola alla fine della riga.  
  
 È possibile specificare tutti o parte della riga di comando in un file di comando e, è possibile utilizzare più di un file di comando in un comando LIB. LIB accetta l'input del file di comando come se fosse specificato in questa posizione nella riga di comando. File di comando non possono essere annidati. VIENE visualizzato il contenuto del file di comando, a meno che non viene utilizzata l'opzione /NOLOGO.  
  
## <a name="using-lib-options"></a>Utilizzo delle opzioni di LIB  
 Un'opzione è costituito da un identificatore di opzione, ovvero un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi delle opzioni non possono essere abbreviati. Alcune opzioni accettano un argomento, dopo i due punti (:) specificato. Spazi o tabulazioni non sono consentiti all'interno di una specifica opzione. Utilizzare uno o più spazi o tabulazioni per separare le specifiche di opzione nella riga di comando. I nomi delle opzioni e i corrispondenti argomenti parola chiave o un file di nome non sono tra maiuscole e minuscole, ma gli identificatori utilizzati come argomenti tra maiuscole e minuscole. LIB elabora opzioni nell'ordine specificato nella riga di comando e nei file di comando. Se un'opzione è ripetuta con argomenti diversi, quella più recente per l'elaborazione ha la precedenza.  
  
 Le opzioni seguenti si applicano a tutte le modalità di LIB:  
  
 /ERRORREPORT [NESSUNO &#124; PROMPT DEI COMANDI &#124; CODA &#124; INVIO]  
 Se l'esito negativo di lib.exe in fase di esecuzione, è possibile utilizzare /ERRORREPORT per inviare a Microsoft informazioni su questi errori interni.  
  
 Per ulteriori informazioni su /ERRORREPORT, vedere [/errorReport (segnala interni del compilatore gli errori)](../../build/reference/errorreport-report-internal-compiler-errors.md).  
  
 /LTCG  
 Fa sì che la libreria da compilare mediante la generazione di codice in fase di collegamento.  Per ulteriori informazioni, vedere [/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  
  
 /MACHINE  
 Specifica la piattaforma di destinazione per il programma. In genere, non è necessario specificare questa opzione. LIB deduce il tipo di computer dal file obj. Tuttavia, in alcuni casi, LIB non è possibile determinare il tipo di computer e viene visualizzato un messaggio di errore. Se si verifica un errore di questo tipo, è possibile specificare questa opzione. In modalità /EXTRACT, questa opzione è solo per la verifica. Utilizzare `lib /?` nella riga di comando per visualizzare i tipi di computer disponibili.  
  
 /NOLOGO  
 Evita la visualizzazione del LIB copyright messaggio e la versione numero e impedisce la visualizzazione dei file di comando.  
  
 /VERBOSE  
 Visualizza i dettagli sullo stato di avanzamento della sessione, inclusi i nomi dei file con estensione obj da aggiungere. Le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.  
  
 /WX [: NO]  
 Considera gli avvisi come errori. Vedere [/WX (considera gli avvisi del Linker come errori)](../../build/reference/wx-treat-linker-warnings-as-errors.md) per ulteriori informazioni.  
  
 Altre opzioni si applicano solo a modalità specifiche di LIB. Queste opzioni sono descritte nelle sezioni che descrivono ogni modalità.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a LIB](../../build/reference/lib-reference.md)