---
title: Classe CDockState | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDockState
- AFXADV/CDockState
- AFXADV/CDockState::Clear
- AFXADV/CDockState::GetVersion
- AFXADV/CDockState::LoadState
- AFXADV/CDockState::SaveState
- AFXADV/CDockState::m_arrBarInfo
dev_langs:
- C++
helpviewer_keywords:
- CDockState [MFC], Clear
- CDockState [MFC], GetVersion
- CDockState [MFC], LoadState
- CDockState [MFC], SaveState
- CDockState [MFC], m_arrBarInfo
ms.assetid: 09e7c10b-3abd-4cb2-ad36-42420fe6bc36
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fcfbe14743ffff91a4a1749f0394a6deb8f0547a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cdockstate-class"></a>Classe CDockState
Classe `CObject` serializzata che carica, scarica o cancella lo stato di una o più barre di controllo ancorabili nella memoria persistente (un file).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDockState : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockState::Clear](#clear)|Cancella le informazioni sullo stato di ancoraggio.|  
|[CDockState::GetVersion](#getversion)|Recupera il numero di versione dell'oggetto archiviato della barra di stato.|  
|[CDockState::LoadState](#loadstate)|Recupera le informazioni dal Registro di sistema dello stato o. File INI.|  
|[CDockState::SaveState](#savestate)|Salva le informazioni sullo stato per il Registro di sistema o file INI.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockState::m_arrBarInfo](#m_arrbarinfo)|Matrice di puntatori a archiviato ancorare le informazioni sullo stato con una sola voce per ogni barra di controllo.|  
  
## <a name="remarks"></a>Note  
 Lo stato di ancoraggio include le dimensioni e la posizione della barra e o meno quando è ancorato. Quando il recupero archiviato ancorare stato, `CDockState` controlli della barra della posizione e, se la barra non è visibile con le impostazioni correnti dello schermo, `CDockState` della barra della scala posizionare in modo che sia visibile. Lo scopo principale di `CDockState` è per contenere l'intero stato di un numero di barre di controllo e per consentire di tale stato da salvare e caricare il Registro di sistema, l'applicazione del. Il file INI, o in formato binario come parte di un `CArchive` contenuto dell'oggetto.  
  
 La barra può essere qualsiasi controllo ancorata barra, tra cui una barra degli strumenti, una barra di stato o una barra di finestra di dialogo. `CDockState` gli oggetti vengono scritti e lette da o verso un file mediante un `CArchive` oggetto.  
  
 [CFrameWnd::GetDockState](../../mfc/reference/cframewnd-class.md#getdockstate) recupera le informazioni sullo stato di tutti i frame della finestra `CControlBar` degli oggetti e lo inserisce nel `CDockState` oggetto. È quindi possibile scrivere il contenuto del `CDockState` oggetto da archiviare con [Serialize](../../mfc/reference/cobject-class.md#serialize) o [CDockState::SaveState](#savestate). Se si desidera ripristinare lo stato delle barre di controllo nella finestra cornice, è possibile caricare lo stato con `Serialize` o [CDockState::LoadState](#loadstate), quindi utilizzare [CFrameWnd::SetDockState](../../mfc/reference/cframewnd-class.md#setdockstate) applicare salvato stato da barre di controllo della finestra cornice.  
  
 Per ulteriori informazioni su ancoraggio delle barre di controllo, vedere gli articoli [barre di controllo](../../mfc/control-bars.md), [barre degli strumenti: ancorate e mobili](../../mfc/docking-and-floating-toolbars.md), e [finestre cornice](../../mfc/frame-windows.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDockState`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxadv.h  
  
##  <a name="clear"></a>  CDockState::Clear  
 Chiamare questa funzione per eliminare tutte le informazioni di ancoraggio archiviate nel `CDockState` oggetto.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 Ciò include non solo se la barra è ancorato oppure No, ma le dimensioni e posizione della barra ed è visibile o meno.  
  
##  <a name="getversion"></a>  CDockState::GetVersion  
 Chiamare questa funzione per recuperare il numero di versione dell'oggetto archiviato della barra di stato.  
  
```  
DWORD GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 1 se la barra archiviata informazioni sono precedente a quella corrente della barra di stato. 2 se la barra stored informazioni corrisponde al corrente della barra di stato.  
  
### <a name="remarks"></a>Note  
 Supporto delle versioni consente una barra rivista aggiungere nuove proprietà persistenti e comunque in grado di individuare e caricare lo stato persistente creato da una versione precedente della barra.  
  
##  <a name="loadstate"></a>  CDockState::LoadState  
 Chiamare questa funzione per recuperare informazioni sullo stato dal Registro di sistema o. File INI.  
  
```  
void LoadState(LPCTSTR lpszProfileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProfileName`  
 Punta a una stringa null teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave del Registro di sistema in cui sono memorizzate informazioni sullo stato.  
  
### <a name="remarks"></a>Note  
 Il nome del profilo è la sezione dell'applicazione. Il file INI o il Registro di sistema che contiene informazioni sullo stato delle barre. È possibile salvare una barra informazioni sullo stato di controllo nel Registro di sistema o. Il file INI con `SaveState`.  
  
##  <a name="m_arrbarinfo"></a>  CDockState::m_arrBarInfo  
 A `CPtrArray` oggetto che è una matrice di puntatori alle informazioni barra controllo archiviato per ogni barra di controllo che è stato salvato le informazioni sullo stato di `CDockState` oggetto.  
  
```  
CPtrArray m_arrBarInfo;  
```  
  
##  <a name="savestate"></a>  CDockState::SaveState  
 Chiamare questa funzione per salvare le informazioni sullo stato nel Registro di sistema o. File INI.  
  
```  
void SaveState(LPCTSTR lpszProfileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProfileName`  
 Punta a una stringa null teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave del Registro di sistema in cui sono memorizzate informazioni sullo stato.  
  
### <a name="remarks"></a>Note  
 Il nome del profilo è la sezione dell'applicazione. Il Registro di sistema o di file INI contenente le informazioni sullo stato della barra di controllo. `SaveState` Salva inoltre le dimensioni dello schermo corrente. È possibile recuperare informazioni sulla barra di controllo dal Registro di sistema o. Il file INI con `LoadState`.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)

