---
title: "ML and ML64 Command-Line Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ML"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/W* MASM compiler option"
  - "/c MASM compiler option"
  - "/EP MASM compiler option"
  - "/Fe MASM compiler option"
  - "/Zp MASM compiler option"
  - "/AT MASM compiler option"
  - "/Zm MASM compiler option"
  - "/Sf MASM compiler option"
  - "/Sp MASM compiler option"
  - "/w MASM compiler option"
  - "/Fl MASM compiler option"
  - "/coff MASM compiler option"
  - "/St MASM compiler option"
  - "/Cx MASM compiler option"
  - "/Sl MASM compiler option"
  - "/Cu MASM compiler option"
  - "MASM (Microsoft Macro Assembler), ML command-line reference"
  - "/FPi MASM compiler option"
  - "/Zf MASM compiler option"
  - "ML environment variable"
  - "/Fr MASM compiler option"
  - "/help MASM compiler option"
  - "/Sa MASM compiler option"
  - "/Zd MASM compiler option"
  - "/I MASM compiler option"
  - "/? MASM compiler option"
  - "/Bl MASM compiler option"
  - "/Fm MASM compiler option"
  - "/Fo MASM compiler option"
  - "command-line reference [ML]"
  - "/Sn MASM compiler option"
  - "/Gd MASM compiler option"
  - "/D* MASM compiler option"
  - "environment variables, ML"
  - "/Gc MASM compiler option"
  - "/F* MASM compiler option"
  - "/Sc MASM compiler option"
  - "/H MASM compiler option"
  - "/Zs MASM compiler option"
  - "/omf MASM compiler option"
  - "/Sg MASM compiler option"
  - "/Cp MASM compiler option"
  - "/Zi MASM compiler option"
  - "/nologo MASM compiler option"
  - "/Sx MASM compiler option"
  - "/WX MASM compiler option"
  - "/Ss MASM compiler option"
  - "command line, reference [ML]"
  - "/Ta MASM compiler option"
ms.assetid: 712623c6-f77e-47ea-a945-089e57c50b40
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# ML and ML64 Command-Line Reference
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Presenti nelle interfacce e uno o più file di origine in linguaggio assembly.  Le opzioni della riga di comando viene fatta distinzione tra maiuscole e minuscole.  
  
 per ulteriori informazioni su ml64.exe, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Sintassi  
  
```  
ML [[options]] filename [[ [[options]]  filename]]  
ML64 [[options]] filename [[ [[options]]  filename]]  
...  
[[/link linkoptions]]  
```  
  
#### Parametri  
 `options`  
 Le opzioni elencate nella tabella seguente.  
  
