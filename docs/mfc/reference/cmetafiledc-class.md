---
description: 'Altre informazioni su: classe CMetaFileDC'
title: Classe CMetaFileDC
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
ms.openlocfilehash: b4b506818b1864c40225055faa2582820f15f423
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336626"
---
# <a name="cmetafiledc-class"></a>Classe CMetaFileDC

Implementa un metafile di Windows che contiene una sequenza di comandi GDI (Graphics Device Interface) che è possibile riprodurre per creare un'immagine o un testo desiderato.

## <a name="syntax"></a>Sintassi

```
class CMetaFileDC : public CDC
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMetaFileDC:: CMetaFileDC](#cmetafiledc)|Costruisce un oggetto `CMetaFileDC`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMetaFileDC:: Close](#close)|Chiude il contesto di dispositivo e crea un handle del metafile.|
|[CMetaFileDC:: CloseEnhanced](#closeenhanced)|Chiude un contesto di dispositivo Enhanced Metafile e crea un handle di metafile avanzato.|
|[CMetaFileDC:: create](#create)|Crea il contesto di dispositivo metafile Windows e lo connette all' `CMetaFileDC` oggetto.|
|[CMetaFileDC:: CreateEnhanced](#createenhanced)|Crea un contesto di dispositivo metafile per un metafile in formato avanzato.|

## <a name="remarks"></a>Commenti

Per implementare un metafile di Windows, creare prima un `CMetaFileDC` oggetto. Richiamare il `CMetaFileDC` costruttore, quindi chiamare la funzione membro [create](#create) , che crea un contesto di dispositivo metafile Windows e lo collega all' `CMetaFileDC` oggetto.

Inviare quindi all' `CMetaFileDC` oggetto la sequenza di comandi GDI CDC che si intende riprodurre. È possibile utilizzare solo i comandi GDI che creano output, ad esempio `MoveTo` e `LineTo` .

Dopo aver inviato i comandi desiderati al metafile, chiamare la `Close` funzione membro, che chiude i contesti di dispositivo metafile e restituisce un handle del metafile. Quindi eliminare l' `CMetaFileDC` oggetto.

[CDC::P laymetafile](../../mfc/reference/cdc-class.md#playmetafile) può quindi utilizzare l'handle del metafile per riprodurre ripetutamente il metafile. Il metafile può anche essere modificato da funzioni di Windows, ad esempio [CopyMetaFile](/windows/win32/api/wingdi/nf-wingdi-copymetafilew), che copia un metafile su disco.

Quando il metafile non è più necessario, eliminarlo dalla memoria con la funzione [DeleteMetaFile](/windows/win32/api/wingdi/nf-wingdi-deletemetafile) di Windows.

È anche possibile implementare l' `CMetaFileDC` oggetto in modo che sia in grado di gestire sia le chiamate di output sia le chiamate GDI degli attributi, ad esempio `GetTextExtent` . Un metafile di questo tipo è più flessibile e può riutilizzare più facilmente il codice GDI generale, che spesso è costituito da una combinazione di chiamate di output e di attributo. La `CMetaFileDC` classe eredita due contesti di dispositivo, `m_hDC` e `m_hAttribDC` , da CDC. Il `m_hDC` contesto di dispositivo gestisce tutte le chiamate di output GDI [CDC](../../mfc/reference/cdc-class.md) e il `m_hAttribDC` contesto di dispositivo gestisce tutte le chiamate agli attributi GDI CDC. In genere, questi due contesti di dispositivo fanno riferimento allo stesso dispositivo. Nel caso di `CMetaFileDC` , il controller di dominio dell'attributo viene impostato su null per impostazione predefinita.

Creare un secondo contesto di dispositivo che punti alla schermata, una stampante o un dispositivo diverso da un metafile, quindi chiamare la `SetAttribDC` funzione membro per associare il nuovo contesto di dispositivo a `m_hAttribDC` . Le chiamate GDI per le informazioni verranno ora indirizzate al nuovo `m_hAttribDC` . Le chiamate GDI di output passeranno a `m_hDC` , che rappresenta il metafile.

Per altre informazioni su `CMetaFileDC` , vedere [contesti di dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CMetaFileDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

## <a name="cmetafiledcclose"></a><a name="close"></a> CMetaFileDC:: Close

Chiude il contesto di dispositivo metafile e crea un handle del metafile di Windows che può essere utilizzato per riprodurre il metafile utilizzando la funzione membro [CDC::P laymetafile](../../mfc/reference/cdc-class.md#playmetafile) .

```
HMETAFILE Close();
```

### <a name="return-value"></a>Valore restituito

HMETAFILE valido se la funzione ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

L'handle del metafile di Windows può essere utilizzato anche per modificare il metafile con funzioni di Windows, ad esempio [CopyMetaFile](/windows/win32/api/wingdi/nf-wingdi-copymetafilew).

Eliminare il metafile dopo l'uso chiamando la funzione [DeleteMetaFile](/windows/win32/api/wingdi/nf-wingdi-deletemetafile) di Windows.

## <a name="cmetafiledccloseenhanced"></a><a name="closeenhanced"></a> CMetaFileDC:: CloseEnhanced

Chiude un contesto di dispositivo Enhanced Metafile e restituisce un handle che identifica un metafile in formato avanzato.

```
HENHMETAFILE CloseEnhanced();
```

### <a name="return-value"></a>Valore restituito

Handle di un metafile avanzato, se ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Un'applicazione può usare l'handle Enhanced Metafile restituito da questa funzione per eseguire le attività seguenti:

- Visualizzare un'immagine archiviata in un metafile avanzato

- Creazione di copie del metafile avanzato

- Enumerare, modificare o copiare singoli record nel metafile avanzato

- Recuperare una descrizione facoltativa del contenuto del metafile dall'intestazione Enhanced-Metafile

- Recuperare una copia dell'intestazione Enhanced-Metafile

- Recuperare una copia binaria del metafile avanzato

- Enumerare i colori nella tavolozza facoltativa

- Convertire un metafile in formato avanzato in un metafile in formato Windows

Quando l'applicazione non necessita più dell'handle di metafile migliorato, deve rilasciare l'handle chiamando la funzione Win32 `DeleteEnhMetaFile` .

## <a name="cmetafiledccmetafiledc"></a><a name="cmetafiledc"></a> CMetaFileDC:: CMetaFileDC

Costruire un `CMetaFileDC` oggetto in due passaggi.

```
CMetaFileDC();
```

### <a name="remarks"></a>Commenti

Chiamare prima di tutto, `CMetaFileDC` quindi chiamare `Create` , che crea il contesto di dispositivo metafile Windows e lo collega all' `CMetaFileDC` oggetto.

## <a name="cmetafiledccreate"></a><a name="create"></a> CMetaFileDC:: create

Costruire un `CMetaFileDC` oggetto in due passaggi.

```
BOOL Create(LPCTSTR lpszFilename = NULL);
```

### <a name="parameters"></a>Parametri

*lpszFilename*<br/>
Punta a una stringa di caratteri con terminazione null. Specifica il nome file del metafile da creare. Se *lpszFileName* è null, viene creato un nuovo metafile in memoria.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare innanzitutto il costruttore `CMetaFileDC` , quindi chiamare `Create` , che crea il contesto di dispositivo metafile Windows e lo collega all' `CMetaFileDC` oggetto.

## <a name="cmetafiledccreateenhanced"></a><a name="createenhanced"></a> CMetaFileDC:: CreateEnhanced

Crea un contesto di dispositivo per un metafile in formato avanzato.

```
BOOL CreateEnhanced(
    CDC* pDCRef,
    LPCTSTR lpszFileName,
    LPCRECT lpBounds,
    LPCTSTR lpszDescription);
