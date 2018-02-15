---
title: Riferimento della riga di comando ML e ML64 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ML
dev_langs:
- C++
helpviewer_keywords:
- /W* MASM compiler option
- /c MASM compiler option
- /EP MASM compiler option
- /Fe MASM compiler option
- /Zp MASM compiler option
- /AT MASM compiler option
- /Zm MASM compiler option
- /Sf MASM compiler option
- /Sp MASM compiler option
- /w MASM compiler option
- /Fl MASM compiler option
- /coff MASM compiler option
- /St MASM compiler option
- /Cx MASM compiler option
- /Sl MASM compiler option
- /Cu MASM compiler option
- MASM (Microsoft Macro Assembler), ML command-line reference
- /FPi MASM compiler option
- /Zf MASM compiler option
- ML environment variable
- /Fr MASM compiler option
- /help MASM compiler option
- /Sa MASM compiler option
- /Zd MASM compiler option
- /I MASM compiler option
- /? MASM compiler option
- /Bl MASM compiler option
- /Fm MASM compiler option
- /Fo MASM compiler option
- command-line reference [ML]
- /Sn MASM compiler option
- /Gd MASM compiler option
- /D* MASM compiler option
- environment variables, ML
- /Gc MASM compiler option
- /F* MASM compiler option
- /Sc MASM compiler option
- /H MASM compiler option
- /Zs MASM compiler option
- /omf MASM compiler option
- /Sg MASM compiler option
- /Cp MASM compiler option
- /Zi MASM compiler option
- /nologo MASM compiler option
- /Sx MASM compiler option
- /WX MASM compiler option
- /Ss MASM compiler option
- command line, reference [ML]
- /Ta MASM compiler option
ms.assetid: 712623c6-f77e-47ea-a945-089e57c50b40
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: edb7f0c19e9517b1bcefcc2400542f910a73c8f0
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="ml-and-ml64-command-line-reference"></a>Riferimenti alla riga di comando ML e ML64
Assembla e collega una o più file di origine in linguaggio assembly. Le opzioni della riga di comando sono tra maiuscole e minuscole.  
  
 Per ulteriori informazioni su ml64.exe, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
