---
title: Struttura CRuntimeClass | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CRuntimeClass
dev_langs:
- C++
helpviewer_keywords:
- CRuntimeClass structure [MFC]
- dynamic class information [MFC]
- runtime [MFC], class information
- run-time class [MFC], CRuntimeClass structure
ms.assetid: de62b6ef-90d4-420f-8c70-f58b36976a2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 365247dc41ea75e67f63b2bb76b5bfe0c14a7ead
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33376291"
---
# <a name="cruntimeclass-structure"></a>Struttura CRuntimeClass
Ogni classe derivata da `CObject` è associato un `CRuntimeClass` struttura che è possibile utilizzare per ottenere informazioni su un oggetto o la relativa classe base in fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CRuntimeClass  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRuntimeClass::CreateObject](#createobject)|Crea un oggetto in fase di esecuzione.|  
|[CRuntimeClass:: FromName](#fromname)|Crea un oggetto in fase di esecuzione utilizzando il nome della classe familiarità.|  
|[CRuntimeClass::IsDerivedFrom](#isderivedfrom)|Determina se la classe è derivata dalla classe specificata.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRuntimeClass::m_lpszClassName](#m_lpszclassname)|Nome della classe.|  
|[CRuntimeClass::m_nObjectSize](#m_nobjectsize)|Dimensione dell'oggetto in byte.|  
|[CRuntimeClass::m_pBaseClass](#m_pbaseclass)|Un puntatore al `CRuntimeClass` struttura della classe di base.|  
|[CRuntimeClass::m_pfnCreateObject](#m_pfncreateobject)|Puntatore alla funzione che crea dinamicamente l'oggetto.|  
|[CRuntimeClass::m_pfnGetBaseClass](#m_pfngetbaseclass)|Restituisce il `CRuntimeClass` struttura (solo disponibile quando in modo dinamico collegato).|  
|[CRuntimeClass::m_wSchema](#m_wschema)|Il numero di schema della classe.|  
  
## <a name="remarks"></a>Note  
 `CRuntimeClass` è una struttura e di conseguenza non è una classe di base.  
  
 La possibilità di determinare la classe di un oggetto in fase di esecuzione è utile quando è necessario il controllo degli argomenti della funzione di tipo aggiuntivo o quando è necessario scrivere codice per scopi specifici in base alla classe dell'oggetto. Informazioni sulle classi in fase di esecuzione non è supportate direttamente dal linguaggio C++.  
  
 `CRuntimeClass` vengono fornite informazioni sull'oggetto correlato, C++, ad esempio un puntatore al `CRuntimeClass` della classe basa e il nome della classe ASCII della classe correlata. Questa struttura implementa anche diverse funzioni che consentono di creare in modo dinamico gli oggetti, che specifica il tipo di oggetto utilizzando un nome familiare e determinare se la classe correlata è derivata da una classe specifica.  
  
 Per ulteriori informazioni sull'utilizzo `CRuntimeClass`, vedere l'articolo [l'accesso a informazioni sulle classi di Run-Time](../../mfc/accessing-run-time-class-information.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CRuntimeClass`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="createobject"></a>  CRuntimeClass::CreateObject  
 Chiamare questa funzione per creare in modo dinamico la classe specificata in fase di esecuzione.  
  
```  
CObject* CreateObject();  
  
static CObject* PASCAL CreateObject(LPCSTR lpszClassName);  
  
static CObject* PASCAL CreateObject(LPCWSTR lpszClassName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 Il nome della classe da creare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto appena creato, o **NULL** se non viene trovato il nome della classe o la memoria è insufficiente per creare l'oggetto.  
  
### <a name="remarks"></a>Note  
 Le classi derivate da `CObject` può supportare la creazione dinamica, è la possibilità di creare un oggetto di una classe specificata in fase di esecuzione. Documento, Visualizzazione classi e frame, ad esempio, devono supportare la creazione dinamica. Per ulteriori informazioni sulla creazione dinamica e `CreateObject` membro, vedere [CObject (classe)](../../mfc/using-cobject.md) e [CObject (classe): specifica dei livelli di funzionalità](../../mfc/specifying-levels-of-functionality.md).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsDerivedFrom](#isderivedfrom).  
  
##  <a name="fromname"></a>  CRuntimeClass:: FromName  
 Chiamare questa funzione per recuperare il `CRuntimeClass` struttura associata con il nome.  
  
```  
static CRuntimeClass* PASCAL FromName(LPCSTR lpszClassName);  
  
static CRuntimeClass* PASCAL FromName(LPCWSTR lpszClassName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 Il nome di una classe derivata da `CObject`.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CRuntimeClass` oggetto, che corrisponde al nome come superato in `lpszClassName`. La funzione restituisce **NULL** se è stato trovato alcun nome di classe corrispondente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#17](../../mfc/codesnippet/cpp/cruntimeclass-structure_1.cpp)]  
  
##  <a name="isderivedfrom"></a>  CRuntimeClass::IsDerivedFrom  
 Chiamare questa funzione per determinare se il chiamante viene derivata dalla classe specificata nel *pBaseClass* parametro.  
  
```  
BOOL IsDerivedFrom(const CRuntimeClass* pBaseClass) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 *pBaseClass*  
 Il nome di una classe derivata da `CObject`.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la chiamata di classe `IsDerivedFrom` derivato dalla base classe il cui `CRuntimeClass` struttura è specificato come parametro; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 La relazione è determinata dal "Auto" dalla classe del membro fino alla catena delle classi derivate in alto. Questa funzione restituisce solo **FALSE** se viene trovata alcuna corrispondenza per la classe base.  
  
> [!NOTE]
>  Utilizzare il `CRuntimeClass` struttura, è necessario includere il `IMPLEMENT_DYNAMIC`, `IMPLEMENT_DYNCREATE`, o `IMPLEMENT_SERIAL` macro nell'implementazione della classe per cui si desidera recuperare le informazioni sull'oggetto in fase di esecuzione.  
  
 Per ulteriori informazioni sull'utilizzo `CRuntimeClass`, vedere l'articolo [CObject (classe): l'accesso a informazioni sulle classi di Run-Time](../../mfc/accessing-run-time-class-information.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#18](../../mfc/codesnippet/cpp/cruntimeclass-structure_2.cpp)]  
  
##  <a name="m_lpszclassname"></a>  CRuntimeClass::m_lpszClassName  
 Stringa con terminazione null contenente il nome della classe ASCII.  
  
### <a name="remarks"></a>Note  
 Questo nome può essere utilizzato per creare un'istanza della classe utilizzando il `FromName` funzione membro.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsDerivedFrom](#isderivedfrom).  
  
##  <a name="m_nobjectsize"></a>  CRuntimeClass::m_nObjectSize  
 Le dimensioni dell'oggetto, in byte.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto dispone di membri di dati che fanno riferimento a memoria allocata, le dimensioni di tale memoria non sono inclusa.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsDerivedFrom](#isderivedfrom).  
  
##  <a name="m_pbaseclass"></a>  CRuntimeClass::m_pBaseClass  
 Se l'applicazione collegata in modo statico a MFC, questo membro dati contiene un puntatore al `CRuntimeClass` struttura della classe di base.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione è collegato dinamicamente alla libreria MFC, vedere [m_pfnGetBaseClass](#m_pfngetbaseclass).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsDerivedFrom](#isderivedfrom).  
  
##  <a name="m_pfncreateobject"></a>  CRuntimeClass::m_pfnCreateObject  
 Un puntatore a funzione al costruttore predefinito che crea un oggetto della classe.  
  
### <a name="remarks"></a>Note  
 Puntatore ' this'è valido solo se la classe supporta la creazione dinamica; in caso contrario, la funzione restituisce **NULL**.  
  
##  <a name="m_pfngetbaseclass"></a>  CRuntimeClass::m_pfnGetBaseClass  
 Se l'applicazione utilizza la libreria MFC come DLL condivisa, tale membro dati punta a una funzione che restituisce il `CRuntimeClass` struttura della classe di base.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione si collega in modo statico alla libreria MFC, vedere [m_pBaseClass](#m_pbaseclass).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsDerivedFrom](#isderivedfrom).  
  
##  <a name="m_wschema"></a>  CRuntimeClass::m_wSchema  
 Il numero di schema (-1 per le classi non serializzabili).  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui numeri di schema, vedere il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) (macro).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [IsDerivedFrom](#isderivedfrom).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObject::GetRuntimeClass](../../mfc/reference/cobject-class.md#getruntimeclass)   
 [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof)   
 [RUNTIME_CLASS](run-time-object-model-services.md#runtime_class)   
 [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic)   
 [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate)   
 [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial)



