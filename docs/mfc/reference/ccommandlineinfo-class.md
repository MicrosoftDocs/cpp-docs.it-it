---
title: Classe CCommandLineInfo
ms.date: 11/04/2016
f1_keywords:
- CCommandLineInfo
- AFXWIN/CCommandLineInfo
- AFXWIN/CCommandLineInfo::CCommandLineInfo
- AFXWIN/CCommandLineInfo::ParseParam
- AFXWIN/CCommandLineInfo::m_bRunAutomated
- AFXWIN/CCommandLineInfo::m_bRunEmbedded
- AFXWIN/CCommandLineInfo::m_bShowSplash
- AFXWIN/CCommandLineInfo::m_nShellCommand
- AFXWIN/CCommandLineInfo::m_strDriverName
- AFXWIN/CCommandLineInfo::m_strFileName
- AFXWIN/CCommandLineInfo::m_strPortName
- AFXWIN/CCommandLineInfo::m_strPrinterName
- AFXWIN/CCommandLineInfo::m_strRestartIdentifier
helpviewer_keywords:
- CCommandLineInfo [MFC], CCommandLineInfo
- CCommandLineInfo [MFC], ParseParam
- CCommandLineInfo [MFC], m_bRunAutomated
- CCommandLineInfo [MFC], m_bRunEmbedded
- CCommandLineInfo [MFC], m_bShowSplash
- CCommandLineInfo [MFC], m_nShellCommand
- CCommandLineInfo [MFC], m_strDriverName
- CCommandLineInfo [MFC], m_strFileName
- CCommandLineInfo [MFC], m_strPortName
- CCommandLineInfo [MFC], m_strPrinterName
- CCommandLineInfo [MFC], m_strRestartIdentifier
ms.assetid: 3e313ddb-0a82-4991-87ac-a27feff4668c
ms.openlocfilehash: 0b4d5e5d253f2eb10388a69286d21e2190826eba
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369453"
---
# <a name="ccommandlineinfo-class"></a>Classe CCommandLineInfo

