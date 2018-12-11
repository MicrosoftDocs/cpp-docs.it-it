---
title: CMetaFileDC (classe)
ms.date: 11/04/2016
f1_keywords:
- CMetaFileDC
- AFXEXT/CMetaFileDC
- AFXEXT/CMetaFileDC::CMetaFileDC
- AFXEXT/CMetaFileDC::Close
- AFXEXT/CMetaFileDC::CloseEnhanced
- AFXEXT/CMetaFileDC::Create
- AFXEXT/CMetaFileDC::CreateEnhanced
helpviewer_keywords:
- CMetaFileDC [MFC], CMetaFileDC
- CMetaFileDC [MFC], Close
- CMetaFileDC [MFC], CloseEnhanced
- CMetaFileDC [MFC], Create
- CMetaFileDC [MFC], CreateEnhanced
ms.assetid: ffce60fa-4181-4d46-9832-25e46fad4db4
ms.openlocfilehash: bfbe03c5c81b2c7d6517dff7ce4e5f88b7c076bc
ms.sourcegitcommit: 975098222db3e8b297607cecaa1f504570a11799
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2018
ms.locfileid: "53178304"
---
# <a name="cmetafiledc-class"></a>CMetaFileDC (classe)

Implementa un metafile di Windows che contiene una sequenza di comandi GDI (Graphics Device Interface) che è possibile riprodurre per creare un'immagine o un testo desiderato.

## <a name="syntax"></a>Sintassi

```
class CMetaFileDC : public CDC
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMetaFileDC::CMetaFileDC](#cmetafiledc)|Costruisce un oggetto `CMetaFileDC`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMetaFileDC::Close](#close)|Chiude il contesto di dispositivo e crea un handle del metafile.|
|[CMetaFileDC::CloseEnhanced](#closeenhanced)|Chiude un contesto di dispositivo metafile avanzato e crea un handle del metafile avanzato.|
|[CMetaFileDC::Create](#create)|Crea il contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.|
|[CMetaFileDC::CreateEnhanced](#createenhanced)|Crea un contesto di dispositivo metafile per un formato enhanced metafile.|

## <a name="remarks"></a>Note

Per implementare un metafile di Windows, creare innanzitutto un `CMetaFileDC` oggetto. Richiamare il `CMetaFileDC` costruttore, quindi chiamare il [Create](#create) funzione membro, che crea un contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.

Inviare quindi la `CMetaFileDC` la sequenza di comandi GDI CDC che si intendono per poter riprodurre dell'oggetto. Solo per i comandi GDI che creano output, ad esempio `MoveTo` e `LineTo`, può essere utilizzato.

Dopo aver inviato i comandi desiderati al metafile, chiamare il `Close` funzione membro, che chiude i contesti di dispositivo metafile e restituisce un handle del metafile. Quindi eliminare il `CMetaFileDC` oggetto.

[CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) quindi usare l'handle del metafile per riprodurre ripetutamente il metafile. Metafile può anche essere modificato dalle funzioni di Windows, ad esempio [CopyMetaFile](/windows/desktop/api/wingdi/nf-wingdi-copymetafilea), che consente di copiare un metafile per disco.

Quando il metafile non è più necessario, eliminarlo dalla memoria con il [DeleteMetaFile](/windows/desktop/api/wingdi/nf-wingdi-deletemetafile) funzione Windows.

È anche possibile implementare il `CMetaFileDC` dell'oggetto in modo da poter gestire entrambe le chiamate di output e attributo, ad esempio chiamate GDI `GetTextExtent`. Un metafile di questo tipo è più flessibile e più riutilizzare facilmente codice GDI generale, che spesso è costituito da una combinazione di chiamate di output e di attributo. Il `CMetaFileDC` due contesti di dispositivo, eredita `m_hDC` e `m_hAttribDC`, da CDC. Il `m_hDC` contesto di dispositivo gestisce tutto [CDC](../../mfc/reference/cdc-class.md) GDI chiamate di output e il `m_hAttribDC` contesto di dispositivo gestisce tutte le chiamate di attributo GDI CDC. In genere, questi contesti di due dispositivo fare riferimento allo stesso dispositivo. Nel caso di `CMetaFileDC`, l'attributo controller di dominio è impostato su NULL per impostazione predefinita.

Creare un secondo contesto di dispositivo che punti a schermo, una stampante o un dispositivo diverso da un metafile, quindi chiamare il `SetAttribDC` funzione di membro per associare il nuovo contesto di dispositivo con `m_hAttribDC`. Le chiamate GDI per le informazioni verranno ora indirizzate alla nuova `m_hAttribDC`. Le chiamate GDI di output verranno inviata a `m_hDC`, che rappresenta il metafile.

Per ulteriori informazioni sul `CMetaFileDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CMetaFileDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="close"></a>  CMetaFileDC::Close

Chiude il contesto di dispositivo metafile e crea un handle di metafile di Windows che può essere utilizzato per riprodurre il metafile tramite il [CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) funzione membro.

```
HMETAFILE Close();
```

### <a name="return-value"></a>Valore restituito

Un HMETAFILE valido se la funzione ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

L'handle del metafile di Windows possa essere utilizzato anche per modificare il metafile con funzioni di Windows, ad esempio [CopyMetaFile](/windows/desktop/api/wingdi/nf-wingdi-copymetafilea).

Eliminare il metafile dopo l'uso tramite una chiamata di Windows [DeleteMetaFile](/windows/desktop/api/wingdi/nf-wingdi-deletemetafile) (funzione).

##  <a name="closeenhanced"></a>  CMetaFileDC::CloseEnhanced

