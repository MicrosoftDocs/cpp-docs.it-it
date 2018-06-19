---
title: Classe CUserTool | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 59f5ab622d6124e830028ea61a0c77583f76d015
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374753"
---
# <a name="cusertool-class"></a>Classe CUserTool
Uno strumento utente è una voce di menu che esegue un'applicazione esterna. Il **strumenti** scheda della finestra di **Personalizza** la finestra di dialogo ( [CMFCToolBarsCustomizeDialog classe](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)) consente all'utente di aggiungere strumenti utente e per specificare il nome, i comandi, argomenti, e directory iniziale per ogni strumento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CUserTool : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::CopyIconToClipboard](#copyicontoclipboard)||  
|[CUserTool::DrawToolIcon](#drawtoolicon)|Disegna l'icona dello strumento di utente in un rettangolo specificato.|  
|[CUserTool::GetCommand](#getcommand)|Restituisce una stringa che contiene il testo del comando associato con lo strumento dell'utente.|  
|[CUserTool::GetCommandId](#getcommandid)|Restituisce l'ID di comando della voce di menu dello strumento utente.|  
|[CUserTool::Invoke](#invoke)|Esegue il comando associato con lo strumento dell'utente.|  
|[CUserTool::Serialize](#serialize)|Legge o scrive l'oggetto corrente da o in un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|  
|[CUserTool::SetCommand](#setcommand)|Imposta il comando associato con lo strumento dell'utente.|  
|[CUserTool::SetToolIcon](#settoolicon)|Carica l'icona per lo strumento dell'utente dall'applicazione associata allo strumento.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::LoadDefaultIcon](#loaddefaulticon)|Carica l'icona predefinita per uno strumento utente.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::m_strArguments](#m_strarguments)|Gli argomenti della riga di comando per lo strumento dell'utente.|  
|[CUserTool::m_strInitialDirectory](#m_strinitialdirectory)|La directory iniziale per lo strumento dell'utente.|  
|[CUserTool::m_strLabel](#m_strlabel)|Nome dello strumento che viene visualizzato nella voce di menu per lo strumento.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni su come abilitare gli strumenti utente nell'applicazione, vedere [CUserToolsManager classe](../../mfc/reference/cusertoolsmanager-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come creare uno strumento da un `CUserToolsManager` dell'oggetto, impostare il `m_strLabel` variabile membro e impostare l'applicazione che esegue lo strumento dell'utente. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#35](../../mfc/codesnippet/cpp/cusertool-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CUserTool](../../mfc/reference/cusertool-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxusertool.h  
  
##  <a name="copyicontoclipboard"></a>  CUserTool::CopyIconToClipboard  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CopyIconToClipboard();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="drawtoolicon"></a>  CUserTool::DrawToolIcon  
 Disegna l'icona dello strumento utente al centro di un rettangolo specificato.  
  
```  
void DrawToolIcon(
    CDC* pDC,  
    const CRect& rectImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectImage`  
 Specifica le coordinate dell'area per visualizzare l'icona.  
  
##  <a name="getcommand"></a>  CUserTool::GetCommand  
 Restituisce una stringa che contiene il testo del comando associato con lo strumento dell'utente.  
  
```  
const CString& GetCommand() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a `CString` oggetto che contiene il testo del comando associato con lo strumento dell'utente.  
  
##  <a name="getcommandid"></a>  CUserTool::GetCommandId  
 Restituisce l'ID di comando dello strumento utente.  
  
```  
UINT GetCommandId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di comando dello strumento utente.  
  
##  <a name="invoke"></a>  CUserTool::Invoke  
 Esegue il comando associato con lo strumento dell'utente.  
  
```  
virtual BOOL Invoke();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il comando è stato eseguito correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamate [ShellExecute](http://msdn.microsoft.com/library/windows/desktop/bb762153) per eseguire un comando associato con lo strumento dell'utente. La funzione ha esito negativo se il comando è vuoto o se [ShellExecute](http://msdn.microsoft.com/library/windows/desktop/bb762153) ha esito negativo.  
  
##  <a name="loaddefaulticon"></a>  CUserTool::LoadDefaultIcon  
 Carica l'icona predefinita per uno strumento utente.  
  
```  
virtual HICON LoadDefaultIcon();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per l'icona caricato ( `HICON`), o `NULL` se non è possibile caricare l'icona predefinita.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando non è in grado di caricare un'icona per uno strumento definito dall'utente dal file eseguibile dello strumento.  
  
 Eseguire l'override di questo metodo per fornire la propria icona predefinita dello strumento.  
  
##  <a name="m_strarguments"></a>  CUserTool::m_strArguments  
 Gli argomenti della riga di comando per lo strumento dell'utente.  
  
```  
CString m_strArguments;  
```  
  
### <a name="remarks"></a>Note  
 Questa stringa viene passata allo strumento quando si chiama [CUserTool::Invoke](#invoke) o quando un utente sceglie il comando associato a questo strumento.  
  
##  <a name="m_strinitialdirectory"></a>  CUserTool::m_strInitialDirectory  
 Specifica la directory iniziale per lo strumento dell'utente.  
  
```  
CString m_strInitialDirectory;  
```  
  
### <a name="remarks"></a>Note  
 Questa variabile specifica la directory iniziale che lo strumento viene eseguito in quando si chiama [CUserTool::Invoke](#invoke) o quando un utente sceglie il comando associato a questo strumento.  
  
##  <a name="m_strlabel"></a>  CUserTool::m_strLabel  
 L'etichetta viene visualizzata nella voce di menu per lo strumento.  
  
```  
CString m_strLabel;  
```  
  
##  <a name="serialize"></a>  CUserTool::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setcommand"></a>  CUserTool::SetCommand  
 Imposta l'applicazione che esegue lo strumento dell'utente.  
  
```  
void SetCommand(LPCTSTR lpszCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszCmd`  
 Specifica la nuova applicazione da associare con lo strumento dell'utente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per impostare una nuova applicazione che esegue lo strumento dell'utente. Il metodo elimina l'icona precedente e viene caricata una nuova icona dall'applicazione specificata. Se Impossibile caricare un'icona dell'applicazione, carica l'icona predefinita per uno strumento utente chiamando [CUserTool::LoadDefaultIcon](#loaddefaulticon).  
  
##  <a name="settoolicon"></a>  CUserTool::SetToolIcon  
 Carica l'icona per lo strumento dell'utente dall'applicazione che utilizza lo strumento.  
  
```  
virtual HICON SetToolIcon();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per l'icona caricato.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per caricare l'icona da visualizzare nella voce di menu. Questo metodo cerca l'icona nel file eseguibile che utilizza lo strumento. Se non dispone di un'icona predefinita, l'icona fornito da [CUserTool::LoadDefaultIcon](#loaddefaulticon) viene invece utilizzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)   
 [Classe CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md)
