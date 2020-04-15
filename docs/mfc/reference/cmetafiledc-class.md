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
ms.openlocfilehash: 0919dacfd758df39064c5381690e9e23a029fcd1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369955"
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
|[CMetaFileDC::Chiudi](#close)|Chiude il contesto di dispositivo e crea un handle di metafile.|
|[CMetaFileDC::CloseEnhanced](#closeenhanced)|Chiude un contesto di dispositivo enhanced-metafile e crea un handle enhanced-metafile.|
|[CMetaFileDC::Creare](#create)|Crea il contesto di dispositivo metafile `CMetaFileDC` di Windows e lo associa all'oggetto.|
|[CMetaFileDC::CreateEnhanced](#createenhanced)|Crea un contesto di dispositivo metafile per un metafile in formato avanzato.|

## <a name="remarks"></a>Osservazioni

Per implementare un metafile `CMetaFileDC` di Windows, creare innanzitutto un oggetto. Richiamare `CMetaFileDC` il costruttore, quindi chiamare la funzione membro [Create,](#create) che crea `CMetaFileDC` un contesto di periferica metafile di Windows e lo associa all'oggetto.

Inviare `CMetaFileDC` quindi all'oggetto la sequenza dei comandi GDI CDC che si desidera riprodurre. È possibile utilizzare solo i comandi `MoveTo` `LineTo`GDI che creano output, ad esempio e .

Dopo aver inviato i comandi desiderati al `Close` metafile, chiamare la funzione membro, che chiude i contesti di periferica metafile e restituisce un handle di metafile. Quindi eliminare `CMetaFileDC` l'oggetto.

[CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) può quindi utilizzare l'handle del metafile per riprodurre ripetutamente il metafile. Il metafile può anche essere modificato da funzioni di Windows come [CopyMetaFile](/windows/win32/api/wingdi/nf-wingdi-copymetafilew), che copia un metafile su disco.

Quando il metafile non è più necessario, eliminarlo dalla memoria con la funzione windows [DeleteMetaFile.](/windows/win32/api/wingdi/nf-wingdi-deletemetafile)

È inoltre possibile `CMetaFileDC` implementare l'oggetto in modo che sia `GetTextExtent`in grado di gestire le chiamate di output e le chiamate GDI degli attributi, ad esempio . Tale metafile è più flessibile e può riutilizzare più facilmente il codice GDI generale, che spesso è costituito da una combinazione di chiamate di output e attributo. La `CMetaFileDC` classe eredita due contesti di periferica `m_hDC` e `m_hAttribDC`, da CDC. Il `m_hDC` contesto di dispositivo gestisce tutte `m_hAttribDC` le chiamate di output [GDI CDC](../../mfc/reference/cdc-class.md) e il contesto di dispositivo gestisce tutte le chiamate di attributo GDI CDC. In genere, questi due contesti di dispositivo fanno riferimento allo stesso dispositivo. Nel caso `CMetaFileDC`di , l'attributo DC è impostato su NULL per impostazione predefinita.

Creare un secondo contesto di periferica che punti allo schermo, a una `SetAttribDC` stampante o a un `m_hAttribDC`dispositivo diverso da un metafile, quindi chiamare la funzione membro per associare il nuovo contesto di periferica a . Le richieste di informazioni GDI verranno ora indirizzate al nuovo `m_hAttribDC`. Le chiamate GDI `m_hDC`di output verranno richiamate a , che rappresenta il metafile.

Per ulteriori `CMetaFileDC`informazioni su , vedere [Contesti di periferica](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CMetaFileDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="cmetafiledcclose"></a><a name="close"></a>CMetaFileDC::Chiudi

Chiude il contesto di periferica metafile e crea un handle di metafile di Windows che può essere utilizzato per riprodurre il metafile utilizzando la funzione membro [CDC::PlayMetaFile.](../../mfc/reference/cdc-class.md#playmetafile)

```
HMETAFILE Close();
```

### <a name="return-value"></a>Valore restituito

HMETAFILE valido se la funzione ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

L'handle metafile di Windows può essere utilizzato anche per modificare il metafile con funzioni di Windows come [CopyMetaFile](/windows/win32/api/wingdi/nf-wingdi-copymetafilew).

Eliminare il metafile dopo l'utilizzo chiamando la funzione [DeleteMetaFile](/windows/win32/api/wingdi/nf-wingdi-deletemetafile) di Windows.

## <a name="cmetafiledccloseenhanced"></a><a name="closeenhanced"></a>CMetaFileDC::CloseEnhanced

Chiude un contesto di dispositivo enhanced-metafile e restituisce un handle che identifica un metafile in formato avanzato.

```
HENHMETAFILE CloseEnhanced();
```

### <a name="return-value"></a>Valore restituito

Handle di un metafile avanzato, se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Un'applicazione può utilizzare l'handle enhanced-metafile restituito da questa funzione per eseguire le attività seguenti:An application can use the enhanced-metafile handle returned by this function to perform the following tasks:

- Visualizzare un'immagine memorizzata in un metafile avanzato

- Creare copie del metafile avanzato

- Enumerare, modificare o copiare singoli record nel metafile avanzato

- Recuperare una descrizione facoltativa del contenuto del metafile dall'intestazione enhanced-metafile

- Recuperare una copia dell'intestazione enhanced-metafile

- Recuperare una copia binaria del metafile avanzato

- Enumerare i colori nella tavolozza facoltativa

- Convertire un metafile in formato avanzato in un metafile in formato Windows

Quando l'applicazione non ha più bisogno dell'handle del metafile avanzato, deve rilasciare l'handle chiamando la funzione Win32. `DeleteEnhMetaFile`

## <a name="cmetafiledccmetafiledc"></a><a name="cmetafiledc"></a>CMetaFileDC::CMetaFileDC

Costruire `CMetaFileDC` un oggetto in due passaggi.

```
CMetaFileDC();
```

### <a name="remarks"></a>Osservazioni

Chiamare innanzitutto `CMetaFileDC`, `Create`quindi , che crea il contesto di `CMetaFileDC` periferica metafile di Windows e lo associa all'oggetto.

## <a name="cmetafiledccreate"></a><a name="create"></a>CMetaFileDC::Creare

Costruire `CMetaFileDC` un oggetto in due passaggi.

```
BOOL Create(LPCTSTR lpszFilename = NULL);
```

### <a name="parameters"></a>Parametri

*LpszNome utente*<br/>
Punta a una stringa di caratteri con terminazione null. Specifica il nome file del metafile da creare. Se *lpszFilename* è NULL, viene creato un nuovo metafile in memoria.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Chiamare innanzitutto `CMetaFileDC`il costruttore , quindi chiamare `Create`, che crea il `CMetaFileDC` contesto di periferica metafile di Windows e lo associa all'oggetto .

## <a name="cmetafiledccreateenhanced"></a><a name="createenhanced"></a>CMetaFileDC::CreateEnhanced

Crea un contesto di dispositivo per un metafile in formato avanzato.

```
BOOL CreateEnhanced(
    CDC* pDCRef,
    LPCTSTR lpszFileName,
    LPCRECT lpBounds,
    LPCTSTR lpszDescription);
```

### <a name="parameters"></a>Parametri

*pDCRef (in modo infe)*<br/>
Identifica un dispositivo di riferimento per il metafile avanzato.

*lpszNomefileName (nome file)*<br/>
Punta a una stringa di caratteri con terminazione null. Specifica il nome file per il metafile avanzato da creare. Se questo parametro è NULL, il metafile avanzato è basato sulla memoria e `DeleteEnhMetaFile` il relativo contenuto viene perso quando l'oggetto viene eliminato o quando viene chiamata la funzione Win32.

*lpBounds (prestiti lp)*<br/>
Punta a una struttura di dati [RECT](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che specifica le dimensioni in unità HIMETRIC (in incrementi di 0,01 millimetri) dell'immagine da archiviare nel metafile avanzato.

*lpszDescrizione*<br/>
Punta a una stringa con terminazione zero che specifica il nome dell'applicazione che ha creato l'immagine, nonché il titolo dell'immagine.

### <a name="return-value"></a>Valore restituito

Handle del contesto di dispositivo per il metafile avanzato, se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo controller di dominio può essere utilizzato per archiviare un'immagine indipendente dal dispositivo.

Windows utilizza il dispositivo di riferimento identificato dal parametro *pDCRef* per registrare la risoluzione e le unità del dispositivo in cui è apparsa originariamente un'immagine. Se il *pDCRef* parametro è NULL, viene utilizzato il dispositivo di visualizzazione corrente per riferimento.

I membri sinistro e `RECT` superiore della struttura di dati a cui fa riferimento il *lpBounds* parametro deve essere inferiore ai membri destro e inferiore, rispettivamente. I punti lungo i bordi del rettangolo sono inclusi nell'immagine. Se *lpBounds* è NULL, l'interfaccia gDI (Graphics Device Interface) calcola le dimensioni del rettangolo più piccolo che può racchiudere l'immagine disegnata dall'applicazione. Se possibile, deve essere fornito il parametro *lpBounds.*

La stringa a cui fa riferimento il parametro *lpszDescription* deve contenere un carattere null tra il nome dell'applicazione e il nome dell'immagine e deve essere terminata con due caratteri null, ad esempio , ad esempio, "XY" Graphics Editor , 0Bald Eagle, 0, dove il carattere null rappresenta . Se *lpszDescription* è NULL, non esiste alcuna voce corrispondente nell'intestazione enhanced-metafile.

Le applicazioni utilizzano il controller di dominio creato da questa funzione per archiviare un'immagine grafica in un metafile avanzato. L'handle che identifica questo controller di dominio può essere passato a qualsiasi funzione GDI.

Dopo che un'applicazione memorizza un'immagine in un metafile avanzato, `CDC::PlayMetaFile` può visualizzare l'immagine su qualsiasi dispositivo di output chiamando la funzione. Quando si visualizza l'immagine, Windows utilizza il rettangolo a cui fa riferimento il *lpBounds* parametro e i dati di risoluzione dal dispositivo di riferimento per posizionare e ridimensionare l'immagine. Il contesto di dispositivo restituito da questa funzione contiene gli stessi attributi predefiniti associati a qualsiasi nuovo controller di dominio.

Le applicazioni devono utilizzare `GetWinMetaFileBits` la funzione Win32 per convertire un metafile avanzato nel formato metafile di Windows precedente.

Il nome del file per il metafile avanzato deve utilizzare il file . estensione EMF.

## <a name="see-also"></a>Vedere anche

[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
