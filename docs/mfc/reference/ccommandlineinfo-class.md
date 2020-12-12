---
description: 'Altre informazioni su: classe CCommandLineInfo'
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
ms.openlocfilehash: 4c26ae86608725caa61ad4d1077bed01a3f40385
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227923"
---
# <a name="ccommandlineinfo-class"></a>Classe CCommandLineInfo

Facilita l'analisi della riga di comando all'avvio dell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CCommandLineInfo : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CCommandLineInfo:: CCommandLineInfo](#ccommandlineinfo)|Costruisce un `CCommandLineInfo` oggetto predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CCommandLineInfo::ParseParam](#parseparam)|Eseguire l'override di questo callback per analizzare i singoli parametri.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CCommandLineInfo:: m_bRunAutomated](#m_brunautomated)|Indica che è stata trovata l'opzione della riga di comando `/Automation` .|
|[CCommandLineInfo:: m_bRunEmbedded](#m_brunembedded)|Indica che è stata trovata l'opzione della riga di comando `/Embedding` .|
|[CCommandLineInfo:: m_bShowSplash](#m_bshowsplash)|Indica se deve essere visualizzata una schermata iniziale.|
|[CCommandLineInfo:: m_nShellCommand](#m_nshellcommand)|Indica il comando della shell da elaborare.|
|[CCommandLineInfo:: m_strDriverName](#m_strdrivername)|Indica il nome del driver se il comando della shell è stampato in; altrimenti vuoto.|
|[CCommandLineInfo:: m_strFileName](#m_strfilename)|Indica il nome file da aprire o stampare; vuoto se il comando della shell è nuovo o DDE.|
|[CCommandLineInfo:: m_strPortName](#m_strportname)|Indica il nome della porta se il comando della shell è stampato in; altrimenti vuoto.|
|[CCommandLineInfo:: m_strPrinterName](#m_strprintername)|Indica il nome della stampante se il comando della shell è stampato in; altrimenti vuoto.|
|[CCommandLineInfo:: m_strRestartIdentifier](#m_strrestartidentifier)|Indica l'identificatore di riavvio univoco per Gestione riavvio se la gestione riavvio ha riavviato l'applicazione.|

## <a name="remarks"></a>Commenti

Un'applicazione MFC in genere creerà un'istanza locale di questa classe nella funzione [InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) del relativo oggetto Application. Questo oggetto viene quindi passato a [CWinApp::P arsecommandline](../../mfc/reference/cwinapp-class.md#parsecommandline), che chiama ripetutamente [ParseParam](#parseparam) per riempire l' `CCommandLineInfo` oggetto. L' `CCommandLineInfo` oggetto viene quindi passato a [CWinApp::P rocessshellcommand](../../mfc/reference/cwinapp-class.md#processshellcommand) per gestire gli argomenti e i flag della riga di comando.

È possibile utilizzare questo oggetto per incapsulare le opzioni e i parametri della riga di comando seguenti:

|Argomento della riga di comando|Esecuzione comando|
|----------------------------|----------------------|
|*app*|Nuovo file.|
|nome file dell' *app*|Aprire il file.|
|*app* `/p` di filename|Stampa il file nella stampante predefinita.|
|*app* `/pt` di porta del driver della stampante filename|Stampare il file nella stampante specificata.|
|*app* di `/dde`|Comando avvia e attendi DDE.|
|*app* di `/Automation`|Avviare come server di automazione OLE.|
|*app* di `/Embedding`|Avviare per modificare un elemento OLE incorporato.|
|*app* di `/Register`<br /><br /> *app* di `/Regserver`|Informa l'applicazione per l'esecuzione di tutte le attività di registrazione.|
|*app* di `/Unregister`<br /><br /> *app* di `/Unregserver`|Informa l'applicazione di eseguire le attività di annullamento della registrazione.|

Derivare una nuova classe da `CCommandLineInfo` per gestire altri flag e valori di parametri. Eseguire l'override di [ParseParam](#parseparam) per gestire i nuovi flag.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CCommandLineInfo`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="ccommandlineinfoccommandlineinfo"></a><a name="ccommandlineinfo"></a> CCommandLineInfo:: CCommandLineInfo

Questo costruttore crea un `CCommandLineInfo` oggetto con i valori predefiniti.

```
CCommandLineInfo();
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, viene visualizzata la schermata iniziale ( `m_bShowSplash=TRUE` ) e per eseguire il nuovo comando nel menu file ( `m_nShellCommand` **= NewFile**).

Il Framework applicazione chiama [ParseParam](#parseparam) per riempire i membri dati di questo oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#54](../../mfc/codesnippet/cpp/ccommandlineinfo-class_1.cpp)]

## <a name="ccommandlineinfom_brunautomated"></a><a name="m_brunautomated"></a> CCommandLineInfo:: m_bRunAutomated

Indica che il `/Automation` flag è stato trovato nella riga di comando.

```
BOOL m_bRunAutomated;
```

### <a name="remarks"></a>Commenti

Se TRUE, questo significa che viene avviato come server di automazione OLE.

## <a name="ccommandlineinfom_brunembedded"></a><a name="m_brunembedded"></a> CCommandLineInfo:: m_bRunEmbedded

Indica che il `/Embedding` flag è stato trovato nella riga di comando.

```
BOOL m_bRunEmbedded;
```

### <a name="remarks"></a>Commenti

Se TRUE, questo significa che è stato avviato per la modifica di un elemento OLE incorporato.

## <a name="ccommandlineinfom_bshowsplash"></a><a name="m_bshowsplash"></a> CCommandLineInfo:: m_bShowSplash

Indica che deve essere visualizzata la schermata iniziale.

```
BOOL m_bShowSplash;
```

### <a name="remarks"></a>Commenti

Se TRUE, significa che la schermata iniziale per l'applicazione deve essere visualizzata durante l'avvio. L'implementazione predefinita di [ParseParam](#parseparam) imposta questo membro dati su TRUE se [m_nShellCommand](#m_nshellcommand) è uguale a `CCommandLineInfo::FileNew` .

## <a name="ccommandlineinfom_nshellcommand"></a><a name="m_nshellcommand"></a> CCommandLineInfo:: m_nShellCommand

Indica il comando della Shell per questa istanza dell'applicazione.

```
m_nShellCommand;
```

### <a name="remarks"></a>Commenti

Il tipo di questo membro dati è il seguente tipo enumerato, definito nella `CCommandLineInfo` classe.

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

- `CCommandLineInfo::FileNew` Indica che nella riga di comando non è stato trovato alcun nome file.

- `CCommandLineInfo::FileOpen` Indica che nella riga di comando è stato trovato un nome file e che nella riga di comando non è stato trovato alcun flag seguente: `/p` , `/pt` , `/dde` .

- `CCommandLineInfo::FilePrint` Indica che il `/p` flag è stato trovato nella riga di comando.

- `CCommandLineInfo::FilePrintTo` Indica che il `/pt` flag è stato trovato nella riga di comando.

- `CCommandLineInfo::FileDDE` Indica che il `/dde` flag è stato trovato nella riga di comando.

- `CCommandLineInfo::AppRegister` Indica che il `/Register` `/Regserver` flag o è stato trovato nella riga di comando ed è stata richiesta la registrazione dell'applicazione.

- `CCommandLineInfo::AppUnregister` Indica che all' `/Unregister` `/Unregserver` applicazione o è stato richiesto di annullare la registrazione.

- `CCommandLineInfo::RestartByRestartManager` Indica che l'applicazione è stata riavviata dalla gestione riavvio.

- `CCommandLineInfo::FileNothing` Disattiva la visualizzazione di una nuova finestra figlio MDI all'avvio. Per impostazione predefinita, le applicazioni MDI generate dalla creazione guidata applicazione visualizzano una nuova finestra figlio all'avvio. Per disabilitare questa funzionalità, un'applicazione può usare `CCommandLineInfo::FileNothing` come comando della shell quando chiama [ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand). `ProcessShellCommand` viene chiamato da `InitInstance( )` di tutte le `CWinApp` classi derivate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#55](../../mfc/codesnippet/cpp/ccommandlineinfo-class_2.cpp)]

## <a name="ccommandlineinfom_strdrivername"></a><a name="m_strdrivername"></a> CCommandLineInfo:: m_strDriverName

Archivia il valore del terzo parametro non flag nella riga di comando.

```
CString m_strDriverName;
```

### <a name="remarks"></a>Commenti

Questo parametro è in genere il nome del driver della stampante per un comando stampa per Shell. L'implementazione predefinita di [ParseParam](#parseparam) imposta questo membro dati solo se il `/pt` flag è stato trovato nella riga di comando.

## <a name="ccommandlineinfom_strfilename"></a><a name="m_strfilename"></a> CCommandLineInfo:: m_strFileName

Archivia il valore del primo parametro non flag nella riga di comando.

```
CString m_strFileName;
```

### <a name="remarks"></a>Commenti

Questo parametro è in genere il nome del file da aprire.

## <a name="ccommandlineinfom_strportname"></a><a name="m_strportname"></a> CCommandLineInfo:: m_strPortName

Archivia il valore del quarto parametro non flag nella riga di comando.

```
CString m_strPortName;
```

### <a name="remarks"></a>Commenti

Questo parametro è in genere il nome della porta stampante per un comando stampa per Shell. L'implementazione predefinita di [ParseParam](#parseparam) imposta questo membro dati solo se il `/pt` flag è stato trovato nella riga di comando.

## <a name="ccommandlineinfom_strprintername"></a><a name="m_strprintername"></a> CCommandLineInfo:: m_strPrinterName

Archivia il valore del secondo parametro non flag nella riga di comando.

```
CString m_strPrinterName;
```

### <a name="remarks"></a>Commenti

Questo parametro è in genere il nome della stampante per un comando stampa per Shell. L'implementazione predefinita di [ParseParam](#parseparam) imposta questo membro dati solo se il `/pt` flag è stato trovato nella riga di comando.

## <a name="ccommandlineinfom_strrestartidentifier"></a><a name="m_strrestartidentifier"></a> CCommandLineInfo:: m_strRestartIdentifier

Identificatore di riavvio univoco nella riga di comando.

```
CString m_strRestartIdentifier;
```

### <a name="remarks"></a>Commenti

L'identificatore di riavvio è univoco per ogni istanza dell'applicazione.

Se Gestione riavvio chiude l'applicazione e viene configurato per riavviarlo, gestione riavvio esegue l'applicazione dalla riga di comando con l'identificatore di riavvio come parametro facoltativo. Quando Gestione riavvio usa l'identificatore di riavvio, l'applicazione può riaprire i documenti aperti in precedenza e ripristinare i file salvati in automatico.

## <a name="ccommandlineinfoparseparam"></a><a name="parseparam"></a> CCommandLineInfo::P arseParam

Il Framework chiama questa funzione per analizzare/interpretare i singoli parametri dalla riga di comando. La seconda versione è diversa dal primo solo nei progetti Unicode.

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

*pszParam*<br/>
Parametro o flag.

*bFlag*<br/>
Indica se *pszParam* è un parametro o un flag.

*Esplosione*<br/>
Indica se si tratta dell'ultimo parametro o del flag della riga di comando.

### <a name="remarks"></a>Commenti

[CWinApp::P arsecommandline](../../mfc/reference/cwinapp-class.md#parsecommandline) chiama `ParseParam` una volta per ogni parametro o flag nella riga di comando, passando l'argomento a *pszParam*. Se il primo carattere del parametro è' **-** ' o ' **/** ', viene rimosso e *bFlag* è impostato su true. Quando si analizza il parametro finale, *Blast* è impostato su true.

L'implementazione predefinita di questa funzione riconosce i flag seguenti: `/p` , `/pt` , `/dde` , `/Automation` e `/Embedding` , come illustrato nella tabella seguente:

|Argomento della riga di comando|Esecuzione comando|
|----------------------------|----------------------|
|*app*|Nuovo file.|
|nome file dell' *app*|Aprire il file.|
|*app* `/p` di filename|Stampa il file nella stampante predefinita.|
|*app* `/pt` di porta del driver della stampante filename|Stampare il file nella stampante specificata.|
|*app* di `/dde`|Comando avvia e attendi DDE.|
|*app* di `/Automation`|Avviare come server di automazione OLE.|
|*app* di `/Embedding`|Avviare per modificare un elemento OLE incorporato.|
|*app* di `/Register`<br /><br /> *app* di `/Regserver`|Informa l'applicazione per l'esecuzione di tutte le attività di registrazione.|
|*app* di `/Unregister`<br /><br /> *app* di `/Unregserver`|Informa l'applicazione di eseguire le attività di annullamento della registrazione.|

Queste informazioni vengono archiviate in [m_bRunAutomated](#m_brunautomated), [m_bRunEmbedded](#m_brunembedded)e [m_nShellCommand](#m_nshellcommand). I flag sono contrassegnati da una barra rovesciata ' **/** ' o da un trattino ' **-** '.

L'implementazione predefinita inserisce il primo parametro non flag in [m_strFileName](#m_strfilename). Nel caso del `/pt` flag, l'implementazione predefinita inserisce il secondo, il terzo e il quarto parametro non flag in [m_strPrinterName](#m_strprintername), [m_strDriverName](#m_strdrivername)e [m_strPortName](#m_strportname), rispettivamente.

L'implementazione predefinita imposta anche [m_bShowSplash](#m_bshowsplash) su true solo nel caso di un nuovo file. Nel caso di un nuovo file, l'utente ha effettuato un'azione che interessava l'applicazione stessa. In tutti gli altri casi, inclusa l'apertura dei file esistenti tramite la shell, l'azione dell'utente implica direttamente il file. In un punto di vista incentrato sui documenti, la schermata iniziale non deve annunciare l'avvio dell'applicazione.

Eseguire l'override di questa funzione nella classe derivata per gestire altri valori di flag e parametri.

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CWinApp::P arseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline)<br/>
[CWinApp::P rocessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand)
