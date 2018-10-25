---
title: Classe CCommandLineInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f5fd5eb6e4b58cbca21220bf6a7161505505dd3a
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50080546"
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
|[CCommandLineInfo::CCommandLineInfo](#ccommandlineinfo)|Costruisce un valore predefinito `CCommandLineInfo` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCommandLineInfo::ParseParam](#parseparam)|Eseguire l'override di questo callback per analizzare i singoli parametri.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCommandLineInfo::m_bRunAutomated](#m_brunautomated)|Indica la riga di comando `/Automation` opzione è stata trovata.|
|[CCommandLineInfo::m_bRunEmbedded](#m_brunembedded)|Indica la riga di comando `/Embedding` opzione è stata trovata.|
|[CCommandLineInfo::m_bShowSplash](#m_bshowsplash)|Indica se deve essere visualizzata una schermata iniziale.|
|[CCommandLineInfo::m_nShellCommand](#m_nshellcommand)|Indica la shell dei comandi per essere elaborati.|
|[CCommandLineInfo::m_strDriverName](#m_strdrivername)|Indica il driver nome se il comando della shell consiste nella stampa; in caso contrario, è vuoto.|
|[CCommandLineInfo::m_strFileName](#m_strfilename)|Indica il nome del file da aprire o stampato; vuoto se il comando della shell è nuovo o DDE.|
|[CCommandLineInfo::m_strPortName](#m_strportname)|Indica la porta nome se il comando della shell consiste nella stampa; in caso contrario, è vuoto.|
|[CCommandLineInfo::m_strPrinterName](#m_strprintername)|Indica la stampante nome se il comando della shell consiste nella stampa; in caso contrario, è vuoto.|
|[CCommandLineInfo::m_strRestartIdentifier](#m_strrestartidentifier)|Indica l'identificatore univoco di riavvio per la gestione riavvio se Gestione riavvio riavviato l'applicazione.|

## <a name="remarks"></a>Note

Un'applicazione MFC in genere creerà un'istanza locale di questa classe nella [InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) funzione del relativo oggetto applicazione. Questo oggetto viene quindi passato a [CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline), che chiama ripetutamente [ParseParam](#parseparam) per riempire il `CCommandLineInfo` oggetto. Il `CCommandLineInfo` oggetto viene quindi passato a [CWinApp::ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand) per gestire gli argomenti della riga di comando e i flag.

È possibile utilizzare questa oggetto per incapsulare i parametri e le opzioni della riga di comando seguente:

|Argomento della riga di comando|Comando eseguito|
|----------------------------|----------------------|
|*app*|Nuovo file.|
|*app* nomefile|Apre il file.|
|*app* `/p` nomefile|Stampare il file alla stampante predefinita.|
|*app* `/pt` porta driver della stampante nomefile|Stampare il file con la stampante specificata.|
|*App* `/dde`|Verranno avviate e await comandi DDE.|
|*App* `/Automation`|Avviare come un server di automazione OLE.|
|*App* `/Embedding`|Avviare per modificare un elemento OLE incorporato.|
|*App* `/Register`<br /><br /> *App* `/Regserver`|Informa l'applicazione per eseguire eventuali attività di registrazione.|
|*App* `/Unregister`<br /><br /> *App* `/Unregserver`|Informa l'applicazione per eseguire eventuali attività di annullamento della registrazione.|

Derivare una nuova classe da `CCommandLineInfo` per gestire altri contrassegni e valori dei parametri. Eseguire l'override [ParseParam](#parseparam) per gestire i flag di nuovo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CCommandLineInfo`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="ccommandlineinfo"></a>  CCommandLineInfo::CCommandLineInfo

Questo costruttore crea un `CCommandLineInfo` oggetto con valori predefiniti.

```
CCommandLineInfo();
```

### <a name="remarks"></a>Note

Per impostazione predefinita viene visualizzata la schermata iniziale ( `m_bShowSplash=TRUE`) e per eseguire il comando Nuovo dal menu File ( `m_nShellCommand` **= NewFile**).

Il framework dell'applicazione chiama [ParseParam](#parseparam) per riempire i membri di dati di questo oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#54](../../mfc/codesnippet/cpp/ccommandlineinfo-class_1.cpp)]

##  <a name="m_brunautomated"></a>  CCommandLineInfo::m_bRunAutomated

Indica che il `/Automation` flag è stato trovato nella riga di comando.

```
BOOL m_bRunAutomated;
```

### <a name="remarks"></a>Note

Se TRUE, ciò significa avviare come un server di automazione OLE.

##  <a name="m_brunembedded"></a>  CCommandLineInfo::m_bRunEmbedded

Indica che il `/Embedding` flag è stato trovato nella riga di comando.

```
BOOL m_bRunEmbedded;
```

### <a name="remarks"></a>Note

Se TRUE, ciò significa avviare per la modifica di un elemento OLE incorporato.

##  <a name="m_bshowsplash"></a>  CCommandLineInfo::m_bShowSplash

Indica che deve essere visualizzata la schermata iniziale.

```
BOOL m_bShowSplash;
```

### <a name="remarks"></a>Note

Se TRUE, questo significa che la schermata iniziale per questa applicazione deve essere visualizzata durante l'avvio. L'implementazione predefinita di [ParseParam](#parseparam) questo membro dati viene impostato su TRUE se [m_nShellCommand](#m_nshellcommand) è uguale a `CCommandLineInfo::FileNew`.

##  <a name="m_nshellcommand"></a>  CCommandLineInfo::m_nShellCommand

Indica il comando della shell per questa istanza dell'applicazione.

```
m_nShellCommand;
```

### <a name="remarks"></a>Note

Il tipo per questo membro dati è il seguente tipo enumerato, che viene definito nel `CCommandLineInfo` classe.

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

- `CCommandLineInfo::FileNew` Indica che è stato trovato alcun nome file nella riga di comando.

- `CCommandLineInfo::FileOpen` Indica che un nome di file è stato trovato nella riga di comando e che nessuno dei flag seguenti sono stati trovati nella riga di comando: `/p`, `/pt`, `/dde`.

- `CCommandLineInfo::FilePrint` Indica che il `/p` flag è stato trovato nella riga di comando.

- `CCommandLineInfo::FilePrintTo` Indica che il `/pt` flag è stato trovato nella riga di comando.

- `CCommandLineInfo::FileDDE` Indica che il `/dde` flag è stato trovato nella riga di comando.

- `CCommandLineInfo::AppRegister` Indica che il `/Register` o `/Regserver` flag è stato trovato nella riga di comando e l'applicazione è stato chiesto di registrare.

- `CCommandLineInfo::AppUnregister` Indica che il `/Unregister` o `/Unregserver` applicazione ha richiesto l'annullamento della registrazione.

- `CCommandLineInfo::RestartByRestartManager` Indica che l'applicazione è stata riavviata dal gestore di riavvio.

- `CCommandLineInfo::FileNothing` Consente di disattivare la visualizzazione di una nuova finestra figlio MDI all'avvio. Per impostazione predefinita, le applicazioni MDI generate dalla creazione guidata applicazione visualizzano una nuova finestra figlio all'avvio. Per disattivare questa funzionalità, è possibile utilizzare un application `CCommandLineInfo::FileNothing` come il comando della shell quando si chiama [ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand). `ProcessShellCommand` viene chiamato dal `InitInstance( )` di tutti i `CWinApp` classi derivate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#55](../../mfc/codesnippet/cpp/ccommandlineinfo-class_2.cpp)]

##  <a name="m_strdrivername"></a>  CCommandLineInfo::m_strDriverName

Archivia il valore del terzo parametro non flag della riga di comando.

```
CString m_strDriverName;
```

### <a name="remarks"></a>Note

Questo parametro è in genere il nome del driver della stampante per un comando della shell di stampa. L'implementazione predefinita di [ParseParam](#parseparam) imposta questo membro dati solo se il `/pt` flag è stato trovato nella riga di comando.

##  <a name="m_strfilename"></a>  CCommandLineInfo::m_strFileName

Archivia il valore del primo parametro non flag della riga di comando.

```
CString m_strFileName;
```

### <a name="remarks"></a>Note

Questo parametro è in genere il nome del file da aprire.

##  <a name="m_strportname"></a>  CCommandLineInfo::m_strPortName

Archivia il valore del quarto parametro non flag della riga di comando.

```
CString m_strPortName;
```

### <a name="remarks"></a>Note

Questo parametro è in genere il nome della porta della stampante per un comando della shell di stampa. L'implementazione predefinita di [ParseParam](#parseparam) imposta questo membro dati solo se il `/pt` flag è stato trovato nella riga di comando.

##  <a name="m_strprintername"></a>  CCommandLineInfo::m_strPrinterName

Archivia il valore del secondo parametro non flag della riga di comando.

```
CString m_strPrinterName;
```

### <a name="remarks"></a>Note

Questo parametro è in genere il nome della stampante per un comando della shell di stampa. L'implementazione predefinita di [ParseParam](#parseparam) imposta questo membro dati solo se il `/pt` flag è stato trovato nella riga di comando.

##  <a name="m_strrestartidentifier"></a>  CCommandLineInfo::m_strRestartIdentifier

Univoco riavvia identificatore nella riga di comando.

```
CString m_strRestartIdentifier;
```

### <a name="remarks"></a>Note

L'identificatore di riavvio è univoco per ogni istanza dell'applicazione.

Se Gestione riavvio chiude l'applicazione e viene configurata per riavviarlo, Gestione riavvio viene eseguita l'applicazione dalla riga di comando con l'identificatore di riavvio come un parametro facoltativo. Quando Gestione riavvio utilizza l'identificatore di riavvio, l'applicazione può riaprire i documenti precedentemente aperti e ripristinare i file salvato automaticamente.

##  <a name="parseparam"></a>  CCommandLineInfo::ParseParam

Il framework chiama questa funzione per l'analisi/interpretare i singoli parametri dalla riga di comando. La seconda versione differisce dal primo solo nei progetti di Unicode.

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
Il parametro o un flag.

*bFlag*<br/>
Indica se *pszParam* è un parametro o un flag.

*aumento della quantità*<br/>
Indica se questo è l'ultimo parametro o flag della riga di comando.

### <a name="remarks"></a>Note

[CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline) chiamate `ParseParam` una volta per ogni parametro o il flag della riga di comando, passando l'argomento *pszParam*. Se il primo carattere del parametro è un ' **-**'o' **/**', viene rimossa e *bFlag* è impostata su TRUE. Quando l'ultimo parametro, di analisi *bLast* è impostata su TRUE.

L'implementazione predefinita di questa funzione riconosce i flag seguenti: `/p`, `/pt`, `/dde`, `/Automation`, e `/Embedding`, come illustrato nella tabella seguente:

|Argomento della riga di comando|Comando eseguito|
|----------------------------|----------------------|
|*app*|Nuovo file.|
|*app* nomefile|Apre il file.|
|*app* `/p` nomefile|Stampare il file alla stampante predefinita.|
|*app* `/pt` porta driver della stampante nomefile|Stampare il file con la stampante specificata.|
|*App* `/dde`|Verranno avviate e await comandi DDE.|
|*App* `/Automation`|Avviare come un server di automazione OLE.|
|*App* `/Embedding`|Avviare per modificare un elemento OLE incorporato.|
|*App* `/Register`<br /><br /> *App* `/Regserver`|Informa l'applicazione per eseguire eventuali attività di registrazione.|
|*App* `/Unregister`<br /><br /> *App* `/Unregserver`|Informa l'applicazione per eseguire eventuali attività di annullamento della registrazione.|

Queste informazioni vengono archiviate nel [m_bRunAutomated](#m_brunautomated), [m_bRunEmbedded](#m_brunembedded), e [m_nShellCommand](#m_nshellcommand). I flag sono contrassegnati tramite una barra ' **/**'o trattino' **-**'.

L'implementazione predefinita inserisce il primo parametro non flag nelle [m_strFileName](#m_strfilename). Nel caso del `/pt` flag, l'implementazione predefinita inserisce la seconda, terzi e quarto i parametri non flag nella [m_strPrinterName](#m_strprintername), [m_strDriverName](#m_strdrivername), e [m _ strPortName](#m_strportname), rispettivamente.

Imposta inoltre l'implementazione predefinita [m_bShowSplash](#m_bshowsplash) su TRUE solo in caso di un nuovo file. Nel caso di un nuovo file, l'utente ha eseguito l'operazione che interessa l'applicazione stessa. In tutti gli altri casi, incluse l'apertura di file esistenti utilizzando la shell, l'azione utente comporta direttamente il file. In un punto di vista basate su documenti, la schermata iniziale non è necessario annunciare l'applicazione di avvio.

Eseguire l'override di questa funzione nella classe derivata per gestire altri valori di flag e parametri.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline)<br/>
[CWinApp::ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand)