ML [[options]] filename [[ [[options]]  filename]]  
ML64 [[options]] filename [[ [[options]]  filename]]  
...  
[[/link linkoptions]]  
```  
  
#### <a name="parameters"></a>Parametri  
 `options`  
 Le opzioni elencate nella tabella seguente.  
  
|Opzione|Operazione|  
|------------|------------|  
|**/AT**|Abilita il supporto del modello di memoria piccoli. Abilita i messaggi di errore per i costrutti di codice che violano i requisiti per i file di formato. com. Si noti che questo non equivale al [. MODELLO](../../assembler/masm/dot-model.md) **TINY** direttiva.<br /><br /> Non è disponibile in ml64.exe.|  
|**/Bl** `filename`|Seleziona un linker alternativo.|  
|**/c**|Assembla solo. Non è collegato.|  
|**/coff**|Genera tipo di formato COFF () file oggetto comune di modulo di oggetto. In genere necessario per lo sviluppo di Win32 in linguaggio assembly.<br /><br /> Non è disponibile in ml64.exe.|  
|**/Cp**|Consente di mantenere i case di tutti gli identificatori utente.|  
|**/Cu**|Esegue il mapping di tutti gli identificatori in lettere maiuscole (impostazione predefinita).<br /><br /> Non è disponibile in ml64.exe.|  
|**/Cx**|Consente di mantenere i case nei simboli pubblici ed extern.|  
|**/D** `symbol`[[=`value`]]|Definisce una macro di testo con il nome specificato. Se `value` è mancante, questo campo è vuoto. Più token separati da spazi devono essere racchiusi tra virgolette.|  
|**/EP**|Genera un elenco di origine pre-elaborato (inviato a STDOUT). Vedere **/Sf**.|  
|**/ERRORREPORT** [ **NONE** &#124; **PROMPT** &#124; **CODA** &#124; **INVIARE** ]|Se ml.exe o ml64.exe non riesce in fase di esecuzione, è possibile utilizzare **/ERRORREPORT** per inviare informazioni a Microsoft informazioni su questi errori interni.<br /><br /> Per ulteriori informazioni su **/ERRORREPORT**, vedere [/errorReport (segnala interni del compilatore gli errori)](../../build/reference/errorreport-report-internal-compiler-errors.md).|  
|**/F** `hexnum`|Imposta la dimensione dello stack `hexnum` byte (queste sono le stesse **/collegamento/STACK**:`number`). Il valore deve essere espressa in notazione esadecimale. È necessario uno spazio tra **/F** e `hexnum`.|  
|**/Fe** `filename`|Il nome del file eseguibile.|  
|**/Fl**[[`filename`]]|Genera un listato di codice assemblato. Vedere **/Sf**.|  
|**/Fm**[[`filename`]]|Crea un file di mappa del linker.|  
|**/Fo** `filename`|I nomi di un file oggetto. Per ulteriori informazioni vedere la sezione Osservazioni.|  
|**/FPi**|Genera l'errore emulatore correzioni per i calcoli a virgola mobile (solo per il linguaggio misto).<br /><br /> Non è disponibile in ml64.exe.|  
|**/Fr**[[`filename`]]|Genera un file SBR browser di origine.|  
|**/FR**[[`filename`]]|Genera una forma estesa di un file SBR di origine del browser.|  
|**/Gc**|Specifica l'utilizzo della funzione FORTRAN o Pascal stile chiamata e convenzioni di denominazione. Uguale a **opzione LANGUAGE: PASCAL**.<br /><br /> Non è disponibile in ml64.exe.|  
|**/Gd**|Specifica l'utilizzo della funzione di tipo C, la chiamata e convenzioni di denominazione. Uguale a **opzione LANGUAGE: C**.<br /><br /> Non è disponibile in ml64.exe.|  
|**/GZ**|Specifica l'utilizzo della funzione stdcall chiamando e convenzioni di denominazione.  Uguale a **opzione LANGUAGE: STCALL**.<br /><br /> Non è disponibile in ml64.exe.|  
|**/H** `number`|Limita i nomi esterni al numero di caratteri significativo. Il valore predefinito è 31 caratteri.<br /><br /> Non è disponibile in ml64.exe.|  
|**/help**|Per informazioni su ML, chiama QuickHelp.|  
|**/I** `pathname`|Percorso di set di file di inclusione. Un massimo di 10 **/I** opzioni è consentita.|  
|**/nologo**|Elimina i messaggi per l'assembly ha esito positivo.|  
|**/omf**|Genera tipo di oggetto modulo file formato (OMF) del modulo di oggetto.  **/OMF** implica **/c**; ML.exe non supporta il collegamento di oggetti OMF.<br /><br /> Non è disponibile in ml64.exe.|  
|**/Sa**|Attiva l'elenco di tutte le informazioni disponibili.|  
|**/safeseh**|Contrassegna l'oggetto come non contenente nessun gestore eccezioni o contenente i gestori di eccezioni che vengono dichiarati con [. SAFESEH](../../assembler/masm/dot-safeseh.md).<br /><br /> Non è disponibile in ml64.exe.|  
|**/Sf**|Aggiunge un file di listato per listato iniziale.|  
|**/Sl** `width`|Imposta la larghezza della riga di origine dell'elenco di caratteri per riga. Intervallo è 60 e 255 o 0. Valore predefinito è 0. Uguale a [pagina](../../assembler/masm/page.md) larghezza.|  
|**/Sn**|Disattiva la tabella di simboli durante la creazione di un elenco.|  
|**/Sp** `length`|Imposta la lunghezza della pagina di origine dell'elenco di righe per pagina. Intervallo è compreso tra 10 e 255 o 0. Valore predefinito è 0. Uguale a [pagina](../../assembler/masm/page.md) lunghezza.|  
|**/Ss** `text`|Specifica il testo per l'elenco di origine. Uguale a [SOTTOTITOLO](../../assembler/masm/subtitle.md) testo.|  
|**/St** `text`|Specifica del titolo per l'elenco di origine. Uguale a [titolo](../../assembler/masm/title.md) testo.|  
|**/Sx**|Attiva false condizionali nell'elenco.|  
|**/Ta** `filename`|Assembla il file di origine il cui nome non termina con l'estensione di asm.|  
|**/w**|Uguale a **W0/WX**.|  
|**/W** `level`|Imposta il livello di avviso, in cui `level` = 0, 1, 2 o 3.|  
|**/WX**|Restituisce un codice di errore se vengono generati avvisi.|  
|**/X**|Ignora percorso di ambiente INCLUDE.|  
|**/Zd**|Genera informazioni sul numero di riga nel file oggetto.|  
|**/Zf**|Esegue tutti i simboli pubblici.|  
|**/Zi**|Genera informazioni di CodeView nel file oggetto.|  
|**/Zm**|Abilita**M510** opzione per la massima compatibilità con MASM 5.1.<br /><br /> Non è disponibile in ml64.exe.|  
|**/Zp**[[`alignment`]]|Comprime le strutture in corrispondenza del limite di byte specificata. Il `alignment` può essere 1, 2 o 4.|  
|**/Zs**|Esegue un controllo della sintassi.|  
|**/?**|Visualizza un riepilogo della sintassi della riga di comando ML.|  
  
 `filename`  
 Nome del file.  
  
 `linkoptions`  
 Le opzioni di collegamento.  Vedere [opzioni del Linker](../../build/reference/linker-options.md) per ulteriori informazioni.  
  
## <a name="remarks"></a>Note  
 Alcune opzioni della riga di comando ML e ML64 sono dipendenti dalla posizione. Ad esempio, poiché ML e ML64 può accettare diverse **/c** opzioni, qualsiasi corrispondente **/Fo** prima è necessario specificare le opzioni **/c**. Nell'esempio della riga di comando seguente vengono illustrate una specifica del file oggetto per ogni specifica di file di assembly:  
  
 **ml.exe /Fo a1.obj /c a.asm /Fo b1.obj /c b.asm**  
  
## <a name="environment-variables"></a>Variabili di ambiente  
  
|Variabile|Descrizione|  
|--------------|-----------------|  
|INCLUDE|Specifica il percorso di ricerca per i file di inclusione.|  
|ML|Specifica le opzioni della riga di comando predefinito.|  
|TMP|Specifica percorso dei file temporanei.|  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)   
 [Riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)