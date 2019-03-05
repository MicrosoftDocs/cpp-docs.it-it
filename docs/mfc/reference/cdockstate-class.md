---
title: Classe CDockState
ms.date: 11/04/2016
f1_keywords:
- CDockState
- AFXADV/CDockState
- AFXADV/CDockState::Clear
- AFXADV/CDockState::GetVersion
- AFXADV/CDockState::LoadState
- AFXADV/CDockState::SaveState
- AFXADV/CDockState::m_arrBarInfo
helpviewer_keywords:
- CDockState [MFC], Clear
- CDockState [MFC], GetVersion
- CDockState [MFC], LoadState
- CDockState [MFC], SaveState
- CDockState [MFC], m_arrBarInfo
ms.assetid: 09e7c10b-3abd-4cb2-ad36-42420fe6bc36
ms.openlocfilehash: b8c4b80d7182795d8919adb64491d506325976ef
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57262688"
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
|[CDockState::LoadState](#loadstate)|Consente di recuperare informazioni dal Registro di sistema di stato o. File INI.|
|[CDockState::SaveState](#savestate)|Salva le informazioni sullo stato per il Registro di sistema o un file INI.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDockState::m_arrBarInfo](#m_arrbarinfo)|Matrice di puntatori a archiviato ancorare le informazioni sullo stato con una voce per ogni barra di controllo.|

## <a name="remarks"></a>Note

Lo stato di ancoraggio include le dimensioni e posizione delle barre della e se è ancorata. Quando recupero archiviato lo stato, di ancoraggio `CDockState` controlli della barra della posizione e, se la barra non è visibile con le impostazioni dello schermo corrente, `CDockState` della barra della scala posizionare in modo che venga visualizzato. Lo scopo principale di `CDockState` per contenere l'intero stato di un numero di barre di controllo e per consentire tale stato deve essere salvato e caricato nel Registro di sistema, l'applicazione del. File con estensione INI, o in formato binario come parte di un `CArchive` contenuto dell'oggetto.

La barra può essere qualsiasi controllo ancorata a barre, tra cui una barra degli strumenti, barra di stato o a barre di finestra di dialogo. `CDockState` gli oggetti vengono scritti e letti da o verso un file tramite un `CArchive` oggetto.

[CFrameWnd::GetDockState](../../mfc/reference/cframewnd-class.md#getdockstate) recupera le informazioni sullo stato di tutti i frame della finestra `CControlBar` degli oggetti e li inserisce nel `CDockState` oggetto. È quindi possibile scrivere il contenuto del `CDockState` oggetto da archiviare con [Serialize](../../mfc/reference/cobject-class.md#serialize) oppure [CDockState::SaveState](#savestate). Se si desidera che in un secondo momento ripristinare lo stato delle barre di controllo nella finestra cornice, è possibile caricare lo stato con `Serialize` oppure [CDockState::LoadState](#loadstate), quindi utilizzare [CFrameWnd::SetDockState](../../mfc/reference/cframewnd-class.md#setdockstate) per applicare il salvato stato da barre di controllo della finestra cornice.

Per ulteriori informazioni sull'ancoraggio le barre di controllo, vedere gli articoli [barre di controllo](../../mfc/control-bars.md), [barre degli strumenti: Ancorate e mobili](../../mfc/docking-and-floating-toolbars.md), e [Frame Windows](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDockState`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv.h

##  <a name="clear"></a>  CDockState::Clear

Chiamare questa funzione per cancellare tutte le informazioni di ancoraggio archiviate nel `CDockState` oggetto.

```
void Clear();
```

### <a name="remarks"></a>Note

Ciò include non solo se la barra è ancorata o No, ma le dimensioni e la posizione della barra e se è visibile.

##  <a name="getversion"></a>  CDockState::GetVersion

Chiamare questa funzione per recuperare il numero di versione dell'oggetto memorizzato barra di stato.

```
DWORD GetVersion();
```

### <a name="return-value"></a>Valore restituito

1 se la barra stored informazioni sono precedente a quella corrente della barra di stato. 2 se la barra stored informazioni equivale a corrente sulla barra di stato.

### <a name="remarks"></a>Note

Supporto delle versioni consente a un indicatore modificato aggiungere nuove proprietà persistenti e ancora essere in grado di rilevare e caricare lo stato permanente creato da una versione precedente della barra.

##  <a name="loadstate"></a>  CDockState::LoadState

Chiamare questa funzione per recuperare le informazioni sullo stato dal Registro di sistema o. File INI.

```
void LoadState(LPCTSTR lpszProfileName);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
Punta a una stringa null teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave del Registro di sistema di Windows in cui sono archiviate informazioni sullo stato.

### <a name="remarks"></a>Note

Il nome del profilo è la sezione dell'applicazione. File INI o il Registro di sistema che contiene le informazioni sullo stato delle barre. È possibile salvare barra informazioni sullo stato di controllo nel Registro di sistema o. File con estensione INI con `SaveState`.

##  <a name="m_arrbarinfo"></a>  CDockState::m_arrBarInfo

Oggetto `CPtrArray` oggetto che rappresenta una matrice di puntatori alle informazioni per ogni barra di controllo che è salvato le informazioni sullo stato nella barra controllo stored il `CDockState` oggetto.

```
CPtrArray m_arrBarInfo;
```

##  <a name="savestate"></a>  CDockState::SaveState

Chiamare questa funzione per salvare le informazioni sullo stato nel Registro di sistema o. File INI.

```
void SaveState(LPCTSTR lpszProfileName);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
Punta a una stringa null teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave del Registro di sistema di Windows in cui sono archiviate informazioni sullo stato.

### <a name="remarks"></a>Note

Il nome del profilo è la sezione dell'applicazione. File INI o nel Registro di sistema che contiene le informazioni sullo stato della barra di controllo. `SaveState` Salva inoltre le dimensioni dello schermo corrente. È possibile recuperare informazioni sulla barra di controllo dal Registro di sistema o. File con estensione INI con `LoadState`.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