```

### <a name="parameters"></a>Parametri

*pDCRef*<br/>
Identifica un dispositivo di riferimento per il metafile avanzato.

*lpszFileName*<br/>
Punta a una stringa di caratteri con terminazione null. Specifica il nome file per il metafile migliorato da creare. Se questo parametro è NULL, il metafile avanzato è basato sulla memoria e il relativo contenuto viene perso quando l'oggetto viene eliminato definitivamente o quando `DeleteEnhMetaFile` viene chiamata la funzione Win32.

*lpBounds*<br/>
Punta a una struttura di dati [Rect](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che specifica le dimensioni in unità HIMETRIC (in incrementi di .01-mm) dell'immagine da archiviare nel metafile avanzato.

*lpszDescription*<br/>
Punta a una stringa con terminazione zero che specifica il nome dell'applicazione che ha creato l'immagine, nonché il titolo dell'immagine.

### <a name="return-value"></a>Valore restituito

Handle del contesto di dispositivo per il metafile avanzato, se ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Questo controller di dominio può essere usato per archiviare un'immagine indipendente dal dispositivo.

Windows usa il dispositivo di riferimento identificato dal parametro *pDCRef* per registrare la risoluzione e le unità del dispositivo in cui è stata originariamente visualizzata un'immagine. Se il parametro *pDCRef* è null, usa il dispositivo di visualizzazione corrente come riferimento.

I membri Left e top della `RECT` struttura di dati a cui punta il parametro *lpBounds* devono essere rispettivamente inferiori ai membri Right e Bottom. I punti lungo i bordi del rettangolo sono inclusi nell'immagine. Se *lpBounds* è null, Graphics Device Interface (GDI) calcola le dimensioni del rettangolo più piccolo che può racchiudere l'immagine disegnata dall'applicazione. Laddove possibile, è necessario specificare il parametro *lpBounds* .

La stringa a cui punta il parametro *lpszDescription* deve contenere un carattere null tra il nome dell'applicazione e il nome dell'immagine e deve terminare con due caratteri null, ad esempio "XYZ graphics Editor\0Bald Eagle\0\0", dove \ 0 rappresenta il carattere null. Se *lpszDescription* è null, non è presente alcuna voce corrispondente nell'intestazione Enhanced-Metafile.

Le applicazioni usano il controller di dominio creato da questa funzione per archiviare un'immagine grafica in un metafile avanzato. L'handle che identifica il controller di dominio può essere passato a qualsiasi funzione GDI.

Quando un'applicazione archivia un'immagine in un metafile migliorato, può visualizzare l'immagine in qualsiasi dispositivo di output chiamando la `CDC::PlayMetaFile` funzione. Quando si visualizza l'immagine, Windows usa il rettangolo a cui punta il parametro *lpBounds* e i dati di risoluzione dal dispositivo di riferimento per posizionare e ridimensionare l'immagine. Il contesto di dispositivo restituito da questa funzione contiene gli stessi attributi predefiniti associati a qualsiasi nuovo controller di dominio.

Le applicazioni devono utilizzare la `GetWinMetaFileBits` funzione Win32 per convertire un metafile migliorato nel formato di metafile Windows precedente.

Il nome file per il metafile migliorato deve usare. Estensione EMF.

## <a name="see-also"></a>Vedi anche

[CDC (classe)](../../mfc/reference/cdc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