Chiude un contesto di dispositivo metafile avanzato e restituisce un handle che identifica un formato enhanced metafile.

```
HENHMETAFILE CloseEnhanced();
```

### <a name="return-value"></a>Valore restituito

Un handle del metafile avanzato, se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Un'applicazione può usare l'handle del metafile avanzato restituito da questa funzione per eseguire le attività seguenti:

- Visualizzare un'immagine archiviata in un metafile avanzato

- Creare copie del metafile avanzato

- Enumerare, modificare o copiare i singoli record nel metafile avanzato

- Recuperare una descrizione facoltativa del contenuto del metafile dall'intestazione di metafile avanzato

- Recuperare una copia dell'intestazione di metafile avanzato

- Recuperare una copia binaria del metafile avanzato

- Enumerare i colori nella tavolozza facoltativo

- Convertire un formato enhanced metafile in un metafile di Windows-format

Quando l'applicazione non richiede più l'handle dell'enhanced metafile, è necessario rilasciare l'handle tramite una chiamata Win32 `DeleteEnhMetaFile` (funzione).

##  <a name="cmetafiledc"></a>  CMetaFileDC::CMetaFileDC

Costruire un `CMetaFileDC` oggetto in due passaggi.

```
CMetaFileDC();
```

### <a name="remarks"></a>Note

In primo luogo, chiamare `CMetaFileDC`, quindi chiamare `Create`, che crea il contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.

##  <a name="create"></a>  CMetaFileDC::Create

Costruire un `CMetaFileDC` oggetto in due passaggi.

```
BOOL Create(LPCTSTR lpszFilename = NULL);
```

### <a name="parameters"></a>Parametri

*lpszFilename*<br/>
Punta a una stringa di caratteri con terminazione null. Specifica il nome del metafile per creare file. Se *lpszFilename* è NULL, viene creato un nuovo metafile in memoria.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

In primo luogo, chiamare il costruttore `CMetaFileDC`, quindi chiamare `Create`, che crea il contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.

##  <a name="createenhanced"></a>  CMetaFileDC::CreateEnhanced

Crea un contesto di dispositivo per un formato enhanced metafile.

```
BOOL CreateEnhanced(
    CDC* pDCRef,
    LPCTSTR lpszFileName,
    LPCRECT lpBounds,
    LPCTSTR lpszDescription);
```

### <a name="parameters"></a>Parametri

*pDCRef*<br/>
Identifica un dispositivo di riferimento per i metafile avanzato.

*lpszFileName*<br/>
Punta a una stringa di caratteri con terminazione null. Specifica il nome del file per i metafile avanzato deve essere creato. Se questo parametro è NULL, il metafile avanzato è basata sulla memoria e il relativo contenuto perdita quando l'oggetto viene eliminato o Win32 `DeleteEnhMetaFile` funzione viene chiamata.

*lpBounds*<br/>
Punta a un [RECT](/windows/desktop/api/windef/ns-windef-tagrect) struttura di data o un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le dimensioni in unità HIMETRIC (in base a incrementi.01 millimetro) dell'immagine da archiviare nel metafile avanzato.

*lpszDescription*<br/>
Punta a una stringa con terminazione zero che specifica il nome dell'applicazione che ha creato l'immagine, oltre al titolo dell'immagine.

### <a name="return-value"></a>Valore restituito

Un handle del contesto di dispositivo per i metafile avanzato, se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Questo controller di dominio è utilizzabile per archiviare un'immagine indipendente dal dispositivo.

Windows Usa il dispositivo di riferimento identificato dal *pDCRef* parametro per registrare la risoluzione e le unità di dispositivo su cui originariamente visualizzato un'immagine. Se il *pDCRef* parametro è NULL, Usa il dispositivo di visualizzazione corrente per riferimento.

I membri superiore e sinistro del `RECT` struttura di dati a cui punta il *lpBounds* parametro deve essere minore di membri inferiore e destro, rispettivamente. Punti lungo i bordi del rettangolo sono inclusi nell'immagine. Se *lpBounds* è NULL, la graphics device interface (GDI) calcola le dimensioni del rettangolo più piccolo che è possibile racchiudere il quadro tracciato dall'applicazione. Il *lpBounds* parametro deve essere fornito, ove possibile.

La stringa a cui fa riferimento il *lpszDescription* parametro deve contenere un carattere null tra il nome dell'applicazione e il nome dell'immagine e deve terminare con due caratteri null, ad esempio, "XYZ grafica Editor\0Bald Eagle\0\0, "dove \0 rappresenta il carattere null. Se *lpszDescription* è NULL, non sono presenti voci corrispondenti nell'intestazione di metafile avanzato.

Le applicazioni utilizzano il controller di dominio creato da questa funzione per archiviare un'immagine grafica in un metafile avanzato. L'handle che identifica questo controller di dominio può essere passato a qualsiasi funzione GDI.

Dopo che un'applicazione archivia un'immagine in un metafile avanzato, è possibile visualizzare l'immagine su qualsiasi dispositivo di output chiamando il `CDC::PlayMetaFile` (funzione). Quando si visualizza l'immagine, Windows Usa il rettangolo a cui fa riferimento il *lpBounds* parametro e i dati di risoluzione dal dispositivo di riferimento per posizionare e ridimensionare l'immagine. Il contesto di dispositivo restituito da questa funzione contiene gli stessi attributi predefiniti associati a qualsiasi nuovo controller di dominio.

Le applicazioni devono utilizzare Win32 `GetWinMetaFileBits` funzione per convertire un enhanced metafile in formato metafile di Windows meno recente.

Il nome del file per i metafile avanzato deve usare il. Estensione di formato EMF.

## <a name="see-also"></a>Vedere anche

[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

