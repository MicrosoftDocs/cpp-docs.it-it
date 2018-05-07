---
title: Delegato e interfaccia mappa macro (MFC) | Documenti Microsoft
ms.custom: ''
ms.date: 03/30/2017
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delegate map macros [MFC]
- event map macros [MFC]
- interface map macros [MFC]
ms.assetid: 3840e642-ff7d-4bdc-998b-c7d8fc50890e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a1e6f2e8cc501f9a466e4970d27a2e6ecd9174ca
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
|||  
|-|-|  
|[BEGIN_DELEGATE_MAP](#begin_delegate_map)|Inizia una mappa di delegati.|
|[BEGIN_INTERFACE_MAP](#begin_interface_map)|Inizia la definizione della mappa interfaced.|
|[CommandHandler (delegato)](#commandhandler)|Registra i metodi di callback con un comando di origine.  |
|[END_DELEGATE_MAP](#end_delegate_map)|Termina una mappa di delegati.|
|[END_INTERFACE_MAP](#end_interface_map)|Termina la mappa dell'interfaccia nel file di implementazione. |
|[EVENT_DELEGATE_ENTRY](#event_delegate_entry)|Crea una voce nella mappa di delegati.|
|[INTERFACE_PART](#interface_part)|Utilizzato tra il `BEGIN_INTERFACE_MAP` macro e `END_INTERFACE_MAP` per ogni interfaccia verranno supportate dall'oggetto.|
|[MAKE_DELEGATE](#make_delegate)|Associa un gestore eventi per un controllo gestito.|


## <a name="begin_delegate_map"></a> BEGIN_DELEGATE_MAP
Inizia una mappa di delegati.  
   
### <a name="syntax"></a>Sintassi    
```  
BEGIN_DELEGATE_MAP(  CLASS );  
```
### <a name="parameters"></a>Parametri  
 `CLASS`  
 La classe in cui è ospitato il controllo gestito.  
   
### <a name="remarks"></a>Note  
 Questa macro contrassegna l'inizio di un elenco di voci di delegato, che costituiscono una mappa di delegati. Per un esempio dell'utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** msclr\event.h  
   
### <a name="see-also"></a>Vedere anche  
 [Procedura: Elaborare eventi di Windows Form da classi C++ native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)
 
##  <a name="begin_interface_map"></a>BEGIN_INTERFACE_MAP
Inizia la definizione della mappa interfaced utilizzato nel file di implementazione.  
   
### <a name="syntax"></a>Sintassi    
```
BEGIN_INTERFACE_MAP( theClass, baseClass )  
```
### <a name="parameters"></a>Parametri  
 `theClass`  
 Classe in cui deve essere definita la mappa dell'interfaccia  
  
 `baseClass`  
 Classe da cui deriva `theClass`.  
   
### <a name="remarks"></a>Note  
 Per ogni interfaccia implementata, è disponibile una o più `INTERFACE_PART` chiamate della macro. Per ogni aggregato usato dalla classe, è disponibile uno **INTERFACE_AGGREGATE** la chiamata di macro.  
  
 Per ulteriori informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
 
##  <a name="commandhandler"></a>CommandHandler (delegato)
Registra i metodi di callback con un comando di origine.  
   
### <a name="syntax"></a>Sintassi    
```  
delegate void CommandHandler(  UINT^ cmdID  );  
```
### <a name="parameters"></a>Parametri  
 `cmdID`  
 ID di comando.  
   
### <a name="remarks"></a>Note  
 Questo delegato registra i metodi di callback con un comando di origine. Quando si aggiunge un delegato all'oggetto origine del comando, il metodo di callback diventa un gestore per i comandi provenienti dall'origine specificata.  
  
 Per ulteriori informazioni, vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
   
### <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)
 
##  <a name="commanduihandler"></a>CommandUIHandler
Registra i metodi di callback con un messaggio di comando update dell'interfaccia utente.  
   
### <a name="syntax"></a>Sintassi    
```  
delegate void CommandUIHandler(  unsigned int cmdID, ICommandUI^ cmdUI);  
```
### <a name="parameters"></a>Parametri  
 `cmdID`  
 ID di comando.  
  
 `cmdUI`  
 ID comando del messaggio.  
   
### <a name="remarks"></a>Note  
 Questo delegato registra i metodi di callback con un messaggio di comando update dell'interfaccia utente. `CommandUIHandler` è simile a [CommandHandler](#commandhandler) ad eccezione del fatto che il delegato viene usato con comandi di aggiornamento oggetto dell'interfaccia utente. Comandi di aggiornamento dell'interfaccia utente devono essere mappati uno a uno con i metodi del gestore messaggi.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
   
### <a name="see-also"></a>Vedere anche  
 [Procedura: aggiungere comandi Routing alle finestre di controllo Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [CommandHandler](#commandhandler)

##  <a name="end_delegate_map"></a>END_DELEGATE_MAP
Termina una mappa di delegati.  
   
### <a name="syntax"></a>Sintassi    
```  
END_DELEGATE_MAP();  
```  
   
### <a name="remarks"></a>Note  
 Questa macro contrassegna la fine di un elenco di voci di delegato, che costituiscono una mappa di delegati. Per un esempio dell'utilizzo di questa macro, vedere [EVENT_DELEGATE_ENTRY](#event_delegate_entry).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** msclr\event.h  
   
### <a name="see-also"></a>Vedere anche  

 [Procedura: Elaborare eventi di Windows Form da classi C++ native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)

 
##  <a name="end_interface_map"></a>END_INTERFACE_MAP
Termina la mappa dell'interfaccia nel file di implementazione.  
   
### <a name="syntax"></a>Sintassi    
```
END_INTERFACE_MAP( )    
```  
   
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [BEGIN_INTERFACE_MAP](#begin_interface_map)
 

##  <a name="event_delegate_entry"></a>EVENT_DELEGATE_ENTRY
Crea una voce nella mappa di delegati.  
   
### <a name="syntax"></a>Sintassi    
```  
EVENT_DELEGATE_ENTRY(MEMBER, ARG0, ARG1);  
```
### <a name="parameters"></a>Parametri  
 `MEMBER`  
 Metodo del gestore eventi da aggiungere al controllo.  
  
 `ARG0`  
 Il primo argomento del metodo del gestore eventi gestito, ad esempio **oggetto ^**.  
  
 `ARG1`  
 Il secondo argomento del metodo del gestore eventi gestito, ad esempio **EventArgs ^**.  
   
### <a name="remarks"></a>Note  
 Ogni voce della mappa di delegati corrisponde a un delegato del gestore eventi gestito creato da [MAKE_DELEGATE](#make_delegate).  
   
### <a name="example"></a>Esempio  
 Nell'esempio di codice seguente viene mostrato come utilizzare `EVENT_DELEGATE_ENTRY` per creare una voce della mappa di delegati per il gestore dell'evento `OnClick`; vedere inoltre l'esempio di codice in `MAKE_DELEGATE`. Per ulteriori informazioni, vedere [come: Sink di eventi di Windows Form da classi C++ Native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).  
  
 ```cpp
BEGIN_DELEGATE_MAP(CMyView)
   EVENT_DELEGATE_ENTRY(OnClick, System::Object^, System::EventArgs^)
END_DELEGATE_MAP()

```  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** msclr\event.h  
   
### <a name="see-also"></a>Vedere anche  
 [MAKE_DELEGATE](#make_delegate)   
 [BEGIN_DELEGATE_MAP](#begin_delegate_map)   
 [END_DELEGATE_MAP](#end_delegate_map)
 

##  <a name="interface_part"></a>INTERFACE_PART
Utilizzato tra il `BEGIN_INTERFACE_MAP` macro e `END_INTERFACE_MAP` per ogni interfaccia verranno supportate dall'oggetto.  
   
### <a name="syntax"></a>Sintassi    
```
INTERFACE_PART( theClass, iid, localClass)  
```
### <a name="parameters"></a>Parametri  
 `theClass`  
 Nome della classe che contiene la mappa dell'interfaccia.    
 `iid`  
 IID che è necessario eseguire il mapping alla classe incorporata.    
 *localClass*  
 Il nome della classe locale.  
   
### <a name="remarks"></a>Note  
 Consente di eseguire il mapping di un IID a un membro della classe indicata da `theClass` e *localClass*.  
  
 Per ulteriori informazioni sulle mappe dell'interfaccia, vedere [Nota tecnica 38](../tn038-mfc-ole-iunknown-implementation.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
   
 
##  <a name="make_delegate"></a>MAKE_DELEGATE
Associa un gestore eventi per un controllo gestito.  
   
### <a name="syntax"></a>Sintassi    
```  
MAKE_DELEGATE( DELEGATE,  MEMBER) ;  
```
### <a name="parameters"></a>Parametri  
 `DELEGATE`  
 Delegare il tipo del gestore eventi gestito, ad esempio [EventHandler](assetId:///T:System.EventHandler?qualifyHint=False&autoUpgrade=True).  
  
 `MEMBER`  
 Il nome del metodo del gestore eventi da associare al controllo.  
   
### <a name="remarks"></a>Note  
 Questa macro crea un delegato del gestore eventi gestito di tipo `DELEGATE` e del nome `MEMBER`. Delegato del gestore eventi gestito consente a una classe nativa gestire gli eventi gestiti.  
   
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrato come chiamare `MAKE_DELEGATE` per collegare un `OnClick` gestore eventi per un controllo MFC `MyControl`. Per una descrizione dettagliata del funzionamento di questa macro in un'applicazione MFC, vedere [come: Sink di eventi di Windows Form da classi C++ Native](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).  
  
```cpp
// CMyView derives from CWinFormsView.
void CMyView::OnInitialUpdate()
{
   CWinFormsView::OnInitialUpdate();

   GetControl()->Click += MAKE_DELEGATE(System::EventHandler, OnClick);
}
```
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** msclr\event.h  
   
### <a name="see-also"></a>Vedere anche  
 [BEGIN_DELEGATE_MAP](#begin_delegate_map)   
 [END_DELEGATE_MAP](#end_delegate_map)   
 [EVENT_DELEGATE_ENTRY](#event_delegate_entry)
 



