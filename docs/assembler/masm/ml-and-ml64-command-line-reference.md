---
title: Riferimenti alla riga di comando ML e ML64
description: Guida di riferimento per le opzioni della riga di comando dell'assembler Microsoft MASM ML e ML64.
ms.date: 02/09/2020
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
ms.openlocfilehash: b5c5a79417cb141da3d5cfe1c08aa39e02a9c7c2
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77257364"
---
# <a name="ml-and-ml64-command-line-reference"></a>Riferimenti alla riga di comando ML e ML64

Assembla e collega uno o più file di origine in linguaggio assembly. Le opzioni della riga di comando distinguono tra maiuscole e minuscole.

Per ulteriori informazioni su ml64. exe, vedere [MASM per x64 (ml64. exe)](masm-for-x64-ml64-exe.md).

## <a name="syntax"></a>Sintassi

> *Opzioni*di \[ml] *nome file* \[ *Opzioni*di \[] *nomefile*]
>
> *Opzioni*di \[ml64] *nomefile* \[ *Opzioni*di \[] *nomefile*]... \[/link *link_options*]

### <a name="parameters"></a>Parametri

*opzioni*\
Opzioni elencate nella tabella seguente.

|Opzione|Azione|
|------------|------------|
|**/AT**|Abilita il supporto del modello di memoria minuscola. Abilita i messaggi di errore per i costrutti di codice che violano i requisiti per i file in formato. com. Questa opzione non è equivalente a [. Direttiva MODEL](dot-model.md) **Tiny** .<br /><br /> Non disponibile in ml64. exe.|
|*Nome file* /BL|Seleziona un linker alternativo.|
|**/c**|Assembla solo. Non esegue alcun collegamento.|
|**/COFF**|Genera il tipo di Common Object File Format (COFF) del modulo dell'oggetto. Obbligatorio per lo sviluppo del linguaggio di assembly Win32.<br /><br /> Non disponibile in ml64. exe.|
|**/CP**|Conserva il caso di tutti gli identificatori utente.|
|**/Cu**|Esegue il mapping di tutti gli identificatori in lettere maiuscole (impostazione predefinita).<br /><br /> Non disponibile in ml64. exe.|
|**/CX**|Conserva la distinzione tra maiuscole e minuscole nei simboli Public ed extern.|
|**/D** *Symbol*⟦ =*valore*⟧|Definisce una macro di testo con il nome specificato. Se il *valore* è mancante, è vuoto. Più token separati da spazi devono essere racchiusi tra virgolette.|
|**/EP**|Genera un elenco di origine pre-elaborato (inviato a STDOUT). Vedere **/SF**.|
|**/errorreport** [ **Nessuna** &#124; &#124; coda &#124; messaggi di richiesta- **invio** ]| Operazione deprecata. La segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) . |
|**/F** *HexNum*|Imposta la dimensione dello stack su *HexNum* byte (uguale a **/link/stack**:*numero*). Il valore deve essere espresso in notazione esadecimale. Deve essere presente uno spazio tra **/f** e *HexNum*.|
|*Nome file* /Fe|Denomina il file eseguibile.|
|**/FL**⟦*nomefile*⟧|Genera un listato di codice assemblato. Vedere **/SF**.|
|**/FM**⟦*nomefile*⟧|Crea un file di mappa del linker.|
|*Nome file* /fo|Assegna un nome a un file oggetto. Per altre informazioni, vedere [Note](#remarks).|
|**/FPi**|Genera correzioni dell'emulatore per operazioni aritmetiche a virgola mobile (solo linguaggio misto).<br /><br /> Non disponibile in ml64. exe.|
|**/Fr**⟦*nomefile*⟧|Genera un file SBR del browser di origine.|
|**/Fr**⟦*nomefile*⟧|Genera un modulo esteso di un file SBR del browser di origine.|
|**/GC**|Specifica l'uso di convenzioni di denominazione e chiamata di funzioni di tipo FORTRAN o Pascal. Uguale al **linguaggio delle opzioni: Pascal**.<br /><br /> Non disponibile in ml64. exe.|
|**/Gd**|Specifica l'uso di convenzioni di denominazione e chiamata di funzione di tipo C. Uguale al **linguaggio delle opzioni: C**.<br /><br /> Non disponibile in ml64. exe.|
|**/GZ**|Specifica l'uso delle convenzioni di denominazione e chiamata di funzione __stdcall.  Uguale a **lingua opzione: STCALL**.<br /><br /> Non disponibile in ml64. exe.|
|*Numero* /h|Limita i nomi esterni per il numero di caratteri significativi. Il valore predefinito è 31 caratteri.<br /><br /> Non disponibile in ml64. exe.|
|**/help**|Chiama QuickHelp per la guida su ML.|
|*Percorso* /i|Imposta il percorso del file di inclusione. È consentito un massimo di 10 **/i** opzioni.|
|**/nologo**|Disattiva i messaggi per l'assembly riuscito.|
|**/OMF**|Genera il tipo OMF (Object Module File Format) del modulo Object.  **/OMF** implica **/c**; ML. exe non supporta il collegamento di oggetti OMF.<br /><br /> Non disponibile in ml64. exe.|
|**/SA**|Attiva l'elenco di tutte le informazioni disponibili.|
|**/SAFESEH**|Contrassegna l'oggetto come che non contiene gestori di eccezioni o che contiene gestori di eccezioni dichiarati tutti con [. SAFESEH](dot-safeseh.md).<br /><br /> Non disponibile in ml64. exe.|
|**/SF**|Aggiunge il primo elenco di passaggi al file di listato.|
|*Larghezza* /SL|Imposta la lunghezza di riga dell'elenco di origine in caratteri per riga. L'intervallo è compreso tra 60 e 255 o 0. Il valore predefinito è 0. Uguale alla larghezza della [pagina](page.md) .|
|**Ésn**|Disattiva la tabella di simboli durante la generazione di un elenco.|
|*Lunghezza* /SP|Imposta la lunghezza della pagina dell'elenco di origine nelle righe per pagina. L'intervallo è compreso tra 10 e 255 o 0. Il valore predefinito è 0. Uguale alla lunghezza della [pagina](page.md) .|
|*Testo* /SS|Specifica il testo per l'elenco di origine. Uguale al testo del [sottotitolo](subtitle.md) .|
|*Testo* /St|Specifica il titolo per l'elenco di origine. Uguale al testo del [titolo](title.md) .|
|**/SX**|Attiva le condizionali false nell'elenco.|
|*Nome file* /ta|Assembla il file di origine il cui nome non termina con l'estensione ASM.|
|**/w**|Uguale a **/W0/WX**.|
|*Livello* /W|Imposta il livello di avviso, in cui *Level* = 0, 1, 2 o 3.|
|**/WX**|Restituisce un codice di errore se vengono generati avvisi.|
|**/X**|Ignora percorso di INCLUSIone ambiente.|
|**/Zd**|Genera informazioni sul numero di riga nel file oggetto.|
|**/ZF**|Rende pubblici tutti i simboli.|
|**/Zi**|Genera le informazioni CodeView nel file oggetto.|
|**/Zm**|Abilita l'opzione**M510** per la massima compatibilità con MASM 5,1.<br /><br /> Non disponibile in ml64. exe.|
|⟧*Allineamento*⟦ **/ZP**|Comprime le strutture nel limite di byte specificato. L' *allineamento* può essere 1, 2 o 4.|
|**/Zs**|Esegue solo una verifica della sintassi.|
|**/?**|Visualizza un riepilogo della sintassi della riga di comando ML.|

\ *filename*
Nome del file.

*link_options*\
Opzioni di collegamento. Per altre informazioni, vedere [Opzioni del linker](../../build/reference/linker-options.md).

## <a name="remarks"></a>Osservazioni

Alcune opzioni della riga di comando per ML e ML64 sono sensibili alla posizione. Ad esempio, poiché ML e ML64 possono accettare diverse opzioni **/c** , è necessario specificare tutte le opzioni **/fo** corrispondenti prima di **/c**. Nell'esempio di riga di comando riportato di seguito viene illustrata una specifica del file oggetto per ogni specifica del file di assembly:

```cmd
ml.exe /Fo a1.obj /c a.asm /Fo b1.obj /c b.asm
```

## <a name="environment-variables"></a>Variabili di ambiente

|Variabile|Descrizione|
|--------------|-----------------|
|INCLUDE|Specifica il percorso di ricerca dei file di inclusione.|
|ML|Specifica le opzioni della riga di comando predefinite.|
|TMP|Specifica il percorso dei file temporanei.|

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)\
[Riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)
