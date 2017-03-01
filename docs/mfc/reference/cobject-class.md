---
title: CObject (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CObject
dev_langs:
- C++
helpviewer_keywords:
- base classes, MFC objects
- objects [C++], base class for MFC
- object classes
- CObject class
ms.assetid: 95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a
caps.latest.revision: 22
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
ms.openlocfilehash: d411b9da8618eaac57045a1db05251517422976a
ms.lasthandoff: 02/24/2017

---
# <a name="cobject-class"></a>CObject (classe)
Classe base principale per la libreria Microsoft Foundation Class.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class AFX_NOVTABLE CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObject::CObject](#cobject)|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObject:: AssertValid](#assertvalid)|Convalida integrità di questo oggetto.|  
|[CObject::Dump](#dump)|Genera un dump di diagnostica di questo oggetto.|  
|[CObject::GetRuntimeClass](#getruntimeclass)|Restituisce il `CRuntimeClass` struttura corrispondente alla classe dell'oggetto.|  
|[CObject:: IsKindOf](#iskindof)|Verifica la relazione dell'oggetto in una determinata classe.|  
|[CObject::IsSerializable](#isserializable)|Verifica se questo oggetto può essere serializzato.|  
|[CObject:: Serialize](#serialize)|Carica o archiviato un oggetto da e verso un archivio.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Eliminazione di CObject::operator](#operator_delete)|Speciali **eliminare** operatore.|  
|[CObject::operator nuovo](#operator_new)|Speciali **nuova** operatore.|  
  
## <a name="remarks"></a>Note  
 Serve come radice non solo per le classi di libreria, ad esempio `CFile` e `CObList`, ma anche per le classi che si scrive. `CObject`fornisce servizi di base, tra cui  
  
-   Supporto della serializzazione  
  
-   Informazioni sulle classi in fase di esecuzione  
  
-   Output di diagnostica di oggetto  
  
-   Compatibilità con le classi di raccolte  
  
 Si noti che `CObject` non supporta l'ereditarietà multipla. Le classi derivate di possono avere solo una `CObject` classe di base e che `CObject` deve essere più a sinistra nella gerarchia. È tuttavia consentito, hanno strutture e non- `CObject`-classi derivate nello destra rami di ereditarietà multipla.  
  
 Si potrà trarre vantaggio da `CObject` derivazione se si utilizza alcune delle macro facoltative l'implementazione della classe e dichiarazioni.  
  
 Le macro di primo livello, [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic) e [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), consentire l'accesso in fase di esecuzione per il nome della classe e la posizione nella gerarchia. Ciò consente a sua volta, dump di diagnostica significativi.  
  
 Le macro di secondo livello, [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial), includere tutte le funzionalità delle macro di primo livello e consentono un oggetto "serializzazione" in e da un "archivio".  
  
 Per informazioni sulla derivazione di classi Microsoft Foundation e classi C++ in generale e l'utilizzo `CObject`, vedere [utilizzando CObject](../../mfc/using-cobject.md) e [serializzazione](../../mfc/serialization-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="a-nameassertvalida--cobjectassertvalid"></a><a name="assertvalid"></a>CObject:: AssertValid  
 Convalida integrità di questo oggetto.  
  
```  
virtual void AssertValid() const;  
```  
  
### <a name="remarks"></a>Note  
 `AssertValid`esegue un controllo di validità su questo oggetto controllando lo stato interno. Nella versione di Debug della libreria, `AssertValid` può asserire e terminare il programma con un messaggio che elenca il numero di riga e il nome in cui l'asserzione non riuscita.  
  
 Quando si scrive una classe personalizzata, è necessario eseguire l'override di `AssertValid` funzione per fornire servizi di diagnostica per se stessi e altri utenti della classe. Sottoposto a override `AssertValid` in genere chiama il `AssertValid` funzione della relativa classe base prima di verificare i membri di dati univoci per la classe derivata.  
  
 Poiché `AssertValid` è un **const** funzione, non è possibile modificare lo stato dell'oggetto durante il test. Una classe derivata `AssertValid` funzioni non devono generare eccezioni, ma piuttosto deve dichiarare se rilevano i dati dell'oggetto non valido.  
  
 La definizione di "validità" dipende dalla classe dell'oggetto. Come regola, la funzione deve eseguire un "controllo superficiale". Ovvero, se un oggetto contiene puntatori ad altri oggetti, è necessario verificare per vedere se i puntatori non sono null, ma non di eseguire test per gli oggetti a cui fa riferimento i puntatori di validità.  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco di `CAge` classe utilizzata in tutti `CObject` esempi.  
  
 [!code-cpp[NVC_MFCCObjectSample&#7;](../../mfc/codesnippet/cpp/cobject-class_1.cpp)]  
  
 Per un altro esempio, vedere [AfxDoForAllObjects](diagnostic-services.md#afxdoforallobjects).  
  
##  <a name="a-namecobjecta--cobjectcobject"></a><a name="cobject"></a>CObject::CObject  
 Queste funzioni sono standard `CObject` costruttori.  
  
```  
CObject();  
CObject(const CObject& objectSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *objectSrc*  
 Un riferimento a un altro`CObject`  
  
### <a name="remarks"></a>Note  
 La versione predefinita viene chiamata automaticamente dal costruttore della classe derivata.  
  
 Se una classe serializzabile (incorpora il `IMPLEMENT_SERIAL` macro), è necessario disporre di un costruttore predefinito (un costruttore senza argomenti) nella dichiarazione di classe. Se non è necessario un costruttore predefinito, dichiarare un privato o protetto costruttore "vuoto". Per ulteriori informazioni, vedere [CObject utilizzando](../../mfc/using-cobject.md).  
  
 Costruttore di copia classe standard di C++ predefinito esegue una copia membro per membro. La presenza di privato `CObject` costruttore di copia garantisce un messaggio di errore del compilatore se il costruttore di copia della classe necessaria ma non è disponibile. Se la classe richiede questa funzionalità, è pertanto necessario fornire un costruttore di copia.  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` utilizzato nella classe di `CObject` esempi.  
  
 [!code-cpp[NVC_MFCCObjectSample n.&8;](../../mfc/codesnippet/cpp/cobject-class_2.cpp)]  
  
##  <a name="a-namedumpa--cobjectdump"></a><a name="dump"></a>CObject::Dump  
 Esegue il dump dell'oggetto per un [CDumpContext](../../mfc/reference/cdumpcontext-class.md) oggetto.  
  
```  
virtual void Dump(CDumpContext& dc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dc`  
 Il contesto di dump di diagnostica per il dump, in genere `afxDump`.  
  
### <a name="remarks"></a>Note  
 Quando si scrive una classe personalizzata, è necessario eseguire l'override di `Dump` funzione per fornire servizi di diagnostica per se stessi e altri utenti della classe. Sottoposto a override `Dump` chiama in genere il `Dump` funzione della relativa classe base prima di stampare i membri di dati univoci per la classe derivata. `CObject::Dump`Visualizza il nome della classe se la classe utilizza il `IMPLEMENT_DYNAMIC` o `IMPLEMENT_SERIAL` (macro).  
  
> [!NOTE]
>  Il `Dump` funzione non deve visualizzare un carattere di nuova riga alla fine dell'output.  
  
 `Dump`chiamate ha senso solo nella versione di Debug della libreria Microsoft Foundation Class. È necessario racchiudere chiamate, dichiarazioni di funzione e le implementazioni delle funzioni con **debug #ifdef** /  `#endif` le istruzioni per la compilazione condizionale.  
  
 Poiché `Dump` è un **const** funzione, non è possibile modificare lo stato dell'oggetto durante il dump.  
  
 Il [inserimento CDumpContext (<)> </)> ](../../mfc/reference/cdumpcontext-class.md#operator_lt_lt) chiamate `Dump` quando un `CObject` puntatore viene inserito.  
  
 `Dump`consente solo "aciclico" dump di oggetti. Ad esempio, è possibile eseguire il dump di un elenco di oggetti, ma se uno degli oggetti è l'elenco stesso, verrà infine overflow dello stack.  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco di `CAge` classe utilizzata in tutti `CObject` esempi.  
  
 [!code-cpp[9 NVC_MFCCObjectSample](../../mfc/codesnippet/cpp/cobject-class_3.cpp)]  
  
##  <a name="a-namegetruntimeclassa--cobjectgetruntimeclass"></a><a name="getruntimeclass"></a>CObject::GetRuntimeClass  
 Restituisce il `CRuntimeClass` struttura corrispondente alla classe dell'oggetto.  
  
```  
virtual CRuntimeClass* GetRuntimeClass() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura corrispondente alla classe dell'oggetto; mai **NULL**.  
  
### <a name="remarks"></a>Note  
 Esiste un solo `CRuntimeClass` struttura per ogni `CObject`-classe derivata. I membri della struttura sono i seguenti:  
  
- **LPCSTR m_lpszClassName** una stringa con terminazione null contenente il nome della classe ASCII.  
  
- **int m_nObjectSize** le dimensioni dell'oggetto, in byte. Se l'oggetto contiene membri dati di quel punto alla memoria allocata, la dimensione della memoria non è inclusa.  
  
- **UINT m_wSchema** il numero di schema (– 1 per le classi non serializzabile). Vedere il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro per una descrizione del numero di schema.  
  
- **CObject\* (PASCAL\* m_pfnCreateObject) ()** un puntatore a funzione al costruttore predefinito che crea un oggetto della classe (valido solo se la classe supporta la creazione dinamica; in caso contrario, restituisce **NULL**).  
  
- **CRuntimeClass\* (PASCAL\* m_pfn_GetBaseClass) ()** se l'applicazione viene collegata in modo dinamico per la versione AFXDLL di MFC, un puntatore a una funzione che restituisce il `CRuntimeClass` struttura della classe di base.  
  
- **CRuntimeClass\* m_pBaseClass** se l'applicazione è collegato in modo statico a MFC, un puntatore al `CRuntimeClass` struttura della classe di base.  
  
 Questa funzione richiede l'uso di [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate), o [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro nell'implementazione della classe. In caso contrario si otterranno risultati non corretti.  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco di `CAge` classe utilizzata in tutti `CObject` esempi.  
  
 [!code-cpp[NVC_MFCCObjectSample&#10;](../../mfc/codesnippet/cpp/cobject-class_4.cpp)]  
  
##  <a name="a-nameiskindofa--cobjectiskindof"></a><a name="iskindof"></a>CObject:: IsKindOf  
 Verifica la relazione dell'oggetto in una determinata classe.  
  
```  
BOOL IsKindOf(const CRuntimeClass* pClass) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pClass`  
 Un puntatore a un [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) struttura associata con il `CObject`-classe derivata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto corrisponde alla classe. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione verifica `pClass` che (1) è un oggetto della classe specificata o (2) è un oggetto di una classe derivata dalla classe specificata. Questa funzione funziona solo per le classi dichiarate con la [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic), [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate), o [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) (macro).  
  
 Non utilizzare questa funzione ampiamente perché vanifica la funzionalità di polimorfismo di C++. Utilizzare le funzioni virtuali.  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco di `CAge` classe utilizzata in tutti `CObject` esempi.  
  
 [!code-cpp[NVC_MFCCObjectSample&#11;](../../mfc/codesnippet/cpp/cobject-class_5.cpp)]  
  
##  <a name="a-nameisserializablea--cobjectisserializable"></a><a name="isserializable"></a>CObject::IsSerializable  
 Verifica se questo oggetto è idoneo per la serializzazione.  
  
```  
BOOL IsSerializable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se questo oggetto può essere serializzato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per una classe come serializzabile, deve contenere la dichiarazione di [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) (macro) e l'implementazione deve contenere il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) (macro).  
  
> [!NOTE]
>  Non eseguire l'override di questa funzione.  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco di `CAge` classe utilizzata in tutti `CObject` esempi.  
  
 [!code-cpp[NVC_MFCCObjectSample&#12;](../../mfc/codesnippet/cpp/cobject-class_6.cpp)]  
  
##  <a name="a-nameoperatordeletea--cobjectoperator-delete"></a><a name="operator_delete"></a>Eliminazione di CObject::operator  
 Per la versione della libreria, operatore **eliminare** libera la memoria allocata dall'operatore **nuova**.  
  
```  
void PASCAL operator delete(void* p);

 
void PASCAL operator delete(
    void* p,
    void* pPlace);

 
void PASCAL operator delete(
    void* p,  
    LPCSTR lpszFileName,  
    int nLine);
```  
  
### <a name="remarks"></a>Note  
 Nella versione di Debug, operatore **eliminare** fa parte di uno schema di allocazione di monitoraggio consente deve rilevare perdite di memoria.  
  
 Se si utilizza la riga di codice  
  
 [!code-cpp[NVC_MFCCObjectSample&#14;](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]  
  
 prima delle implementazioni in una. File di CPP, quindi la terza versione di **eliminare** verrà utilizzato, archiviare il nome di file e numero di riga nel blocco allocato per i report in un secondo momento. Non è necessario preoccuparsi di fornire i parametri aggiuntivi; una macro si occupa di che per l'utente.  
  
 Anche se non si utilizza `DEBUG_NEW` in modalità Debug, è comunque ottenere rilevamento di perdite di memoria, ma senza la segnalazione del numero di riga file di origine descritti in precedenza.  
  
 Se si esegue l'override degli operatori **nuova** e **eliminare**, sarai coperto questa funzionalità di diagnostica.  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` utilizzato nella classe di `CObject` esempi.  
  
 [!code-cpp[NVC_MFCCObjectSample&#15;](../../mfc/codesnippet/cpp/cobject-class_8.cpp)]  
  
##  <a name="a-nameoperatornewa--cobjectoperator-new"></a><a name="operator_new"></a>CObject::operator nuovo  
 Per la versione della libreria, operatore **nuova** esegue un'allocazione della memoria ottimale in modo simile a `malloc`.  
  
```  
void* PASCAL operator new(size_t nSize);  
void* PASCAL operator new(size_t, void* p);

 
void* PASCAL operator new(
    size_t nSize,  
    LPCSTR lpszFileName,  
    int nLine);
```  
  
### <a name="remarks"></a>Note  
 Nella versione di Debug, operatore **nuova** fa parte di uno schema di allocazione di monitoraggio consente deve rilevare perdite di memoria.  
  
 Se si utilizza la riga di codice  
  
 [!code-cpp[NVC_MFCCObjectSample&#14;](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]  
  
 prima delle implementazioni in una. File di CPP, quindi la seconda versione di **nuova** verrà utilizzato, archiviare il nome di file e numero di riga nel blocco allocato per i report in un secondo momento. Non è necessario preoccuparsi di fornire i parametri aggiuntivi; una macro si occupa di che per l'utente.  
  
 Anche se non si utilizza `DEBUG_NEW` in modalità Debug, è comunque ottenere rilevamento di perdite di memoria, ma senza la segnalazione del numero di riga file di origine descritti in precedenza.  
  
> [!NOTE]
>  Se si esegue l'override di questo operatore, è necessario inoltre eseguire l'override **eliminare**. Non utilizzare la libreria standard **_new_handler** (funzione).  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` utilizzato nella classe di `CObject` esempi.  
  
 [!code-cpp[NVC_MFCCObjectSample&#16;](../../mfc/codesnippet/cpp/cobject-class_9.h)]  
  
##  <a name="a-nameserializea--cobjectserialize"></a><a name="serialize"></a>CObject:: Serialize  
 Legge o scrive l'oggetto corrente da o in un archivio.  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 `ar`  
 Oggetto `CArchive` oggetto da serializzare a o da.  
  
### <a name="remarks"></a>Note  
 È necessario eseguire l'override `Serialize` per ogni classe che si desidera serializzare. Sottoposto a override `Serialize` necessario chiamare prima il `Serialize` funzione della relativa classe base.  
  
 È inoltre necessario utilizzare il [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) (macro) nella dichiarazione della classe ed è necessario utilizzare il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro nell'implementazione.  
  
 Utilizzare [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) o [CArchive::IsStoring](../../mfc/reference/carchive-class.md#isstoring) per determinare se l'archivio è il caricamento o archiviazione.  
  
 `Serialize`viene chiamato da [CArchive::ReadObject](../../mfc/reference/carchive-class.md#readobject) e [CArchive::WriteObject](../../mfc/reference/carchive-class.md#writeobject). Queste funzioni sono associate i `CArchive` operatore di inserimento ( ** < \< **) e l'operatore di estrazione ( ** >> **).  
  
 Per esempi di serializzazione, vedere l'articolo [serializzazione: serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).  
  
### <a name="example"></a>Esempio  
 Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco di `CAge` classe utilizzata in tutti `CObject` esempi.  
  
 [!code-cpp[13 NVC_MFCCObjectSample](../../mfc/codesnippet/cpp/cobject-class_10.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




