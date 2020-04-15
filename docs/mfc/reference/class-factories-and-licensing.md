---
title: Class factory e licenze
ms.date: 11/04/2016
helpviewer_keywords:
- class factories [MFC], and licensing
ms.assetid: 53c4856a-4062-46db-9f69-dd4339f746b3
ms.openlocfilehash: e3fed6520cdbe0fd964e4e80e7c9ed9b78296d16
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372301"
---
# <a name="class-factories-and-licensing"></a>Class factory e licenze

Per creare un'istanza del controllo OLE, un'applicazione contenitore chiama una funzione membro della class factory del controllo. Poiché il controllo è un oggetto OLE effettivo, la class factory è responsabile della creazione di istanze del controllo. Ogni classe di controllo OLE deve avere una class factory.

Un'altra caratteristica importante dei controlli OLE è la loro capacità di applicare una licenza. ControlWizard consente di incorporare le licenze durante la creazione del progetto di controllo. Per ulteriori informazioni sulle licenze dei controlli, vedere l'articolo [Controlli ActiveX: gestione delle licenze di un controllo ActiveX](../../mfc/mfc-activex-controls-licensing-an-activex-control.md).

Nella tabella seguente sono elencate diverse macro e funzioni utilizzate per dichiarare e implementare la class factory del controllo e per la licenza del controllo.

### <a name="class-factories-and-licensing"></a>Class factory e licenze

|||
|-|-|
|[DECLARE_OLECREATE_EX](#declare_olecreate_ex)|Dichiara la class factory per un controllo OLE o una pagina delle proprietà.|
|[IMPLEMENT_OLECREATE_EX](#implement_olecreate_ex)|Implementa la funzione `GetClassID` del controllo e dichiara un'istanza della class factory.|
|[BEGIN_OLEFACTORY](#begin_olefactory)|Avvia la dichiarazione di tutte le funzioni di licenza.|
|[END_OLEFACTORY](#end_olefactory)|Termina la dichiarazione di tutte le funzioni di licenza.|
|[AfxVerifyLicFile](#afxverifylicfile)|Verifica se un controllo è concesso in licenza per l'utilizzo in un determinato computer.|

## <a name="declare_olecreate_ex"></a><a name="declare_olecreate_ex"></a>DECLARE_OLECREATE_EX

Dichiara una class factory `GetClassID` e la funzione membro della classe del controllo.

```
DECLARE_OLECREATE_EX(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro nel file di intestazione della classe del controllo per un controllo che non supporta la gestione delle licenze.

Si noti che questa macro ha lo stesso scopo dell'esempio di codice seguente:Note that this macro has the same purpose as the following code sample:

[!code-cpp[NVC_MFCAxCtl#14](../../mfc/reference/codesnippet/cpp/class-factories-and-licensing_1.h)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="implement_olecreate_ex"></a><a name="implement_olecreate_ex"></a>IMPLEMENT_OLECREATE_EX

Implementa la class factory del controllo e la funzione membro [GetClassID](../../mfc/reference/colecontrol-class.md#getclassid) della classe del controllo.

```
IMPLEMENT_OLECREATE_EX(
   class_name,
    external_name,
    l,
    w1,
    w2,
    b1,
    b2,
    b3,
    b4,
    b5,
    b6,
    b7,
    b8)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe della pagina delle proprietà del controllo.

*external_name*<br/>
Nome dell'oggetto esposto alle applicazioni.

*l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8*<br/>
Componenti del CLSID della classe. Per ulteriori informazioni su questi parametri, vedere le osservazioni per [IMPLEMENT_OLECREATE](run-time-object-model-services.md#implement_olecreate).

### <a name="remarks"></a>Osservazioni

Questa macro deve essere visualizzata nel file di implementazione per qualsiasi classe di controllo che utilizza la macro DECLARE_OLECREATE_EX o le macro BEGIN_OLEFACTORY e END_OLEFACTORY. Il nome esterno è l'identificatore del controllo OLE esposto ad altre applicazioni. I contenitori usano questo nome per richiedere un oggetto di questa classe di controllo.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="begin_olefactory"></a><a name="begin_olefactory"></a>BEGIN_OLEFACTORY

Avvia la dichiarazione della class factory nel file di intestazione della classe del controllo.

```
BEGIN_OLEFACTORY(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Specifica il nome della classe di controlli di cui si trova la class factory.

### <a name="remarks"></a>Osservazioni

Le dichiarazioni delle funzioni di licenza di class factory devono iniziare immediatamente dopo BEGIN_OLEFACTORY.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="end_olefactory"></a><a name="end_olefactory"></a>END_OLEFACTORY

Termina la dichiarazione della class factory del controllo.

```
END_OLEFACTORY(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe di controlli di cui si tratta di una class factory.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="afxverifylicfile"></a><a name="afxverifylicfile"></a>AfxVerifyLicFile

Chiamare questa funzione per verificare `pszLicFileName` che il file di licenza denominato da sia valido per il controllo OLE.

```
BOOL AFXAPI AfxVerifyLicFile(
    HINSTANCE  hInstance,
    LPCTSTR  pszLicFileName,
    LPOLESTR  pszLicFileContents,
    UINT cch = -1);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle di istanza della DLL associata al controllo concesso in licenza.

*pszLicFileName (nome di file pszLic)*<br/>
Punta a una stringa di caratteri con terminazione null contenente il nome del file di licenza.

*pszLicFileContents (Contenuto di pszLicFile)*<br/>
Punta a una sequenza di byte che deve corrispondere alla sequenza trovata all'inizio del file di licenza.

*Cch*<br/>
Numero di caratteri in *pszLicFileContents*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il file di licenza esiste e inizia con la sequenza di caratteri in *pszLicFileContents*; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *cch* è -1, questa funzione utilizza:

[!code-cpp[NVC_MFC_Utilities#36](../../mfc/codesnippet/cpp/class-factories-and-licensing_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
