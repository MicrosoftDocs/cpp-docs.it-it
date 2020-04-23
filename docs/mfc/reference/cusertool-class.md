---
title: Classe CUserTool
ms.date: 11/04/2016
f1_keywords:
- CUserTool
- AFXUSERTOOL/CUserTool
- AFXUSERTOOL/CUserTool::CopyIconToClipboard
- AFXUSERTOOL/CUserTool::DrawToolIcon
- AFXUSERTOOL/CUserTool::GetCommand
- AFXUSERTOOL/CUserTool::GetCommandId
- AFXUSERTOOL/CUserTool::Invoke
- AFXUSERTOOL/CUserTool::Serialize
- AFXUSERTOOL/CUserTool::SetCommand
- AFXUSERTOOL/CUserTool::SetToolIcon
- AFXUSERTOOL/CUserTool::LoadDefaultIcon
- AFXUSERTOOL/CUserTool::m_strArguments
- AFXUSERTOOL/CUserTool::m_strInitialDirectory
- AFXUSERTOOL/CUserTool::m_strLabel
helpviewer_keywords:
- CUserTool [MFC], CopyIconToClipboard
- CUserTool [MFC], DrawToolIcon
- CUserTool [MFC], GetCommand
- CUserTool [MFC], GetCommandId
- CUserTool [MFC], Invoke
- CUserTool [MFC], Serialize
- CUserTool [MFC], SetCommand
- CUserTool [MFC], SetToolIcon
- CUserTool [MFC], LoadDefaultIcon
- CUserTool [MFC], m_strArguments
- CUserTool [MFC], m_strInitialDirectory
- CUserTool [MFC], m_strLabel
ms.assetid: 7c287d3e-d012-488d-b4e1-aa0f83f294bb
ms.openlocfilehash: 183b30961e4a7d3079fa0d035a4ddc38bc2eebac
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752025"
---
# <a name="cusertool-class"></a>Classe CUserTool

Uno strumento utente è una voce di menu che esegue un'applicazione esterna. La scheda **Strumenti** della finestra di dialogo **Personalizza** ( [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)) consente all'utente di aggiungere strumenti utente e di specificare il nome, il comando, gli argomenti e la directory iniziale per ogni strumento utente.

## <a name="syntax"></a>Sintassi

```
class CUserTool : public CObject
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CUserTool::CopyIconToClipboard](#copyicontoclipboard)||
|[Strumento Utente::DrawToolIcon](#drawtoolicon)|Disegna l'icona dello strumento utente in un rettangolo specificato.|
|[Strumento CUser::GetCommand](#getcommand)|Restituisce una stringa che contiene il testo del comando associato allo strumento utente.|
|[Strumento CUser::GetCommandId](#getcommandid)|Restituisce l'ID di comando della voce di menu dello strumento utente.|
|[CUserTool::Richiamare](#invoke)|Esegue il comando associato allo strumento utente.|
|[CUserTool::Serialize (Strumento utente):Serialize (Strumento utente non è stato in vita](#serialize)|Legge o scrive l'oggetto corrente da o in un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|
|[CUserTool::SetCommand](#setcommand)|Imposta il comando associato allo strumento utente.|
|[CUserTool::SetToolIcon](#settoolicon)|Carica l'icona per lo strumento utente dall'applicazione associata allo strumento.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CUserTool::LoadDefaultIcon](#loaddefaulticon)|Carica l'icona predefinita per uno strumento utente.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[Strumento Di base::m_strArguments](#m_strarguments)|Argomenti della riga di comando per lo strumento utente.|
|[Strumento CUser::m_strInitialDirectory](#m_strinitialdirectory)|Directory iniziale per lo strumento utente.|
|[CUserTool::m_strLabel](#m_strlabel)|Il nome dello strumento visualizzato nella voce di menu per lo strumento.|

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su come abilitare gli strumenti utente nell'applicazione, vedere [Classe CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CUserToolsManager` creare uno `m_strLabel` strumento da un oggetto, impostare la variabile membro e impostare l'applicazione eseguita dallo strumento utente. Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#35](../../mfc/codesnippet/cpp/cusertool-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CUserTool](../../mfc/reference/cusertool-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxusertool.h

## <a name="cusertoolcopyicontoclipboard"></a><a name="copyicontoclipboard"></a>CUserTool::CopyIconToClipboard

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
BOOL CopyIconToClipboard();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cusertooldrawtoolicon"></a><a name="drawtoolicon"></a>Strumento Utente::DrawToolIcon

Disegna l'icona dello strumento utente al centro di un rettangolo specificato.

