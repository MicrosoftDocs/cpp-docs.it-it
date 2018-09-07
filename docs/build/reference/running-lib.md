---
title: Esecuzione di LIB | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-tools
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff75c149ff3cfff5a360314386cc4828d00f4e8d
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894603"
---
# <a name="running-lib"></a>Esecuzione di LIB

Varie opzioni della riga di comando possono essere utilizzato per controllare LIB.

## <a name="lib-command-line"></a>Riga di comando LIB

Per l'esecuzione di LIB, digitare il comando `lib` seguito dalle opzioni e nomi di file per l'attività si usa LIB per eseguire. LIB inoltre accetta l'input della riga di comando nei file di comando, che sono descritte nella sezione seguente. Non usa una variabile di ambiente LIB.

> [!NOTE]
> Se si è abituati al LINK32.exe LIB32.exe gli strumenti e forniti con Microsoft Win32 Software Development Kit per Windows NT, si potrebbe usano entrambi il comando `link32 -lib` o il comando `lib32` per la gestione delle librerie e la creazione librerie di importazione. Assicurarsi di modificare i makefile e file batch da utilizzare il `lib` invece di comando.

## <a name="lib-command-files"></a>File di comando di LIB

È possibile passare argomenti della riga di comando a LIB in un file di comando usando la sintassi seguente:

> **LIB \@**  <em>commandfile</em>

Il file *commandfile* è un file di testo. Non è consentito alcun spazio o tabulazione tra il simbolo di chiocciola (**\@**) e il nome del file. Non vi è alcuna estensione predefinita; è necessario specificare il nome completo del file, incluso qualsiasi estensione. Non è possibile usare caratteri jolly. È possibile specificare un percorso relativo o assoluto con il nome del file.

Nel file di comando, gli argomenti possono essere separati da spazi o tabulazioni, differenza di quanto accade nella riga di comando. possono anche essere separate da caratteri di nuova riga. Usare un punto e virgola (;) per contrassegnare un commento. LIB Ignora tutto il testo da punto e virgola alla fine della riga.

È possibile specificare tutti o parte della riga di comando in un file di comando ed è possibile usare più di un file di comando in un comando LIB. LIB accetta l'input di file di comando come se fosse specificato in tale posizione nella riga di comando. File di comando non possono essere annidati. VIENE visualizzato il contenuto dei file di comando, a meno che non viene utilizzata l'opzione /NOLOGO.

## <a name="using-lib-options"></a>Utilizzo delle opzioni di LIB

Un'opzione è costituito da un identificatore di opzione, che può essere un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Alcune opzioni di accettano un argomento, dopo i due punti (:) specificato. Spazi o tabulazioni non sono consentite all'interno di una specifica opzione. Usare uno o più spazi o tabulazioni per separare le specifiche di opzione nella riga di comando. I nomi e i relativi argomenti Nome parola chiave o un file non sono tra maiuscole e minuscole, ma gli identificatori usati come argomenti sono tra maiuscole e minuscole. LE opzioni nell'ordine specificato nella riga di comando e nei file di comando vengono elaborate. Se un'opzione viene ripetuta con diversi argomenti, quello più recente per l'elaborazione ha la precedenza.

Le opzioni seguenti si applicano a tutte le modalità di LIB:

> **/ ERRORREPORT** [**NONE** &AMP;#124; **CHIEDI CONFERMA** &AMP;#124; **CODA** &AMP;#124; **INVIARE**]

Se lib.exe non riesce in fase di esecuzione, è possibile usare /ERRORREPORT di inviare informazioni a Microsoft informazioni su questi errori interni.

Per altre informazioni sulle /ERRORREPORT, vedere [/errorReport (segnala interni del compilatore gli errori)](../../build/reference/errorreport-report-internal-compiler-errors.md).

> **/LTCG**

Fa sì che la libreria essere compilate utilizzando generazione codice in fase di collegamento.  Per altre informazioni, vedere [/LTCG](../../build/reference/ltcg-link-time-code-generation.md).

> **O IL COMPUTER**

Specifica la piattaforma di destinazione per il programma. In genere, non è necessario specificare questa opzione. LIB deduce il tipo di computer dai file con estensione obj. Tuttavia, in alcune circostanze, LIB non è possibile determinare il tipo di computer e genera un messaggio di errore. Se si verifica questo errore, specificare questa opzione. In modalità /EXTRACT, questa opzione è solo per la verifica. Usare `lib /?` nella riga di comando per visualizzare i tipi di computer disponibili.

> **/NOLOGO**

Evita la visualizzazione di LIB copyright messaggio e numero di versione e impedire che vengano visualizzati dei file di comando.

> **/ VERBOSE**

Visualizza i dettagli sullo stato di avanzamento della sessione, inclusi i nomi dei file con estensione obj da aggiungere. Le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.

> **/WX**[**: NO**]

Considera gli avvisi come errori. Visualizzare [/WX (considera gli avvisi del Linker come errori)](../../build/reference/wx-treat-linker-warnings-as-errors.md) per altre informazioni.

Altre opzioni si applicano solo a una particolare modalità di LIB. Queste opzioni sono descritte nelle sezioni che descrivono ogni modalità.

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](../../build/reference/lib-reference.md)