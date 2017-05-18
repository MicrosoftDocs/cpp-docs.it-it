---
title: Classe CCommandLineInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- CCommandLineInfo class
- command line, parsing
- parsing, command-line arguments
- argv argument
- startup code, parsing command-line arguments
- application flags [C++]
ms.assetid: 3e313ddb-0a82-4991-87ac-a27feff4668c
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: f9e63f47a8df69b52a6a12688e84602981d20dae
ms.openlocfilehash: a5b104e4ad0a0b9ce1933e7d8057f4d0fae46b77
ms.contentlocale: it-it
ms.lasthandoff: 03/21/2017

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
|[CCommandLineInfo::m_bRunAutomated](#m_brunautomated)|Indica la riga di comando `/Automation` (opzione) è stato trovato.|  
|[CCommandLineInfo::m_bRunEmbedded](#m_brunembedded)|Indica la riga di comando `/Embedding` (opzione) è stato trovato.|  
|[CCommandLineInfo::m_bShowSplash](#m_bshowsplash)|Indica se deve essere visualizzata una schermata iniziale.|  
|[CCommandLineInfo::m_nShellCommand](#m_nshellcommand)|Indica che la shell dei comandi per essere elaborati.|  
|[CCommandLineInfo::m_strDriverName](#m_strdrivername)|Indica il driver nome se il comando della shell è Print. in caso contrario è vuota.|  
|[CCommandLineInfo::m_strFileName](#m_strfilename)|Indica il nome del file da aprire o stampata. vuoto se il comando della shell è nuovo o DDE.|  
|[CCommandLineInfo::m_strPortName](#m_strportname)|Indica la porta nome se il comando della shell è Print. in caso contrario è vuota.|  
|[CCommandLineInfo::m_strPrinterName](#m_strprintername)|Indica la stampante nome se il comando della shell è Print. in caso contrario è vuota.|  
|[CCommandLineInfo::m_strRestartIdentifier](#m_strrestartidentifier)|Indica l'identificatore univoco di riavvio per la gestione riavvio se Gestione riavvio riavviata l'applicazione.|  
  
## <a name="remarks"></a>Note  
 Un'applicazione MFC in genere creerà un'istanza locale di questa classe nella [InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) funzione dell'oggetto applicazione. Questo oggetto viene quindi passato a [CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline), che chiama ripetutamente [ParseParam](#parseparam) per riempire la `CCommandLineInfo` oggetto. Il `CCommandLineInfo` oggetto viene quindi passato a [CWinApp::ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand) per gestire i flag e gli argomenti della riga di comando.  
  
 È possibile utilizzare questo oggetto per incapsulare i parametri e opzioni della riga di comando seguenti:  
  
|Argomento della riga di comando|Comando eseguito|  
|----------------------------|----------------------|  
|*app*|Nuovo file.|  
|*app* filename|Apre il file.|  
|*app* `/p` nome file|Stampare il file alla stampante predefinita.|  
|*app* `/pt` porta driver della stampante filename|File di stampa per la stampante specificata.|  
|*app*`/dde`|Avvio e await comando DDE.|  
|*app*`/Automation`|Avviare come server di automazione OLE.|  
|*app*`/Embedding`|Avviare per modificare un elemento OLE incorporato.|  
|*app*`/Register`<br /><br /> *app*`/Regserver`|Informa l'applicazione per eseguire le operazioni di registrazione.|  
|*app*`/Unregister`<br /><br /> *app*`/Unregserver`|Informa l'applicazione per eseguire le operazioni di annullamento della registrazione.|  
  
 Derivare una nuova classe da `CCommandLineInfo` per gestire altri flag e i valori dei parametri. Eseguire l'override [ParseParam](#parseparam) per gestire i flag di nuovo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CCommandLineInfo`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="ccommandlineinfo"></a>CCommandLineInfo::CCommandLineInfo  
 Questo costruttore crea un `CCommandLineInfo` oggetto con valori predefiniti.  
  
```  
CCommandLineInfo();
```  
  
### <a name="remarks"></a>Note  
 Il valore predefinito è per visualizzare la schermata iniziale ( `m_bShowSplash=TRUE`) e per eseguire il comando Nuovo dal menu File ( `m_nShellCommand` **= NewFile**).  
  
 Il framework chiama applicazione [ParseParam](#parseparam) per riempire i membri dati di questo oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#54; NVC_MFCDocView](../../mfc/codesnippet/cpp/ccommandlineinfo-class_1.cpp)]  
  
##  <a name="m_brunautomated"></a>CCommandLineInfo::m_bRunAutomated  
 Indica che il `/Automation` flag è stato trovato nella riga di comando.  
  
```  
BOOL m_bRunAutomated;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, ciò significa avviate come server di automazione OLE.  
  
##  <a name="m_brunembedded"></a>CCommandLineInfo::m_bRunEmbedded  
 Indica che il `/Embedding` flag è stato trovato nella riga di comando.  
  
```  
BOOL m_bRunEmbedded;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, ciò significa che l'avvio per la modifica di un elemento OLE incorporato.  
  
##  <a name="m_bshowsplash"></a>CCommandLineInfo::m_bShowSplash  
 Indica che deve essere visualizzata la schermata iniziale.  
  
```  
BOOL m_bShowSplash;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, ciò significa che la schermata iniziale per questa applicazione deve essere visualizzata durante l'avvio. L'implementazione predefinita di [ParseParam](#parseparam) imposta il membro dati `TRUE` se [m_nShellCommand](#m_nshellcommand) è uguale a `CCommandLineInfo::FileNew`.  
  
##  <a name="m_nshellcommand"></a>CCommandLineInfo::m_nShellCommand  
 Indica il comando di shell per questa istanza dell'applicazione.  
  
```  
m_nShellCommand;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo del membro dati è il seguente tipo enumerato, definito nel `CCommandLineInfo` (classe).  
  
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
  
- `CCommandLineInfo::FileNew`Indica che è stato trovato alcun nome file nella riga di comando.  
  
- `CCommandLineInfo::FileOpen`Indica che è stato trovato un nome di file nella riga di comando e che nessuno dei flag seguenti sono stati trovati nella riga di comando: `/p`, `/pt`, `/dde`.  
  
- `CCommandLineInfo::FilePrint`Indica che il `/p` flag è stato trovato nella riga di comando.  
  
- `CCommandLineInfo::FilePrintTo`Indica che il `/pt` flag è stato trovato nella riga di comando.  
  
- `CCommandLineInfo::FileDDE`Indica che il `/dde` flag è stato trovato nella riga di comando.  
  
- `CCommandLineInfo::AppRegister`Indica che il `/Register` o `/Regserver` flag è stato trovato nella riga di comando e l'applicazione ha richiesto la registrazione.  
  
- `CCommandLineInfo::AppUnregister`Indica che il `/Unregister` o `/Unregserver` applicazione ha richiesto l'annullamento della registrazione.  
  
- `CCommandLineInfo::RestartByRestartManager`Indica che l'applicazione è stato riavviato dal gestore di riavvio.  
  
- `CCommandLineInfo::FileNothing`Consente di disattivare la visualizzazione di una nuova finestra figlio MDI all'avvio. Per impostazione predefinita, le applicazioni MDI generato dalla creazione guidata applicazione visualizzano una nuova finestra figlio all'avvio. Per disattivare questa funzionalità, è possibile utilizzare un'applicazione `CCommandLineInfo::FileNothing` del comando shell durante la chiamata a [ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand). `ProcessShellCommand`viene chiamato dal `InitInstance( )` tutti `CWinApp` classi derivate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#55;](../../mfc/codesnippet/cpp/ccommandlineinfo-class_2.cpp)]  
  
##  <a name="m_strdrivername"></a>CCommandLineInfo::m_strDriverName  
 Archivia il valore del terzo parametro di flag non nella riga di comando.  
  
```  
CString m_strDriverName;  
```  
  
### <a name="remarks"></a>Note  
 Questo parametro viene in genere il nome del driver della stampante per un comando della shell di stampa. L'implementazione predefinita di [ParseParam](#parseparam) imposta il membro dati solo se il `/pt` flag è stato trovato nella riga di comando.  
  
##  <a name="m_strfilename"></a>CCommandLineInfo::m_strFileName  
 Archivia il valore del primo parametro di flag non nella riga di comando.  
  
```  
CString m_strFileName;  
```  
  
### <a name="remarks"></a>Note  
 Questo parametro viene in genere il nome del file da aprire.  
  
##  <a name="m_strportname"></a>CCommandLineInfo::m_strPortName  
 Archivia il valore del parametro di flag non quarto nella riga di comando.  
  
```  
CString m_strPortName;  
```  
  
### <a name="remarks"></a>Note  
 Questo parametro viene in genere il nome della porta della stampante per un comando della shell di stampa. L'implementazione predefinita di [ParseParam](#parseparam) imposta il membro dati solo se il `/pt` flag è stato trovato nella riga di comando.  
  
##  <a name="m_strprintername"></a>CCommandLineInfo::m_strPrinterName  
 Archivia il valore del secondo parametro di flag non nella riga di comando.  
  
```  
CString m_strPrinterName;  
```  
  
### <a name="remarks"></a>Note  
 Questo parametro viene in genere il nome della stampante per un comando della shell di stampa. L'implementazione predefinita di [ParseParam](#parseparam) imposta il membro dati solo se il `/pt` flag è stato trovato nella riga di comando.  
  
##  <a name="m_strrestartidentifier"></a>CCommandLineInfo::m_strRestartIdentifier  
 Univoco riavvia identificatore nella riga di comando.  
  
```  
CString m_strRestartIdentifier;  
```  
  
### <a name="remarks"></a>Note  
 Il riavvio è univoco per ogni istanza dell'applicazione.  
  
 Se Gestione riavvio esce dall'applicazione ed è configurata per riavviarlo, Gestione riavvio viene eseguita l'applicazione dalla riga di comando con l'identificatore di riavvio come un parametro facoltativo. Quando la gestione riavvio utilizza l'identificatore di riavvio, l'applicazione può Riapri documenti precedentemente aperti e ripristinare più file.  
  
##  <a name="parseparam"></a>CCommandLineInfo::ParseParam  
 Il framework chiama questa funzione per l'analisi/interpretare singoli parametri della riga di comando. La seconda versione è diverso dal primo solo nei progetti di Unicode.  
  
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
 `pszParam`  
 Il parametro o il flag.  
  
 *bFlag*  
 Indica se `pszParam` è un parametro o un flag.  
  
 `bLast`  
 Indica se questo è l'ultimo parametro o flag nella riga di comando.  
  
### <a name="remarks"></a>Note  
 [CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline) chiamate `ParseParam` una volta per ogni parametro o flag nella riga di comando, passando l'argomento `pszParam`. Se il primo carattere del parametro è un ' **-**'o' **/**', quindi viene rimosso e *bFlag* è impostato su `TRUE`. Durante l'analisi il parametro finale, `bLast` è impostato su `TRUE`.  
  
 L'implementazione predefinita di questa funzione riconosce i flag seguenti: `/p`, `/pt`, `/dde`, `/Automation`, e `/Embedding`, come illustrato nella tabella seguente:  
  
|Argomento della riga di comando|Comando eseguito|  
|----------------------------|----------------------|  
|*app*|Nuovo file.|  
|*app* filename|Apre il file.|  
|*app* `/p` nome file|Stampare il file alla stampante predefinita.|  
|*app* `/pt` porta driver della stampante filename|File di stampa per la stampante specificata.|  
|*app*`/dde`|Avvio e await comando DDE.|  
|*app*`/Automation`|Avviare come server di automazione OLE.|  
|*app*`/Embedding`|Avviare per modificare un elemento OLE incorporato.|  
|*app*`/Register`<br /><br /> *app*`/Regserver`|Informa l'applicazione per eseguire le operazioni di registrazione.|  
|*app*`/Unregister`<br /><br /> *app*`/Unregserver`|Informa l'applicazione per eseguire le operazioni di annullamento della registrazione.|  
  
 Queste informazioni vengono archiviate [m_bRunAutomated](#m_brunautomated), [m_bRunEmbedded](#m_brunembedded), e [m_nShellCommand](#m_nshellcommand). I flag sono contrassegnati mediante una barra ' **/**'o trattino' **-**'.  
  
 L'implementazione predefinita di inserire il primo parametro di flag non in [m_strFileName](#m_strfilename). Nel caso del `/pt` flag, l'implementazione predefinita inserisce il secondo, terzo e quarto parametro di flag non in [m_strPrinterName](#m_strprintername), [m_strDriverName](#m_strdrivername), e [m_strPortName](#m_strportname), rispettivamente.  
  
 Imposta inoltre l'implementazione predefinita [m_bShowSplash](#m_bshowsplash) a `TRUE` solo in caso di un nuovo file. Nel caso di un nuovo file, l'utente ha eseguito l'azione che interessano l'applicazione stessa. In altri casi, incluse l'apertura di file esistenti mediante la shell, l'azione utente comporta il file direttamente. In un punto di vista basate su documenti, la schermata iniziale non è necessario annunciare l'applicazione di avvio.  
  
 Eseguire l'override di questa funzione nella classe derivata per gestire gli altri valori di flag e il parametro.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWinApp::ParseCommandLine](../../mfc/reference/cwinapp-class.md#parsecommandline)   
 [CWinApp::ProcessShellCommand](../../mfc/reference/cwinapp-class.md#processshellcommand)


