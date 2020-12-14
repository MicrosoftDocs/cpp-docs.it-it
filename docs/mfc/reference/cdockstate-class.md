---
description: 'Altre informazioni su: classe CDockState'
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
ms.openlocfilehash: 4bdc17ec5a09b812609b8aa71e3f361603c1106f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184959"
---
# <a name="cdockstate-class"></a>Classe CDockState

Classe `CObject` serializzata che carica, scarica o cancella lo stato di una o più barre di controllo ancorabili nella memoria persistente (un file).

## <a name="syntax"></a>Sintassi

```
class CDockState : public CObject
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDockState:: Clear](#clear)|Cancella le informazioni sullo stato di ancoraggio.|
|[CDockState:: GetVersion](#getversion)|Recupera il numero di versione dello stato della barra archiviata.|
|[CDockState:: LoadState](#loadstate)|Recupera le informazioni sullo stato dal registro di sistema o. File INI.|
|[CDockState:: SaveState](#savestate)|Salva le informazioni sullo stato nel registro di sistema o nel file INI.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDockState:: m_arrBarInfo](#m_arrbarinfo)|Matrice di puntatori alle informazioni sullo stato di ancoraggio archiviate con una voce per ogni barra di controllo.|

## <a name="remarks"></a>Commenti

Lo stato di ancoraggio include le dimensioni e la posizione della barra e indica se è ancorato. Quando si recupera lo stato di ancoraggio archiviato, `CDockState` Controlla la posizione della barra e, se la barra non è visibile con le impostazioni correnti della schermata, `CDockState` Ridimensiona la posizione della barra in modo che sia visibile. Lo scopo principale di `CDockState` è quello di mantenere l'intero stato di una serie di barre di controllo e di consentire il salvataggio e il caricamento dello stato nel registro di sistema, ovvero l'applicazione. File INI o in formato binario come parte del contenuto di un `CArchive` oggetto.

La barra può essere qualsiasi barra di controllo ancorabile, tra cui una barra degli strumenti, una barra di stato o una barra della finestra di dialogo. `CDockState` gli oggetti vengono scritti e letti in o da un file tramite un `CArchive` oggetto.

[CFrameWnd:: GetDockState](../../mfc/reference/cframewnd-class.md#getdockstate) recupera le informazioni sullo stato di tutti gli oggetti della finestra cornice `CControlBar` e le inserisce nell' `CDockState` oggetto. È quindi possibile scrivere il contenuto dell'oggetto nella risorsa di `CDockState` archiviazione con [Serialize](../../mfc/reference/cobject-class.md#serialize) o [CDockState:: SaveState](#savestate). Se in seguito si vuole ripristinare lo stato delle barre di controllo nella finestra cornice, è possibile caricare lo stato con `Serialize` o [CDockState:: LoadState](#loadstate), quindi usare [CFrameWnd:: SetDockState](../../mfc/reference/cframewnd-class.md#setdockstate) per applicare lo stato salvato alle barre di controllo della finestra cornice.

Per ulteriori informazioni sull'ancoraggio delle barre di controllo, vedere gli articoli [barre di controllo](../../mfc/control-bars.md), barre [degli strumenti: ancoraggio e mobile](../../mfc/docking-and-floating-toolbars.md)e [finestre cornice](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDockState`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv. h

## <a name="cdockstateclear"></a><a name="clear"></a> CDockState:: Clear

Chiamare questa funzione per cancellare tutte le informazioni di ancoraggio archiviate nell' `CDockState` oggetto.

```cpp
void Clear();
```

### <a name="remarks"></a>Commenti

Ciò include non solo se la barra è ancorata o meno, ma le dimensioni e la posizione della barra e se è visibile o meno.

## <a name="cdockstategetversion"></a><a name="getversion"></a> CDockState:: GetVersion

Chiamare questa funzione per recuperare il numero di versione dello stato della barra archiviata.

```
DWORD GetVersion();
```

### <a name="return-value"></a>Valore restituito

1 se le informazioni della barra archiviata sono anteriori allo stato attuale della barra; 2 se le informazioni sulla barra archiviata corrispondono allo stato attuale della barra.

### <a name="remarks"></a>Commenti

Il supporto della versione consente a una barra modificata di aggiungere nuove proprietà permanenti e comunque di rilevare e caricare lo stato persistente creato da una versione precedente della barra.

## <a name="cdockstateloadstate"></a><a name="loadstate"></a> CDockState:: LoadState

Chiamare questa funzione per recuperare le informazioni sullo stato dal registro di sistema o. File INI.

```cpp
void LoadState(LPCTSTR lpszProfileName);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
Punta a una stringa null-teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave nel registro di sistema di Windows in cui vengono archiviate le informazioni sullo stato.

### <a name="remarks"></a>Commenti

Il nome del profilo è la sezione dell'applicazione. Il file INI o il registro di sistema che contiene le informazioni sullo stato delle barre. È possibile salvare le informazioni sullo stato della barra di controllo nel registro di sistema o. File INI con `SaveState` .

## <a name="cdockstatem_arrbarinfo"></a><a name="m_arrbarinfo"></a> CDockState:: m_arrBarInfo

`CPtrArray`Oggetto che rappresenta una matrice di puntatori alle informazioni della barra di controllo archiviate per ogni barra di controllo che ha salvato le informazioni sullo stato nell' `CDockState` oggetto.

```
CPtrArray m_arrBarInfo;
```

## <a name="cdockstatesavestate"></a><a name="savestate"></a> CDockState:: SaveState

Chiamare questa funzione per salvare le informazioni sullo stato nel registro di sistema o. File INI.

```cpp
void SaveState(LPCTSTR lpszProfileName);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
Punta a una stringa null-teminated che specifica il nome di una sezione nel file di inizializzazione o una chiave nel registro di sistema di Windows in cui vengono archiviate le informazioni sullo stato.

### <a name="remarks"></a>Commenti

Il nome del profilo è la sezione dell'applicazione. Il file INI o il registro di sistema che contiene le informazioni sullo stato della barra di controllo. `SaveState` Salva anche le dimensioni correnti dello schermo. È possibile recuperare le informazioni sulla barra di controllo dal registro di sistema o. File INI con `LoadState` .

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