|Opzione|Azione|  
|-------------|------------|  
|**\/AT**|Abilita il supporto del minuscolo\-memoria\-modello.  Abilita i messaggi di errore per i costrutti di codice che violano i requisiti per i file di formato .com.  Si noti che questo non equivale a [.MODEL](../../assembler/masm/dot-model.md) **TINY** direttiva.<br /><br /> non disponibile in ml64.exe.|  
|**\/Bl** `filename`|Selezionare un linker alternativo.|  
|**\/c**|Assemblerà solo.  Non è collegato.|  
|**\/coff**|genera il tipo \(COFF\) di formato COFF di modulo di oggetto.  Generalmente richiesto per lo sviluppo di linguaggio assembly Win32.<br /><br /> non disponibile in ml64.exe.|  
|**\/Cp**|Caso di mantenere di tutti gli ID utente.|  
|**\/Cu**|Esegue il mapping di tutti gli identificatori in maiuscolo \(impostazione predefinita\).<br /><br /> non disponibile in ml64.exe.|  
|**\/Cx**|Le conserva rivestono nei simboli pubblici e esterni.|  
|**\/D** `symbol`\[\[\=`value`\]\]|Definire una macro di testo con il nome specificato.  se `value` manca, è vuoto.  Più token separati da spazi devono essere racchiusi tra virgolette.|  
|**\/EP**|Genera un elenco originale pre\-elaborato \(inviato a STDOUT\).  Vedere **\/Sf**.|  
|**\/ERRORREPORT** \[ **NONE** &#124; **PROMPT** &#124; **QUEUE** &#124; **SEND** \]|Se ml.exe o ml64.exe ha esito negativo in fase di esecuzione, è possibile utilizzare **\/ERRORREPORT** per inviare informazioni a Microsoft su questi errori interni.<br /><br /> Per ulteriori informazioni su **\/ERRORREPORT**, vedere [\/errorReport \(Segnala gli errori interni del compilatore\)](../../build/reference/errorreport-report-internal-compiler-errors.md).|  
|**\/F** `hexnum`|Imposta la dimensione dello stack a `hexnum` byte \(è uguale a  **\/link\/STACK**:`number`\).  Il valore deve essere rappresentato in notazione esadecimale.  Inserire uno spazio tra **\/F** e  `hexnum`.|  
|**\/Fe** `filename`|Denominare il file eseguibile.|  
|**\/Fl**\[\[`filename`\]\]|Genera un elenco di codici assemblato.  Vedere **\/Sf**.|  
|**\/Fm**\[\[`filename`\]\]|Crea un file di mapping del linker.|  
|**\/Fo** `filename`|Denominare un file oggetto.  Vedere la sezione relativa alle osservazioni per ulteriori informazioni.|  
|**\/FPi**|Genera l'emulatore correzione\-UPS per aritmetica a virgola mobile \(linguaggio misto solo\).<br /><br /> non disponibile in ml64.exe.|  
|**\/Fr**\[\[`filename`\]\]|Genera un file di origine del browser SBR.|  
|**\/FR**\[\[`filename`\]\]|Genera un form esteso di un file di origine del browser SBR.|  
|**\/Gc**|Specifica l'utilizzo FORTRAN o chiamare e convenzioni di denominazione stile Pascal di funzione.  Equivale a **OPTION LANGUAGE:PASCAL**.<br /><br /> non disponibile in ml64.exe.|  
|**\/Gd**|Specifica l'utilizzo chiamare di tipo C e convenzioni di denominazione di funzione.  Equivale a **OPTION LANGUAGE:C**.<br /><br /> non disponibile in ml64.exe.|  
|**\/GZ**|Specifica l'utilizzo chiamare e convenzioni di denominazione di funzioni \_\_stdcall.  Equivale a **OPTION LANGUAGE:STCALL**.<br /><br /> non disponibile in ml64.exe.|  
|**\/H** `number`|Limita i nomi esterni ai caratteri significativi del numero.  Il valore predefinito è 31 caratteri.<br /><br /> non disponibile in ml64.exe.|  
|**\/help**|Chiamate QuickHelp per informazioni su ML.|  
|**\/I** `pathname`|Imposta il percorso del file di inclusione.  un massimo di 10 **\/I** le opzioni è consentita.|  
|**\/nologo**|Elimina i messaggi per il assembly.|  
|**\/omf**|Genera il tipo di formato di file \(OMF\) del modulo di oggetto di modulo di oggetto.  **\/omf** implica  **\/c**; ML.exe non supporta collegare gli oggetti OMF.<br /><br /> non disponibile in ml64.exe.|  
|**\/Sa**|Attiva la l'elenco di tutte le informazioni disponibili.|  
|**\/safeseh**|Contrassegna l'oggetto come non contengono gestori di eccezioni o contenere i gestori di eccezioni cui vengono dichiarati con [.SAFESEH](../../assembler/masm/dot-safeseh.md).<br /><br /> non disponibile in ml64.exe.|  
|**\/Sf**|Aggiunge la prima sessione che elenca il tipo file.|  
|**\/Sl** `width`|Imposta lo spessore di linea l'elenco originale nei caratteri per riga.  L'intervallo approssimativo è compreso tra 60 e 255 o 0.  Il valore predefinito è 0.  Equivale a [PGSU](../../assembler/masm/page.md) larghezza.|  
|**\/Sn**|Disattiva la tabella dei simboli quando si scrive un elenco.|  
|**\/Sp** `length`|Imposta la lunghezza di pagina list originale nelle righe per pagina.  L'intervallo approssimativo è compreso tra 10 e 255 o 0.  Il valore predefinito è 0.  Equivale a [PGSU](../../assembler/masm/page.md) lunghezza.|  
|**\/Ss** `text`|specifica il testo per l'elenco originale.  Equivale a [SOTTOTITOLO](../../assembler/masm/subtitle.md) testo.|  
|**\/St** `text`|Specifica il titolo dell'elenco originale.  Equivale a [TITOLO](../../assembler/masm/title.md) testo.|  
|**\/Sx**|Attiva istruzioni condizionali false in elenco.|  
|**\/Ta** `filename`|Presenti nel file di origine di cui il nome non termina con estensione asm.|  
|**\/w**|Equivale a **\/W0\/WX**.|  
|**\/W** `level`|Imposta il livello di avviso, dove `level` \= 0, 1, 2, o 3.|  
|**\/WX**|Restituisce un codice di errore se gli avvisi vengono generati.|  
|**\/X**|Ignorare INCLUDONO il percorso dell'ambiente.|  
|**\/Zd**|Genera informazioni del numero di riga nel file oggetto.|  
|**\/Zf**|Effettua qualsiasi dei simboli pubblici.|  
|**\/Zi**|Genera informazioni CodeView nei file oggetto.|  
|**\/Zm**|Consente**M510** opzione per la compatibilità massima con MASM 5,1.<br /><br /> non disponibile in ml64.exe.|  
|**\/Zp**\[\[`alignment`\]\]|Strutture di pacchetti sul limite di byte specificato.  `alignment` può essere 1, 2 o 4.|  
|**\/Zs**|Esegue un controllo sintattico solo.|  
|**\/?**|Verrà visualizzato un riepilogo della sintassi della riga di comando di ML.|  
  
 `filename`  
 Nome del file.  
  
 `linkoptions`  
 Le opzioni di collegamento.  Per ulteriori informazioni, vedere [Opzioni del linker](../../build/reference/linker-options.md).  
  
## Note  
 Alcune opzioni della riga di comando a ML e a ML64 sono posizione\-riservate.  Ad esempio, poiché il ML e ML64 possono accettare diversi **\/c** opzioni, qualsiasi corrispondenti  **\/Fo** le opzioni devono essere specificate prima  **\/c**.  L'esempio della riga di comando illustrata una specifica di file oggetto per ogni specifica del file di assembly:  
  
 **ml.exe \/Fo a1.obj \/c a.asm \/Fo b1.obj \/c b.asm**  
  
## Variabili di ambiente  
  
|Variabile|Descrizione|  
|---------------|-----------------|  
|INCLUDES|Specifica il percorso di ricerca dei file di inclusione.|  
|ML|Specifica le opzioni della riga di comando predefinite.|  
|TMP|Specifica il percorso dei file temporanei.|  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)   
 [Microsoft Macro Assembler Reference](../../assembler/masm/microsoft-macro-assembler-reference.md)