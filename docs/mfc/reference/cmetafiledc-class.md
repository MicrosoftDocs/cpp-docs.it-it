---
title: CMetaFileDC (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- CMetaFileDC class
- Windows metafiles [C++]
- metafiles, implementing
ms.assetid: ffce60fa-4181-4d46-9832-25e46fad4db4
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 4bff4d7601c4ffbc6fe5cbe73f5e057b79abf1e5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
|[CMetaFileDC::Close](#close)|Chiude il contesto di dispositivo e crea un handle metafile.|  
|[CMetaFileDC::CloseEnhanced](#closeenhanced)|Chiude un contesto di dispositivo metafile avanzati e crea un handle di metafile avanzati.|  
|[CMetaFileDC::Create](#create)|Crea il contesto di dispositivo metafile di Windows e lo collega a di `CMetaFileDC` oggetto.|  
|[CMetaFileDC::CreateEnhanced](#createenhanced)|Crea un contesto di dispositivo metafile per un formato enhanced metafile.|  
  
## <a name="remarks"></a>Note  
 Per implementare un metafile di Windows, creare innanzitutto un `CMetaFileDC` oggetto. Richiamare il `CMetaFileDC` costruttore, quindi chiamare il [crea](#create) funzione membro, che crea un contesto di dispositivo metafile di Windows e lo collega a di `CMetaFileDC` oggetto.  
  
 Quindi inviare il `CMetaFileDC` oggetto la sequenza di `CDC` GDI i comandi che si intendono per poter riprodurre. Solo i comandi GDI creare output, ad esempio `MoveTo` e `LineTo`, può essere utilizzato.  
  
 Dopo aver inviato i comandi desiderati al metafile, chiamare il **Chiudi** funzione membro, che chiude i contesti di dispositivo metafile e restituisce un handle metafile. Quindi eliminare il `CMetaFileDC` oggetto.  
  
 [CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) quindi possibile utilizzare l'handle del metafile per riprodurre ripetutamente il metafile. Metafile può anche essere modificato dalle funzioni di Windows, ad esempio [CopyMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183480), che consente di copiare un metafile su disco.  
  
 Quando il metafile non è più necessario, eliminarlo dalla memoria con la [DeleteMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183537) funzione di Windows.  
  
 È anche possibile implementare il `CMetaFileDC` dell'oggetto in modo da poter gestire entrambe le chiamate di output e attributo, ad esempio GDI richiama `GetTextExtent`. Un metafile di questo tipo è più flessibile e più facilmente riutilizzare codice GDI generale, spesso costituito da una combinazione di chiamate di output e di attributo. Il `CMetaFileDC` classe eredita due contesti di periferica, `m_hDC` e `m_hAttribDC`, da `CDC`. Il `m_hDC` contesto di dispositivo gestisce tutto [CDC](../../mfc/reference/cdc-class.md) GDI output chiamate e `m_hAttribDC` contesto di dispositivo gestisce tutto `CDC` GDI attributo chiama. In genere, questi contesti di due dispositivo fare riferimento allo stesso dispositivo. Nel caso di `CMetaFileDC`, controller di dominio l'attributo è impostato su **NULL** per impostazione predefinita.  
  
 Creare un secondo contesto di dispositivo che punti a schermo, una stampante o un dispositivo diverso da un metafile, quindi chiamare il `SetAttribDC` funzione membro per associare il nuovo contesto di dispositivo con `m_hAttribDC`. Verranno ora reindirizzate chiamate GDI per informazioni sul nuovo `m_hAttribDC`. Chiamate GDI output verranno inviata a `m_hDC`, che rappresenta il metafile.  
  
 Per ulteriori informazioni su `CMetaFileDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CMetaFileDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
##  <a name="close"></a>CMetaFileDC::Close  
 Chiude il contesto di dispositivo metafile e crea un handle di metafile di Windows che può essere utilizzato per riprodurre il metafile tramite il [CDC::PlayMetaFile](../../mfc/reference/cdc-class.md#playmetafile) funzione membro.  
  
```  
HMETAFILE Close();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valido **HMETAFILE** se la funzione ha esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 L'handle del metafile di Windows possa essere utilizzato anche per modificare metafile con funzioni di Windows, ad esempio [CopyMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183480).  
  
 Eliminare il metafile dopo l'uso chiamando Windows [DeleteMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183537) (funzione).  
  
##  <a name="closeenhanced"></a>CMetaFileDC::CloseEnhanced  
 Chiude un contesto di dispositivo metafile avanzati e restituisce un handle che identifica un metafile in formato avanzato.  
  
```  
HENHMETAFILE CloseEnhanced();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle di metafile avanzati, se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Un'applicazione può utilizzare l'handle di metafile avanzati restituito da questa funzione per eseguire le attività seguenti:  
  
-   Visualizzare un'immagine archiviata in un metafile avanzato  
  
-   Creare copie del metafile avanzato  
  
-   Enumerare, modificare o copiare singoli record del metafile avanzati  
  
-   Recuperare una descrizione facoltativa del contenuto del metafile dall'intestazione di metafile avanzati  
  
-   Recuperare una copia dell'intestazione di metafile avanzati  
  
-   Recuperare una copia binaria del metafile avanzato  
  
-   Enumerare i colori nella tavolozza facoltativa  
  
-   Convertire un metafile in formato avanzato in un metafile di Windows in formato  
  
 Quando l'applicazione non richiede più l'handle dell'enhanced metafile, è necessario rilasciare l'handle chiamando Win32 **DeleteEnhMetaFile** (funzione).  
  
##  <a name="cmetafiledc"></a>CMetaFileDC::CMetaFileDC  
 Costruire un `CMetaFileDC` oggetto in due passaggi.  
  
```  
CMetaFileDC();
```  
  
### <a name="remarks"></a>Note  
 In primo luogo, chiamare `CMetaFileDC`, quindi chiamare **crea**, che crea il contesto di dispositivo metafile di Windows e lo collega a di `CMetaFileDC` oggetto.  
  
##  <a name="create"></a>CMetaFileDC::Create  
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
 In primo luogo, chiamare il costruttore `CMetaFileDC`, quindi chiamare **crea**, che crea il contesto di dispositivo metafile di Windows e lo collega a di `CMetaFileDC` oggetto.  
  
##  <a name="createenhanced"></a>CMetaFileDC::CreateEnhanced  
 Crea un contesto di dispositivo per un formato enhanced metafile.  
  
```  
BOOL CreateEnhanced(
    CDC* pDCRef,  
    LPCTSTR lpszFileName,  
    LPCRECT lpBounds,  
    LPCTSTR lpszDescription);
```  
  
### <a name="parameters"></a>Parametri  
 `pDCRef`  
 Identifica un dispositivo di riferimento per i metafile avanzati.  
  
 `lpszFileName`  
 Punta a una stringa di caratteri con terminazione null. Specifica il nome del file per i metafile avanzati da creare. Se questo parametro è **NULL**, metafile avanzato è basata sulla memoria e il relativo contenuto perdito quando l'oggetto viene eliminato o Win32 **DeleteEnhMetaFile** viene chiamata la funzione.  
  
 `lpBounds`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura di data o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le dimensioni in **HIMETRIC** unità (con incrementi di.01 millimetro) dell'immagine da archiviare nel metafile avanzato.  
  
 `lpszDescription`  
 Punta a una stringa con terminazione zero che specifica il nome dell'applicazione che ha creato l'immagine, come titolo dell'immagine.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle del contesto di dispositivo per i metafile avanzati, se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo controller di dominio è utilizzabile per archiviare un'immagine indipendente dal dispositivo.  
  
 Windows utilizza il dispositivo di riferimento identificato le `pDCRef` parametro per registrare la risoluzione e l'unità del dispositivo in cui un'immagine originariamente visualizzato. Se il `pDCRef` parametro **NULL**, utilizza il dispositivo di visualizzazione corrente per riferimento.  
  
 I membri superiore e sinistro del `RECT` struttura di dati a cui punta il `lpBounds` parametro deve essere minore di membri inferiore e destro, rispettivamente. Punti lungo i bordi del rettangolo sono inclusi nell'immagine. Se `lpBounds` è **NULL**, la graphics device interface (GDI) calcola le dimensioni del rettangolo più piccolo che è possibile includere nell'immagine tracciata dall'applicazione. Il `lpBounds` parametro deve essere specificato se possibile.  
  
 La stringa a cui punta il `lpszDescription` parametro deve contenere un carattere null tra il nome dell'applicazione e il nome dell'immagine e deve terminare con due caratteri null, ad esempio, "XYZ grafica Editor\0Bald Eagle\0\0," dove \0 rappresenta il carattere null. Se `lpszDescription` è **NULL**, non è presente alcuna voce corrispondente nell'intestazione di metafile avanzati.  
  
 Le applicazioni utilizzano il controller di dominio creato da questa funzione per archiviare un'immagine grafica in un metafile avanzato. L'handle di identificazione di questo controller di dominio può essere passato a qualsiasi funzione GDI.  
  
 Dopo che un'applicazione memorizza un'immagine in un metafile avanzato, sia possibile visualizzare l'immagine su qualsiasi dispositivo di output chiamando il `CDC::PlayMetaFile` (funzione). Quando si visualizza l'immagine, Windows utilizza il rettangolo a cui fa riferimento il `lpBounds` parametro e i dati di risoluzione del dispositivo di riferimento per posizionare e ridimensionare l'immagine. Il contesto di dispositivo restituito da questa funzione contiene gli stessi attributi predefinita associati a qualsiasi nuovo controller di dominio.  
  
 Le applicazioni devono utilizzare Win32 **GetWinMetaFileBits** funzione per convertire un enhanced metafile in formato metafile di Windows precedenti.  
  
 Il nome del file per i metafile avanzati utilizzino il. Estensione EMF.  
  
## <a name="see-also"></a>Vedere anche  
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




