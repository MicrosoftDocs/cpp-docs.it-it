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
ms.openlocfilehash: 1c76bcda6465ca86b8da4778d3653cb23001b78b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375559"
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
|[CDockState::Cancella](#clear)|Cancella le informazioni sullo stato della banchina.|
|[CDockState::GetVersion](#getversion)|Recupera il numero di versione dello stato della barra archiviato.|
|[StatoCcg;:LoadState](#loadstate)|Recupera le informazioni sullo stato dal Registro di sistema o . INI.|
|[CDockState::SaveState](#savestate)|Salva le informazioni sullo stato nel Registro di sistema o nel file INI.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDockState::m_arrBarInfo](#m_arrbarinfo)|Matrice di puntatori alle informazioni sullo stato di ancoraggio archiviate con una voce per ogni barra di controllo.|

## <a name="remarks"></a>Osservazioni

Lo stato di ancoraggio include le dimensioni e la posizione della barra e se è ancorata o meno. Quando si recupera lo `CDockState` stato di ancoraggio memorizzato, controlla la posizione della barra `CDockState` e, se la barra non è visibile con le impostazioni correnti dello schermo, ridimensiona la posizione della barra in modo che sia visibile. Lo scopo `CDockState` principale è quello di contenere l'intero stato di un certo numero di barre di controllo e di consentire che lo stato da salvare e caricare sia nel Registro di sistema, l'applicazione. INI o in forma binaria `CArchive` come parte del contenuto di un oggetto.

La barra può essere qualsiasi barra di controllo ancorabile, tra cui una barra degli strumenti, una barra di stato o una barra della finestra di dialogo. `CDockState`gli oggetti vengono scritti e letti `CArchive` da o verso un file tramite un oggetto.

[CFrameWnd::GetDockState](../../mfc/reference/cframewnd-class.md#getdockstate) recupera le informazioni sullo stato di `CControlBar` tutti gli oggetti `CDockState` della finestra cornice e li inserisce nell'oggetto . È quindi possibile scrivere `CDockState` il contenuto dell'oggetto da storage con [Serialize](../../mfc/reference/cobject-class.md#serialize) o [CDockState::SaveState](#savestate). Se in seguito si desidera ripristinare lo stato delle barre di controllo `Serialize` nella finestra cornice, è possibile caricare lo stato con o [CDockState::LoadState](#loadstate), quindi utilizzare [CFrameWnd::SetDockState](../../mfc/reference/cframewnd-class.md#setdockstate) per applicare lo stato salvato alle barre di controllo della finestra cornice.

Per ulteriori informazioni sull'ancoraggio delle barre di controllo, vedere gli articoli [Barre di](../../mfc/control-bars.md)controllo , Barre [degli strumenti: Ancoraggio e mobili](../../mfc/docking-and-floating-toolbars.md)e Finestre [cornice](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDockState`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv.h

## <a name="cdockstateclear"></a><a name="clear"></a>CDockState::Cancella

Chiamare questa funzione per cancellare tutte `CDockState` le informazioni di ancoraggio memorizzate nell'oggetto.

```
void Clear();
```

### <a name="remarks"></a>Osservazioni

Questo include non solo se la barra è ancorata o meno, ma la dimensione e la posizione della barra e se è visibile o meno.

## <a name="cdockstategetversion"></a><a name="getversion"></a>CDockState::GetVersion

Chiamare questa funzione per recuperare il numero di versione dello stato della barra archiviato.

```
DWORD GetVersion();
```

### <a name="return-value"></a>Valore restituito

1 se le informazioni sulla barra memorizzate sono precedenti allo stato corrente della barra; 2 se le informazioni della barra memorizzate sono le stesse dello stato corrente della barra.

### <a name="remarks"></a>Osservazioni

Il supporto della versione consente a una barra rivista di aggiungere nuove proprietà persistenti e di essere comunque in grado di rilevare e caricare lo stato persistente creato da una versione precedente della barra.

## <a name="cdockstateloadstate"></a><a name="loadstate"></a>StatoCcg;:LoadState

Chiamare questa funzione per recuperare le informazioni sullo stato dal Registro di sistema o . INI.

```
void LoadState(LPCTSTR lpszProfileName);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
Punta a una stringa con valori null e non temiti che specifica il nome di una sezione nel file di inizializzazione o di una chiave del Registro di sistema di Windows in cui sono archiviate le informazioni sullo stato.

### <a name="remarks"></a>Osservazioni

Il nome del profilo è la sezione del file . INI o il Registro di sistema che contiene le informazioni sullo stato delle barre. È possibile salvare le informazioni sullo stato della barra di controllo nel Registro di sistema o . INI con `SaveState`.

## <a name="cdockstatem_arrbarinfo"></a><a name="m_arrbarinfo"></a>CDockState::m_arrBarInfo

Oggetto `CPtrArray` che è una matrice di puntatori alle informazioni della barra di controllo `CDockState` archiviate per ogni barra di controllo che ha salvato le informazioni sullo stato nell'oggetto.

```
CPtrArray m_arrBarInfo;
```

## <a name="cdockstatesavestate"></a><a name="savestate"></a>CDockState::SaveState

Chiamare questa funzione per salvare le informazioni sullo stato nel Registro di sistema o . INI.

```
void SaveState(LPCTSTR lpszProfileName);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
Punta a una stringa con valori null e non temiti che specifica il nome di una sezione nel file di inizializzazione o di una chiave del Registro di sistema di Windows in cui sono archiviate le informazioni sullo stato.

### <a name="remarks"></a>Osservazioni

Il nome del profilo è la sezione del file . INI o il Registro di sistema che contiene le informazioni sullo stato della barra di controllo. `SaveState`salva anche le dimensioni correnti dello schermo. È possibile recuperare le informazioni della barra di controllo dal Registro di sistema o . INI con `LoadState`.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
