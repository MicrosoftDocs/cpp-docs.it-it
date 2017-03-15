---
title: Classe CUserTool | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CUserTool
dev_langs:
- C++
helpviewer_keywords:
- CUserTool class
ms.assetid: 7c287d3e-d012-488d-b4e1-aa0f83f294bb
caps.latest.revision: 25
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 2e0b082be6aac7314d8251f89b42ed09e44e2f3d
ms.lasthandoff: 02/24/2017

---
# <a name="cusertool-class"></a>Classe CUserTool
Uno strumento utente è una voce di menu che esegue un'applicazione esterna. Il **strumenti** scheda della finestra di **Personalizza** la finestra di dialogo ( [CMFCToolBarsCustomizeDialog classe](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)) consente all'utente di aggiungere strumenti utente e di specificare il nome, comando, gli argomenti e la directory iniziale per ogni strumento.  
  
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
|[CUserTool::GetCommand](#getcommand)|Restituisce una stringa che contiene il testo del comando associato allo strumento di utente.|  
|[CUserTool::GetCommandId](#getcommandid)|Restituisce l'ID di comando della voce di menu dello strumento di utente.|  
|[CUserTool::Invoke](#invoke)|Esegue il comando associato allo strumento di utente.|  
|[CUserTool::Serialize](#serialize)|Legge o scrive l'oggetto corrente da o in un archivio. (Esegue l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize).)|  
|[CUserTool::SetCommand](#setcommand)|Imposta il comando associato allo strumento di utente.|  
|[CUserTool::SetToolIcon](#settoolicon)|Carica l'icona dello strumento utente dall'applicazione associata allo strumento.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::LoadDefaultIcon](#loaddefaulticon)|Carica l'icona predefinita per uno strumento dell'utente.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CUserTool::m_strArguments](#m_strarguments)|Gli argomenti della riga di comando per lo strumento di utente.|  
|[CUserTool::m_strInitialDirectory](#m_strinitialdirectory)|La directory iniziale per lo strumento di utente.|  
|[CUserTool::m_strLabel](#m_strlabel)|Nome dello strumento che viene visualizzato nella voce di menu per lo strumento.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni su come abilitare gli strumenti utente nell'applicazione, vedere [CUserToolsManager classe](../../mfc/reference/cusertoolsmanager-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come creare uno strumento da un `CUserToolsManager` dell'oggetto, impostare il `m_strLabel` variabile membro e impostare l'applicazione che esegue lo strumento di utente. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#35;](../../mfc/codesnippet/cpp/cusertool-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CUserTool](../../mfc/reference/cusertool-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxusertool.h  
  
##  <a name="a-namecopyicontoclipboarda--cusertoolcopyicontoclipboard"></a><a name="copyicontoclipboard"></a>CUserTool::CopyIconToClipboard  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CopyIconToClipboard();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedrawtoolicona--cusertooldrawtoolicon"></a><a name="drawtoolicon"></a>CUserTool::DrawToolIcon  
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
  
##  <a name="a-namegetcommanda--cusertoolgetcommand"></a><a name="getcommand"></a>CUserTool::GetCommand  
 Restituisce una stringa che contiene il testo del comando associato allo strumento di utente.  
  
```  
const CString& GetCommand() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a `CString` oggetto che contiene il testo del comando associato allo strumento di utente.  
  
##  <a name="a-namegetcommandida--cusertoolgetcommandid"></a><a name="getcommandid"></a>CUserTool::GetCommandId  
 Restituisce l'ID di comando dello strumento di utente.  
  
```  
UINT GetCommandId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di comando dello strumento per questo utente.  
  
##  <a name="a-nameinvokea--cusertoolinvoke"></a><a name="invoke"></a>CUserTool::Invoke  
 Esegue il comando associato allo strumento di utente.  
  
```  
virtual BOOL Invoke();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il comando è stato eseguito correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamate [ShellExecute](http://msdn.microsoft.com/library/windows/desktop/bb762153) per eseguire un comando associato allo strumento di utente. La funzione ha esito negativo se il comando è vuoto o se [ShellExecute](http://msdn.microsoft.com/library/windows/desktop/bb762153) ha esito negativo.  
  
##  <a name="a-nameloaddefaulticona--cusertoolloaddefaulticon"></a><a name="loaddefaulticon"></a>CUserTool::LoadDefaultIcon  
 Carica l'icona predefinita per uno strumento dell'utente.  
  
```  
virtual HICON LoadDefaultIcon();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per l'icona caricato ( `HICON`), o `NULL` se non è possibile caricare l'icona predefinita.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando non è in grado di caricare un'icona per uno strumento definito dall'utente dal file eseguibile dello strumento.  
  
 Eseguire l'override di questo metodo per fornire la propria icona predefinita dello strumento.  
  
##  <a name="a-namemstrargumentsa--cusertoolmstrarguments"></a><a name="m_strarguments"></a>CUserTool::m_strArguments  
 Gli argomenti della riga di comando per lo strumento di utente.  
  
```  
CString m_strArguments;  
```  
  
### <a name="remarks"></a>Note  
 Questa stringa viene passata allo strumento quando si chiama [CUserTool::Invoke](#invoke) o quando un utente sceglie il comando associato con questo strumento.  
  
##  <a name="a-namemstrinitialdirectorya--cusertoolmstrinitialdirectory"></a><a name="m_strinitialdirectory"></a>CUserTool::m_strInitialDirectory  
 Specifica la directory iniziale per lo strumento di utente.  
  
```  
CString m_strInitialDirectory;  
```  
  
### <a name="remarks"></a>Note  
 Questa variabile specifica la directory iniziale che lo strumento viene eseguito in quando si chiama [CUserTool::Invoke](#invoke) o quando un utente sceglie il comando associato con questo strumento.  
  
##  <a name="a-namemstrlabela--cusertoolmstrlabel"></a><a name="m_strlabel"></a>CUserTool::m_strLabel  
 L'etichetta che viene visualizzato nella voce di menu per lo strumento.  
  
```  
CString m_strLabel;  
```  
  
##  <a name="a-nameserializea--cusertoolserialize"></a><a name="serialize"></a>CUserTool::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcommanda--cusertoolsetcommand"></a><a name="setcommand"></a>CUserTool::SetCommand  
 Imposta l'applicazione che esegue lo strumento di utente.  
  
```  
void SetCommand(LPCTSTR lpszCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszCmd`  
 Specifica la nuova applicazione da associare con lo strumento di utente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per impostare una nuova applicazione che esegue lo strumento di utente. Il metodo elimina l'icona precedente e carica una nuova icona dall'applicazione specificata. Se Impossibile caricare un'icona dell'applicazione, carica l'icona predefinita per uno strumento utente chiamando [CUserTool::LoadDefaultIcon](#loaddefaulticon).  
  
##  <a name="a-namesettoolicona--cusertoolsettoolicon"></a><a name="settoolicon"></a>CUserTool::SetToolIcon  
 Carica l'icona dello strumento utente dall'applicazione che utilizza lo strumento.  
  
```  
virtual HICON SetToolIcon();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per l'icona caricato.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per caricare l'icona da visualizzare nella voce di menu. Questo metodo cerca l'icona nel file eseguibile che utilizza lo strumento. Se non dispone di un'icona predefinita, l'icona fornita da [CUserTool::LoadDefaultIcon](#loaddefaulticon) viene invece utilizzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)   
 [Classe CUserToolsManager](../../mfc/reference/cusertoolsmanager-class.md)