```cpp
void DrawToolIcon(
    CDC* pDC,
    const CRect& rectImage);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*rectImage (immagine rect)*<br/>
[in] Specifica le coordinate dell'area per visualizzare l'icona.

## <a name="cusertoolgetcommand"></a><a name="getcommand"></a>Strumento CUser::GetCommand

Restituisce una stringa che contiene il testo del comando associato allo strumento utente.

```
const CString& GetCommand() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `CString` che contiene il testo del comando associato allo strumento utente.

## <a name="cusertoolgetcommandid"></a><a name="getcommandid"></a>Strumento CUser::GetCommandId

Restituisce l'ID di comando dello strumento utente.

```
UINT GetCommandId() const;
```

### <a name="return-value"></a>Valore restituito

ID di comando di questo strumento utente.

## <a name="cusertoolinvoke"></a><a name="invoke"></a>CUserTool::Richiamare

Esegue il comando associato allo strumento utente.

```
virtual BOOL Invoke();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando è stato eseguito correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiama [ShellExecute](/windows/win32/api/shellapi/nf-shellapi-shellexecutew) per eseguire un comando associato allo strumento utente. La funzione ha esito negativo se il comando è vuoto o se [ShellExecute](/windows/win32/api/shellapi/nf-shellapi-shellexecutew) ha esito negativo.

## <a name="cusertoolloaddefaulticon"></a><a name="loaddefaulticon"></a>CUserTool::LoadDefaultIcon

Carica l'icona predefinita per uno strumento utente.

```
virtual HICON LoadDefaultIcon();
```

### <a name="return-value"></a>Valore restituito

Un handle per l'icona caricata (HICON) o NULL se non è possibile caricare l'icona predefinita.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando non è in grado di caricare un'icona per uno strumento definito dall'utente dal file eseguibile dello strumento.

Eseguire l'override di questo metodo per fornire l'icona dello strumento predefinito.

## <a name="cusertoolm_strarguments"></a><a name="m_strarguments"></a>Strumento Di base::m_strArguments

Argomenti della riga di comando per lo strumento utente.

```
CString m_strArguments;
```

### <a name="remarks"></a>Osservazioni

Questa stringa viene passata allo strumento quando si chiama [CUserTool::Invoke](#invoke) o quando un utente fa clic sul comando associato a questo strumento.

## <a name="cusertoolm_strinitialdirectory"></a><a name="m_strinitialdirectory"></a>Strumento CUser::m_strInitialDirectory

Specifica la directory iniziale per lo strumento utente.

```
CString m_strInitialDirectory;
```

### <a name="remarks"></a>Osservazioni

Questa variabile specifica la directory iniziale in cui viene eseguito lo strumento quando si chiama [CUserTool::Invoke](#invoke) o quando un utente fa clic sul comando associato a questo strumento.

## <a name="cusertoolm_strlabel"></a><a name="m_strlabel"></a>CUserTool::m_strLabel

Etichetta visualizzata nella voce di menu per lo strumento.

```
CString m_strLabel;
```

## <a name="cusertoolserialize"></a><a name="serialize"></a>CUserTool::Serialize (Strumento utente):Serialize (Strumento utente non è stato in vita

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

[in] *ar*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cusertoolsetcommand"></a><a name="setcommand"></a>CUserTool::SetCommand

Imposta l'applicazione eseguita dallo strumento utente.

```cpp
void SetCommand(LPCTSTR lpszCmd);
```

### <a name="parameters"></a>Parametri

*lpszCmd*<br/>
[in] Specifica la nuova applicazione da associare allo strumento utente.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per impostare una nuova applicazione eseguita dallo strumento utente. Il metodo elimina l'icona precedente e carica una nuova icona dall'applicazione specificata. Se non è possibile caricare un'icona dall'applicazione, carica l'icona predefinita per uno strumento utente chiamando [CUserTool::LoadDefaultIcon](#loaddefaulticon).

## <a name="cusertoolsettoolicon"></a><a name="settoolicon"></a>CUserTool::SetToolIcon

Carica l'icona per lo strumento utente dall'applicazione utilizzata dallo strumento.

```
virtual HICON SetToolIcon();
```

### <a name="return-value"></a>Valore restituito

Handle per l'icona caricata.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per caricare l'icona da visualizzare nella voce di menu. Questo metodo cerca l'icona nel file eseguibile utilizzato dallo strumento. Se non dispone di un'icona predefinita, viene utilizzata l'icona fornita da [CUserTool::LoadDefaultIcon.](#loaddefaulticon)

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[Classe CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md)
