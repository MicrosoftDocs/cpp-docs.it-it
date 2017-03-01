---
title: Classe CSmartDockingInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSmartDockingInfo
dev_langs:
- C++
helpviewer_keywords:
- CSmartDockingInfo class
ms.assetid: cab04f38-4bc1-4378-9337-c56fc87fbd68
caps.latest.revision: 27
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
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 9ae735b202299d26b98ec763f65c3f8772d9b914
ms.lasthandoff: 02/24/2017

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
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmartDockingInfo::m_bUseThemeColorInShading](#m_busethemecolorinshading)|Specifica se utilizzare il colore del tema corrente quando il framework vengono visualizzati i marcatori di ancoraggio.|  
|[CSmartDockingInfo::m_clrBaseBackground](#m_clrbasebackground)|Specifica il colore di sfondo di base di marcatori di ancoraggio.|  
|[CSmartDockingInfo::m_clrToneDest](#m_clrtonedest)|Specifica il colore che sostituisce `m_clrToneSrc` nella bitmap di marcatore ancoraggio intelligente.|  
|[CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc)|Specifica il colore delle bitmap di marcatore ancoraggio intelligente.|  
|[CSmartDockingInfo::m_clrTransparent](#m_clrtransparent)|Specifica il colore delle bitmap di marcatore ancoraggio intelligente quando sono trasparenti.|  
|[CSmartDockingInfo::m_nCentralGroupOffset](#m_ncentralgroupoffset)|Specifica l'offset del gruppo centrale di marcatori di ancoraggio dai limiti del rettangolo del gruppo centrale.|  
|[CSmartDockingInfo::m_sizeTotal](#m_sizetotal)|Specifica le dimensioni totali di tutti i marcatori di ancoraggio intelligente in un gruppo.|  
|[CSmartDockingInfo::m_uiMarkerBmpResID](#m_uimarkerbmpresid)|Definisce gli ID risorsa delle bitmap a cui il framework utilizza per i marcatori di ancoraggio che non sono evidenziati.|  
|[CSmartDockingInfo::m_uiMarkerLightBmpResID](#m_uimarkerlightbmpresid)|Definisce gli ID risorsa delle bitmap a cui il framework utilizza per i marcatori di ancoraggio evidenziati.|  
  
## <a name="remarks"></a>Note  
 Gli handle di framework smart internamente i marcatori di ancoraggio. La figura seguente mostra i marcatori di ancoraggio standard:  
  
 ![Marcatori standard per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkers.png "nextsdmarkers")  
  
 In questa figura, l'immagine a sinistra mostra un indicatore ancoraggio intelligente gruppo centrale che non dispone di ancoraggio a una scheda abilitata. L'immagine centrale Mostra un indicatore di ancoraggio intelligente bordo destro. L'immagine a destra mostra un indicatore ancoraggio intelligente gruppo centrale che dispongono di ancoraggio a una scheda abilitata. Marcatore di ancoraggio intelligente del gruppo centrale dispone di una bitmap principale e cinque smart ancoraggio marcatore bitmap.  
  
 È possibile personalizzare i seguenti parametri di marcatori di ancoraggio:  
  
-   Colore. Ad esempio, è possibile sostituire il colore dei marcatori nella figura blu con qualsiasi colore definito dall'utente.  
  
-   Colore di trasparenza.  
  
-   Offset di un indicatore di ancoraggio intelligente nel gruppo centrale rispetto al bordo del rettangolo di delimitazione.  
  
-   Mappa di bit principale che rappresenta il gruppo centrale.  
  
-   Le mappe di bit che rappresenta i marcatori di ancoraggio intelligenti regolari ed evidenziati.  
  
 Nella figura seguente viene illustrato un esempio di marcatori di ancoraggio che sono state personalizzate:  
  
 ![Marcatori personalizzati per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkerscustom.png "nextsdmarkerscustom")  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDockingManager.h  
  
##  <a name="a-namecopytoa--csmartdockinginfocopyto"></a><a name="copyto"></a>CSmartDockingInfo::CopyTo  
 Copia i parametri di ancoraggio intelligenti correnti nell'oggetto specificato [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) oggetto.  
  
```  
void CopyTo(CSmartDockingInfo& params);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `params`  
 Un oggetto di tipo `CSmartDockingInfo` che viene popolato con i parametri correnti di ancoraggio intelligenti.  
  
##  <a name="a-namembusethemecolorinshadinga--csmartdockinginfombusethemecolorinshading"></a><a name="m_busethemecolorinshading"></a>CSmartDockingInfo::m_bUseThemeColorInShading  
 Specifica se utilizzare il colore del tema corrente quando il framework vengono visualizzati i marcatori di ancoraggio.  
  
```  
BOOL m_bUseThemeColorInShading;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, gli indicatori vengono disegnati utilizzando il colore del tema corrente; in caso contrario gli indicatori vengono disegnati con un colore blu chiaro.  
  
 Il valore predefinito è `FALSE`.  
  
##  <a name="a-namemclrbasebackgrounda--csmartdockinginfomclrbasebackground"></a><a name="m_clrbasebackground"></a>CSmartDockingInfo::m_clrBaseBackground  
 Specifica il colore di sfondo di base di marcatori di ancoraggio.  
  
```  
COLORREF m_clrBaseBackground;  
```  
  
##  <a name="a-namemclrtonedesta--csmartdockinginfomclrtonedest"></a><a name="m_clrtonedest"></a>CSmartDockingInfo::m_clrToneDest  
 Specifica il colore che sostituirà `m_clrToneSrc` nella bitmap di marcatore ancoraggio intelligente.  
  
```  
COLORREF m_clrToneDest;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore per modificare il colore del marcatore bitmap a livello di codice. Ad esempio, se si desidera modificare il colore dei marcatori standard forniti con il framework, impostare questo valore sul colore desiderato. Per impostazione predefinita, [CSmartDockingInfo::m_clrToneSrc](#m_clrtonesrc) è impostato su RGB (61, 123, 241) (un colore blu).  
  
 Per modificare il colore dei marcatori personalizzati, è necessario specificare sia `m_clrToneDest` e `m_clrToneSrc`.  
  
##  <a name="a-namemclrtonesrca--csmartdockinginfomclrtonesrc"></a><a name="m_clrtonesrc"></a>CSmartDockingInfo::m_clrToneSrc  
 Specifica il colore delle bitmap di marcatore ancoraggio intelligente.  
  
```  
COLORREF m_clrToneSrc;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore solo quando si desidera sostituire il colore di una bitmap personalizzata con un altro colore. Non è necessario impostare questo valore se si modifica il colore di standard (framework fornito) marcatore.  
  
 Utilizzare `(COLORREF)-1` per lasciare vuoto un membro del gruppo di ancoraggio intelligente.  
  
##  <a name="a-namemclrtransparenta--csmartdockinginfomclrtransparent"></a><a name="m_clrtransparent"></a>CSmartDockingInfo::m_clrTransparent  
 Specifica il colore delle bitmap di marcatore ancoraggio intelligente quando sono trasparenti.  
  
```  
COLORREF m_clrTransparent;  
```  
  
### <a name="remarks"></a>Note  
 È necessario impostare questo valore quando si visualizzano gli indicatori personalizzati e bitmap personalizzate nel gruppo di ancoraggio.  
  
##  <a name="a-namemncentralgroupoffseta--csmartdockinginfomncentralgroupoffset"></a><a name="m_ncentralgroupoffset"></a>CSmartDockingInfo::m_nCentralGroupOffset  
 Specifica l'offset tra il gruppo centrale di marcatori di ancoraggio e i limiti del rettangolo del gruppo centrale.  
  
```  
int m_nCentralGroupOffset;  
```  
  
### <a name="remarks"></a>Note  
 Specificare questo valore se si desidera modificare l'offset predefinito tra i marcatori personalizzati e i limiti del gruppo centrale di marcatori di ancoraggio. L'offset predefinito è 5 pixel.  
  
##  <a name="a-namemsizetotala--csmartdockinginfomsizetotal"></a><a name="m_sizetotal"></a>CSmartDockingInfo::m_sizeTotal  
 Specifica le dimensioni totali di un rettangolo di delimitazione che racchiude tutti i marcatori di ancoraggio intelligenti del gruppo centrale.  
  
```  
CSize m_sizeTotal;  
```  
  
### <a name="remarks"></a>Note  
 Impostare `m_sizeTotal` per le dimensioni del rettangolo di delimitazione dell'indicatore di gruppo centrale. È necessario specificare questo valore se si utilizza bitmap personalizzate per i marcatori.  
  
##  <a name="a-namemuimarkerbmpresida--csmartdockinginfomuimarkerbmpresid"></a><a name="m_uimarkerbmpresid"></a>CSmartDockingInfo::m_uiMarkerBmpResID  
 Definisce gli ID risorsa delle bitmap che vengono utilizzati per non evidenziato personalizzati marcatori di ancoraggio.  
  
```  
UINT m_uiMarkerBmpResID[AFX_SD_MARKERS_NUM];  
```  
  
### <a name="remarks"></a>Note  
 Riempire questa matrice con gli ID risorsa delle mappe di bit che rappresenta i marcatori di ancoraggio. `AFX_SD_MARKERS_NUM`attualmente è definita come 5. Compilare la matrice come segue:  
  
 `params.m_uiMarkerBmpResID[0] = IDB_MARKER_LEFT;`  
  
 `params.m_uiMarkerBmpResID[1] = IDB_MARKER_RIGHT;`  
  
 `params.m_uiMarkerBmpResID[2] = IDB_MARKER_TOP;`  
  
 `params.m_uiMarkerBmpResID[3] = IDB_MARKER_BOTTOM;`  
  
 `params.m_uiMarkerBmpResID[4] = IDB_MARKER_CENTER;`  
  
##  <a name="a-namemuimarkerlightbmpresida--csmartdockinginfomuimarkerlightbmpresid"></a><a name="m_uimarkerlightbmpresid"></a>CSmartDockingInfo::m_uiMarkerLightBmpResID  
 Definisce gli ID risorsa delle bitmap che vengono utilizzati per evidenziato personalizzati marcatori di ancoraggio.  
  
```  
UINT m_uiMarkerLightBmpResID[AFX_SD_MARKERS_NUM];  
```  
  
### <a name="remarks"></a>Note  
 Riempire questa matrice con gli ID risorsa delle mappe di bit che rappresenta i marcatori di ancoraggio evidenziati. `AFX_SD_MARKERS_NUM`attualmente è definita come 5. Compilare la matrice come segue:  
  
 `params.m_uiMarkerLightBmpResID[0] = IDB_MARKER_LEFT_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[1] = IDB_MARKER_RIGHT_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[2] = IDB_MARKER_TOP_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[3] = IDB_MARKER_BOTTOM_LIGHT;`  
  
 `params.m_uiMarkerLightBmpResID[4] = IDB_MARKER_CENTER_LIGHT;`  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)

