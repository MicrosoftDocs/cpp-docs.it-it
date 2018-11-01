---
title: Riferimenti alla riga di comando ML e ML64
ms.date: 08/30/2018
f1_keywords:
- ML
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
ms.openlocfilehash: 64d56ea5eb29162e65782998e91fc1ff70cbf73b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50430225"
---
# <a name="ml-and-ml64-command-line-reference"></a>Riferimenti alla riga di comando ML e ML64

Consente di assemblare e collega una o più file di origine in linguaggio assembly. Le opzioni della riga di comando sono tra maiuscole e minuscole.

Per altre informazioni su ml64.exe, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="syntax"></a>Sintassi

> Machine Learning [[*le opzioni*]] *filename* [[[[*opzioni*]] *filename*]]

> Ml64 [[*le opzioni*]] *filename* [[[[*opzioni*]] *filename*]]... [[/link *linkoptions*]]

### <a name="parameters"></a>Parametri

*options*<br/>
Le opzioni elencate nella tabella seguente.

|Opzione|Operazione|
|------------|------------|
|**/AT**|Abilita il supporto del modello di memoria minima. Abilita i messaggi di errore per i costrutti di codice che violano i requisiti per i file di formato. com. Si noti che ciò non equivale al [. MODELLO](../../assembler/masm/dot-model.md) **TINY** direttiva.<br /><br /> Non è disponibile in ml64.exe.|
|**/BL** *nomefile*|Seleziona un linker alternativo.|
|**/c**|Assembla solo. Non è collegato.|
|**/coff**|Genera tipo di formato COFF () file oggetto comune del modulo di oggetto. In genere necessari per lo sviluppo in linguaggio assembly Win32.<br /><br /> Non è disponibile in ml64.exe.|
|**/Cp**|Consente di mantenere i casi di tutti gli identificatori utente.|
|**/Cu**|Esegue il mapping di tutti gli identificatori in lettere maiuscole (impostazione predefinita).<br /><br /> Non è disponibile in ml64.exe.|
|**/Cx**|Consente di mantenere i case nei simboli pubblici ed extern.|
|**/D** *simbolo*[[=*valore*]]|Definisce una macro di testo con il nome specificato. Se *valore* è mancante, è vuoto. Più token separati da spazi deve essere racchiuso tra virgolette.|
|**/EP**|Genera un elenco di origine pre-elaborato (inviato a STDOUT). Visualizzare **/Sf**.|
|**/ ERRORREPORT** [ **NONE** &AMP;#124; **CHIEDI CONFERMA** &AMP;#124; **CODA** &AMP;#124; **INVIARE** ]|Se ml.exe o ml64.exe ha esito negativo in fase di esecuzione, è possibile usare **/ERRORREPORT** per inviare informazioni a Microsoft informazioni su questi errori interni.<br /><br /> Per altre informazioni sulle **/ERRORREPORT**, vedere [/errorReport (segnala interni del compilatore gli errori)](../../build/reference/errorreport-report-internal-compiler-errors.md).|
|**/F** *hexnum*|Set di dimensioni per stack *hexnum* byte (questo è identico **/collegamento/STACK**:*numero*). Il valore deve essere espressa in notazione esadecimale. È necessario uno spazio tra **/F** e *hexnum*.|
|**/FE** *nomefile*|Il nome del file eseguibile.|
|**/Fl**[[*filename*]]|Genera un listato di codice assemblato. Visualizzare **/Sf**.|
|**/FM**[[*filename*]]|Crea un file di mappa del linker.|
|**/Fo** *nomefile*|Assegna un nome file oggetto. Per altre informazioni vedere la sezione Osservazioni.|
|**/FPi**|Genera l'errore emulatore correzioni per i calcoli a virgola mobile (solo linguaggio misto).<br /><br /> Non è disponibile in ml64.exe.|
|**/FR**[[*filename*]]|Genera un file SBR browser di origine.|
|**/FR**[[*filename*]]|Genera una forma estesa di un file SBR browser di origine.|
|**/Gc**|Specifica l'utilizzo della funzione stile Pascal o FORTRAN chiamata e convenzioni di denominazione. Uguale allo **opzione lingua: convenzione PASCAL**.<br /><br /> Non è disponibile in ml64.exe.|
|**/Gd**|Specifica l'utilizzo della funzione di tipo C chiama e convenzioni di denominazione. Uguale allo **opzione lingua: C**.<br /><br /> Non è disponibile in ml64.exe.|
|**/GZ**|Specifica l'utilizzo della funzione stdcall chiamata e convenzioni di denominazione.  Uguale allo **opzione lingua: STCALL**.<br /><br /> Non è disponibile in ml64.exe.|
|**/H** *numero*|Limita i nomi esterni al numero di caratteri significativo. Il valore predefinito è 31 caratteri.<br /><br /> Non è disponibile in ml64.exe.|
|**/help**|Per informazioni su Machine Learning, chiama QuickHelp.|
|**/I** *pathname*|Percorso di set di file di inclusione. Un massimo di 10 **/I** opzioni è consentita.|
|**/nologo**|Elimina i messaggi per l'assembly ha esito positivo.|
|**/omf**|Genera tipo di oggetto modulo file formato (OMF) del modulo di oggetto.  **/OMF** implica **/c**; ML.exe non supporta il collegamento di oggetti OMF.<br /><br /> Non è disponibile in ml64.exe.|
|**/Sa**|Attiva elenco di tutte le informazioni disponibili.|
|**/safeseh**|Contrassegna l'oggetto come non contenente nessun gestore eccezioni o che contiene i gestori di eccezioni che vengono dichiarati con [. SAFESEH](../../assembler/masm/dot-safeseh.md).<br /><br /> Non è disponibile in ml64.exe.|
|**/Sf**|Aggiunge un file listato a listato iniziale.|
|**/SL** *larghezza*|Imposta lo spessore della linea dell'origine dell'elenco caratteri per riga. Intervallo è 60 e 255 o 0. Valore predefinito è 0. Uguale allo [pagina](../../assembler/masm/page.md) larghezza.|
|**/Sn**|Disattiva la tabella di simboli quando si produce un elenco.|
|**/SP** *lunghezza*|Imposta la lunghezza della pagina dell'elenco nelle righe per pagina origine. Intervallo è 0 o compreso tra 10 e 255. Valore predefinito è 0. Uguale allo [pagina](../../assembler/masm/page.md) lunghezza.|
|**/Ss** *testo*|Specifica il testo per l'elenco di origine. Uguale allo [SOTTOTITOLO](../../assembler/masm/subtitle.md) testo.|
|**/ST** *testo*|Specifica del titolo per l'elenco di origine. Uguale allo [titolo](../../assembler/masm/title.md) testo.|
|**/Sx**|Attiva false istruzioni condizionali nell'elenco.|
|**/TA** *nomefile*|Assembla il file di origine il cui nome non termina con l'estensione asm.|
|**/w**|Uguale allo **/W0/WX**.|
|**/W** *livello*|Imposta il livello di avviso, in cui *livello* = 0, 1, 2 o 3.|
|**/WX**|Restituisce un codice di errore se vengono generati avvisi.|
|**/X**|Ignora percorso di ambiente INCLUDE.|
|**/Zd**|Genera informazioni sul numero di riga nel file oggetto.|
|**/Zf**|Esegue tutti i simboli pubblici.|
|**/Zi**|Genera informazioni di CodeView nel file oggetto.|
|**/Zm**|Abilita**M510** opzione per garantire la massima compatibilità con MASM 5.1.<br /><br /> Non è disponibile in ml64.exe.|
|**/Zp**[[*allineamento*]]|Comprime le strutture in corrispondenza del limite di byte specificata. Il *allineamento* può essere 1, 2 o 4.|
|**/Zs**|Esegue solo un controllo della sintassi.|
|**/?**|Visualizza un riepilogo della sintassi della riga di comando ML.|

*filename*<br/>
Nome del file.

*linkoptions*<br/>
Le opzioni di collegamento.  Visualizzare [opzioni del Linker](../../build/reference/linker-options.md) per altre informazioni.

## <a name="remarks"></a>Note

Alcune opzioni della riga di comando ML e ML64 sono dipendenti dalla selezione host. Ad esempio, perché ML e ML64 può accettare diverse **/c** opzioni, qualsiasi corrispondente **/Fo** prima è necessario specificare le opzioni **/c**. Nell'esempio della riga di comando seguente viene illustrata una specifica del file oggetto per ogni specifica del file assembly:

**ml.exe /Fo a1.obj /c a.asm /Fo b1.obj /c b.asm**

## <a name="environment-variables"></a>Variabili di ambiente

|Variabile|Descrizione|
|--------------|-----------------|
|INCLUDE|Specifica il percorso di ricerca per i file di inclusione.|
|ML|Specifica le opzioni della riga di comando predefinito.|
|TMP|Specifica percorso dei file temporanei.|

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>
[Riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)<br/>