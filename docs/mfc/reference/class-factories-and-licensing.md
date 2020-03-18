---
title: Class factory e licenze
ms.date: 11/04/2016
helpviewer_keywords:
- class factories [MFC], and licensing
ms.assetid: 53c4856a-4062-46db-9f69-dd4339f746b3
ms.openlocfilehash: 18d86122e57af056a50a4d94bac89d65a7b71c7d
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420442"
---
# <a name="class-factories-and-licensing"></a>Class factory e licenze

Per creare un'istanza del controllo OLE, un'applicazione contenitore chiama una funzione membro dell'class factory del controllo. Poiché il controllo è un oggetto OLE effettivo, il class factory è responsabile della creazione di istanze del controllo. Ogni classe del controllo OLE deve avere un class factory.

Un'altra funzionalità importante dei controlli OLE è la possibilità di applicare una licenza. ControlWizard consente di incorporare le licenze durante la creazione del progetto di controllo. Per ulteriori informazioni sulle licenze di controllo, vedere l'articolo [controlli ActiveX: gestione licenze di un controllo ActiveX](../../mfc/mfc-activex-controls-licensing-an-activex-control.md).

La tabella seguente elenca diverse macro e funzioni usate per dichiarare e implementare il class factory del controllo e la licenza del controllo.

### <a name="class-factories-and-licensing"></a>Class factory e licenze

|||
|-|-|
|[DECLARE_OLECREATE_EX](#declare_olecreate_ex)|Dichiara l'class factory per una pagina di controllo o di proprietà OLE.|
|[IMPLEMENT_OLECREATE_EX](#implement_olecreate_ex)|Implementa la funzione `GetClassID` del controllo e dichiara un'istanza del class factory.|
|[BEGIN_OLEFACTORY](#begin_olefactory)|Inizia la dichiarazione di tutte le funzioni di gestione licenze.|
|[END_OLEFACTORY](#end_olefactory)|Termina la dichiarazione di tutte le funzioni di gestione licenze.|
|[AfxVerifyLicFile](#afxverifylicfile)|Verifica se un controllo è concesso in licenza per l'utilizzo in un determinato computer.|

##  <a name="declare_olecreate_ex"></a>DECLARE_OLECREATE_EX

Dichiara un class factory e la funzione membro `GetClassID` della classe del controllo.

```
DECLARE_OLECREATE_EX(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo.

### <a name="remarks"></a>Osservazioni

Usare questa macro nel file di intestazione della classe del controllo per un controllo che non supporta la gestione delle licenze.

Si noti che questa macro svolge lo stesso scopo dell'esempio di codice seguente:

[!code-cpp[NVC_MFCAxCtl#14](../../mfc/reference/codesnippet/cpp/class-factories-and-licensing_1.h)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="implement_olecreate_ex"></a>IMPLEMENT_OLECREATE_EX

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

*class_name*<br/>
Nome della classe della pagina delle proprietà del controllo.

*external_name*<br/>
Nome dell'oggetto esposto alle applicazioni.

*l, W1, W2, B1, B2, B3, B4, B5, B6, B7, B8*<br/>
Componenti del CLSID della classe. Per ulteriori informazioni su questi parametri, vedere la sezione Osservazioni per [IMPLEMENT_OLECREATE](run-time-object-model-services.md#implement_olecreate).

### <a name="remarks"></a>Osservazioni

Questa macro deve essere visualizzata nel file di implementazione per qualsiasi classe del controllo che usa la macro DECLARE_OLECREATE_EX o le macro BEGIN_OLEFACTORY e END_OLEFACTORY. Il nome esterno è l'identificatore del controllo OLE esposto ad altre applicazioni. I contenitori usano questo nome per richiedere un oggetto di questa classe del controllo.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="begin_olefactory"></a>BEGIN_OLEFACTORY

Inizia la dichiarazione del class factory nel file di intestazione della classe del controllo.

```
BEGIN_OLEFACTORY(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Specifica il nome della classe del controllo il cui class factory è.

### <a name="remarks"></a>Osservazioni

Le dichiarazioni di class factory funzioni di gestione licenze devono iniziare immediatamente dopo l'BEGIN_OLEFACTORY.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="end_olefactory"></a>END_OLEFACTORY

Termina la dichiarazione del class factory del controllo.

```
END_OLEFACTORY(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo il cui class factory è.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="afxverifylicfile"></a>AfxVerifyLicFile

Chiamare questa funzione per verificare che il file di licenza denominato da `pszLicFileName` sia valido per il controllo OLE.

```
BOOL AFXAPI AfxVerifyLicFile(
    HINSTANCE  hInstance,
    LPCTSTR  pszLicFileName,
    LPOLESTR  pszLicFileContents,
    UINT cch = -1);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle dell'istanza della DLL associata al controllo concesso in licenza.

*pszLicFileName*<br/>
Punta a una stringa di caratteri con terminazione null contenente il nome file della licenza.

*pszLicFileContents*<br/>
Punta a una sequenza di byte che deve corrispondere alla sequenza trovata all'inizio del file di licenza.

*CCH*<br/>
Numero di caratteri in *pszLicFileContents*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il file di licenza esiste e inizia con la sequenza di caratteri in *pszLicFileContents*; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se *è* -1, questa funzione USA:

[!code-cpp[NVC_MFC_Utilities#36](../../mfc/codesnippet/cpp/class-factories-and-licensing_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

## <a name="see-also"></a>Vedere anche

[Macro e globali](../../mfc/reference/mfc-macros-and-globals.md)
