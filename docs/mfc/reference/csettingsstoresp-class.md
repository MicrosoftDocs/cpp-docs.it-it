---
title: Classe CSettingsStoreSP | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP::CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP::Create
- AFXSETTINGSSTORE/CSettingsStoreSP::SetRuntimeClass
dev_langs:
- C++
helpviewer_keywords:
- CSettingsStoreSP class
ms.assetid: bcd37f40-cfd4-4d17-a5ce-3bfabe995dcc
caps.latest.revision: 18
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
ms.openlocfilehash: 00131a3c03fdb2c1c1de247a8e1bdcfd9beaf852
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="csettingsstoresp-class"></a>Classe CSettingsStoreSP
Il `CSettingsStoreSP` classe è una classe helper che è possibile utilizzare per creare istanze di [CSettingsStore classe](../../mfc/reference/csettingsstore-class.md).  
  
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
|[CSettingsStoreSP::Create](#create)|Crea un'istanza di una classe che deriva da `CSettingsStore`.|  
|[CSettingsStoreSP::SetRuntimeClass](#setruntimeclass)|Imposta la classe di runtime. Il `Create` metodo utilizza la classe di runtime per determinare quale classe di oggetti da creare.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`m_dwUserData`|Dati personalizzati dell'utente che viene archiviati nel `CSettingsStoreSP` oggetto. È fornire questi dati nel costruttore del `CSettingsStoreSP` oggetto.|  
|`m_pRegistry`|Il `CSettingsStore`-derivato dell'oggetto che il `Create` Crea metodo.|  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare la `CSettingsStoreSP` classe a cui reindirizzare tutte le operazioni del Registro di sistema MFC in altre posizioni, ad esempio un file XML o un database. A tale scopo, attenersi ai passaggi riportati di seguito:  
  
1.  Creare una classe (ad esempio `CMyStore`) e derivare da `CSettingsStore`.  
  
2.  Utilizzare [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate) e [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate) macro con personalizzato `CSettingsStore` classe per consentire la creazione dinamica.  
  
3.  Eseguire l'override di funzioni virtuali e implementare il `Read` e `Write` funzioni nella classe personalizzata. Implementare altre funzionalità per leggere e scrivere dati nella posizione desiderata.  
  
4.  Nell'applicazione, chiamare `CSettingsStoreSP::SetRuntimeClass` e passare un puntatore per il [struttura CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) ottenuto dalla classe.  
  
 Ogni volta che il framework avrebbe dovuto accedere in genere il Registro di sistema, verrà ora dinamicamente un'istanza della classe personalizzata e utilizzarlo per leggere o scrivere dati.  
  
 `CSettingsStoreSP::SetRuntimeClass`utilizza una variabile statica globale. Pertanto, è disponibile un solo archivio personalizzato alla volta.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxsettingsstore.h  
  
##  <a name="create"></a>CSettingsStoreSP::Create  
 Crea una nuova istanza di un oggetto derivato dal [CSettingsStore classe](../../mfc/reference/csettingsstore-class.md).  
  
```  
CSettingsStore& CSettingsStoreSP Create(
    BOOL bAdmin,  
    BOOL bReadOnly);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAdmin`  
 Un parametro booleano che determina se un `CSettingsStore` oggetto viene creato in modalità amministratore.  
  
 [in] `bReadOnly`  
 Un parametro booleano che determina se un `CSettingsStore` oggetto viene creato per l'accesso di sola lettura.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto appena creato `CSettingsStore` oggetto.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il metodo [CSettingsStoreSP::SetRuntimeClass](#setruntimeclass) per determinare il tipo di oggetto `CSettingsStoreSP::Create` verrà creato. Per impostazione predefinita, questo metodo crea un `CSettingsStore` oggetto.  
  
 Se si crea un `CSettingsStore` dell'oggetto in modalità amministratore, il percorso predefinito per tutti gli accessi del Registro di sistema è HKEY_LOCAL_MACHINE. In caso contrario, il percorso predefinito per tutti gli accessi del Registro di sistema è HKEY_CURRENT_USER.  
  
 Se `bAdmin` è `TRUE`, l'applicazione deve disporre dei diritti di amministrazione. In caso contrario, avrà esito negativo durante il tentativo di accesso al registro.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo la `CSettingsStoreSP` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&33;](../../mfc/reference/codesnippet/cpp/csettingsstoresp-class_1.cpp)]  
  
##  <a name="csettingsstoresp"></a>CSettingsStoreSP::CSettingsStoreSP  
 Costruisce un [CSettingsStoreSP classe](../../mfc/reference/csettingsstoresp-class.md) oggetto.  
  
```  
CSettingsStoreSP::CSettingsStoreSP(DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwUserData`  
 Dati definiti dall'utente che il `CSettingsStoreSP` archivi dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CSettingsStoreSP` oggetto archivia i dati da `dwUserData` nella variabile membro protetto `m_dwUserData`.  
  
##  <a name="setruntimeclass"></a>CSettingsStoreSP::SetRuntimeClass  
 Imposta la classe di runtime. Il metodo [CSettingsStoreSP::Create](#create) utilizza la classe di runtime per determinare il tipo di oggetto da creare.  
  
```  
static BOOL __stdcall CSettingsStoreSP::SetRuntimeClass(CRuntimeClass* pRTI);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRTI`  
 Un puntatore alle informazioni sulla classe di runtime per una classe derivata dal [CSettingsStore classe](../../mfc/reference/csettingsstore-class.md).  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FALSE` se la classe identificato da `pRTI` non è derivato da `CSettingsStore`.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il [CSettingsStoreSP classe](../../mfc/reference/csettingsstoresp-class.md) derivare classi da `CSettingsStore`. Utilizzare il metodo `SetRuntimeClass` se si desidera creare oggetti di una classe personalizzata derivata da `CSettingsStore`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md)