Facilita l'analisi della riga di comando all'avvio dell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CCommandLineInfo : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCommandLineInfo::CCommandLineInfo](#ccommandlineinfo)|Costruisce un `CCommandLineInfo` oggetto predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCommandLineInfo::ParseParam](#parseparam)|Eseguire l'override di questo callback per analizzare i singoli parametri.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCommandLineInfo::m_bRunAutomated](#m_brunautomated)|Indica che l'opzione della riga `/Automation` di comando è stata trovata.|
|[CCommandLineInfo::m_bRunEmbedded](#m_brunembedded)|Indica che l'opzione della riga `/Embedding` di comando è stata trovata.|
|[CCommandLineInfo::m_bShowSplash](#m_bshowsplash)|Indica se deve essere visualizzata una schermata iniziale.|
|[CCommandLineInfo::m_nShellCommand](#m_nshellcommand)|Indica il comando della shell da elaborare.|
|[CCommandLineInfo::m_strDriverName](#m_strdrivername)|Indica il nome del driver se il comando della shell è Stampa su; in caso contrario vuoto.|
|[CCommandLineInfo::m_strFileName](#m_strfilename)|Indica il nome del file da aprire o stampare; vuoto se il comando della shell è New o DDE.|
|[CCommandLineInfo::m_strPortName](#m_strportname)|Indica il nome della porta se il comando della shell è Stampa su; in caso contrario vuoto.|
|[CCommandLineInfo::m_strPrinterName](#m_strprintername)|Indica il nome della stampante se il comando della shell è Stampa su; in caso contrario vuoto.|
|[CCommandLineInfo::m_strRestartIdentifier](#m_strrestartidentifier)|Indica l'identificatore univoco del riavvio per il gestore dei riavvii se il gestore del riavvio ha riavviato l'applicazione.|

## <a name="remarks"></a>Osservazioni

Un'applicazione MFC creerà in genere un'istanza locale di questa classe nella funzione [InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) del relativo oggetto applicazione. Questo oggetto viene quindi passato a [CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline), che `CCommandLineInfo` chiama ripetutamente [ParseParam](#parseparam) per riempire l'oggetto. L'oggetto `CCommandLineInfo` viene quindi passato a [CWinApp::ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand) per gestire gli argomenti e i flag della riga di comando.

È possibile utilizzare questo oggetto per incapsulare le opzioni e i parametri della riga di comando seguenti:You can use this object to encapsulate the following command-line options and parameters:

|Argomento della riga di comando|Comando eseguito|
|----------------------------|----------------------|
|*app*|Nuovo file.|
|nome file *dell'app*|Apri file.|
|nome file *dell'app* `/p`|Stampa il file sulla stampante predefinita.|
|porta del driver della stampante del nome file *dell'app* `/pt`|Stampa il file sulla stampante specificata.|
|*app* `/dde`|Avviare e attendere il comando DDE.|
|*app* `/Automation`|Avviarsi come server di automazione OLE.|
|*app* `/Embedding`|Iniziare per modificare un elemento OLE incorporato.|
|*app* `/Register`<br /><br /> *app* `/Regserver`|Informa l'applicazione per eseguire eventuali attività di registrazione.|
|*app* `/Unregister`<br /><br /> *app* `/Unregserver`|Informa l'applicazione per eseguire eventuali attività di annullamento della registrazione.|

Derivare una `CCommandLineInfo` nuova classe da per gestire altri flag e valori di parametro. Eseguire l'override [ParseParam](#parseparam) per gestire i nuovi flag.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CCommandLineInfo`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="ccommandlineinfoccommandlineinfo"></a><a name="ccommandlineinfo"></a>CCommandLineInfo::CCommandLineInfo

Questo costruttore `CCommandLineInfo` crea un oggetto con valori predefiniti.

```
CCommandLineInfo();
```

### <a name="remarks"></a>Osservazioni

L'impostazione predefinita prevede `m_bShowSplash=TRUE`la visualizzazione della schermata iniziale `m_nShellCommand`( ) e l'esecuzione del comando Nuovo del menu File ( ** a0>NewFile **).

Il framework dell'applicazione chiama [ParseParam](#parseparam) per riempire i membri dati di questo oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#54](../../mfc/codesnippet/cpp/ccommandlineinfo-class_1.cpp)]

## <a name="ccommandlineinfom_brunautomated"></a><a name="m_brunautomated"></a>CCommandLineInfo::m_bRunAutomated

Indica che `/Automation` il flag è stato trovato nella riga di comando.

```
BOOL m_bRunAutomated;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, significa avviarsi come server di automazione OLE.

## <a name="ccommandlineinfom_brunembedded"></a><a name="m_brunembedded"></a>CCommandLineInfo::m_bRunEmbedded

Indica che `/Embedding` il flag è stato trovato nella riga di comando.

```
BOOL m_bRunEmbedded;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, significa avviare per la modifica di un elemento OLE incorporato.

## <a name="ccommandlineinfom_bshowsplash"></a><a name="m_bshowsplash"></a>CCommandLineInfo::m_bShowSplash

Indica che deve essere visualizzata la schermata iniziale.

```
BOOL m_bShowSplash;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, significa che la schermata iniziale per questa applicazione deve essere visualizzata durante l'avvio. L'implementazione predefinita di [ParseParam](#parseparam) imposta [m_nShellCommand](#m_nshellcommand) questo membro `CCommandLineInfo::FileNew`dati su TRUE se m_nShellCommand è uguale a .

## <a name="ccommandlineinfom_nshellcommand"></a><a name="m_nshellcommand"></a>CCommandLineInfo::m_nShellCommand

Indica il comando della shell per questa istanza dell'applicazione.

```
m_nShellCommand;
```

### <a name="remarks"></a>Osservazioni

Il tipo per questo membro dati è il tipo `CCommandLineInfo` enumerato seguente, definito nella classe.

```
enum {
    FileNew,
    FileOpen,
    FilePrint,
    FilePrintTo,
    FileDDE,
    AppRegister,
    AppUnregister,
    RestartByRestartManager,
    FileNothing = -1
    };
```

Per una breve descrizione di questi valori, vedere l'elenco seguente.

- `CCommandLineInfo::FileNew`Indica che non è stato trovato alcun nome di file nella riga di comando.

- `CCommandLineInfo::FileOpen`Indica che è stato trovato un nome di file nella riga di comando e `/p` `/pt`che `/dde`nessuno dei seguenti flag è stato trovato nella riga di comando: , , .

- `CCommandLineInfo::FilePrint`Indica che `/p` il flag è stato trovato nella riga di comando.

- `CCommandLineInfo::FilePrintTo`Indica che `/pt` il flag è stato trovato nella riga di comando.

- `CCommandLineInfo::FileDDE`Indica che `/dde` il flag è stato trovato nella riga di comando.

- `CCommandLineInfo::AppRegister`Indica che `/Register` il `/Regserver` flag o è stato trovato nella riga di comando e all'applicazione è stato chiesto di registrarsi.

- `CCommandLineInfo::AppUnregister`Indica che `/Unregister` all'oggetto o `/Unregserver` all'applicazione è stato chiesto di annullare la registrazione.

- `CCommandLineInfo::RestartByRestartManager`Indica che l'applicazione è stata riavviata dal gestore del riavvio.

- `CCommandLineInfo::FileNothing`Disattiva la visualizzazione di una nuova finestra figlio MDI all'avvio. Per impostazione autonoma, le applicazioni MDI generate dalla Creazione guidata applicazione visualizzano una nuova finestra figlio all'avvio. Per disattivare questa funzionalità, `CCommandLineInfo::FileNothing` un'applicazione può utilizzare come comando della shell quando chiama [ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand). `ProcessShellCommand`viene chiamato `InitInstance( )` dal `CWinApp` di tutte le classi derivate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#55](../../mfc/codesnippet/cpp/ccommandlineinfo-class_2.cpp)]

## <a name="ccommandlineinfom_strdrivername"></a><a name="m_strdrivername"></a>CCommandLineInfo::m_strDriverName

Archivia il valore del terzo parametro non flag nella riga di comando.

```
CString m_strDriverName;
```

### <a name="remarks"></a>Osservazioni

Questo parametro è in genere il nome del driver della stampante per un comando Stampa in shell. L'implementazione predefinita di [ParseParam](#parseparam) imposta `/pt` questo membro dati solo se il flag è stato trovato nella riga di comando.

## <a name="ccommandlineinfom_strfilename"></a><a name="m_strfilename"></a>CCommandLineInfo::m_strFileName

Archivia il valore del primo parametro non flag nella riga di comando.

```
CString m_strFileName;
```

### <a name="remarks"></a>Osservazioni

Questo parametro è in genere il nome del file da aprire.

## <a name="ccommandlineinfom_strportname"></a><a name="m_strportname"></a>CCommandLineInfo::m_strPortName

Archivia il valore del quarto parametro non flag nella riga di comando.

```
CString m_strPortName;
```

### <a name="remarks"></a>Osservazioni

Questo parametro è in genere il nome della porta della stampante per un comando Print To shell. L'implementazione predefinita di [ParseParam](#parseparam) imposta `/pt` questo membro dati solo se il flag è stato trovato nella riga di comando.

## <a name="ccommandlineinfom_strprintername"></a><a name="m_strprintername"></a>CCommandLineInfo::m_strPrinterName

Archivia il valore del secondo parametro non flag nella riga di comando.

```
CString m_strPrinterName;
```

### <a name="remarks"></a>Osservazioni

Questo parametro è in genere il nome della stampante per un comando Print To shell. L'implementazione predefinita di [ParseParam](#parseparam) imposta `/pt` questo membro dati solo se il flag è stato trovato nella riga di comando.

## <a name="ccommandlineinfom_strrestartidentifier"></a><a name="m_strrestartidentifier"></a>CCommandLineInfo::m_strRestartIdentifier

Identificatore univoco del riavvio nella riga di comando.

```
CString m_strRestartIdentifier;
```

### <a name="remarks"></a>Osservazioni

L'identificatore di riavvio è univoco per ogni istanza dell'applicazione.

Se il gestore di riavvii chiude l'applicazione ed è configurato per riavviarla, gestione riavvio esegue l'applicazione dalla riga di comando con l'identificatore di riavvio come parametro facoltativo. Quando Gestione riavvio utilizza l'identificatore di riavvio, l'applicazione può riaprire i documenti aperti in precedenza e recuperare i file salvati automaticamente.

## <a name="ccommandlineinfoparseparam"></a><a name="parseparam"></a>CCommandLineInfo::ParseParam

Il framework chiama questa funzione per analizzare/interpretare singoli parametri dalla riga di comando. La seconda versione differisce dalla prima solo nei progetti Unicode.

```
virtual void ParseParam(
    const char* pszParam,
    BOOL bFlag,
    BOOL bLast);

virtual void ParseParam(
    const TCHAR* pszParam,
    BOOL bFlag,
    BOOL bLast);
```

### <a name="parameters"></a>Parametri

*pszParam (informazioni in base alle paramese*<br/>
Il parametro o il flag.

*bFlag (Flag)*<br/>
Indica se *pszParam* è un parametro o un flag.

*Esplosione*<br/>
Indica se si tratta dell'ultimo parametro o flag nella riga di comando.

### <a name="remarks"></a>Osservazioni

[CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline) `ParseParam` chiama una volta per ogni parametro o flag nella riga di comando, passando l'argomento a *pszParam*. Se il primo carattere del **-** parametro **/** è un ' ' o un ' ', viene rimosso e *bFlag* è impostato su TRUE. Durante l'analisi del parametro finale, *bLast* è impostato su TRUE.

L'implementazione predefinita di questa funzione `/p` `/pt`riconosce `/dde` `/Automation`i `/Embedding`seguenti flag: , , , e , come illustrato nella tabella seguente:

|Argomento della riga di comando|Comando eseguito|
|----------------------------|----------------------|
|*app*|Nuovo file.|
|nome file *dell'app*|Apri file.|
|nome file *dell'app* `/p`|Stampa il file sulla stampante predefinita.|
|porta del driver della stampante del nome file *dell'app* `/pt`|Stampa il file sulla stampante specificata.|
|*app* `/dde`|Avviare e attendere il comando DDE.|
|*app* `/Automation`|Avviarsi come server di automazione OLE.|
|*app* `/Embedding`|Iniziare per modificare un elemento OLE incorporato.|
|*app* `/Register`<br /><br /> *app* `/Regserver`|Informa l'applicazione per eseguire eventuali attività di registrazione.|
|*app* `/Unregister`<br /><br /> *app* `/Unregserver`|Informa l'applicazione per eseguire eventuali attività di annullamento della registrazione.|

Queste informazioni vengono memorizzate in [m_bRunAutomated](#m_brunautomated), [m_bRunEmbedded](#m_brunembedded)e [m_nShellCommand](#m_nshellcommand). I flag sono contrassegnati da **/** una barra **-** rovesciata ' ' o trattino '.

L'implementazione predefinita inserisce il primo parametro non flag [in m_strFileName](#m_strfilename). Nel caso del `/pt` flag, l'implementazione predefinita inserisce il secondo, il terzo e il quarto parametro non-flag in [m_strPrinterName](#m_strprintername), [m_strDriverName](#m_strdrivername)e [m_strPortName](#m_strportname), rispettivamente.

L'implementazione predefinita imposta inoltre [m_bShowSplash](#m_bshowsplash) SU TRUE solo nel caso di un nuovo file. Nel caso di un nuovo file, l'utente ha eseguito un'azione che coinvolge l'applicazione stessa. In qualsiasi altro caso, inclusa l'apertura di file esistenti utilizzando la shell, l'azione dell'utente coinvolge direttamente il file. In un punto di vista incentrato sul documento, la schermata iniziale non è necessario annunciare l'avvio dell'applicazione.

Eseguire l'override di questa funzione nella classe derivata per gestire altri valori di flag e parametri.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline)<br/>
[CWinApp::ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand)
