---
title: Classe CDockState | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- dock state
- size
- docking control bars
- CDockState class
- states, dockable control bar
- position, control bar
- size, control bar
- docking tool windows
ms.assetid: 09e7c10b-3abd-4cb2-ad36-42420fe6bc36
caps.latest.revision: 23
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: fc8beb80cc35c1816fbc305ece2bfbc5df2e7cd0
ms.lasthandoff: 02/24/2017

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
|[CDockState::GetVersion](#getversion)|Recupera il numero di versione dell'oggetto memorizzato barra di stato.|  
|[CDockState::LoadState](#loadstate)|Consente di recuperare informazioni dal Registro di sistema sullo stato o. File INI.|  
|[CDockState::SaveState](#savestate)|Salva le informazioni sullo stato per il Registro di sistema o un file INI.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockState::m_arrBarInfo](#m_arrbarinfo)|Matrice di puntatori a archiviato ancorare informazioni sullo stato con una voce per ogni barra di controllo.|  
  
## <a name="remarks"></a>Note  
 Lo stato di ancoraggio include le dimensioni e posizione delle barre della e se è ancorata. Recupero archiviato ancorare quando lo stato, `CDockState` controlli della barra della posizione e, se la barra non è visibile con le impostazioni della schermata corrente, `CDockState` della barra della scala posizionare in modo che sia visibile. Lo scopo principale di `CDockState` per contenere l'intero stato di un numero di barre di controllo e per consentire tale stato da salvare e caricare il Registro di sistema, l'applicazione del. File INI, o in formato binario come parte di un `CArchive` contenuto dell'oggetto.  
  
 La barra può essere qualsiasi controllo ancorata barra, incluso una barra degli strumenti, barra di stato o la barra di finestra di dialogo. `CDockState`gli oggetti sono scritti e letti da o verso un file mediante un `CArchive` oggetto.  
  
 [CFrameWnd::GetDockState](../../mfc/reference/cframewnd-class.md#getdockstate) recupera le informazioni sullo stato di tutti della finestra cornice `CControlBar` oggetti e lo inserisce nel `CDockState` oggetto. È quindi possibile scrivere il contenuto di `CDockState` oggetto di archiviazione con [Serialize](../../mfc/reference/cobject-class.md#serialize) o [CDockState::SaveState](#savestate). Se si desidera ripristinare lo stato delle barre di controllo nella finestra cornice, è possibile caricare lo stato con `Serialize` o [CDockState::LoadState](#loadstate), quindi utilizzare [CFrameWnd::SetDockState](../../mfc/reference/cframewnd-class.md#setdockstate) per applicare lo stato salvato a barre di controllo della finestra cornice.  
  
 Per ulteriori informazioni su ancoraggio delle barre di controllo, vedere gli articoli [barre di controllo](../../mfc/control-bars.md), [barre degli strumenti: ancorate e mobili](../../mfc/docking-and-floating-toolbars.md), e [finestre cornice](../../mfc/frame-windows.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDockState`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxadv.h  
  
##  <a name="clear"></a>CDockState::Clear  
 Chiamare questa funzione per eliminare tutte le informazioni di ancoraggio archiviate nel `CDockState` oggetto.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 Ciò include non solo se la barra è ancorata o No, ma le dimensioni e posizione della barra ed è visibile o meno.  
  
##  <a name="getversion"></a>CDockState::GetVersion  
 Chiamare questa funzione per recuperare il numero di versione dell'oggetto memorizzato barra di stato.  
  
```  
DWORD GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 1 se la barra archiviata informazioni sono precedente a quella corrente della barra di stato. 2 se la barra stored informazioni corrisponde al corrente della barra di stato.  
  
### <a name="remarks"></a>Note  
 Supporto delle versioni consente una barra rivista aggiungere nuove proprietà persistenti e comunque in grado di individuare e caricare lo stato persistente creato da una versione precedente della barra.  
  
##  <a name="loadstate"></a>CDockState::LoadState  
 Chiamare questa funzione per recuperare informazioni sullo stato dal Registro di sistema o. File INI.  
  
```  
void LoadState(LPCTSTR lpszProfileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProfileName`  
 Punta a una stringa null teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave del Registro di sistema in cui sono archiviate informazioni sullo stato.  
  
### <a name="remarks"></a>Note  
 Il nome del profilo è la sezione dell'applicazione. File INI o il Registro di sistema che contiene informazioni sullo stato le barre. È possibile salvare barra informazioni sullo stato di controllo nel Registro di sistema o. File INI con `SaveState`.  
  
##  <a name="m_arrbarinfo"></a>CDockState::m_arrBarInfo  
 Oggetto `CPtrArray` oggetto che rappresenta una matrice di puntatori alle informazioni sulla barra di controllo stored per ogni barra di controllo che ha salvato le informazioni sullo stato di `CDockState` oggetto.  
  
```  
CPtrArray m_arrBarInfo;  
```  
  
##  <a name="savestate"></a>CDockState::SaveState  
 Chiamare questa funzione per salvare le informazioni sullo stato nel Registro di sistema o. File INI.  
  
```  
void SaveState(LPCTSTR lpszProfileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProfileName`  
 Punta a una stringa null teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave del Registro di sistema in cui sono archiviate informazioni sullo stato.  
  
### <a name="remarks"></a>Note  
 Il nome del profilo è la sezione dell'applicazione. File INI o nel Registro di sistema che contiene informazioni sullo stato della barra di controllo. `SaveState`Salva inoltre le dimensioni dello schermo corrente. È possibile recuperare informazioni sulla barra di controllo dal Registro di sistema o. File INI con `LoadState`.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)


