---
title: Classe CSmartDockingInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSmartDockingInfo
- AFXDOCKINGMANAGER/CSmartDockingInfo
- AFXDOCKINGMANAGER/CSmartDockingInfo::CopyTo
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_bUseThemeColorInShading
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrBaseBackground
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrToneDest
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrToneSrc
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_clrTransparent
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_nCentralGroupOffset
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_sizeTotal
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_uiMarkerBmpResID
- AFXDOCKINGMANAGER/CSmartDockingInfo::m_uiMarkerLightBmpResID
dev_langs:
- C++
helpviewer_keywords:
- CSmartDockingInfo [MFC], CopyTo
- CSmartDockingInfo [MFC], m_bUseThemeColorInShading
- CSmartDockingInfo [MFC], m_clrBaseBackground
- CSmartDockingInfo [MFC], m_clrToneDest
- CSmartDockingInfo [MFC], m_clrToneSrc
- CSmartDockingInfo [MFC], m_clrTransparent
- CSmartDockingInfo [MFC], m_nCentralGroupOffset
- CSmartDockingInfo [MFC], m_sizeTotal
- CSmartDockingInfo [MFC], m_uiMarkerBmpResID
- CSmartDockingInfo [MFC], m_uiMarkerLightBmpResID
ms.assetid: cab04f38-4bc1-4378-9337-c56fc87fbd68
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b787828c59535f0e3008816df6f4ab209e1d882c
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079134"
---
# <a name="csmartdockinginfo-class"></a>Classe CSmartDockingInfo
Definisce l'aspetto dei marcatori standard di ancoraggio intelligente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSmartDockingInfo : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CSmartDockingInfo::CSmartDockingInfo`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmartDockingInfo::CopyTo](#copyto)|Copia i parametri info di ancoraggio intelligente corrente nell'oggetto specificato [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CSmartDockingInfo::m_bUseThemeColorInShading](#m_busethemecolorinshading)|Specifica se utilizzare il colore del tema corrente quando il framework Visualizza marcatori standard di ancoraggio intelligenti.|  
|[CSmartDockingInfo::m_clrBaseBackground](#m_clrbasebackground)|Specifica il colore di sfondo di base dei marcatori di ancoraggio intelligente.|  
|[CSmartDockingInfo::m_clrToneDest](#m_clrtonedest)|Specifica il colore che sostituisce `m_clrToneSrc` nella bitmap di marcatore ancoraggio intelligente.|  
|[CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc)|Specifica il colore delle bitmap di marcatore ancoraggio intelligente.|  
|[CSmartDockingInfo::m_clrTransparent](#m_clrtransparent)|Specifica il colore delle bitmap di marcatore ancoraggio intelligente quando sono transparent.|  
|[CSmartDockingInfo::m_nCentralGroupOffset](#m_ncentralgroupoffset)|Specifica l'offset del gruppo centrale dei marcatori di ancoraggio intelligente dai limiti del rettangolo del gruppo centrale.|  
|[CSmartDockingInfo::m_sizeTotal](#m_sizetotal)|Specifica le dimensioni totali di tutti i marcatori di ancoraggio intelligente in un gruppo.|  
|[CSmartDockingInfo::m_uiMarkerBmpResID](#m_uimarkerbmpresid)|Definisce l'ID risorsa delle bitmap a cui il framework utilizza per i marcatori di ancoraggio intelligenti che non sono evidenziati.|  
|[CSmartDockingInfo::m_uiMarkerLightBmpResID](#m_uimarkerlightbmpresid)|Definisce l'ID risorsa delle bitmap a cui il framework utilizza per i marcatori di ancoraggio intelligenti che vengono evidenziati.|  
  
## <a name="remarks"></a>Note  
 Gli handle di framework smart internamente marcatori standard di ancoraggio. La figura seguente mostra i marcatori di ancoraggio intelligenti standard:  
  
 ![Marcatori standard per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkers.png "nextsdmarkers")  
  
 In questa figura, l'immagine a sinistra mostra un marcatore ancoraggio intelligente gruppo centrale che non dispone di ancoraggio a una scheda abilitata. L'immagine centrale Mostra un indicatore di ancoraggio intelligente bordo destro. L'immagine a destra mostra un marcatore ancoraggio intelligente gruppo centrale che dispongono di ancoraggio a una scheda abilitata. Il marcatore di ancoraggio intelligente centrale gruppo dispone di una bitmap principale e cinque smart ancoraggio marcatore bitmap.  
  
 È possibile personalizzare i parametri seguenti dei marcatori di ancoraggio intelligente:  
  
-   Colore. Ad esempio, è possibile sostituire il colore blu dei marcatori nella figura con qualsiasi colore definito dall'utente.  
  
-   Colore di trasparenza.  
  
-   Offset di un marcatore di ancoraggio intelligente nel gruppo di centrale rispetto al bordo del rettangolo di delimitazione.  
  
-   Mappa di bit principale che rappresenta il gruppo centrale.  
  
-   Le mappe di bit che rappresenta i marcatori di ancoraggio intelligenti regolari ed evidenziati.  
  
 Nella figura seguente viene illustrato un esempio dei marcatori di ancoraggio intelligente che sono state personalizzate:  
  
 ![Marcatori personalizzati per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkerscustom.png "nextsdmarkerscustom")  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDockingManager.h  
  
##  <a name="copyto"></a>  CSmartDockingInfo::CopyTo  
 Copia i parametri di ancoraggio intelligenti correnti nell'oggetto specificato [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) oggetto.  
  
```  
void CopyTo(CSmartDockingInfo& params);
```  
  
### <a name="parameters"></a>Parametri  
 [out] *params*  
 Un oggetto di tipo `CSmartDockingInfo` che viene popolata con i parametri correnti di ancoraggio intelligenti.  
  
##  <a name="m_busethemecolorinshading"></a>  CSmartDockingInfo::m_bUseThemeColorInShading  
 Specifica se utilizzare il colore del tema corrente quando il framework Visualizza marcatori standard di ancoraggio intelligenti.  
  
```  
BOOL m_bUseThemeColorInShading;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, gli indicatori vengono disegnati utilizzando il colore del tema corrente; in caso contrario, gli indicatori vengono disegnati con un colore blu chiaro.  
  
 Il valore predefinito è `FALSE`.  
  
##  <a name="m_clrbasebackground"></a>  CSmartDockingInfo::m_clrBaseBackground  
 Specifica il colore di sfondo di base dei marcatori di ancoraggio intelligente.  
  
```  
COLORREF m_clrBaseBackground;  
```  
  
##  <a name="m_clrtonedest"></a>  CSmartDockingInfo::m_clrToneDest  
 Specifica il colore che andrà a sostituire `m_clrToneSrc` nella bitmap di marcatore ancoraggio intelligente.  
  
```  
COLORREF m_clrToneDest;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore per modificare il colore del marcatore bitmap a livello di codice. Ad esempio, se si desidera modificare il colore dei marcatori standard forniti con il framework, impostare questo valore per il colore desiderato. Per impostazione predefinita [CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc) è impostata su RGB (61, 123, 241) (un colore blu).  
  
 Per modificare il colore dei marcatori personalizzati, è necessario specificare entrambe `m_clrToneDest` e `m_clrToneSrc`.  
  
##  <a name="m_clrtonesrc"></a>  CSmartDockingInfo::m_clrToneSrc  
 Specifica il colore delle bitmap di marcatore ancoraggio intelligente.  
  
```  
COLORREF m_clrToneSrc;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore solo quando si desidera sostituire il colore di una bitmap personalizzata con un altro colore. Non è necessario impostare questo valore se si modifica il colore di uno standard (framework fornito) marcatore.  
  
 Utilizzare `(COLORREF)-1` lasciare vuoto un membro del gruppo di ancoraggio intelligente.  
  
##  <a name="m_clrtransparent"></a>  CSmartDockingInfo::m_clrTransparent  
 Specifica il colore delle bitmap di marcatore ancoraggio intelligente quando sono transparent.  
  
```  
COLORREF m_clrTransparent;  
```  
  
### <a name="remarks"></a>Note  
 È necessario impostare questo valore quando si visualizzano i marcatori personalizzati e bitmap personalizzate nel gruppo di ancoraggio.  
  
##  <a name="m_ncentralgroupoffset"></a>  CSmartDockingInfo::m_nCentralGroupOffset  
 Specifica la differenza tra il gruppo centrale dei marcatori di ancoraggio intelligente e i limiti del rettangolo del gruppo centrale.  
  
```  
int m_nCentralGroupOffset;  
```  
  
### <a name="remarks"></a>Note  
 Specificare questo valore se si desidera modificare l'offset predefinito tra i marcatori personalizzati e i limiti del gruppo centrale dei marcatori di ancoraggio intelligente. L'offset predefinito è 5 pixel.  
  
##  <a name="m_sizetotal"></a>  CSmartDockingInfo::m_sizeTotal  
 Specifica le dimensioni totali di un rettangolo di delimitazione che racchiude tutti i marcatori di ancoraggio intelligente del gruppo centrale.  
  
```  
CSize m_sizeTotal;  
```  
  
### <a name="remarks"></a>Note  
 Impostare `m_sizeTotal` alle dimensioni del rettangolo di delimitazione dell'indicatore di gruppo centrale. È necessario specificare questo valore se si utilizza bitmap personalizzate per i marcatori.  
  
##  <a name="m_uimarkerbmpresid"></a>  CSmartDockingInfo::m_uiMarkerBmpResID  
 Definisce l'ID risorsa delle bitmap che vengono usate per non evidenziato personalizzati smart marcatori standard di ancoraggio.  
  
```  
UINT m_uiMarkerBmpResID[AFX_SD_MARKERS_NUM];  
```  
  
### <a name="remarks"></a>Note  
 Compilare questa matrice con l'ID risorsa delle mappe di bit che rappresenta i marcatori di ancoraggio intelligente. `AFX_SD_MARKERS_NUM` attualmente è definita come 5. La matrice compilare come segue:  
  
 `params.m_uiMarkerBmpResID[0] = IDB_MARKER_LEFT;`  
  
 `params.m_uiMarkerBmpResID[1] = IDB_MARKER_RIGHT;`  
  
 `params.m_uiMarkerBmpResID[2] = IDB_MARKER_TOP;`  
  
 `params.m_uiMarkerBmpResID[3] = IDB_MARKER_BOTTOM;`  
  
 `params.m_uiMarkerBmpResID[4] = IDB_MARKER_CENTER;`  
  
##  <a name="m_uimarkerlightbmpresid"></a>  CSmartDockingInfo::m_uiMarkerLightBmpResID  
 Definisce l'ID risorsa delle bitmap che vengono usate per evidenziato marcatori standard di ancoraggio intelligenti personalizzati.  
  
```  
UINT m_uiMarkerLightBmpResID[AFX_SD_MARKERS_NUM];  
```  
  
### <a name="remarks"></a>Note  
 Compilare questa matrice con l'ID risorsa delle mappe di bit che rappresenta i marcatori di ancoraggio intelligenti evidenziati. `AFX_SD_MARKERS_NUM` attualmente è definita come 5. La matrice compilare come segue:  
  
 `params.m_uiMarkerLightBmpResID[0] = IDB_MARKER_LEFT_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[1] = IDB_MARKER_RIGHT_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[2] = IDB_MARKER_TOP_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[3] = IDB_MARKER_BOTTOM_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[4] = IDB_MARKER_CENTER_LIGHT;`  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CObject](../../mfc/reference/cobject-class.md)
