---
title: Classe CSettingsStoreSP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP::CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP::Create
- AFXSETTINGSSTORE/CSettingsStoreSP::SetRuntimeClass
dev_langs: C++
helpviewer_keywords:
- CSettingsStoreSP [MFC], CSettingsStoreSP
- CSettingsStoreSP [MFC], Create
- CSettingsStoreSP [MFC], SetRuntimeClass
ms.assetid: bcd37f40-cfd4-4d17-a5ce-3bfabe995dcc
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7cf9659b6c367146a565834bd65fdfc9f28a9812
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="csettingsstoresp-class"></a>Classe CSettingsStoreSP
Il `CSettingsStoreSP` classe è una classe helper che è possibile utilizzare per creare istanze del [classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSettingsStoreSP  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSettingsStoreSP::CSettingsStoreSP](#csettingsstoresp)|Costruisce un oggetto `CSettingsStoreSP`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSettingsStoreSP::Create](#create)|Crea un'istanza di una classe derivata da `CSettingsStore`.|  
|[CSettingsStoreSP::SetRuntimeClass](#setruntimeclass)|Imposta la classe di runtime. Il `Create` metodo utilizza la classe di runtime per determinare quale classe di oggetti da creare.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|`m_dwUserData`|Dati personalizzati dell'utente che viene archiviati nel `CSettingsStoreSP` oggetto. È fornire questi dati nel costruttore del `CSettingsStoreSP` oggetto.|  
|`m_pRegistry`|Il `CSettingsStore`-derivato dell'oggetto che il `Create` Crea metodo.|  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare la `CSettingsStoreSP` classe per reindirizzare tutte le operazioni del Registro di sistema MFC in altre posizioni, ad esempio un file XML o un database. A tale scopo, attenersi ai passaggi riportati di seguito:  
  
1.  Creare una classe (ad esempio `CMyStore`) e derivare da `CSettingsStore`.  
  
2.  Utilizzare [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate) e [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate) macro con personalizzato `CSettingsStore` classe per consentire la creazione dinamica.  
  
3.  Eseguire l'override di funzioni virtuali e implementare il `Read` e `Write` funzioni nella classe personalizzata. Implementare altre funzionalità per leggere e scrivere dati nel percorso desiderato.  
  
4.  Nell'applicazione, chiamare `CSettingsStoreSP::SetRuntimeClass` e passare un puntatore al [struttura CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) ottenuto dalla classe.  
  
 Ogni volta che il framework acceda in genere il Registro di sistema, verrà dinamicamente creare un'istanza della classe personalizzata e utilizzarlo per leggere o scrivere dati.  
  
 `CSettingsStoreSP::SetRuntimeClass`utilizza una variabile statica globale. Pertanto, è disponibile un solo archivio personalizzato alla volta.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxsettingsstore.h  
  
##  <a name="create"></a>CSettingsStoreSP::Create  
 Crea una nuova istanza di un oggetto derivato dal [classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).  
  
```  
CSettingsStore& CSettingsStoreSP Create(
    BOOL bAdmin,  
    BOOL bReadOnly);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAdmin`  
 Un parametro booleano che determina se un `CSettingsStore` oggetto viene creato in modalità amministratore.  
  
 [in] `bReadOnly`  
 Un parametro booleano che determina se un `CSettingsStore` viene creato l'oggetto per l'accesso in sola lettura.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto appena creato `CSettingsStore` oggetto.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il metodo [CSettingsStoreSP::SetRuntimeClass](#setruntimeclass) per determinare il tipo di oggetto `CSettingsStoreSP::Create` verrà creato. Per impostazione predefinita, questo metodo crea un `CSettingsStore` oggetto.  
  
 Se si crea un `CSettingsStore` dell'oggetto in modalità amministratore, il percorso predefinito per tutti gli accessi del Registro di sistema è HKEY_LOCAL_MACHINE. In caso contrario, il percorso predefinito per tutti gli accessi del Registro di sistema è HKEY_CURRENT_USER.  
  
 Se `bAdmin` è `TRUE`, l'applicazione deve disporre dei diritti di amministrazione. In caso contrario, avrà esito negativo quando si tenta di accedere al registro.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo la `CSettingsStoreSP` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp#33](../../mfc/reference/codesnippet/cpp/csettingsstoresp-class_1.cpp)]  
  
##  <a name="csettingsstoresp"></a>CSettingsStoreSP::CSettingsStoreSP  
 Costruisce un [CSettingsStoreSP classe](../../mfc/reference/csettingsstoresp-class.md) oggetto.  
  
```  
CSettingsStoreSP::CSettingsStoreSP(DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwUserData`  
 Dati definiti dall'utente che il `CSettingsStoreSP` archivi dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CSettingsStoreSP` oggetto memorizza i dati da `dwUserData` nella variabile membro protetto `m_dwUserData`.  
  
##  <a name="setruntimeclass"></a>CSettingsStoreSP::SetRuntimeClass  
 Imposta la classe di runtime. Il metodo [CSettingsStoreSP::Create](#create) utilizza la classe di runtime per determinare il tipo di oggetto da creare.  
  
```  
static BOOL __stdcall CSettingsStoreSP::SetRuntimeClass(CRuntimeClass* pRTI);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRTI`  
 Un puntatore per le informazioni sulla classe di runtime per una classe derivata dal [classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FALSE` se la classe identificata dal `pRTI` non è derivato da `CSettingsStore`.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il [CSettingsStoreSP classe](../../mfc/reference/csettingsstoresp-class.md) per derivare le classi da `CSettingsStore`. Utilizzare il metodo `SetRuntimeClass` se si desidera creare oggetti di una classe personalizzata derivata da `CSettingsStore`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md)
