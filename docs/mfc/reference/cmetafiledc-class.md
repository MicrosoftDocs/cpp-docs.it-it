---
title: CMetaFileDC (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMetaFileDC
- AFXEXT/CMetaFileDC
- AFXEXT/CMetaFileDC::CMetaFileDC
- AFXEXT/CMetaFileDC::Close
- AFXEXT/CMetaFileDC::CloseEnhanced
- AFXEXT/CMetaFileDC::Create
- AFXEXT/CMetaFileDC::CreateEnhanced
dev_langs:
- C++
helpviewer_keywords:
- CMetaFileDC [MFC], CMetaFileDC
- CMetaFileDC [MFC], Close
- CMetaFileDC [MFC], CloseEnhanced
- CMetaFileDC [MFC], Create
- CMetaFileDC [MFC], CreateEnhanced
ms.assetid: ffce60fa-4181-4d46-9832-25e46fad4db4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6a588a848e7964a70f47d4cf29a5f5ef2741881d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33368154"
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
|[CMetaFileDC::CloseEnhanced](#closeenhanced)|Chiude un contesto di dispositivo metafile avanzato e crea un handle enhanced metafile.|  
|[CMetaFileDC::Create](#create)|Crea il contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.|  
|[CMetaFileDC::CreateEnhanced](#createenhanced)|Crea un contesto di dispositivo metafile per un metafile formato avanzato.|  
  
## <a name="remarks"></a>Note  
 Per implementare un metafile di Windows, creare innanzitutto un `CMetaFileDC` oggetto. Richiamare il `CMetaFileDC` costruttore, quindi chiamare il [crea](#create) funzione membro, che crea un contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.  
  
 Quindi inviare il `CMetaFileDC` oggetto della sequenza di `CDC` GDI i comandi che si prevede che per la riproduzione. Solo i comandi GDI creazione output, ad esempio `MoveTo` e `LineTo`, può essere utilizzato.  
  
 Dopo aver inviato i comandi desiderati al metafile, chiamare il **Chiudi** funzione membro, che chiude i contesti di dispositivo metafile e restituisce un handle del metafile. Eliminare quindi la `CMetaFileDC` oggetto.  
  
 [CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) quindi possibile utilizzare l'handle del metafile per riprodurre il metafile più volte. Metafile può anche essere modificato dalle funzioni di Windows, ad esempio [CopyMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183480), che consente di copiare un metafile su disco.  
  
 Quando il metafile non è più necessario, eliminarlo dalla memoria con il [DeleteMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183537) funzione di Windows.  
  
 È anche possibile implementare il `CMetaFileDC` dell'oggetto in modo da poter gestire entrambe le chiamate di output e attributo chiamate GDI, ad esempio `GetTextExtent`. Un metafile di questo tipo è più flessibile e più facilmente riutilizzare codice GDI generale, che spesso è costituito da una combinazione di chiamate di output e di attributo. Il `CMetaFileDC` classe eredita due contesti di dispositivo, `m_hDC` e `m_hAttribDC`, da `CDC`. Il `m_hDC` contesto di dispositivo gestisce tutto [CDC](../../mfc/reference/cdc-class.md) GDI output di chiamate e `m_hAttribDC` contesto di dispositivo gestisce tutto `CDC` GDI attributo chiama. In genere, questi contesti di due dispositivo fare riferimento allo stesso dispositivo. In caso di `CMetaFileDC`, l'attributo di controller di dominio è impostato su **NULL** per impostazione predefinita.  
  
 Creare un secondo contesto di dispositivo che punta a una schermata, una stampante o un dispositivo diverso da un metafile, quindi chiamarla il `SetAttribDC` funzione membro per associare il nuovo contesto del dispositivo con `m_hAttribDC`. Verranno ora indirizzate chiamate GDI per informazioni sul nuovo `m_hAttribDC`. Chiamate GDI di output verranno inviata a `m_hDC`, che rappresenta il metafile.  
  
 Per ulteriori informazioni su `CMetaFileDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CMetaFileDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="close"></a>  CMetaFileDC::Close  
 Chiude il contesto di dispositivo metafile e crea un handle metafile di Windows che può essere utilizzato per riprodurre il metafile tramite il [CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) funzione membro.  
  
```  
HMETAFILE Close();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valido **HMETAFILE** se la funzione ha esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Handle metafile di Windows possa essere utilizzato anche per modificare il metafile con funzioni di Windows, ad esempio [CopyMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183480).  
  
 Eliminare il metafile dopo l'utilizzo tramite la chiamata Windows [DeleteMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183537) (funzione).  
  
##  <a name="closeenhanced"></a>  CMetaFileDC::CloseEnhanced  
 Chiude un contesto di dispositivo metafile avanzato e restituisce un handle che identifica un metafile formato avanzato.  
  
```  
HENHMETAFILE CloseEnhanced();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle di un metafile avanzato, se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Un'applicazione può utilizzare l'handle enhanced metafile restituito da questa funzione per eseguire le attività seguenti:  
  
-   Visualizzare un'immagine archiviata in un metafile avanzato  
  
-   Creare copie del metafile avanzato  
  
-   Enumerare, modificare o copiare singoli record del metafile avanzato  
  
-   Recuperare una descrizione facoltativa del contenuto del metafile dall'intestazione del metafile avanzato  
  
-   Recuperare una copia dell'intestazione enhanced metafile  
  
-   Recuperare una copia binaria del metafile avanzato  
  
-   Enumerare i colori nella tavolozza facoltativa  
  
-   Convertire un metafile formato avanzato in un metafile di Windows in formato  
  
 Quando l'applicazione non richiede più l'handle dell'enhanced metafile, è necessario rilasciare l'handle chiamando Win32 **DeleteEnhMetaFile** (funzione).  
  
##  <a name="cmetafiledc"></a>  CMetaFileDC::CMetaFileDC  
 Costruire un `CMetaFileDC` oggetto in due passaggi.  
  
```  
CMetaFileDC();
```  
  
### <a name="remarks"></a>Note  
 In primo luogo, chiamare `CMetaFileDC`, quindi chiamare **crea**, che crea il contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.  
  
##  <a name="create"></a>  CMetaFileDC::Create  
 Costruire un `CMetaFileDC` oggetto in due passaggi.  
  
```  
BOOL Create(LPCTSTR lpszFilename = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszFilename*  
 Punta a una stringa di caratteri con terminazione null. Specifica il nome del file del metafile per creare. Se *lpszFilename* è **NULL**, viene creato un nuovo metafile in memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 In primo luogo, chiamare il costruttore `CMetaFileDC`, quindi chiamare **crea**, che crea il contesto di dispositivo metafile di Windows e lo collega al `CMetaFileDC` oggetto.  
  
##  <a name="createenhanced"></a>  CMetaFileDC::CreateEnhanced  
 Crea un contesto di dispositivo per un metafile formato avanzato.  
  
```  
BOOL CreateEnhanced(
    CDC* pDCRef,  
    LPCTSTR lpszFileName,  
    LPCRECT lpBounds,  
    LPCTSTR lpszDescription);
```  
  
### <a name="parameters"></a>Parametri  
 `pDCRef`  
 Identifica un dispositivo di riferimento per i metafile avanzato.  
  
 `lpszFileName`  
 Punta a una stringa di caratteri con terminazione null. Specifica il nome del file per il metafile avanzato da creare. Se questo parametro è **NULL**, metafile avanzato è basata sulla memoria e il relativo contenuto perdita quando l'oggetto viene eliminato o Win32 **DeleteEnhMetaFile** funzione viene chiamata.  
  
 `lpBounds`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura di data o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le dimensioni in **HIMETRIC** unità (in incrementi di.01 millimetro) dell'immagine da archiviare di metafile avanzato.  
  
 `lpszDescription`  
 Punta a una stringa con terminazione zero che specifica il nome dell'applicazione che ha creato l'immagine, come titolo dell'immagine.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle del contesto di dispositivo per il metafile avanzato, se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Il controller di dominio può essere utilizzato per archiviare un'immagine indipendenti dal dispositivo.  
  
 Windows Usa il dispositivo di riferimento identificato le `pDCRef` parametro per registrare l'unità del dispositivo in cui un'immagine originariamente visualizzato e la risoluzione. Se il `pDCRef` parametro **NULL**, Usa il dispositivo di visualizzazione corrente per riferimento.  
  
 I membri superiore e sinistro del `RECT` struttura di dati a cui punta il `lpBounds` parametro deve essere minore di membri inferiore e destro, rispettivamente. Punti lungo i bordi del rettangolo vengono inclusi nell'immagine. Se `lpBounds` è **NULL**, la graphics device interface (GDI) calcola le dimensioni del rettangolo più piccolo che è possibile includere nell'immagine disegnata dall'applicazione. Il `lpBounds` parametro deve essere specificato se possibile.  
  
 La stringa a cui punta il `lpszDescription` parametro deve contenere un carattere null tra il nome dell'applicazione e il nome dell'immagine e deve terminare con due caratteri null, ad esempio, "XYZ grafica Editor\0Bald Eagle\0\0," dove \0 rappresenta il valore null carattere. Se `lpszDescription` è **NULL**, è presente alcuna voce corrispondente nell'intestazione del metafile avanzato.  
  
 Le applicazioni utilizzano il controller di dominio creato da questa funzione per archiviare un'immagine grafica in un metafile avanzato. L'handle che identifica il controller di dominio può essere passato a qualsiasi funzione GDI.  
  
 Dopo che un'applicazione memorizza un'immagine in un metafile avanzato, può visualizzare l'immagine su qualsiasi dispositivo di output chiamando il `CDC::PlayMetaFile` (funzione). Quando si visualizza l'immagine, Windows Usa il rettangolo a cui fa riferimento il `lpBounds` parametro e i dati di risoluzione da dispositivo di riferimento per posizionare e ridimensionare l'immagine. Il contesto di dispositivo restituito da questa funzione contiene gli stessi attributi predefinito associati a qualsiasi nuovo controller di dominio.  
  
 Le applicazioni devono utilizzare Win32 **GetWinMetaFileBits** funzione per convertire un enhanced metafile in formato metafile di Windows precedente.  
  
 Il nome del file per metafile avanzato deve utilizzare il. Estensione EMF.  
  
## <a name="see-also"></a>Vedere anche  
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



