---
title: Classe CMFCAcceleratorKey | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCAcceleratorKey
dev_langs:
- C++
helpviewer_keywords:
- CMFCAcceleratorKey class
ms.assetid: d140fbf7-23db-45ea-a63e-414a5ec7b3d5
caps.latest.revision: 36
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 7baa210acfabe8f17e2ab747fd98fe463c2907a2
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcacceleratorkey-class"></a>Classe CMFCAcceleratorKey
Una classe helper che implementa virtuale mapping delle chiavi e la formattazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCAcceleratorKey : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKey::CMFCAcceleratorKey](#cmfcacceleratorkey)|Costruisce un oggetto `CMFCAcceleratorKey`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKey::Format](#format)|Converte la struttura di accelerazione per la rappresentazione visiva.|  
|[CMFCAcceleratorKey::SetAccelerator](#setaccelerator)|Imposta il tasto di scelta rapida per il `CMFCAcceleratorKey` oggetto.|  
  
## <a name="remarks"></a>Note  
 Tasti di scelta rapida sono anche noti come tasti di scelta rapida. Se si desidera visualizzare i tasti di scelta rapida che viene inserito un utente, il [CMFCAcceleratorKeyAssignCtrl classe](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) mapping dei tasti di scelta rapida, ad esempio Alt + Maiusc + S, in un formato di testo personalizzato, ad esempio "Alt + Maiusc + S". Ogni `CMFCAcceleratorKey` oggetto esegue il mapping di un tasto di scelta rapida singola in un formato di testo.  
  
 Per ulteriori informazioni su come utilizzare i tasti di scelta rapida e tasti di scelta rapida, vedere [CKeyboardManager classe](../../mfc/reference/ckeyboardmanager-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCAcceleratorKey` oggetto e come utilizzare il relativo `Format` metodo.  
  
 [!code-cpp[&#30; NVC_MFC_RibbonApp](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkey-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMFCAcceleratorKey`   
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxacceleratorkey.h  
  
##  <a name="a-namecmfcacceleratorkeya--cmfcacceleratorkeycmfcacceleratorkey"></a><a name="cmfcacceleratorkey"></a>CMFCAcceleratorKey::CMFCAcceleratorKey  
 Costruisce un [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto.  
  
```  
CMFCAcceleratorKey();  
CMFCAcceleratorKey(LPACCEL lpAccel);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpAccel`  
 Un puntatore a un tasto di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Se un tasto di scelta rapida non fornire quando si crea un `CMFCAccleratorKey`, utilizzare il [CMFCAcceleratorKey::SetAccelerator](#setaccelerator) metodo per associare un tasto di scelta rapida con il `CMFCAcceleratorKey` oggetto.  
  
##  <a name="a-nameformata--cmfcacceleratorkeyformat"></a><a name="format"></a>CMFCAcceleratorKey::Format  
 Converte la struttura di accelerazione al valore di stringa associato.  
  
```  
void Format(CString& str) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `str`  
 Un riferimento a un `CString` oggetto in cui il metodo scrive il tasto di scelta rapida tradotti.  
  
### <a name="remarks"></a>Note  
 Questo metodo recupera il formato della stringa del tasto di scelta rapida associato. È possibile impostare il formato della stringa di un [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto utilizzando il costruttore o il metodo [CMFCAcceleratorKey::SetAccelerator](#setaccelerator).  
  
##  <a name="a-namesetacceleratora--cmfcacceleratorkeysetaccelerator"></a><a name="setaccelerator"></a>CMFCAcceleratorKey::SetAccelerator  
 Imposta il tasto di scelta rapida per il [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto.  
  
```  
void SetAccelerator(LPACCEL lpAccel);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpAccel`  
 Un puntatore a un tasto di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare il tasto di scelta rapida per un `CMFCAcceleratorKey` se è stato fornito un tasto di scelta rapida non durante la creazione di `CMFCAcceleratorKey`.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)

